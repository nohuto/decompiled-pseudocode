/*
 * XREFs of StorPortAllocateRegistryBuffer @ 0x14007B1A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     PortAllocateRegistryBuffer @ 0x14012F860 (PortAllocateRegistryBuffer.c)
 */

__int64 __fastcall StorPortAllocateRegistryBuffer(void *a1, int *a2)
{
  __int64 v2; // rbx
  int *v5; // rdi
  int *v7; // [rsp+40h] [rbp+18h] BYREF
  int *v8; // [rsp+48h] [rbp+20h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !MmIsAddressValid(a1) )
    goto LABEL_10;
  RaidpPortGetAdapter((__int64)a1, &v7, &v8);
  if ( v7 )
  {
    v5 = v7 + 518;
    goto LABEL_6;
  }
  if ( !v8 )
  {
LABEL_10:
    *a2 = 0;
    return 0LL;
  }
  v5 = v8 + 230;
LABEL_6:
  v5[12] = *a2;
  if ( (int)PortAllocateRegistryBuffer(v5) < 0 )
  {
    *a2 = 0;
  }
  else
  {
    *a2 = v5[10];
    return *((_QWORD *)v5 + 4);
  }
  return v2;
}
