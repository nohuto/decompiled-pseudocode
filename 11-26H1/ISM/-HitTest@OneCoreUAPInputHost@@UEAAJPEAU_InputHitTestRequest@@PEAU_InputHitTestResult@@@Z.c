/*
 * XREFs of ?HitTest@OneCoreUAPInputHost@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180030440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall OneCoreUAPInputHost::HitTest(
        OneCoreUAPInputHost *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  return Win32kInterop::DoConvergedHitTestCallback(this, a2, a3);
}
