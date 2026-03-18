/*
 * XREFs of ?SetDisplayId@CConversionSwapChain@@UEAAXVDisplayId@@@Z @ 0x1802A7BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z @ 0x1802A5EA0 (-SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::SetDisplayId(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = CLegacySwapChain::SetDisplayId(a1, a2);
  v5 = *(_QWORD *)(a1 + 496);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 112LL))(v5, a2);
  return result;
}
