/*
 * XREFs of ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x140144614
 * Callers:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1400C7D5C (ndisAllocatePerProcessorPageDescriptor.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14000AC20 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14008E040 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ndisFreeMappingAddress@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400C7CE0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ndisFreeMappingAddress@@YAX0@ZU-$integra.c)
 *     ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1400C7E18 (-ndisFreeMappingAddress@@YAXPEAX@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140138C60 (--_V@YAXPEAX@Z.c)
 *     ndisGetNodeIdForProcessor @ 0x1401448C8 (ndisGetNodeIdForProcessor.c)
 */

__int64 ndisAllocateNumaStripedPages(void)
{
  ULONG v0; // edi
  SIZE_T v1; // r14
  __int64 v2; // rsi
  SIZE_T v3; // rax
  _OWORD *Pool2; // rax
  PMDL v5; // rbx
  __int64 v6; // r15
  size_t v7; // r14
  PMDL *v8; // rax
  PMDL *v9; // r12
  char v10; // r13
  __int64 i; // r14
  int NodeIdForProcessor; // eax
  __int64 NodePagesForMdl; // rax
  PMDL *v14; // rdi
  __int64 MappingAddress; // [rsp+80h] [rbp+40h] BYREF
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp+48h] BYREF
  __int64 v18; // [rsp+90h] [rbp+50h]

  v0 = KeQueryMaximumProcessorCountEx(0xFFFFu) + 1;
  v1 = v0 << 12;
  MappingAddress = (__int64)MmAllocateMappingAddress(v1, 0x6C53444Eu);
  v2 = MappingAddress;
  if ( !MappingAddress )
    goto LABEL_26;
  v3 = MmSizeOfMdl(0LL, (unsigned int)v1);
  Pool2 = (_OWORD *)ExAllocatePool2(64LL, v3, 1833780302LL);
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = 0LL;
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      (__int64)&MemoryDescriptorList,
      (__int64)Pool2);
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(&MemoryDescriptorList);
  }
  v5 = MemoryDescriptorList;
  if ( !MemoryDescriptorList )
    goto LABEL_26;
  MemoryDescriptorList->ByteCount = v1;
  v6 = v0;
  v5->Next = 0LL;
  v5->MdlFlags = 2;
  v5->ByteOffset = v2 & 0xFFF;
  v5->StartVa = (PVOID)(v2 & 0xFFFFFFFFFFFFF000uLL);
  v5->Size = 8 * (((v1 + (v2 & 0xFFF) + 4095) >> 12) + 6);
  v7 = 8LL * v0;
  if ( !is_mul_ok(v0, 8uLL) )
    v7 = -1LL;
  v8 = (PMDL *)ExAllocatePool2(256LL, v7, 1833780302LL);
  v9 = v8;
  if ( !v8 )
  {
    ExFreePoolWithTag(v5, 0);
LABEL_26:
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>((void **)&MappingAddress);
    return 0LL;
  }
  memset(v8, 0, v7);
  v10 = 0;
  for ( i = 0LL; (unsigned int)i < v0; i = (unsigned int)(i + 1) )
  {
    NodeIdForProcessor = ndisGetNodeIdForProcessor((_DWORD)i != 0 ? i - 1 : 0);
    MappingAddress = 4096LL;
    MemoryDescriptorList = (PMDL)-1LL;
    v18 = 0LL;
    NodePagesForMdl = MmAllocateNodePagesForMdlEx(0LL, -1LL, 4096LL, 4096LL, 1, NodeIdForProcessor, 5);
    v9[i] = (PMDL)NodePagesForMdl;
    if ( !NodePagesForMdl )
      goto LABEL_14;
    *((_QWORD *)&v5[1].Next + i) = *(_QWORD *)(NodePagesForMdl + 48);
  }
  if ( MmMapLockedPagesWithReservedMapping((PVOID)v2, 0x6C53444Eu, v5, MmCached) )
    goto LABEL_15;
LABEL_14:
  v10 = 1;
  ndisFreeMappingAddress((void *)v2);
  v2 = 0LL;
LABEL_15:
  if ( v0 )
  {
    v14 = v9;
    if ( v10 )
    {
      do
      {
        if ( *v14 )
        {
          MmFreePagesFromMdl(*v14);
          ExFreePoolWithTag(*v14, 0);
        }
        ++v14;
        --v6;
      }
      while ( v6 );
    }
    else
    {
      do
      {
        if ( *v14 )
          ExFreePoolWithTag(*v14, 0);
        ++v14;
        --v6;
      }
      while ( v6 );
    }
  }
  MappingAddress = 0LL;
  operator delete[](v9);
  ExFreePoolWithTag(v5, 0);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>((void **)&MappingAddress);
  return v2;
}
