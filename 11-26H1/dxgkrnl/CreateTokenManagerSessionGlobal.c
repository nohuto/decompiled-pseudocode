/*
 * XREFs of CreateTokenManagerSessionGlobal @ 0x14005D114
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403FE2EC (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??0CTokenManager@@AEAA@XZ @ 0x14005D190 (--0CTokenManager@@AEAA@XZ.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x14005D29C (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1400A1150 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CreateTokenManagerSessionGlobal(CTokenManager **a1)
{
  CTokenManager *Pool2; // rax
  int v3; // edi
  CTokenManager *v4; // rax
  CTokenManager *v5; // rbx
  unsigned int v6; // edx

  Pool2 = (CTokenManager *)ExAllocatePool2(256LL, 344LL, 1735609684LL);
  if ( Pool2 && (v4 = CTokenManager::CTokenManager(Pool2), (v5 = v4) != 0LL) )
  {
    v3 = CTokenManager::Initialize(v4);
    if ( v3 < 0 )
      CTokenManager::`scalar deleting destructor'(v5, v6);
    else
      *a1 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
