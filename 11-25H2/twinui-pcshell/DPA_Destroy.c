/*
 * XREFs of DPA_Destroy @ 0x1806A43B0
 * Callers:
 *     ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x1806A2A88 (-Destroy@-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ.c)
 *     DPA_Clone @ 0x1806A42A0 (DPA_Clone.c)
 *     DPA_DestroyCallback @ 0x1806A4410 (DPA_DestroyCallback.c)
 * Callees:
 *     ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x18065DA54 (-CCv6s_HeapFree@@YAJPEAX0@Z.c)
 */

BOOL __stdcall DPA_Destroy(HDPA hdpa)
{
  void *v3; // rdx

  if ( !hdpa )
    return 1;
  v3 = (void *)*((_QWORD *)hdpa + 1);
  return (!v3 || (int)CCv6s_HeapFree(*((void **)hdpa + 2), v3) >= 0)
      && (int)CCv6s_HeapFree(*((void **)hdpa + 2), hdpa) >= 0;
}
