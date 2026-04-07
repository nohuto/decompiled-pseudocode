/*
 * XREFs of ??$make_unique@VCCompositionEffectCache@@$$V$0A@@std@@YA?AV?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@0@XZ @ 0x180086C18
 * Callers:
 *     ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x180086B9C (-Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::make_unique<CCompositionEffectCache,,0>(_QWORD *a1, const struct std::nothrow_t *a2)
{
  char *v3; // rax

  v3 = (char *)operator new[](0x50uLL, a2);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 73) = 0;
    *(_WORD *)(v3 + 77) = 0;
    v3[79] = 0;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    v3[72] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
