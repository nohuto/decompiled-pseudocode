/*
 * XREFs of CommonBuffer_AcquireCommonBufferFromPhysicalAddress @ 0x14003FEF4
 * Callers:
 *     XilCommonBuffer_AcquireBufferFromPhysicalAddress @ 0x1400406F8 (XilCommonBuffer_AcquireBufferFromPhysicalAddress.c)
 *     TR_SetClientAddressesForOffload @ 0x14004BECC (TR_SetClientAddressesForOffload.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_iid @ 0x1400403E4 (WPP_RECORDER_SF_iid.c)
 *     WPP_RECORDER_SF_iiid @ 0x1400404E0 (WPP_RECORDER_SF_iiid.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

_QWORD *__fastcall CommonBuffer_AcquireCommonBufferFromPhysicalAddress(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  char v5; // bl
  PVOID v9; // r14
  _QWORD *v10; // rdi
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  struct _MDL *v14; // rcx
  int v15; // r15d
  _UNKNOWN **v16; // rdx
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  _QWORD *Pool2; // rax
  PMDL MemoryDescriptorList; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-20h] BYREF

  v5 = a2;
  v25[1] = a3;
  v24 = 0LL;
  MemoryDescriptorList = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v25[0] = a2;
  v11 = MmAllocateMdlForIoSpace(v25, (unsigned __int64)a3 >> 12, &MemoryDescriptorList);
  v14 = MemoryDescriptorList;
  v15 = v11;
  if ( v11 < 0 || !MemoryDescriptorList )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_17:
      if ( v15 < 0 && v14 )
      {
        if ( v9 )
        {
          MmUnmapLockedPages(v9, v14);
          v14 = MemoryDescriptorList;
        }
        IoFreeMdl(v14);
      }
      return v10;
    }
    WPP_RECORDER_SF_iid(*(_QWORD *)(*(_QWORD *)a1 + 72LL), (unsigned int)&WPP_RECORDER_INITIALIZED, v12, v13);
LABEL_16:
    v14 = MemoryDescriptorList;
    goto LABEL_17;
  }
  v9 = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010u);
  if ( !v9 )
  {
    v16 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 18;
      LOBYTE(v16) = 2;
LABEL_11:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)a1 + 72LL),
        (_DWORD)v16,
        8,
        v17,
        (__int64)&WPP_6a5376b16cbf3dbdeb6b8133660a6549_Traceguids,
        a3);
      return v10;
    }
    return v10;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 24LL);
  v15 = (*(__int64 (__fastcall **)(__int64, PMDL, _QWORD, _QWORD))(*(_QWORD *)(v18 + 8) + 312LL))(
          v18,
          MemoryDescriptorList,
          0LL,
          0LL);
  if ( v15 < 0 || !v24 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_iiid(
        *(_QWORD *)(*(_QWORD *)a1 + 72LL),
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v19,
        v20,
        (unsigned int)&v24,
        v15,
        v5,
        v24,
        a3);
    goto LABEL_16;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 104LL, 1229146200LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x68uLL);
    v10[2] = v9;
    v10[3] = v24;
    *((_DWORD *)v10 + 16) = a5;
    *((_DWORD *)v10 + 10) = a3;
    *((_DWORD *)v10 + 11) = a3;
    v10[9] = a4;
    v10[11] = MemoryDescriptorList;
    *((_DWORD *)v10 + 20) = 4;
    v16 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 20;
      LOBYTE(v16) = 4;
      goto LABEL_11;
    }
  }
  return v10;
}
