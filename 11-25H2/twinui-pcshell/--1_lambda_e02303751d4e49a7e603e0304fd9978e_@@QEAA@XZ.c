/*
 * XREFs of ??1_lambda_e02303751d4e49a7e603e0304fd9978e_@@QEAA@XZ @ 0x18013A74C
 * Callers:
 *     ??1?$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1802CCC88 (--1-$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@UEA.c)
 * Callees:
 *     ??1_lambda_e3476b40c3599fe2d8be82ea48422b91_@@QEAA@XZ @ 0x18013A774 (--1_lambda_e3476b40c3599fe2d8be82ea48422b91_@@QEAA@XZ.c)
 */

void __fastcall _lambda_e02303751d4e49a7e603e0304fd9978e_::~_lambda_e02303751d4e49a7e603e0304fd9978e_(
        _lambda_e02303751d4e49a7e603e0304fd9978e_ *this)
{
  _lambda_e3476b40c3599fe2d8be82ea48422b91_::~_lambda_e3476b40c3599fe2d8be82ea48422b91_((_lambda_e02303751d4e49a7e603e0304fd9978e_ *)((char *)this + 8));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
