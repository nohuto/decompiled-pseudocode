/*
 * XREFs of ??$apply@AEAV_lambda_11021874e68ceedf542cda15af2fb351_@@AEBV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@@std@@YA?A_TAEAV_lambda_11021874e68ceedf542cda15af2fb351_@@AEBV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@0@@Z @ 0x18054C814
 * Callers:
 *     ??R_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@QEBA@XZ @ 0x18054CDA4 (--R_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@QEBA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::apply<_lambda_11021874e68ceedf542cda15af2fb351_ &,std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int> const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // edx
  __int64 v4; // r9
  __int64 result; // rax

  v3 = *(_DWORD *)(a3 + 4);
  v4 = *(_QWORD *)(a3 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a3;
  result = a1;
  *(_QWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 4) = v3;
  return result;
}
