/*
 * XREFs of Device @ 0x14004E4C0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     PushScope @ 0x1400138A0 (PushScope.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Device(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax

  v2 = a2 + 8;
  result = CreateNameSpaceObject((_QWORD *)a1[40], *(_QWORD *)(a2[10] + 32), a1[10], a1[11], a2 + 8, 0);
  if ( !(_DWORD)result )
  {
    *(_WORD *)(*v2 + 66) = 6;
    if ( ghCreate )
      ghCreate(6LL, *v2 + 120);
    return PushScope(a1, a1[15], a2[5], 0LL, *v2, a1[11], a1[40], a2[11]);
  }
  return result;
}
