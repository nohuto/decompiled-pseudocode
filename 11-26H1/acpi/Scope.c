/*
 * XREFs of Scope @ 0x140030B30
 * Callers:
 *     <none>
 * Callees:
 *     PushScope @ 0x1400138A0 (PushScope.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 */

__int64 __fastcall Scope(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax

  result = GetNameSpaceObject(*(void **)(a2[10] + 32));
  if ( !(_DWORD)result )
    return PushScope(a1, a1[15], a2[5], 0LL, a2[8], a1[11], a1[40], a2[11]);
  return result;
}
