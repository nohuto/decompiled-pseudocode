/*
 * XREFs of AmdPctGetPlatformCtr @ 0x140040C10
 * Callers:
 *     <none>
 * Callees:
 *     AmdPctPlatformCounterState @ 0x1400028B8 (AmdPctPlatformCounterState.c)
 */

__int64 __fastcall AmdPctGetPlatformCtr(__int64 a1, int a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r10
  _QWORD *v4; // r11
  __int64 result; // rax

  if ( a2 >= 3 )
    return 3221225485LL;
  v2 = AmdPctPlatformCounterState(a1, a2);
  result = 0LL;
  if ( !*(_BYTE *)v2 )
    return 3221225659LL;
  *v3 = *(_QWORD *)(v2 + 8);
  *v4 = *(_QWORD *)(v2 + 32);
  return result;
}
