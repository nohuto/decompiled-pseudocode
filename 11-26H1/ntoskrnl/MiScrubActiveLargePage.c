/*
 * XREFs of MiScrubActiveLargePage @ 0x14088418C
 * Callers:
 *     MiScrubLargePageRegions @ 0x140AC8350 (MiScrubLargePageRegions.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiScrubInterrupted @ 0x1404C3F28 (MiScrubInterrupted.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiScrubProcessLargePage @ 0x1408842B8 (MiScrubProcessLargePage.c)
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
