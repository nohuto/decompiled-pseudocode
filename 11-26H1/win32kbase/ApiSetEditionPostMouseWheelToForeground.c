/*
 * XREFs of ApiSetEditionPostMouseWheelToForeground @ 0x140227C98
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     EditionPostMouseWheelToForeground @ 0x140178838 (EditionPostMouseWheelToForeground.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionPostMouseWheelToForeground(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8,
        __int64 a9))(void)
{
  unsigned int v12; // ebp
  __int64 (*result)(void); // rax
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF

  v12 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4432LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      v14 = 0LL;
      if ( a8 )
        v14 = *a8;
      return (__int64 (*)(void))EditionPostMouseWheelToForeground(
                                  v12,
                                  a2,
                                  a3,
                                  a4,
                                  a5,
                                  a6,
                                  a7,
                                  (unsigned __int64)&v14 & -(__int64)(a8 != 0LL),
                                  a9);
    }
  }
  return result;
}
