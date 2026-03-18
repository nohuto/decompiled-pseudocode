/*
 * XREFs of ACPIRegReadEntireAcpiTable @ 0x1400B6AA8
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1400C89FC (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1400386C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIRegReadEntireAcpiTable(__int64 a1, const void **a2)
{
  _DWORD *v2; // rbx
  char *Pool2; // rdi
  unsigned int v6; // r12d
  int v7; // r15d
  __int64 i; // rsi
  int v9; // ecx
  _DWORD *v10; // r13
  unsigned int v11; // eax
  void *v12; // rax
  const void *v13; // r12
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  void *v16; // rax
  const void *v17; // r12
  unsigned int v18; // [rsp+30h] [rbp-68h]
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *a2;
  Pool2 = (char *)ExAllocatePool2(256LL, 0x4000LL, 1114661697LL);
  if ( !Pool2 )
    return 3221225626LL;
  v6 = v2[1];
  v7 = 0;
  v18 = v6;
LABEL_4:
  RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", v7);
  if ( (int)OSReadRegValue(pszDest) >= 0 )
  {
    for ( i = 0LL; ; i = (unsigned int)(*(_DWORD *)&Pool2[(unsigned int)i + 4] + i + 8) )
    {
      if ( (unsigned int)i >= 0x4000 )
      {
        ++v7;
        goto LABEL_4;
      }
      v9 = *(_DWORD *)&Pool2[i + 4];
      v10 = *a2;
      v11 = *(_DWORD *)&Pool2[i];
      if ( v9 )
      {
        v15 = v11 + v9;
        if ( v15 > v6 )
        {
          v18 = v15;
          v16 = (void *)ExAllocatePool2(64LL, v15, 1953522497LL);
          v17 = v16;
          if ( !v16 )
          {
            ExFreePoolWithTag(Pool2, 0);
            return 3221225626LL;
          }
          memmove(v16, *a2, (unsigned int)v10[1]);
          ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v17;
          v10 = v17;
        }
        memmove((char *)v10 + *(unsigned int *)&Pool2[i], &Pool2[(unsigned int)i + 8], *(unsigned int *)&Pool2[i + 4]);
      }
      else if ( v11 != v10[1] )
      {
        v18 = *(_DWORD *)&Pool2[i];
        v12 = (void *)ExAllocatePool2(64LL, v11, 1953522497LL);
        v13 = v12;
        if ( !v12 )
        {
          ExFreePoolWithTag(Pool2, 0);
          return 3221225626LL;
        }
        v14 = *(_DWORD *)&Pool2[i];
        if ( v14 >= v10[1] )
          v14 = v10[1];
        memmove(v12, *a2, v14);
        ExFreePoolWithTag((PVOID)*a2, 0);
        *a2 = v13;
      }
      v6 = v18;
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  return 0LL;
}
