/*
 * XREFs of HalCreateCommonBufferFromMdlDmaThin @ 0x14058D740
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaDereferenceDomainObject @ 0x140346528 (HalpDmaDereferenceDomainObject.c)
 *     HalpAllocateCommonBufferEntry @ 0x14034AF30 (HalpAllocateCommonBufferEntry.c)
 *     HalpDmaReferenceDomainObject @ 0x14034B1CC (HalpDmaReferenceDomainObject.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpCreateCommonBufferFromMdlVerifyParams @ 0x14058B17C (HalpCreateCommonBufferFromMdlVerifyParams.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalCreateCommonBufferFromMdlDmaThin(
        __int64 a1,
        struct _MDL *a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5)
{
  __int64 v5; // r14
  char v6; // r12
  unsigned __int64 *v7; // r13
  int CommonBufferFromMdlVerifyParams; // eax
  int CommonBufferEntry; // ebx
  __int64 v10; // rax
  PMDL v11; // r15
  __int64 v12; // rbx
  int v13; // r8d
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r11
  _QWORD *v16; // r11
  unsigned int i; // edx
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  char *MappedSystemVa; // rax
  unsigned __int64 *v25; // [rsp+40h] [rbp-61h]
  __int64 v26; // [rsp+48h] [rbp-59h]
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-49h] BYREF
  __int128 v29; // [rsp+60h] [rbp-41h]
  unsigned __int64 v30; // [rsp+70h] [rbp-31h]
  __int64 v31; // [rsp+78h] [rbp-29h]
  __int64 *v32; // [rsp+80h] [rbp-21h]
  __int128 v33; // [rsp+88h] [rbp-19h] BYREF
  __int128 v34; // [rsp+98h] [rbp-9h]
  __int64 v35; // [rsp+A8h] [rbp+7h]

  v5 = *(_QWORD *)(a1 + 512);
  MemoryDescriptorList = a2;
  v32 = a5;
  v35 = 0LL;
  LODWORD(v30) = 0;
  v26 = 0LL;
  v25 = 0LL;
  v33 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v34 = 0LL;
  v29 = 0LL;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 ***)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v33);
  CommonBufferEntry = CommonBufferFromMdlVerifyParams;
  if ( CommonBufferFromMdlVerifyParams >= 0 )
  {
    CommonBufferEntry = HalpDmaReferenceDomainObject(v5);
    if ( CommonBufferEntry < 0 )
      return (unsigned int)CommonBufferEntry;
    v10 = *(_QWORD *)(v5 + 56);
    if ( v10 )
      *(_BYTE *)(v10 + 524) = 1;
    if ( BYTE4(v35) )
    {
      v25 = (unsigned __int64 *)&v33;
      v7 = (unsigned __int64 *)&v33 + 1;
    }
    v11 = MemoryDescriptorList;
    v12 = 0LL;
    v13 = v35;
    v14 = v34;
    v15 = *((_QWORD *)&v34 + 1) + MemoryDescriptorList->ByteOffset;
    v31 = *((_QWORD *)&v34 + 1);
    v16 = &MemoryDescriptorList[1].Next + (v15 >> 12);
    if ( (_DWORD)v35 == 2 )
    {
      for ( i = 1; i < (unsigned __int64)v34 >> 12; ++i )
      {
        if ( v16[i] - 1LL != v16[i - 1] )
          goto LABEL_25;
      }
      v18 = *v16 << 12;
      v26 = v18;
      v19 = *(_DWORD *)(a1 + 448);
      if ( v19 < 0x40 )
        v20 = (1LL << v19) - 1;
      else
        v20 = -1LL;
      if ( !v7 )
      {
        if ( (unsigned __int64)v34 + v18 - 1 <= v20 )
          goto LABEL_34;
LABEL_25:
        CommonBufferEntry = -1073741811;
        goto LABEL_26;
      }
      v21 = *v7;
      if ( *v7 >= v20 )
        v21 = v20;
      *v7 = v21;
      if ( v18 < *v25 || v14 + v18 - 1 > v21 )
      {
        v13 = v35;
        CommonBufferEntry = -1073741811;
        goto LABEL_26;
      }
    }
    else
    {
      CommonBufferEntry = -1073741637;
LABEL_26:
      if ( *(_DWORD *)(v5 + 48) != 2 )
      {
LABEL_36:
        if ( v6 )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40), v26);
        goto LABEL_38;
      }
      if ( v13 )
      {
        if ( v13 == 1 )
          v22 = 2LL;
        else
          v22 = 3LL;
      }
      else
      {
        v22 = 1LL;
      }
      LODWORD(v29) = 2;
      *((_QWORD *)&v29 + 1) = v16;
      v30 = v14 >> 12;
      CommonBufferEntry = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40), v22);
      if ( CommonBufferEntry < 0 )
      {
LABEL_38:
        HalpDmaDereferenceDomainObject((__int64 *)v5);
        return (unsigned int)CommonBufferEntry;
      }
      v6 = 1;
      v12 = (__int64)v11;
    }
LABEL_34:
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)v11->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000000u);
    CommonBufferEntry = HalpAllocateCommonBufferEntry(v12, (_RTL_BALANCED_NODE *)&MappedSystemVa[v31], v26, v5, 0, 0LL);
    if ( CommonBufferEntry >= 0 )
    {
      *v32 = v26;
      return (unsigned int)CommonBufferEntry;
    }
    goto LABEL_36;
  }
  if ( (unsigned int)(CommonBufferFromMdlVerifyParams + 1073741585) <= 1 )
    return (unsigned int)-1073741811;
  return (unsigned int)CommonBufferEntry;
}
