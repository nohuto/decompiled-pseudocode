/*
 * XREFs of PctGetPlatformCtr @ 0x140043A50
 * Callers:
 *     <none>
 * Callees:
 *     PctPlatformCounterState @ 0x140002B50 (PctPlatformCounterState.c)
 */

__int64 __fastcall PctGetPlatformCtr(__int64 a1, int a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r10
  _QWORD *v4; // r11
  __int64 result; // rax

  if ( a2 >= 5 )
    return 3221225485LL;
  v2 = PctPlatformCounterState(a1, a2);
  result = 0LL;
  if ( !*(_BYTE *)v2 )
    return 3221225659LL;
  *v3 = *(_QWORD *)(v2 + 8);
  *v4 = *(_QWORD *)(v2 + 32);
  return result;
}
