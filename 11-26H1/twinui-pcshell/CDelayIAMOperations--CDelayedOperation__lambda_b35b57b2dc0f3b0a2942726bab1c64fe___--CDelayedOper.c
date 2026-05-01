/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x18028CD64
 * Callers:
 *     CDelayIAMOperations::AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x18028CBFC (CDelayIAMOperations--AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___.c)
 * Callees:
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  _QWORD *v6; // rcx

  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = &off_18072E130;
  *(_DWORD *)(a1 + 12) = a4;
  *(_QWORD *)(a1 + 16) = *a2;
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(
    (_QWORD *)(a1 + 24),
    a2 + 1);
  v6 = (_QWORD *)(v5 + 24);
  *(_BYTE *)(v4 + 32) = *(_BYTE *)(v5 + 16);
  *(_QWORD *)(v4 + 40) = 0LL;
  if ( v4 + 40 != v5 + 24 )
  {
    *(_QWORD *)(v4 + 40) = *v6;
    *v6 = 0LL;
  }
  *(_DWORD *)(v4 + 48) = *(_DWORD *)(v5 + 32);
  return v4;
}
