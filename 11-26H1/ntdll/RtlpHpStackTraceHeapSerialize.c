/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x18014FC20
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnlockHeap @ 0x180015DE0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180015FD0 (RtlLockHeap.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18006F9E8 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpWalkHeapInternal @ 0x180072620 (RtlpWalkHeapInternal.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x18014F790 (RtlpHpStackTraceAllocFindMapping.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(__int64 a1, __int64 a2)
{
  int Context; // eax
  __int64 v5; // rsi
  int v6; // edi
  __int64 v7; // r8
  _QWORD *Mapping; // rax
  __int64 v9; // r8
  __int64 (__fastcall *v10)(__int128 *, __int64, __int64); // rax
  __int128 v12; // [rsp+20h] [rbp-49h] BYREF
  __int64 v13; // [rsp+30h] [rbp-39h]
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  __int128 v15; // [rsp+40h] [rbp-29h] BYREF
  __int128 v16; // [rsp+50h] [rbp-19h]
  __int128 v17; // [rsp+60h] [rbp-9h]
  _QWORD v18[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]

  v14 = 0LL;
  HIDWORD(v18[0]) = 0;
  v12 = 0LL;
  v13 = 0LL;
  Context = RtlpHpStackTraceHeapGetContext(a1, 0, &v14);
  v5 = v14;
  v18[0] = 524290LL;
  if ( Context < 0 )
    v5 = 0LL;
  v18[1] = a1;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v20 = *(_QWORD *)(a1 + 128) << 12;
    v20 += *(_QWORD *)(a1 + 88) << 12;
    v19 = *(_QWORD *)(a1 + 136) << 12;
    v19 += *(_QWORD *)(a1 + 96) << 12;
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    v20 = *(_QWORD *)(a1 + 568);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v18, 32LL, *(_QWORD *)(a2 + 24));
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    RtlLockHeap(a1);
    while ( 1 )
    {
      LOBYTE(v7) = 1;
      if ( (int)RtlpWalkHeapInternal(a1, (__int64)&v15, v7) < 0 )
        break;
      if ( (BYTE2(v16) & 1) != 0 )
      {
        v13 = *((_QWORD *)&v15 + 1);
        v12 = (unsigned __int64)v15;
        if ( v5 )
        {
          RtlAcquireSRWLockShared((volatile signed __int64 *)(v5 + 8));
          ++*(_DWORD *)v5;
          Mapping = RtlpHpStackTraceAllocFindMapping(v5, v15);
          if ( Mapping )
            *((_QWORD *)&v12 + 1) = Mapping[2];
          --*(_DWORD *)v5;
          RtlReleaseSRWLockShared((volatile signed __int64 *)(v5 + 8));
        }
        v6 = (*(__int64 (__fastcall **)(__int128 *, __int64, _QWORD))(a2 + 16))(&v12, 24LL, *(_QWORD *)(a2 + 24));
        if ( v6 < 0 )
          goto LABEL_18;
      }
    }
    v9 = *(_QWORD *)(a2 + 24);
    v10 = *(__int64 (__fastcall **)(__int128 *, __int64, __int64))(a2 + 16);
    v12 = 0x1234CDEFuLL;
    v13 = 0xFFFFFFFFLL;
    v6 = v10(&v12, 24LL, v9);
    if ( v6 >= 0 )
      v6 = 0;
LABEL_18:
    RtlUnlockHeap(a1);
  }
  return (unsigned int)v6;
}
