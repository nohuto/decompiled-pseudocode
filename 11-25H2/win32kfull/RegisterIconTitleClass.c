/*
 * XREFs of RegisterIconTitleClass @ 0x140240F54
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     NtUserGetClassInfoEx @ 0x1402970E0 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x14029C000 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 */

__int64 __fastcall RegisterIconTitleClass(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7; // [rsp+28h] [rbp-58h]
  int v8; // [rsp+30h] [rbp-50h]
  int v9; // [rsp+34h] [rbp-4Ch]
  void *v10; // [rsp+38h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+78h] [rbp-8h]
  int v19; // [rsp+7Ch] [rbp-4h]

  v6[0] = 0;
  v2 = PtiCurrent(a1, a2);
  v8 = 0;
  v11 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v6[1] = 0;
  v7 = 0LL;
  v9 = 0;
  v18 = 0;
  v10 = hModuleWin;
  v19 = 1;
  if ( *(_QWORD *)(W32GetUserSessionState(hModuleWin, hModuleWin) + 21880) )
    v12 = **(_QWORD **)(W32GetUserSessionState(v4, v3) + 21880);
  else
    v12 = 0LL;
  v13 = 0LL;
  v15 = 32772LL;
  v17 = 32772LL;
  result = InternalRegisterClassEx((__int64)v6, 667LL, 0x41u, 0LL);
  if ( result )
  {
    result = 1LL;
    *(_DWORD *)(*((_QWORD *)v2 + 58) + 12LL) |= 0x10000000u;
  }
  return result;
}
