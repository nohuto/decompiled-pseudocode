/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x1408D5368
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140ADE3F8 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 */

void __fastcall CmpUnlockHashEntryByIndex(char *P, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rcx
  __int64 v8; // rtt

  v2 = *((_QWORD *)P + 206);
  v4 = 3LL * a2;
  *(_QWORD *)(v2 + 8 * v4 + 8) = 0LL;
  v5 = (__int64 *)(v2 + 8 * v4);
  _m_prefetchw(v5);
  v6 = *v5;
  v7 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (v6 & 2) != 0 || (v8 = *v5, v8 != _InterlockedCompareExchange64(v5, v7, v6)) )
    ExfReleasePushLock(v5);
  KeAbPostRelease((unsigned __int64)v5);
  CmpDereferenceHive(P);
}
