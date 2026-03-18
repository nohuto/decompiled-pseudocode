/*
 * XREFs of ?SetDimmedState@CInputGlobals@@QEAAX_N@Z @ 0x140211CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall CInputGlobals::SetDimmedState(CInputGlobals *this, char a2)
{
  W32AcquirePushLockExclusiveEx(this, 0);
  *((_BYTE *)this + 141) = a2;
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
