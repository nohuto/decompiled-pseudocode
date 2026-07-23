/*
 * XREFs of HalpAcpiGetTableFromBios @ 0x140345224
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140344D90 (HalpAcpiIsCachedTableCompromised.c)
 * Callees:
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetRsdt @ 0x140344EE4 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x1403453F0 (HalpAcpiCheckAndMapTable.c)
 */

_DWORD *__fastcall HalpAcpiGetTableFromBios(__int64 a1, int a2, char *Str1, char *a4, _DWORD *a5, _QWORD *a6)
{
  _DWORD *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v12; // edi
  _DWORD *result; // rax
  _DWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned int v18; // r13d
  unsigned int *v19; // r15
  __int64 *v20; // r12
  __int64 v21; // rax
  __int64 TableWork; // rax
  int v23; // [rsp+90h] [rbp+8h]
  __int64 v24; // [rsp+98h] [rbp+10h] BYREF
  char *v25; // [rsp+A0h] [rbp+18h]
  char *v26; // [rsp+A8h] [rbp+20h]

  v26 = a4;
  v25 = Str1;
  v23 = a1;
  v6 = 0LL;
  LODWORD(v24) = 0;
  v7 = 0LL;
  v8 = 0LL;
  v12 = a1;
  if ( a2 == 1413763922 || a2 == 1413763928 )
    return (_DWORD *)v7;
  if ( a2 == 1413763908 )
  {
    TableWork = HalpAcpiGetTableWork(a1, 0x50434146u, 0LL, 0LL);
    if ( !TableWork )
      return (_DWORD *)v7;
    if ( *(_BYTE *)(TableWork + 8) < 3u || (v8 = *(_QWORD *)(TableWork + 140)) == 0 )
      v8 = *(unsigned int *)(TableWork + 40);
    v7 = HalpAcpiCheckAndMapTable(v12, v8, 36, 1413763908, Str1, a4, 1, (__int64)&v24);
LABEL_15:
    *a5 = v24;
    if ( v7 )
      *a6 = v8;
    return (_DWORD *)v7;
  }
  result = HalpAcpiGetRsdt(a1);
  v14 = result;
  if ( result )
  {
    v15 = (unsigned int)result[1];
    if ( *result == 1413763922 )
    {
      v14 = 0LL;
      v6 = result;
      v21 = 36LL;
      if ( (unsigned int)v15 < 0x24 )
        v21 = v15;
      v17 = (unsigned __int64)(v15 - v21) >> 2;
    }
    else
    {
      v16 = 36LL;
      if ( (unsigned int)v15 < 0x24 )
        v16 = (unsigned int)v15;
      v17 = (unsigned __int64)(v15 - v16) >> 3;
    }
    v18 = 0;
    if ( (_DWORD)v17 )
    {
      v19 = v6 + 9;
      v20 = (__int64 *)(v14 + 9);
      do
      {
        if ( v14 )
          v8 = *v20;
        else
          v8 = *v19;
        v7 = HalpAcpiCheckAndMapTable(v23, v8, 36, a2, v25, v26, 1, (__int64)&v24);
        if ( v7 )
          break;
        ++v18;
        ++v19;
        ++v20;
      }
      while ( v18 < (unsigned int)v17 );
    }
    goto LABEL_15;
  }
  return result;
}
