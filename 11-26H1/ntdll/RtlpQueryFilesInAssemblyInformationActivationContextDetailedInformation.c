/*
 * XREFs of RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1801133D4
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x1800E5618 (RtlpLocateActivationContextSectionForQuery.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
        _DWORD *a1,
        unsigned int *a2,
        _DWORD *a3,
        size_t a4,
        size_t *a5)
{
  size_t *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v10; // r8d
  int v11; // edx
  __int64 v12; // r14
  unsigned int v13; // r8d
  unsigned int v14; // edx
  int v15; // r10d
  __int64 v16; // rbp
  unsigned int i; // ecx
  __int64 v18; // r9
  _DWORD *v19; // rdi
  __int64 v20; // r12
  unsigned __int64 v21; // rcx
  _WORD *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r12
  unsigned int j; // ebp
  __int64 v26; // rdx
  __int64 v28; // [rsp+38h] [rbp-80h]
  __int64 v29[11]; // [rsp+60h] [rbp-58h] BYREF
  int v30; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v31; // [rsp+C8h] [rbp+10h] BYREF
  int v32; // [rsp+D0h] [rbp+18h] BYREF
  size_t v33; // [rsp+D8h] [rbp+20h]

  v33 = a4;
  v5 = a5;
  v6 = 0;
  v31 = -1073741595;
  v29[0] = 0LL;
  v32 = 0;
  v30 = 0;
  if ( a5 )
    *a5 = 0LL;
  v10 = *a2;
  v11 = *(_DWORD *)((char *)a1 + (unsigned int)a1[6] + 8);
  if ( v10 >= v11 - 1 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      "RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation",
      v10,
      v11);
    return (unsigned int)-1073741811;
  }
  RtlpLocateActivationContextSectionForQuery(&v30, (int *)&v31, a3, a4, v5, 0x68uLL, a1, v28, 2u, v29, &v32);
  if ( v30 == 2 )
    return v31;
  v12 = v29[0];
  v13 = a2[1];
  v14 = *(_DWORD *)(v29[0] + 20);
  if ( v13 >= v14 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() received invalid file index (%u, max is %u) in Assembly (%u)\n",
      "RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation",
      v13,
      v14,
      *a2);
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)(v29[0] + 24) )
  {
    v15 = 0;
    v16 = v29[0] + *(unsigned int *)(v29[0] + 24);
    for ( i = 0; ; ++i )
    {
      v18 = i;
      if ( i >= v14 )
        break;
      if ( *(_DWORD *)(v16 + 24LL * i + 20) == *a2 + 1 )
      {
        if ( v15 == v13 && *(_DWORD *)(v16 + 24LL * i + 12) )
        {
          _mm_lfence();
          v19 = (_DWORD *)(v29[0] + *(unsigned int *)(v16 + 24LL * i + 12));
          if ( !v19 )
            return (unsigned int)-1072365547;
          v20 = 3LL * i;
          v21 = 32LL;
          if ( *(_DWORD *)(v16 + 24 * v18 + 8) )
            v21 = *(unsigned int *)(v16 + 24 * v18 + 8) + 34LL;
          if ( v19[2] )
            v21 += (unsigned int)v19[2] + 2LL;
          if ( v21 <= a4 )
          {
            v22 = a3 + 8;
            *a3 = v19[1];
            a3[1] = *(_DWORD *)(v16 + 24 * v18 + 8);
            a3[2] = v19[2];
            *((_QWORD *)a3 + 2) = 0LL;
            *((_QWORD *)a3 + 3) = 0LL;
            if ( *(_DWORD *)(v16 + 24 * v18 + 8) )
            {
              memmove(
                a3 + 8,
                (const void *)(v12 + *(unsigned int *)(v16 + 24 * v18 + 4)),
                *(unsigned int *)(v16 + 24 * v18 + 8));
              *((_QWORD *)a3 + 2) = v22;
              v23 = *(unsigned int *)(v16 + 8 * v20 + 8);
              *(_WORD *)((char *)v22 + v23) = 0;
              v22 = (_WORD *)((char *)a3 + v23 + 34);
            }
            if ( v19[2] )
            {
              if ( v19[4] )
              {
                v24 = v12 + 44LL * (unsigned int)v19[4];
                if ( v24 )
                {
                  *((_QWORD *)a3 + 3) = v22;
                  for ( j = 0; j < v19[3]; ++j )
                  {
                    v26 = *(unsigned int *)(v24 + 8LL * j + 4);
                    if ( (char *)v22 + v26 + 2 > (char *)a3 + v33 )
                      return (unsigned int)-1072365547;
                    if ( (_DWORD)v26 )
                    {
                      memmove(v22, (const void *)(v12 + v26), *(unsigned int *)(v24 + 8LL * j));
                      v22 = (_WORD *)((char *)v22 + *(unsigned int *)(v24 + 8LL * j));
                    }
                  }
                  *v22 = 0;
                }
              }
            }
          }
          else
          {
            if ( v5 )
              *v5 = v21;
            return (unsigned int)-1073741789;
          }
          return v6;
        }
        ++v15;
      }
    }
  }
  return (unsigned int)-1072365547;
}
