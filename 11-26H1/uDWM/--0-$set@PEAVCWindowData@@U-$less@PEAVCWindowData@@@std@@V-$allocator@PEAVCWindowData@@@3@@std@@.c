/*
 * XREFs of ??0?$set@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@@std@@QEAA@XZ @ 0x18004F27C
 * Callers:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18004F168 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::set<CWindowData *>::set<CWindowData *>(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = operator new(0x28uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *a1 = v2;
  return a1;
}
