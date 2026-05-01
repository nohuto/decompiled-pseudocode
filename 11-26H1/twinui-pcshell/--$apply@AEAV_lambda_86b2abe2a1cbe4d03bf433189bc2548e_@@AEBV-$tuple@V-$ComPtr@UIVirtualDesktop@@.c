/*
 * XREFs of ??$apply@AEAV_lambda_86b2abe2a1cbe4d03bf433189bc2548e_@@AEBV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@@std@@YA?A_TAEAV_lambda_86b2abe2a1cbe4d03bf433189bc2548e_@@AEBV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@0@@Z @ 0x18054C8CC
 * Callers:
 *     ??R_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@QEBA@XZ @ 0x18054CE90 (--R_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@QEBA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::apply<_lambda_86b2abe2a1cbe4d03bf433189bc2548e_ &,std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType> const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a3 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a3;
  result = a1;
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
