/*
 * XREFs of ??$?4V_lambda_2c577decc83877f534c94bb911f7d14a_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_2c577decc83877f534c94bb911f7d14a_@@@Z @ 0x1800A385C
 * Callers:
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@@Z @ 0x180220E6C (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_180220E6C.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@Z @ 0x18022881C (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastC.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCActionCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCActionCenterExperienceManager@@@Z @ 0x1802B7CEC (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCAction.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180025154 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=<_lambda_2c577decc83877f534c94bb911f7d14a_,void>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 8) = &wistd::__function::__func<_lambda_019925418f2d790c604ba5ca6109c73f_,long (unsigned long)>::`vftable';
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(a1 + 16, a2);
  result = a1;
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 112) = v6;
  return result;
}
