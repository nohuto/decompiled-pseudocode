/*
 * XREFs of ??0_lambda_ce1d42a70e932870ef796d28de85f11b_@@QEAA@AEBVCMarshaledInterface@@AEBQ6AXXZ@Z @ 0x180459004
 * Callers:
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1801FB3D8 (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802B6824 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_lambda_ce1d42a70e932870ef796d28de85f11b_ *__fastcall _lambda_ce1d42a70e932870ef796d28de85f11b_::_lambda_ce1d42a70e932870ef796d28de85f11b_(
        _lambda_ce1d42a70e932870ef796d28de85f11b_ *this,
        const struct CMarshaledInterface *a2,
        void (**a3)(void))
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = *a3;
  return this;
}
