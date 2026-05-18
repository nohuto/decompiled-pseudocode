/*
 * XREFs of sub_18009CDE4 @ 0x18009CDE4
 * Callers:
 *     sub_18009CECC @ 0x18009CECC (sub_18009CECC.c)
 * Callees:
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *sub_18009CDE4()
{
  if ( dword_1801CDB20 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801CDB20);
    if ( dword_1801CDB20 == -1 )
    {
      sub_180011CC4(qword_1801CDB30, "ColorGrading");
      sub_180011CC4(qword_1801CDB50, "ContrastCurve");
      sub_180011CC4(qword_1801CDB70, "ToneMapping");
      sub_180011CC4(qword_1801CDB90, "Vignette");
      sub_180011CC4(qword_1801CDBB0, "DepthOnly");
      sub_180011CC4(qword_1801CDBD0, "GroundPlane");
      atexit(sub_1800EC860);
      sub_18000D4CC(&dword_1801CDB20);
    }
  }
  return qword_1801CDB30;
}
