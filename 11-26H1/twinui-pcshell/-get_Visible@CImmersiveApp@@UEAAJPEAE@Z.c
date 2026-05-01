/*
 * XREFs of ?get_Visible@CImmersiveApp@@UEAAJPEAE@Z @ 0x180301310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::get_Visible(CImmersiveApp *this, bool *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  result = (*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)this - 5) + 168LL))((char *)this - 40, &v4);
  *a2 = v4 != 0;
  return result;
}
