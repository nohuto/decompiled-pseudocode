/*
 * XREFs of ??4?$unique_ptr@VMagnifierExperienceHelper@@U?$default_delete@VMagnifierExperienceHelper@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180077928
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007A548 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    operator delete(v4, 0x80uLL);
  return a1;
}
