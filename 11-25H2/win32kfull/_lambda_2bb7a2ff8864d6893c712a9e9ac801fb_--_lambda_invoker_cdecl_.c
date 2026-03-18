/*
 * XREFs of _lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_ @ 0x140193910
 * Callers:
 *     <none>
 * Callees:
 *     ?DoPowerStateAndMonitor@@YAXXZ @ 0x140193960 (-DoPowerStateAndMonitor@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void *lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_()
{
  void (**v0)(void); // rbx
  void *result; // rax

  v0 = (void (**)(void))&off_14039B9F0;
  do
  {
    if ( *v0 == DoPowerStateAndMonitor )
      DoPowerStateAndMonitor();
    else
      (*v0)();
    ++v0;
    result = &unk_14039BA28;
  }
  while ( v0 != (void (**)(void))&unk_14039BA28 );
  return result;
}
