/*
 * XREFs of HalMatchAcpiOemTableId @ 0x140344890
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall HalMatchAcpiOemTableId(__int64 a1, __int64 a2, int **a3, int a4)
{
  unsigned int v5; // edi
  int v6; // ebx
  __int64 TableWork; // rbx
  int *v8; // rdx
  size_t v9; // r8
  __int64 Buf1; // [rsp+20h] [rbp-18h] BYREF

  v5 = 1;
  if ( a4 == 2 )
  {
    if ( *a3 )
    {
      if ( a3[1] )
      {
        v6 = **a3;
        ExAcquireFastMutex(&HalpAcpiTableCacheLock);
        TableWork = HalpAcpiGetTableWork(0, v6, 0, 0);
        KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
        if ( TableWork )
        {
          v8 = a3[1];
          v9 = -1LL;
          Buf1 = 0LL;
          do
            ++v9;
          while ( *((_BYTE *)v8 + v9) );
          if ( v9 == 1 )
          {
            if ( *(_BYTE *)v8 == 42 )
              return 2;
          }
          else if ( v9 > 8 )
          {
            v9 = 8LL;
          }
          memmove(&Buf1, v8, v9);
          return memcmp(&Buf1, (const void *)(TableWork + 16), 8uLL) == 0 ? 2 : 0;
        }
      }
    }
  }
  return v5;
}
