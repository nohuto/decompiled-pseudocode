/*
 * XREFs of _lambda_56f82e2d72bc142b92699b1566ad23a5_::_lambda_56f82e2d72bc142b92699b1566ad23a5_ @ 0x180301B20
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800524C0 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180055AA0 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x18010B618 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801BC82C (-RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x1801E5830 (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x180367A5C (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall lambda_56f82e2d72bc142b92699b1566ad23a5_::_lambda_56f82e2d72bc142b92699b1566ad23a5_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rcx

  *a1 = a2;
  v4 = *a3;
  a1[1] = *a3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
