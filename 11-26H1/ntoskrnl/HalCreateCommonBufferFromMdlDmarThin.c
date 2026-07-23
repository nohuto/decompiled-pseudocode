/*
 * XREFs of HalCreateCommonBufferFromMdlDmarThin @ 0x14058DC30
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

__int64 __fastcall HalCreateCommonBufferFromMdlDmarThin(
        __int64 a1,
        struct _MDL *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5)
{
  __int64 *v5; // rsi
  int CommonBufferFromMdlVerifyParams; // eax
  int CommonBufferEntry; // ebx
  __int64 v8; // rax
  PMDL v9; // rdi
  __int64 v10; // r15
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  char *MappedSystemVa; // rax
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-39h] BYREF
  __int128 v16; // [rsp+50h] [rbp-31h]
  unsigned __int64 v17; // [rsp+60h] [rbp-21h]
  _QWORD *v18; // [rsp+68h] [rbp-19h]
  __int128 v19; // [rsp+70h] [rbp-11h] BYREF
  __int128 v20; // [rsp+80h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+Fh]

  v5 = *(__int64 **)(a1 + 512);
  MemoryDescriptorList = a2;
  v18 = a5;
  v21 = 0LL;
  LODWORD(v17) = 0;
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 ***)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v19);
  CommonBufferEntry = CommonBufferFromMdlVerifyParams;
  if ( CommonBufferFromMdlVerifyParams >= 0 )
  {
    CommonBufferEntry = HalpDmaReferenceDomainObject((__int64)v5);
    if ( CommonBufferEntry >= 0 )
    {
      v8 = v5[7];
      if ( v8 )
        *(_BYTE *)(v8 + 524) = 1;
      v9 = MemoryDescriptorList;
      v10 = *((_QWORD *)&v20 + 1);
      v11 = *((_QWORD *)&v20 + 1) + MemoryDescriptorList->ByteOffset;
      if ( (_DWORD)v21 )
      {
        if ( (_DWORD)v21 == 1 )
          v12 = 2LL;
        else
          v12 = 3LL;
      }
      else
      {
        v12 = 1LL;
      }
      LODWORD(v16) = 2;
      *((_QWORD *)&v16 + 1) = (char *)MemoryDescriptorList + 8 * (v11 >> 12) + 48;
      v17 = (unsigned __int64)v20 >> 12;
      CommonBufferEntry = guard_dispatch_icall_no_overrides(v5[5], v12);
      if ( CommonBufferEntry >= 0 )
      {
        if ( (v9->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)v9->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
        CommonBufferEntry = HalpAllocateCommonBufferEntry(
                              (__int64)v9,
                              (_RTL_BALANCED_NODE *)&MappedSystemVa[v10],
                              0LL,
                              (__int64)v5,
                              0,
                              0LL);
        if ( CommonBufferEntry >= 0 )
        {
          *v18 = 0LL;
          return (unsigned int)CommonBufferEntry;
        }
        guard_dispatch_icall_no_overrides(v5[5], 0LL);
      }
      HalpDmaDereferenceDomainObject(v5);
    }
  }
  else if ( (unsigned int)(CommonBufferFromMdlVerifyParams + 1073741585) <= 1 )
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)CommonBufferEntry;
}
