/*
 * XREFs of PopPepUpdateIdleState @ 0x1403B19D8
 * Callers:
 *     PopPepUpdateConstraints @ 0x1403B37EC (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x140483A70 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetWakeHint @ 0x1404F524C (PopPepComponentSetWakeHint.c)
 *     PopPepComponentSetResidency @ 0x140611524 (PopPepComponentSetResidency.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1403AFA10 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1403B1B10 (PopPepGetComponentPreferedIdleState.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  unsigned int v7; // r9d

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    v7 = result | 0x80000000;
    if ( !a3 )
      v7 = result;
    return PopPepTriggerActivity(a1, a2, 1, v7);
  }
  return result;
}
