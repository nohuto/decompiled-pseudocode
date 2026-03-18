/*
 * XREFs of ?InitializeCursorGlobals@@YAJXZ @ 0x140193790
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall InitializeCursorGlobals(int a1, int a2, int a3)
{
  _DWORD *v3; // rbx
  __int64 result; // rax

  v3 = (_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 21904);
  memmove(v3, &unk_140273700, 0x28F8uLL);
  memmove(v3 + 2622, &unk_1402727E0, 0xF18uLL);
  result = 0LL;
  v3[3617] = 9;
  return result;
}
