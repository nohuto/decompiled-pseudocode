/*
 * XREFs of Win32kBaseVideoPortCallout @ 0x1400904D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     VideoPortCallout @ 0x140091F00 (VideoPortCallout.c)
 */

__int64 __fastcall Win32kBaseVideoPortCallout(__int64 a1)
{
  _BYTE v3[264]; // [rsp+20h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
  VideoPortCallout(a1);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
  return 0LL;
}
