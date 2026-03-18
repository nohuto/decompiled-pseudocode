/*
 * XREFs of ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z @ 0x180238E38
 * Callers:
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C9240 (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C959C (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801744A0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

COverlayContext *__fastcall COverlayContext::COverlayContext(
        COverlayContext *this,
        struct IOverlayMonitorTarget *a2,
        char a3)
{
  COverlayContext *result; // rax

  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_QWORD *)this + 13) = (char *)this + 120;
  *((_QWORD *)this + 14) = (char *)this + 6392;
  *((_QWORD *)this + 799) = (char *)this + 6416;
  *((_QWORD *)this + 800) = (char *)this + 6416;
  *((_QWORD *)this + 801) = (char *)this + 12688;
  *((_QWORD *)this + 1586) = (char *)this + 12712;
  *((_QWORD *)this + 1587) = (char *)this + 12712;
  *((_QWORD *)this + 1588) = (char *)this + 18984;
  *((_QWORD *)this + 7) = a2;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 2373) = 0LL;
  *((_QWORD *)this + 2374) = 0LL;
  *((_QWORD *)this + 2375) = 0LL;
  *((_QWORD *)this + 2376) = 0LL;
  *((_QWORD *)this + 2377) = 0LL;
  *((_QWORD *)this + 2378) = 0LL;
  *((_QWORD *)this + 2379) = 0LL;
  *(_QWORD *)((char *)this + 19044) = 0LL;
  *((_WORD *)this + 9526) = 1;
  *((_QWORD *)this + 2382) = 0LL;
  *((_QWORD *)this + 2383) = 0LL;
  *((_QWORD *)this + 2384) = 0LL;
  *((_QWORD *)this + 2385) = 0LL;
  *((_QWORD *)this + 2386) = 0LL;
  *((_QWORD *)this + 2387) = 0LL;
  *((_QWORD *)this + 2388) = 0LL;
  *(_QWORD *)((char *)this + 19116) = 0LL;
  *((_WORD *)this + 9562) = 1;
  *((_QWORD *)this + 2393) = 0LL;
  *((_QWORD *)this + 2394) = 0LL;
  *((_QWORD *)this + 2395) = 0LL;
  *((_QWORD *)this + 2396) = 0LL;
  *((_QWORD *)this + 2397) = 0LL;
  *((_QWORD *)this + 2398) = 0LL;
  *((_QWORD *)this + 2400) = 0LL;
  *((_QWORD *)this + 2403) = 0LL;
  *((_QWORD *)this + 2404) = 0LL;
  *((_QWORD *)this + 2392) = 0LL;
  *((_QWORD *)this + 2399) = 0LL;
  *((_QWORD *)this + 2401) = 0LL;
  *((_QWORD *)this + 2402) = 0LL;
  *((_QWORD *)this + 2391) = 0LL;
  *(_OWORD *)((char *)this + 19240) = 0LL;
  *((_QWORD *)this + 2407) = 0LL;
  *((_QWORD *)this + 2408) = 0LL;
  *((_QWORD *)this + 2409) = 0LL;
  *((_WORD *)this + 9642) = 0;
  *((_DWORD *)this + 4820) = 0x1000000;
  *((_QWORD *)this + 2411) = 0LL;
  *((_DWORD *)this + 4824) = 0;
  *((_QWORD *)this + 2413) = 0LL;
  *((_QWORD *)this + 2414) = 0LL;
  *((_QWORD *)this + 2415) = 0LL;
  *((_QWORD *)this + 2416) = 0LL;
  *((_QWORD *)this + 2417) = 0LL;
  *((_QWORD *)this + 2418) = 0LL;
  *((_WORD *)this + 9676) = 0;
  *((_BYTE *)this + 19360) = a3;
  *(_QWORD *)((char *)this + 19364) = 0LL;
  *((_DWORD *)this + 4843) = 0;
  `vector constructor iterator'(
    (char *)this + 19376,
    1720LL,
    6LL,
    (void (__fastcall *)(char *))COverlayContext::DbgOverlayStateInfo::DbgOverlayStateInfo);
  result = this;
  *((_DWORD *)this + 7424) = -1;
  return result;
}
