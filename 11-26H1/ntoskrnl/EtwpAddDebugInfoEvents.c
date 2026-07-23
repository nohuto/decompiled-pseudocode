/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x140ABD02C
 * Callers:
 *     EtwpSendDbgId @ 0x140832980 (EtwpSendDbgId.c)
 *     EtwpAddLogHeader @ 0x140A11F48 (EtwpAddLogHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140A14478 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x140ABCAB0 (EtwpFinalizeHeader.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwpAddEventToBuffer @ 0x140ABD298 (EtwpAddEventToBuffer.c)
 */

void __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3, struct _KLOCK_ENTRIES *a4, int a5)
{
  char v5; // r15
  struct _KLOCK_ENTRIES *v6; // r12
  unsigned int v7; // esi
  char v9; // al
  unsigned __int64 *v11; // rdi
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rbx
  __int64 v15; // rax
  int v16; // r15d
  int v17; // edx
  __int64 *i; // rdi
  __int64 *v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  _OWORD *v22; // r9
  __int64 *v23; // rax
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+90h] [rbp+18h] BYREF

  v5 = a5;
  v6 = (struct _KLOCK_ENTRIES *)&v24;
  v25 = 0;
  v7 = a3 - *(_DWORD *)(a2 + 48);
  v24 = 0LL;
  v9 = a5;
  if ( a4 )
    v6 = a4;
  a5 &= 2u;
  if ( (v9 & 2) != 0 )
  {
    v11 = (unsigned __int64 *)(a1 + 688);
    v12 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, a4);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
  }
  if ( (v5 & 1) != 0 && *(_QWORD *)(a1 + 96) != a1 + 96 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( NtBuildLabEx[v15] );
    if ( !EtwpAddEventToBuffer(a2, 66LL, v6, NtBuildLabEx, (int)v15 + 1, v7, &v25) )
      goto LABEL_24;
    v7 -= v25;
  }
  v16 = v5 & 4;
  if ( v16 )
  {
    v19 = *(__int64 **)(a1 + 112);
    v17 = 0;
    if ( !v19 )
      goto LABEL_18;
    do
    {
      if ( *((_BYTE *)v19 + 40) )
        break;
      v19 = (__int64 *)*v19;
      ++v17;
    }
    while ( v19 );
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 120);
  }
  if ( v17 )
  {
    v20 = 32 * v17 + 16;
    v25 = v20;
    if ( v20 <= v7 )
    {
      v21 = *(unsigned int *)(a2 + 48);
      *(_DWORD *)(a2 + 48) = v21 + v20;
      *(_WORD *)(v21 + a2 + 4) = v20;
      *(_DWORD *)(v21 + a2) = -1072627710;
      *(_WORD *)(v21 + a2 + 6) = 68;
      *(_QWORD *)(v21 + a2 + 8) = v6->Thread;
      v22 = (_OWORD *)(v21 + a2 + 16);
      if ( v22 )
      {
        v23 = *(__int64 **)(a1 + 112);
        do
        {
          *v22 = *(_OWORD *)(v23 + 1);
          v22 += 2;
          *(v22 - 1) = *(_OWORD *)(v23 + 3);
          v23 = (__int64 *)*v23;
          --v17;
        }
        while ( v17 );
        v7 -= v20;
      }
    }
  }
LABEL_18:
  for ( i = *(__int64 **)(a1 + 96); i != (__int64 *)(a1 + 96); i = (__int64 *)*i )
  {
    if ( !v16 || !*((_BYTE *)i + 16) )
    {
      if ( !EtwpAddEventToBuffer(a2, 64LL, v6, (char *)i + 28, *((_DWORD *)i + 5) - 4, v7, &v25) )
        break;
      v7 -= v25;
    }
  }
LABEL_24:
  if ( a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
    KeAbPostRelease(a1 + 688);
  }
}
