/*
 * XREFs of CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___::CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___ @ 0x18030BA78
 * Callers:
 *     CreateAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___ @ 0x18030B30C (CreateAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003BEF0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E19F0 (-InternalAddRef@-$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___::CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___(
        __int64 a1,
        __int64 a2)
{
  volatile int *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>(a1);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 24);
  Microsoft::WRL::ComPtr<CApplicationViewManager>::InternalAddRef((__int64 *)(a1 + 72), v4);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_180706A78;
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
