/*
 * XREFs of ApiSetEditionPostMouseWheelToForeground @ 0x1400BA3AC
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     EditionPostMouseWheelToForeground @ 0x1401425BC (EditionPostMouseWheelToForeground.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionPostMouseWheelToForeground(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8,
        __int64 *a9))(void)
{
  int v11; // ebp
  int v12; // esi
  __int64 (*result)(void); // rax
  int v14; // eax
  __int64 v15; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16; // [rsp+58h] [rbp-50h] BYREF
  int v17; // [rsp+60h] [rbp-48h]

  v11 = a2;
  v12 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4880LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      v15 = 0LL;
      if ( a8 )
        v15 = *a8;
      v16 = 0LL;
      v17 = 0;
      if ( a9 )
      {
        v14 = *((_DWORD *)a9 + 2);
        v16 = *a9;
        v17 = v14;
      }
      return (__int64 (*)(void))EditionPostMouseWheelToForeground(
                                  v12,
                                  v11,
                                  a3,
                                  a4,
                                  a5,
                                  a6,
                                  a7,
                                  (unsigned __int64)&v15 & -(__int64)(a8 != 0LL),
                                  (unsigned __int64)&v16 & -(__int64)(a9 != 0LL));
    }
  }
  return result;
}
