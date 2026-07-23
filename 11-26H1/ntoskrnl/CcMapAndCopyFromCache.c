/*
 * XREFs of CcMapAndCopyFromCache @ 0x140A718D0
 * Callers:
 *     CcCopyReadEx @ 0x14021E590 (CcCopyReadEx.c)
 *     CcPerformReadAhead @ 0x140388BC8 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1403A05A8 (CcCompleteAsyncRead.c)
 * Callees:
 *     CcDecrementVacbActiveCount @ 0x1402BF9B0 (CcDecrementVacbActiveCount.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     CcFetchDataForRead @ 0x1402C8550 (CcFetchDataForRead.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     CcCopyBytesToUserBuffer @ 0x1404653C0 (CcCopyBytesToUserBuffer.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1404AD134 (CcUpdateSharedCacheMapFlag.c)
 */

char __fastcall CcMapAndCopyFromCache(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        void *a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        LARGE_INTEGER *a9)
{
  __int64 v9; // rbx
  int v10; // esi
  char *v12; // r12
  NTSTATUS v13; // ebp
  __int64 v14; // r14
  int v15; // r13d
  __int64 VirtualAddress; // rax
  __int64 v17; // r15
  char *LockState; // r10
  __int64 Thread_low; // rsi
  struct _KLOCK_ENTRIES v21; // [rsp+50h] [rbp-68h] BYREF
  int v22; // [rsp+C0h] [rbp+8h]
  __int64 v23; // [rsp+C8h] [rbp+10h] BYREF
  int v24; // [rsp+D0h] [rbp+18h] BYREF
  char v25; // [rsp+D8h] [rbp+20h]

  v25 = a4;
  v23 = a2;
  v22 = a1;
  v9 = a2;
  v10 = a1;
  v12 = (char *)a5;
  v13 = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  while ( 1 )
  {
    *(_QWORD *)&v21.AvailableEntryBitmap = 0LL;
    if ( !a3 )
      break;
    LODWORD(v21.Thread) = 0;
    v15 = 0;
    v24 = 0;
    VirtualAddress = CcGetVirtualAddress(v14, v9, (__int64 *)&v21.AvailableEntryBitmap, &v21, 0, v12 == 0LL);
    v17 = *(_QWORD *)&v21.AvailableEntryBitmap;
    LockState = (char *)VirtualAddress;
    v21.Entries[0].LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)VirtualAddress;
    if ( (*(_DWORD *)(v14 + 152) & 8) != 0 )
    {
      if ( !v25 )
      {
LABEL_18:
        v13 = -1073741608;
LABEL_19:
        if ( v17 )
          CcDecrementVacbActiveCount(v17);
        break;
      }
    }
    else
    {
      if ( !CcFetchDataForRead(v10, &v23, a3, v25, &v24, *(_QWORD **)&v21.AvailableEntryBitmap, a7, a8, a9) )
        goto LABEL_18;
      v15 = v24;
      LockState = (char *)v21.Entries[0].LockState.LockState;
      *a6 |= v24;
    }
    Thread_low = LODWORD(v21.Thread);
    v9 += LODWORD(v21.Thread);
    if ( v12 )
    {
      *(_QWORD *)(*(_QWORD *)(v14 + 512) + 344LL) += LODWORD(v21.Thread);
      if ( v15 )
        *(_QWORD *)(*(_QWORD *)(v14 + 512) + 352LL) += Thread_low;
    }
    else if ( v15 )
    {
      *(_QWORD *)(*(_QWORD *)(v14 + 512) + 360LL) += LODWORD(v21.Thread);
    }
    if ( (unsigned int)Thread_low > a3 )
      LODWORD(Thread_low) = a3;
    if ( v12 )
    {
      v13 = CcCopyBytesToUserBuffer(v12, LockState, (unsigned int)Thread_low, (*(_DWORD *)(v14 + 152) & 0x1000) != 0);
      if ( v13 < 0 )
        goto LABEL_19;
      v12 += (unsigned int)Thread_low;
    }
    a3 -= Thread_low;
    CcDecrementVacbActiveCount(v17);
    v10 = v22;
    v23 = v9;
  }
  if ( v13 == -1073741608 )
    return 0;
  if ( v13 < 0 )
  {
    CcUpdateSharedCacheMapFlag(v14, 8, 1);
    RtlRaiseStatus(v13);
  }
  if ( (*(_DWORD *)(v14 + 152) & 8) != 0 )
    CcUpdateSharedCacheMapFlag(v14, 8, 0);
  return 1;
}
