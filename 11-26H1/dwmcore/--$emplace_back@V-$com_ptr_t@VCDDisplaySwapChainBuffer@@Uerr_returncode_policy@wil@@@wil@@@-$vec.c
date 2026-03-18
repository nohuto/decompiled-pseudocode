/*
 * XREFs of ??$emplace_back@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x18029A1C8
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801DD2EC (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801DF634 (--$_Emplace_reallocate@V-$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx

  v2 = (__int64 *)a1[1];
  if ( v2 == (__int64 *)a1[2] )
    return std::vector<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>(
             a1,
             a1[1],
             a2);
  v3 = *a2;
  *a2 = 0LL;
  *v2 = v3;
  v4 = a1[1];
  a1[1] = v4 + 8;
  return (char *)v4;
}
