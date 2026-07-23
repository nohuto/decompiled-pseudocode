/*
 * XREFs of RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180108C54
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x18002B600 (RtlpLocateActivationContextSection.c)
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryAssemblyInformationActivationContextDetailedInformation(
        _DWORD *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // ecx
  char *v12; // r8
  char *v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rbx
  char *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v22 = 0LL;
  v23 = 0;
  if ( a5 )
    *a5 = 0LL;
  v9 = (unsigned int)a1[6];
  v10 = *(unsigned int *)((char *)a1 + v9 + 12);
  v11 = *(_DWORD *)((char *)a1 + v9 + 8);
  v12 = (char *)a1 + v10;
  if ( a2 >= v11 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      "RtlpQueryAssemblyInformationActivationContextDetailedInformation",
      a2,
      v11);
    return (unsigned int)-1073741811;
  }
  _mm_lfence();
  v13 = (char *)a1 + *(unsigned int *)&v12[24 * a2 + 16];
  v14 = RtlpLocateActivationContextSection(a1, 0LL, 1u, &v22, &v23);
  v15 = v14;
  if ( v14 != -1072365567 )
  {
    if ( v14 >> 31 == -1 )
      return v15;
    v16 = 104LL;
    if ( *((_DWORD *)v13 + 2) )
      v16 = *((unsigned int *)v13 + 2) + 106LL;
    if ( *((_DWORD *)v13 + 5) )
      v16 += *((unsigned int *)v13 + 5) + 2LL;
    if ( *((_DWORD *)v13 + 10) )
      v16 += *((unsigned int *)v13 + 10) + 2LL;
    if ( *((_DWORD *)v13 + 20) )
      v16 += *((unsigned int *)v13 + 20) + 2LL;
    if ( v16 <= a4 )
    {
      v17 = (char *)(a3 + 26);
      *a3 = *((_DWORD *)v13 + 1);
      a3[1] = *((_DWORD *)v13 + 2);
      a3[2] = *((_DWORD *)v13 + 4);
      a3[3] = *((_DWORD *)v13 + 5);
      *((_QWORD *)a3 + 2) = *(_QWORD *)(v13 + 28);
      a3[6] = *((_DWORD *)v13 + 9);
      a3[7] = *((_DWORD *)v13 + 10);
      *((_QWORD *)a3 + 4) = *((_QWORD *)v13 + 6);
      a3[10] = *((_DWORD *)v13 + 14);
      a3[11] = *((_DWORD *)v13 + 16);
      a3[12] = *((_DWORD *)v13 + 17);
      a3[13] = *((_DWORD *)v13 + 18);
      a3[14] = *((_DWORD *)v13 + 19);
      a3[15] = *((_DWORD *)v13 + 20);
      *((_QWORD *)a3 + 8) = 0LL;
      *((_QWORD *)a3 + 9) = 0LL;
      *((_QWORD *)a3 + 10) = 0LL;
      *((_QWORD *)a3 + 11) = 0LL;
      a3[24] = *((_DWORD *)v13 + 22);
      if ( *((_DWORD *)v13 + 2) )
      {
        memmove(a3 + 26, (const void *)(v22 + *((unsigned int *)v13 + 3)), *((unsigned int *)v13 + 2));
        *((_QWORD *)a3 + 8) = v17;
        v18 = *((unsigned int *)v13 + 2);
        *(_WORD *)&v17[v18] = 0;
        v17 = (char *)a3 + v18 + 106;
      }
      if ( *((_DWORD *)v13 + 5) )
      {
        memmove(v17, (const void *)(v22 + *((unsigned int *)v13 + 6)), *((unsigned int *)v13 + 5));
        *((_QWORD *)a3 + 9) = v17;
        v19 = *((unsigned int *)v13 + 5);
        *(_WORD *)&v17[v19] = 0;
        v17 += v19 + 2;
      }
      if ( *((_DWORD *)v13 + 10) )
      {
        memmove(v17, (const void *)(v22 + *((unsigned int *)v13 + 11)), *((unsigned int *)v13 + 10));
        *((_QWORD *)a3 + 10) = v17;
        v20 = *((unsigned int *)v13 + 10);
        *(_WORD *)&v17[v20] = 0;
        v17 += v20 + 2;
      }
      if ( *((_DWORD *)v13 + 20) )
      {
        memmove(v17, (const void *)(v22 + *((unsigned int *)v13 + 21)), *((unsigned int *)v13 + 20));
        *((_QWORD *)a3 + 11) = v17;
        *(_WORD *)&v17[*((unsigned int *)v13 + 20)] = 0;
      }
      goto LABEL_23;
    }
    if ( v5 )
      *v5 = v16;
    return (unsigned int)-1073741789;
  }
  v16 = 104LL;
  if ( a4 < 0x68 )
    return (unsigned int)-1073741789;
  memset_thunk_772440563353939046(a3, 0, 0x68uLL);
LABEL_23:
  if ( v5 )
    *v5 = v16;
  return 0;
}
