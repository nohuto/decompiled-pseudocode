/*
 * XREFs of PopPowerRequestTableLookupEntry @ 0x140AFDC50
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1404A65D0 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14042F140 (RtlLookupElementGenericTableAvl.c)
 */

__int64 __fastcall PopPowerRequestTableLookupEntry(int a1)
{
  PVOID v1; // rcx
  __int64 result; // rax
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  v1 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)&stru_140F12D20.ApcStateFill[40], &Buffer);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)v1;
  return result;
}
