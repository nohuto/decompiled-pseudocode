/*
 * XREFs of RtlIsApiSetImplemented @ 0x180148410
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetQuerySchemaInfo2 @ 0x180111FAC (ApiSetQuerySchemaInfo2.c)
 */

__int64 __fastcall RtlIsApiSetImplemented(_DWORD *a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  result = ApiSetQuerySchemaInfo2((__int64)NtCurrentPeb()->ApiSetMap, a1, &v2);
  if ( (int)result >= 0 )
    return v2 != 0 ? 0xC0000225 : 0;
  return result;
}
