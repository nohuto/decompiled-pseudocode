/*
 * XREFs of sub_1800A8988 @ 0x1800A8988
 * Callers:
 *     sub_1800A8AAC @ 0x1800A8AAC (sub_1800A8AAC.c)
 * Callees:
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *sub_1800A8988()
{
  if ( dword_1801CE180 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801CE180);
    if ( dword_1801CE180 == -1 )
    {
      sub_180011CC4(qword_1801CE190, "DepthOnly");
      sub_180011CC4(qword_1801CE1B0, "Diagnostics");
      sub_180011CC4(qword_1801CE1D0, "Background");
      sub_180011CC4(qword_1801CE1F0, "AlphaMask");
      sub_180011CC4(qword_1801CE210, "AlphaBlend");
      sub_180011CC4(qword_1801CE230, "Skinning");
      sub_180011CC4(qword_1801CE250, "DepthToColor");
      sub_180011CC4(qword_1801CE270, "StochasticTransparency");
      sub_180011CC4(qword_1801CE290, "GLTFMaterial");
      atexit(sub_1800EC980);
      sub_18000D4CC(&dword_1801CE180);
    }
  }
  return qword_1801CE190;
}
