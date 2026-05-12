/*
 * XREFs of StorPortFreeRegistryBuffer @ 0x14007B5E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     PortFreeRegistryBuffer @ 0x14005B9D4 (PortFreeRegistryBuffer.c)
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
    RaidpPortGetAdapter((__int64)a1, &v4, &v5);
    if ( v4 )
    {
      v3 = v4 + 518;
    }
    else
    {
      result = (unsigned __int8)v5;
      if ( !v5 )
        return result;
      v3 = v5 + 230;
    }
    return PortFreeRegistryBuffer((__int64)v3);
  }
  return result;
}
