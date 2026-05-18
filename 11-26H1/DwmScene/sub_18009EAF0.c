/*
 * XREFs of sub_18009EAF0 @ 0x18009EAF0
 * Callers:
 *     sub_18009F158 @ 0x18009F158 (sub_18009F158.c)
 * Callees:
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *sub_18009EAF0()
{
  if ( dword_1801CDD38 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801CDD38);
    if ( dword_1801CDD38 == -1 )
    {
      sub_180011CC4(qword_1801CDD40, "ColorGrading");
      sub_180011CC4(qword_1801CDD60, "ContrastCurve");
      sub_180011CC4(qword_1801CDD80, "Diagnostics");
      sub_180011CC4(qword_1801CDDA0, "GammaEncoding");
      sub_180011CC4(qword_1801CDDC0, "ToneMapping");
      sub_180011CC4(qword_1801CDDE0, "Vignette");
      atexit(sub_1800EC8C0);
      sub_18000D4CC(&dword_1801CDD38);
    }
  }
  return qword_1801CDD40;
}
