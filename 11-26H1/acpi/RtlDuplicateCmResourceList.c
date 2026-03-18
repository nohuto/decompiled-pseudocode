/*
 * XREFs of RtlDuplicateCmResourceList @ 0x1400DBFE8
 * Callers:
 *     ACPIRootIrpStartDevice @ 0x1400DBD50 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     memmove @ 0x140072440 (memmove.c)
 */

void *__fastcall RtlDuplicateCmResourceList(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  unsigned int i; // ecx
  unsigned int *v6; // rdx
  unsigned int v7; // r11d
  unsigned int v8; // eax
  unsigned int v9; // r10d
  unsigned int v10; // esi
  void *Pool2; // rax
  void *v12; // rbx

  v2 = *a2;
  v3 = 0;
  i = 40;
  if ( *a2 )
  {
    v6 = a2 + 4;
    do
    {
      v7 = *v6;
      v8 = i + 36;
      if ( !v3 )
        v8 = i;
      v9 = 0;
      for ( i = v8; v9 < v7; v8 = i )
      {
        i = v8 + 20;
        if ( !v9 )
          i = v8;
        ++v9;
      }
      ++v3;
      v6 += 9;
    }
    while ( v3 < v2 );
  }
  v10 = i;
  Pool2 = (void *)ExAllocatePool2(64LL, i, 1383097153LL);
  v12 = Pool2;
  if ( Pool2 )
    memmove(Pool2, a2, v10);
  return v12;
}
