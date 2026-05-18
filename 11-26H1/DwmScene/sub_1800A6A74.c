/*
 * XREFs of sub_1800A6A74 @ 0x1800A6A74
 * Callers:
 *     sub_1800A6B44 @ 0x1800A6B44 (sub_1800A6B44.c)
 * Callees:
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *sub_1800A6A74()
{
  if ( dword_1801CE030 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801CE030);
    if ( dword_1801CE030 == -1 )
    {
      sub_180011CC4(qword_1801CE040, "DepthOnly");
      sub_180011CC4(qword_1801CE060, "Diagnostics");
      sub_180011CC4(qword_1801CE080, "AlphaMask");
      sub_180011CC4(qword_1801CE0A0, "AlphaBlend");
      sub_180011CC4(qword_1801CE0C0, "Skinning");
      atexit(sub_1800EC950);
      sub_18000D4CC(&dword_1801CE030);
    }
  }
  return qword_1801CE040;
}
