/*
 * XREFs of RtlpQueryInformationActivationContextDetailedInformation @ 0x1800E2114
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x18002B600 (RtlpLocateActivationContextSection.c)
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x1800E23E4 (RtlpCrackActivationContextStringSectionHeader.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryInformationActivationContextDetailedInformation(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // rsi
  int v9; // eax
  int v10; // r8d
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v14; // r8d
  char *v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rbp
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  _BYTE *v26; // rcx
  int v27; // [rsp+20h] [rbp-78h]
  int v28; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a5;
  v29 = 0LL;
  v28 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( a1 )
  {
    v9 = RtlpLocateActivationContextSection(a1, 0LL, 1u, &v29, &v28);
    v11 = v9;
    if ( v9 != -1072365567 )
    {
      if ( v9 >> 31 == -1 )
        return v11;
      v11 = RtlpCrackActivationContextStringSectionHeader(v29, v28, v10, (unsigned int)&a5, v27);
      if ( (v11 & 0x80000000) != 0 )
        return v11;
      v12 = (unsigned int)a1[6];
      v13 = 1LL;
      v14 = *(_DWORD *)((char *)a1 + v12 + 8);
      v15 = (char *)a1 + *(unsigned int *)((char *)a1 + v12 + 12);
      if ( v14 > 1 )
      {
        v26 = v15 + 24;
        while ( (*v26 & 2) == 0 )
        {
          v13 = (unsigned int)(v13 + 1);
          v26 += 24;
          if ( (unsigned int)v13 >= v14 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        if ( (_DWORD)v13 == v14 )
        {
          DbgPrintEx(
            0x33u,
            0,
            "SXS: %s() found activation context data at %p with assembly roster that has no root\n",
            "RtlpQueryInformationActivationContextDetailedInformation",
            a1);
          return (unsigned int)-1072365565;
        }
      }
      v16 = 64LL;
      v17 = *(unsigned int *)&v15[24 * v13 + 16];
      v18 = *(unsigned int *)((char *)a1 + v17 + 20);
      if ( (_DWORD)v18 )
        v16 = v18 + 66;
      v19 = *(unsigned int *)((char *)a1 + v17 + 40);
      if ( (_DWORD)v19 )
        v16 += v19 + 2;
      v11 = 0;
      if ( MEMORY[0x2C] )
        v16 += MEMORY[0x2C] + 2LL;
      if ( v16 <= a4 )
      {
        v20 = (char *)(a3 + 16);
        *a3 = a1[7];
        a3[1] = a1[2];
        a3[2] = *(_DWORD *)((char *)a1 + v12 + 8) - 1;
        a3[3] = *(_DWORD *)((char *)a1 + v17 + 16);
        a3[4] = *(_DWORD *)((char *)a1 + v17 + 20) >> 1;
        *((_QWORD *)a3 + 5) = 0LL;
        a3[5] = *(_DWORD *)((char *)a1 + v17 + 36);
        a3[6] = *(_DWORD *)((char *)a1 + v17 + 40) >> 1;
        *((_QWORD *)a3 + 6) = 0LL;
        a3[7] = MEMORY[0x28];
        a3[8] = MEMORY[0x2C] >> 1;
        *((_QWORD *)a3 + 7) = 0LL;
        v21 = *(_DWORD *)((char *)a1 + v17 + 20);
        if ( v21 )
        {
          memmove(a3 + 16, (const void *)(v29 + *(unsigned int *)((char *)a1 + v17 + 24)), v21);
          *((_QWORD *)a3 + 5) = v20;
          v22 = *(unsigned int *)((char *)a1 + v17 + 20);
          *(_WORD *)&v20[v22] = 0;
          v20 = (char *)a3 + v22 + 66;
          v11 = 0;
        }
        v23 = *(_DWORD *)((char *)a1 + v17 + 40);
        if ( v23 )
        {
          memmove(v20, (const void *)(v29 + *(unsigned int *)((char *)a1 + v17 + 44)), v23);
          *((_QWORD *)a3 + 6) = v20;
          v24 = *(unsigned int *)((char *)a1 + v17 + 40);
          *(_WORD *)&v20[v24] = 0;
          v20 += v24 + 2;
          v11 = 0;
        }
        if ( MEMORY[0x2C] )
        {
          memmove(v20, (const void *)MEMORY[0x30], MEMORY[0x2C]);
          *((_QWORD *)a3 + 7) = v20;
          v11 = 0;
          *(_WORD *)&v20[MEMORY[0x2C]] = 0;
        }
        if ( v5 )
          *v5 = v16;
        return v11;
      }
      if ( v5 )
        *v5 = v16;
      return (unsigned int)-1073741789;
    }
  }
  if ( a4 < 0x40 )
    return (unsigned int)-1073741789;
  memset_thunk_772440563353939046(a3, 0, 0x40uLL);
  if ( v5 )
    *v5 = 64LL;
  return 0;
}
