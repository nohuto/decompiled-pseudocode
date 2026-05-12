/*
 * XREFs of FindNvmeAuthKey @ 0x140074F00
 * Callers:
 *     AddNvmeAuthKey @ 0x14007491C (AddNvmeAuthKey.c)
 *     RemoveNvmeAuthKey @ 0x140076C04 (RemoveNvmeAuthKey.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall FindNvmeAuthKey(unsigned __int16 a1, const void *a2)
{
  __int64 v3; // rdi
  unsigned __int16 *result; // rax
  unsigned __int16 *v5; // rbx
  unsigned int v6; // eax
  PVOID RestartKey; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  RestartKey = 0LL;
  while ( 1 )
  {
    result = (unsigned __int16 *)RtlEnumerateGenericTableWithoutSplaying(&NvmeAuthKeyTable, &RestartKey);
    v5 = result;
    if ( !result )
      break;
    v6 = result[5];
    if ( (_WORD)v6 == (_WORD)v3 && RtlCompareMemory(v5 + 138, a2, v6) == v3 )
      return v5;
  }
  return result;
}
