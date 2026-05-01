/*
 * XREFs of ??1_lambda_e3476b40c3599fe2d8be82ea48422b91_@@QEAA@XZ @ 0x18013A774
 * Callers:
 *     ??$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x18013A6D4 (--$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV.c)
 *     ??1_lambda_e02303751d4e49a7e603e0304fd9978e_@@QEAA@XZ @ 0x18013A74C (--1_lambda_e02303751d4e49a7e603e0304fd9978e_@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall _lambda_e3476b40c3599fe2d8be82ea48422b91_::~_lambda_e3476b40c3599fe2d8be82ea48422b91_(
        _lambda_e3476b40c3599fe2d8be82ea48422b91_ *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
}
