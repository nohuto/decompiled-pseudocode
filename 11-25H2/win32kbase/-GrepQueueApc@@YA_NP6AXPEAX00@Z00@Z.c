/*
 * XREFs of ?GrepQueueApc@@YA_NP6AXPEAX00@Z00@Z @ 0x1401C75F0
 * Callers:
 *     ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1401515A0 (-vTryDeleteSurface@SURFREF@@QEAAXXZ.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

bool __fastcall GrepQueueApc(void (*a1)(void *, void *, void *), void *a2, void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  char v9; // [rsp+30h] [rbp-18h]

  v6 = Win32AllocPoolImpl(64LL, 0x58uLL, 0x63706147u);
  v7 = v6;
  if ( v6 )
  {
    v9 = 0;
    KeInitializeApc(
      v6,
      KeGetCurrentThread(),
      0LL,
      GrepQueueApc_::_2_::_lambda_2_::_lambda_invoker_cdecl_,
      GrepQueueApc_::_2_::_lambda_2_::_lambda_invoker_cdecl_,
      a1,
      v9,
      0LL);
    KeInsertQueueApc(v7, a2, a3, 0LL);
    LOBYTE(v6) = 1;
  }
  return v6;
}
