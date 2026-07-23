/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x18014FAD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlUnlockHeap @ 0x180061510 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180061700 (RtlLockHeap.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18008FE38 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpWalkHeapInternal @ 0x180092C10 (RtlpWalkHeapInternal.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x18014F640 (RtlpHpStackTraceAllocFindMapping.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(_QWORD *HeapHandle, __int64 a2)
{
  NTSTATUS Context; // eax
  _RTL_SRWLOCK *v5; // rsi
  int v6; // edi
  _QWORD *Mapping; // rax
  __int64 v8; // r8
  __int64 (__fastcall *v9)(__int128 *, __int64, __int64); // rax
  __int128 v11; // [rsp+20h] [rbp-49h] BYREF
  __int64 v12; // [rsp+30h] [rbp-39h]
  _RTL_SRWLOCK *v13; // [rsp+38h] [rbp-31h] BYREF
  __int128 v14; // [rsp+40h] [rbp-29h] BYREF
  __int128 v15; // [rsp+50h] [rbp-19h]
  __int128 v16; // [rsp+60h] [rbp-9h]
  _QWORD v17[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]

  v13 = 0LL;
  HIDWORD(v17[0]) = 0;
  v11 = 0LL;
  v12 = 0LL;
  Context = RtlpHpStackTraceHeapGetContext((__int64)HeapHandle, 0, (PVOID *)&v13);
  v5 = v13;
  v17[0] = 524290LL;
  if ( Context < 0 )
    v5 = 0LL;
  v17[1] = HeapHandle;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v19 = HeapHandle[16] << 12;
    v19 += HeapHandle[11] << 12;
    v18 = HeapHandle[17] << 12;
    v18 += HeapHandle[12] << 12;
  }
  else
  {
    v18 = HeapHandle[72] - HeapHandle[83];
    v19 = HeapHandle[71];
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v17, 32LL, *(_QWORD *)(a2 + 24));
  if ( v6 >= 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    RtlLockHeap(HeapHandle);
    while ( (int)RtlpWalkHeapInternal((__int64)HeapHandle, (__int64)&v14, 1u) >= 0 )
    {
      if ( (BYTE2(v15) & 1) != 0 )
      {
        v12 = *((_QWORD *)&v14 + 1);
        v11 = (unsigned __int64)v14;
        if ( v5 )
        {
          RtlAcquireSRWLockShared(v5 + 1);
          ++*(_DWORD *)&v5->0;
          Mapping = RtlpHpStackTraceAllocFindMapping((__int64)v5, v14);
          if ( Mapping )
            *((_QWORD *)&v11 + 1) = Mapping[2];
          --*(_DWORD *)&v5->0;
          RtlReleaseSRWLockShared(v5 + 1);
        }
        v6 = (*(__int64 (__fastcall **)(__int128 *, __int64, _QWORD))(a2 + 16))(&v11, 24LL, *(_QWORD *)(a2 + 24));
        if ( v6 < 0 )
          goto LABEL_18;
      }
    }
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(__int64 (__fastcall **)(__int128 *, __int64, __int64))(a2 + 16);
    v11 = 0x1234CDEFuLL;
    v12 = 0xFFFFFFFFLL;
    v6 = v9(&v11, 24LL, v8);
    if ( v6 >= 0 )
      v6 = 0;
LABEL_18:
    RtlUnlockHeap(HeapHandle);
  }
  return (unsigned int)v6;
}
