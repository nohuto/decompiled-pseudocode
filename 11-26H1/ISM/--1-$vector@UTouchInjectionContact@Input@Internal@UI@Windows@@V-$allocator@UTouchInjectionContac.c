/*
 * XREFs of ??1?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x18003FAD4
 * Callers:
 *     ??1InputSite@@UEAA@XZ @ 0x18003F9DC (--1InputSite@@UEAA@XZ.c)
 *     _InputStateManager::InputStateManager_::_1_::dtor$5 @ 0x1801D6D60 (_InputStateManager--InputStateManager_--_1_--dtor$5.c)
 *     _InputInjectionClientProxy::InjectTouchInput_::_1_::dtor$2 @ 0x1801DCB06 (_InputInjectionClientProxy--InjectTouchInput_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::UI::Internal::Input::TouchInjectionContact>::~vector<Windows::UI::Internal::Input::TouchInjectionContact>(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = std::_Deallocate<16>(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
