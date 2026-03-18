/*
 * XREFs of EditionResetIMELayout @ 0x1402A6750
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z @ 0x140282CD0 (-xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z.c)
 */

__int64 __fastcall EditionResetIMELayout(int a1, __int64 a2, struct tagIMEINFOEX **a3)
{
  __int64 v3; // rdi
  int v5; // esi
  struct tagIMEINFOEX *Layout; // rax
  unsigned int v8; // ecx

  v3 = a1;
  v5 = a2;
  if ( (HIWORD(a1) & 0xF000) != 0xE000 && (**(_DWORD **)(W32GetUserSessionState(57344LL, a2) + 19872) & 4) == 0 )
  {
    *a3 = 0LL;
    return 1LL;
  }
  Layout = xxxImmLoadLayout(v3, a2);
  v8 = 0;
  *a3 = Layout;
  if ( Layout )
    return 1LL;
  LOBYTE(v8) = (v5 & 0xC0000000) != 0;
  return v8;
}
