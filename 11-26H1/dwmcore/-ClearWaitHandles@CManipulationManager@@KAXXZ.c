/*
 * XREFs of ?ClearWaitHandles@CManipulationManager@@KAXXZ @ 0x180225824
 * Callers:
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1801DDDAC (-Initialize@CManipulationManager@@IEAAJXZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x180226358 (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void CManipulationManager::ClearWaitHandles(void)
{
  HANDLE *v0; // rbx
  __int64 v1; // rdi

  v0 = (HANDLE *)&CManipulationManager::s_rghWaitEvents;
  v1 = 3LL;
  do
  {
    if ( *v0 )
    {
      CloseHandle(*v0);
      *v0 = 0LL;
    }
    ++v0;
    --v1;
  }
  while ( v1 );
}
