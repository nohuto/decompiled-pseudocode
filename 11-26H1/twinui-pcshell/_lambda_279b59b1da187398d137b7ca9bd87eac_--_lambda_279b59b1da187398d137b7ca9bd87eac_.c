/*
 * XREFs of _lambda_279b59b1da187398d137b7ca9bd87eac_::_lambda_279b59b1da187398d137b7ca9bd87eac_ @ 0x18028E568
 * Callers:
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x18028E4DC (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_279b59b1da187398d137b7ca9bd87eac_::_lambda_279b59b1da187398d137b7ca9bd87eac_(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  _DWORD *v3; // r9
  __int64 v4; // r10
  __int64 result; // rax

  *a1 = a2;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(a1 + 1, a3);
  result = v4;
  *(_DWORD *)(v4 + 24) = *v3;
  return result;
}
