/*
 * XREFs of ??0?$set@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@@std@@QEAA@XZ @ 0x180085AA0
 * Callers:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18008598C (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::set<CWindowData *>::set<CWindowData *>(_QWORD *a1, const struct std::nothrow_t *a2)
{
  _QWORD *v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = operator new[](0x28uLL, a2);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *a1 = v3;
  return a1;
}
