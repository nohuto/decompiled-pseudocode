/*
 * XREFs of ??1?$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1804CD464
 * Callers:
 *     ??_E?$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1804CD4E0 (--_E-$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_04782cd470235717f7963c3576bcb0e4_>::~CTaskWrapper<_lambda_04782cd470235717f7963c3576bcb0e4_>(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
