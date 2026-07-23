/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x14097A694
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1405311FC (EtwpTransitionToRealtime.c)
 *     EtwpIncrementTraceFile @ 0x14077E0A0 (EtwpIncrementTraceFile.c)
 *     EtwpQueryTrace @ 0x140979CA0 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140AB2FD0 (EtwpFlushTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 v10; // rax
  char PreviousMode; // r12
  volatile signed __int64 *v12; // r14
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // r13
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int *v20; // r8
  _OWORD v21[2]; // [rsp+40h] [rbp-48h]

  if ( (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
  {
    v18 = 32LL * *(unsigned __int8 *)(a2 + 818);
    v19 = *(_QWORD *)(a2 + 1360);
    v21[0] = *(_OWORD *)(v18 + v19 + 4556);
    v21[1] = *(_OWORD *)(v18 + v19 + 4572);
    v20 = &EtwpEnableFlagMap;
    a4 = 8LL;
    do
    {
      if ( (v20[1] & *((_DWORD *)v21 + ((unsigned __int64)(unsigned int)v20[1] >> 29)) & 0x1FFFFFFF) != 0 )
        *((_DWORD *)v21 + ((unsigned __int64)(unsigned int)*v20 >> 29)) |= *v20 & 0x1FFFFFFF;
      v20 += 2;
      --a4;
    }
    while ( a4 );
    v6 = v21[0];
  }
  else
  {
    v6 = 0;
  }
  *(_DWORD *)(a1 + 72) = v6;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 292);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 4) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 232);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 236);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 228);
  v7 = *(_DWORD *)(a2 + 248);
  if ( v7 <= *(_DWORD *)(a2 + 256) )
    v7 = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(a1 + 108) = v7;
  *(_QWORD *)(a1 + 80) = 0LL;
  v8 = (*(_DWORD *)(a2 + 816) >> 4) & 1;
  *(_QWORD *)(a1 + 80) = v8;
  *(_QWORD *)(a1 + 80) = v8 | (*(_DWORD *)(a2 + 816) >> 26) & 2;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 260);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 344);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 212);
  if ( *(_DWORD *)a2 )
    v9 = *(_WORD *)a2;
  else
    v9 = -1;
  *(_WORD *)(a1 + 8) = v9;
  v10 = *(_QWORD *)(a2 + 32);
  if ( v10 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v10 + 1296);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 200);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v12 = (volatile signed __int64 *)(a2 + 688);
  v13 = (AutoBoost *)KeAbPreAcquire(a2 + 688, 0LL, 0LL, (struct _KLOCK_ENTRIES *)a4);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 688), v13, a2 + 688);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  v16 = *(unsigned __int16 *)(a2 + 152);
  if ( (_WORD)v16 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v16 + 2, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 152));
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 688));
  KeAbPostRelease(a2 + 688);
  if ( *(_WORD *)(a2 + 136) && *(_WORD *)(a1 + 146) )
  {
    if ( PreviousMode )
      ProbeForRead(*(volatile void **)(a1 + 152), *(unsigned __int16 *)(a1 + 144), 2u);
    if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 136), (PCUNICODE_STRING)(a1 + 144), 0) )
    {
      if ( PreviousMode )
        ProbeForWrite(*(volatile void **)(a1 + 152), *(unsigned __int16 *)(a2 + 136) + 2LL, 2u);
      RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 136));
    }
  }
  return 0LL;
}
