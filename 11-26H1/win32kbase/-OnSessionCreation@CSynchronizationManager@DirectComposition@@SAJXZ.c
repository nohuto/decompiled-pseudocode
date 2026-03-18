/*
 * XREFs of ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x140110A28
 * Callers:
 *     DCompositionSessionInitialize @ 0x1401104D0 (DCompositionSessionInitialize.c)
 * Callees:
 *     ?Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ @ 0x140110964 (-Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ.c)
 *     DirectComposition::Memory::AllocateAndClear_1 @ 0x140110AA4 (DirectComposition--Memory--AllocateAndClear_1.c)
 *     ??_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z @ 0x140134D34 (--_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DirectComposition::CSynchronizationManager::OnSessionCreation(__int64 a1)
{
  __int64 DCompSessionState; // rsi
  DirectComposition::CSynchronizationManager *v2; // rax
  DirectComposition::CSynchronizationManager *v3; // rbx
  int v4; // edi
  unsigned int v6; // edx

  DCompSessionState = W32GetDCompSessionState(a1);
  v2 = (DirectComposition::CSynchronizationManager *)DirectComposition::Memory::AllocateAndClear_1(0x218uLL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x218uLL);
    v4 = DirectComposition::CSynchronizationManager::Initialize(v3);
    if ( v4 < 0 )
      DirectComposition::CSynchronizationManager::`scalar deleting destructor'(v3, v6);
    else
      *(_QWORD *)(DCompSessionState + 24) = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
