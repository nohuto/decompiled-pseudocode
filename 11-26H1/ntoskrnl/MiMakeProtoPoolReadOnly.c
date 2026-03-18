/*
 * XREFs of MiMakeProtoPoolReadOnly @ 0x1404C57B8
 * Callers:
 *     MiTradeForLeafPage @ 0x140293AE4 (MiTradeForLeafPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiWriteValidPteNewProtection @ 0x140300450 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 */

__int64 __fastcall MiMakeProtoPoolReadOnly(__int64 a1)
{
  __int64 v2; // rax
  ULONG_PTR v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = MiLockProtoPoolPage(*(_QWORD *)(a1 + 176), 0LL);
  v3 = v2;
  if ( v2 )
  {
    if ( (unsigned __int16)*(_DWORD *)(v2 + 32) > 2u )
    {
      _InterlockedIncrement(&dword_140EF8CE4);
    }
    else
    {
      v4 = **(_QWORD **)(a1 + 192);
      *(_QWORD *)(a1 + 272) = v4;
      if ( (v4 & 0x42) == 0 )
      {
LABEL_12:
        *(_QWORD *)(a1 + 168) = v3;
        return 0LL;
      }
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v8);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      if ( (unsigned __int16)*(_DWORD *)(v3 + 32) <= 2u )
      {
        MiWriteValidPteNewProtection(*(__int64 **)(a1 + 192), *(_QWORD *)(a1 + 272) & 0xFFFFFFFFFFFFFFBDuLL);
        MiFlushSingleTbEntry(*(_QWORD *)(a1 + 176), 2LL);
        v5 = MiCaptureDirtyBitToPfn(v3);
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v5 )
          MiReleasePageFileInfo(
            *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL)),
            v5,
            1);
        v6 = *(_QWORD *)(a1 + 264);
        v8 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v8);
          while ( *(__int64 *)(v6 + 24) < 0 );
        }
        MiCaptureDirtyBitToPfn(*(_QWORD *)(a1 + 264));
        _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 264) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_12;
      }
      _InterlockedIncrement(&dword_140EF8CE4);
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUnlockProtoPoolPage(v3, 0x11u);
  }
  else
  {
    _InterlockedIncrement(&dword_140EF8CE0);
  }
  return 1LL;
}
