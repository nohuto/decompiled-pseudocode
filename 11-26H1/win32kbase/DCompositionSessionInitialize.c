/*
 * XREFs of DCompositionSessionInitialize @ 0x1401104D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1401104F0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x140110A28 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 */

__int64 __fastcall DCompositionSessionInitialize(int a1)
{
  __int64 result; // rax

  result = DirectComposition::CConnection::OnSessionCreation(a1);
  if ( (int)result >= 0 )
    return DirectComposition::CSynchronizationManager::OnSessionCreation();
  return result;
}
