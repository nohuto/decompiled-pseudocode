/*
 * XREFs of _VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x1801DDC30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 */

void __fastcall VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  if ( qword_180254FF0 )
    InputContext::Release((struct VirtualTouchpadContextProvider *)((char *)qword_180254FF0 + 8));
}
