/*
 * XREFs of StorPortFreeRegistryBuffer @ 0x140073D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_140055690 @ 0x140055690 (sub_140055690.c)
 */

BOOLEAN __fastcall StorPortFreeRegistryBuffer(void *a1)
{
  BOOLEAN result; // al
  int *v3; // rcx
  int *v4; // [rsp+40h] [rbp+18h] BYREF
  int *v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  result = MmIsAddressValid(a1);
  if ( result )
  {
    sub_1400273F0((__int64)a1, &v4, &v5);
    if ( v4 )
    {
      v3 = v4 + 502;
    }
    else
    {
      result = (unsigned __int8)v5;
      if ( !v5 )
        return result;
      v3 = v5 + 226;
    }
    return sub_140055690((__int64)v3);
  }
  return result;
}
