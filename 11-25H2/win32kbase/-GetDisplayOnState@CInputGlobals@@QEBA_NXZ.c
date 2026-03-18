/*
 * XREFs of ?GetDisplayOnState@CInputGlobals@@QEBA_NXZ @ 0x140211C60
 * Callers:
 *     <none>
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

bool __fastcall CInputGlobals::GetDisplayOnState(CInputGlobals *this)
{
  char v2; // bl

  W32AcquirePushLockSharedEx(this, 0);
  v2 = *((_BYTE *)this + 142);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
