/*
 * XREFs of _PnpCmMatchCallbackRoutine @ 0x14080FFD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140950170 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 __fastcall PnpCmMatchCallbackRoutine(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // r10

  result = CmMapCmObjectTypeToPnpObjectType(a3);
  if ( (_DWORD)result )
    return guard_dispatch_icall_no_overrides(v4);
  return result;
}
