/*
 * XREFs of ??4?$ComPtr@VMPCManager@@@WRL@Microsoft@@QEAAAEAV012@PEAVMPCManager@@@Z @ 0x180023E5C
 * Callers:
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180023EC0 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
MPCManager **__fastcall Microsoft::WRL::ComPtr<MPCManager>::operator=(__int64 a1, MPCManager *a2)
{
  MPCManager *v3; // rax

  v3 = MPCManager::s_instance;
  if ( MPCManager::s_instance != a2 )
  {
    if ( a2 )
    {
      (**((void (__fastcall ***)(__int64))a2 + 2))((__int64)a2 + 16);
      v3 = MPCManager::s_instance;
    }
    MPCManager::s_instance = a2;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v3 + 2) + 8LL))((__int64)v3 + 16);
  }
  return &MPCManager::s_instance;
}
