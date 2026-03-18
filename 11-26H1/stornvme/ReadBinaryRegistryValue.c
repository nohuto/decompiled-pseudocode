/*
 * XREFs of ReadBinaryRegistryValue @ 0x140030398
 * Callers:
 *     GetRegistrySettings @ 0x14002DEA8 (GetRegistrySettings.c)
 * Callees:
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall ReadBinaryRegistryValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  char result; // al
  __int64 RegistryBuffer; // rax
  void *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // eax

  result = StorPortRegistryRead(a1, "HostIdentifier", 1LL);
  if ( !result && *a6 > *a5 )
  {
    StorPortFreeRegistryBuffer(a1);
    *a5 = *a6;
    RegistryBuffer = StorPortAllocateRegistryBuffer(a1, a6);
    *a4 = RegistryBuffer;
    v10 = (void *)RegistryBuffer;
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
        memset(v10, 0, *a5);
    }
    else
    {
      v12 = v11 >> 2;
      if ( v12 )
        memset(v10, 0, 4LL * v12);
    }
    return StorPortRegistryRead(a1, "HostIdentifier", 1LL);
  }
  return result;
}
