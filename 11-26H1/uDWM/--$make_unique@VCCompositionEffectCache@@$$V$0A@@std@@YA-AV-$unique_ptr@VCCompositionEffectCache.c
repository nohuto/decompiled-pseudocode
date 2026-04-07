/*
 * XREFs of ??$make_unique@VCCompositionEffectCache@@$$V$0A@@std@@YA?AV?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@0@XZ @ 0x180076BA4
 * Callers:
 *     ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x180076B24 (-Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<CCompositionEffectCache,,0>(_QWORD *a1)
{
  char *v2; // rax

  v2 = (char *)operator new(0x50uLL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 73) = 0;
    *(_WORD *)(v2 + 77) = 0;
    v2[79] = 0;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    *((_QWORD *)v2 + 7) = 0LL;
    *((_QWORD *)v2 + 8) = 0LL;
    v2[72] = 0;
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = v2;
  return a1;
}
