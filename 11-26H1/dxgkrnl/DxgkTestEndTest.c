/*
 * XREFs of DxgkTestEndTest @ 0x1402098D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkTestEndTest(__int64 a1)
{
  __int64 result; // rax

  qword_140168768 = 0LL;
  result = ExReleasePushLockExclusiveEx(&qword_140168760, 0LL);
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
