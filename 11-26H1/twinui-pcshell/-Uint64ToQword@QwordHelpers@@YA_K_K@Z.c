/*
 * XREFs of ?Uint64ToQword@QwordHelpers@@YA_K_K@Z @ 0x180684F50
 * Callers:
 *     ?s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotification@@K_N2@Z @ 0x180684FC8 (-s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotificati.c)
 * Callees:
 *     memcpy_s_4 @ 0x18067D5D8 (memcpy_s_4.c)
 */

__int64 __fastcall QwordHelpers::Uint64ToQword(QwordHelpers *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  QwordHelpers *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = this;
  v2 = 0LL;
  memcpy_s_4(&v2, 8uLL, &v3, 8uLL);
  return v2;
}
