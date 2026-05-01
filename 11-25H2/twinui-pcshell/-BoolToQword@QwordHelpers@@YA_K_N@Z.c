/*
 * XREFs of ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x180098F34
 * Callers:
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x180098EC4 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 * Callees:
 *     memcpy_s_4 @ 0x180657578 (memcpy_s_4.c)
 */

unsigned __int64 __fastcall QwordHelpers::BoolToQword(QwordHelpers *this)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = (char)this;
  memcpy_s_4(&v3, 8uLL, &v2, 1uLL);
  return v3;
}
