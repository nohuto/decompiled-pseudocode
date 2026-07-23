/*
 * XREFs of HvpResetPageProtection @ 0x1408BF0B4
 * Callers:
 *     HvResetDirtyData @ 0x1408BE918 (HvResetDirtyData.c)
 * Callees:
 *     RtlFindNextForwardRunSet @ 0x140462B30 (RtlFindNextForwardRunSet.c)
 *     HvpSetRangeProtection @ 0x1408BF43C (HvpSetRangeProtection.c)
 */

_UNKNOWN **__fastcall HvpResetPageProtection(ULONG_PTR BugCheckParameter2)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // ebp
  int v4; // r15d
  unsigned int v5; // edx
  int v6; // esi
  unsigned int v7; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = *(_DWORD *)(BugCheckParameter2 + 88);
  v4 = *(_DWORD *)(BugCheckParameter2 + 104);
  v5 = 0;
  v9 = 0;
  do
  {
    if ( v5 >= v2 )
      break;
    result = (_UNKNOWN **)RtlFindNextForwardRunSet((unsigned int *)(BugCheckParameter2 + 88), v5, &v9);
    v6 = (int)result;
    if ( !(_DWORD)result )
      break;
    v7 = v9;
    result = (_UNKNOWN **)HvpSetRangeProtection(BugCheckParameter2, v9 << 9);
    v5 = v6 + v7;
    v4 -= v6;
  }
  while ( v4 );
  return result;
}
