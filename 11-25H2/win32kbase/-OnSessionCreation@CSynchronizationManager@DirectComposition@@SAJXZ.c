/*
 * XREFs of ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1400CC7AC
 * Callers:
 *     DCompositionSessionInitialize @ 0x1400CC1A0 (DCompositionSessionInitialize.c)
 * Callees:
 *     ?Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ @ 0x1400CC6E8 (-Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ.c)
 *     DirectComposition::Memory::AllocateAndClear_1 @ 0x1400CC828 (DirectComposition--Memory--AllocateAndClear_1.c)
 *     ??_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z @ 0x140144BD4 (--_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 DirectComposition::CSynchronizationManager::OnSessionCreation(void)
{
  __int64 DCompSessionState; // rsi
  DirectComposition::CSynchronizationManager *v1; // rax
  DirectComposition::CSynchronizationManager *v2; // rbx
  int v3; // edi
  unsigned int v5; // edx

  DCompSessionState = W32GetDCompSessionState();
  v1 = (DirectComposition::CSynchronizationManager *)DirectComposition::Memory::AllocateAndClear_1(0x218uLL);
  v2 = v1;
  if ( v1 )
  {
    memset(v1, 0, 0x218uLL);
    v3 = DirectComposition::CSynchronizationManager::Initialize(v2);
    if ( v3 < 0 )
      DirectComposition::CSynchronizationManager::`scalar deleting destructor'(v2, v5);
    else
      *(_QWORD *)(DCompSessionState + 24) = v2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
