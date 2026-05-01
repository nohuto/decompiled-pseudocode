/*
 * XREFs of ?SendConsolidatedToAllCloakedApplicationWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1801EC8B8
 * Callers:
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x180089470 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::SendConsolidatedToAllCloakedApplicationWindows(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 i; // rbx
  __int64 v4; // r14

  v1 = *((_QWORD *)this + 21);
  for ( i = 0LL; i < v1; ++i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 20) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4) )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 160LL))(v4, 0LL);
  }
}
