/*
 * XREFs of sub_140031390 @ 0x140031390
 * Callers:
 *     sub_14002EE7C @ 0x14002EE7C (sub_14002EE7C.c)
 * Callees:
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_140031390(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int *a5, unsigned int *a6)
{
  char result; // al
  __int64 RegistryBuffer; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // eax

  result = StorPortRegistryRead(a1, "HostIdentifier", 1LL);
  if ( !result && *a6 > *a5 )
  {
    StorPortFreeRegistryBuffer(a1);
    *a5 = *a6;
    RegistryBuffer = StorPortAllocateRegistryBuffer(a1, a6);
    *a4 = RegistryBuffer;
    v10 = RegistryBuffer;
    if ( !RegistryBuffer )
      return 0;
    v11 = *a5;
    if ( *a6 < *a5 )
    {
      StorPortFreeRegistryBuffer(a1);
      *a4 = 0LL;
      return 0;
    }
    if ( (v11 & 3) != 0 )
    {
      if ( v11 )
        sub_140032C80(v10, 0LL, *a5);
    }
    else
    {
      v12 = v11 >> 2;
      if ( v12 )
        sub_140032C80(v10, 0LL, 4LL * v12);
    }
    return StorPortRegistryRead(a1, "HostIdentifier", 1LL);
  }
  return result;
}
