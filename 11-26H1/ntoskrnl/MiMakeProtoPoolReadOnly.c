/*
 * XREFs of MiMakeProtoPoolReadOnly @ 0x1404BF168
 * Callers:
 *     MiTradeForLeafPage @ 0x140293044 (MiTradeForLeafPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 */

__int64 __fastcall MiMakeProtoPoolReadOnly(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = MiLockProtoPoolPage(*(_QWORD *)(a1 + 176), 0LL);
  v5 = v2;
  if ( v2 )
  {
    if ( (unsigned __int16)*(_DWORD *)(v2 + 32) > 2u )
    {
      _InterlockedIncrement(&dword_140EF9044);
    }
    else
    {
      v6 = **(_QWORD **)(a1 + 192);
      *(_QWORD *)(a1 + 272) = v6;
      if ( (v6 & 0x42) == 0 )
      {
LABEL_12:
        *(_QWORD *)(a1 + 168) = v5;
        return 0LL;
      }
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      if ( (unsigned __int16)*(_DWORD *)(v5 + 32) <= 2u )
      {
        MiWriteValidPteNewProtection(*(__int64 **)(a1 + 192), *(_QWORD *)(a1 + 272) & 0xFFFFFFFFFFFFFFBDuLL);
        MiFlushSingleTbEntry(*(_QWORD *)(a1 + 176), 2LL);
        v7 = MiCaptureDirtyBitToPfn(v5);
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v7 )
          MiReleasePageFileInfo(
            *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL)),
            v7,
            1LL);
        v8 = *(_QWORD *)(a1 + 264);
        v10 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v10);
          while ( *(__int64 *)(v8 + 24) < 0 );
        }
        MiCaptureDirtyBitToPfn(*(_QWORD *)(a1 + 264));
        _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 264) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_12;
      }
      _InterlockedIncrement(&dword_140EF9044);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    LOBYTE(v3) = 17;
    MiUnlockProtoPoolPage(v5, v3, v4);
  }
  else
  {
    _InterlockedIncrement(&dword_140EF9040);
  }
  return 1LL;
}
