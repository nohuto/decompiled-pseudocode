/*
 * XREFs of ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x1801F3200
 * Callers:
 *     ?s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotification@@K_N2@Z @ 0x180684FC8 (-s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotificati.c)
 * Callees:
 *     memcpy_s_4 @ 0x18067D5D8 (memcpy_s_4.c)
 */

unsigned __int64 __fastcall QwordHelpers::BoolToQword(QwordHelpers *this)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = (char)this;
  v3 = 0LL;
  memcpy_s_4(&v3, 8uLL, &v2, 1uLL);
  return v3;
}
