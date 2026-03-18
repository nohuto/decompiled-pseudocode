/*
 * XREFs of GreGetSystemFont @ 0x14014D130
 * Callers:
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetSystemFont(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v2 + 3008) + 104LL);
  result = *(_QWORD *)(*(_QWORD *)(v2 + 3016) + 104LL);
  if ( !result )
    return *(_QWORD *)(*(_QWORD *)(v2 + 3008) + 104LL);
  return result;
}
