/*
 * XREFs of ConsumeghBmpDev @ 0x1402FDD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ConsumeghBmpDev(int a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = 0LL;
  return result;
}
