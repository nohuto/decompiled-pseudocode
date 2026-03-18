/*
 * XREFs of MiScrubActiveLargePage @ 0x14087DD8C
 * Callers:
 *     MiScrubLargePageRegions @ 0x140AC675C (MiScrubLargePageRegions.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     MiScrubInterrupted @ 0x1404CA4F8 (MiScrubInterrupted.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MiScrubProcessLargePage @ 0x14087DEB8 (MiScrubProcessLargePage.c)
 */

void __fastcall MiScrubActiveLargePage(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  _KPROCESS *v8; // r9
  _OWORD v9[3]; // [rsp+20h] [rbp-68h] BYREF

  v3 = *a1;
  v4 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( *(_QWORD *)(v3 + 64) )
  {
    do
    {
      if ( MiScrubInterrupted((__int64)a1) )
        break;
      KiStackAttachProcess(v8, 0, (__int64)v9);
      MiScrubProcessLargePage(a1, a2, a3);
      KiUnstackDetachProcess((__int64)v9, 0);
      ++v4;
    }
    while ( v4 < *(_QWORD *)(v3 + 64) );
  }
}
