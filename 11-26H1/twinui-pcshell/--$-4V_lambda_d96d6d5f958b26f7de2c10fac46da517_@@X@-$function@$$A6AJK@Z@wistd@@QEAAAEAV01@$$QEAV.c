/*
 * XREFs of ??$?4V_lambda_d96d6d5f958b26f7de2c10fac46da517_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_d96d6d5f958b26f7de2c10fac46da517_@@@Z @ 0x180224B58
 * Callers:
 *     ??$Register@UIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVTouchEdgeGestureManager@@@SmartCookie@@QEAAJPEAUIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVTouchEdgeGestureManager@@@Z @ 0x1802B7EAC (--$Register@UIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVT.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180025154 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function<long (unsigned long)>::operator=<_lambda_d96d6d5f958b26f7de2c10fac46da517_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=((__int64)a1);
  a1[1] = &wistd::__function::__func<_lambda_d96d6d5f958b26f7de2c10fac46da517_,long (unsigned long)>::`vftable';
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  result = a1;
  a1[14] = a1 + 1;
  return result;
}
