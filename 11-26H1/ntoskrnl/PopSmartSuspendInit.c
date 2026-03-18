/*
 * XREFs of PopSmartSuspendInit @ 0x140CD4DE4
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopSmartSuspendResetData @ 0x1407778AC (PopSmartSuspendResetData.c)
 */

__int64 PopSmartSuspendInit()
{
  __int64 v0; // rdi
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 result; // rax

  v0 = 16LL;
  p_Blink = &stru_140F0C428.WaitBlock[3].WaitListEntry.Blink;
  do
  {
    result = PopSmartSuspendResetData(p_Blink);
    p_Blink += 13;
    --v0;
  }
  while ( v0 );
  stru_140F0C428.WaitBlock[2].Object = &stru_140F0C428.WaitBlockFill11[152];
  *(_DWORD *)&stru_140F0C428.WaitBlockFill11[136] = 0;
  return result;
}
