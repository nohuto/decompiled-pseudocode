/*
 * XREFs of FindExportedRoutineByName @ 0x1400C96E4
 * Callers:
 *     NdisGetRoutineAddress @ 0x1400C97E0 (NdisGetRoutineAddress.c)
 * Callees:
 *     <none>
 */

char *__fastcall FindExportedRoutineByName(char *a1, __int64 a2)
{
  char *v4; // rax
  char *v5; // r8
  int v6; // r9d
  char *v7; // rbp
  char *v8; // rsi
  int v9; // ecx
  __int64 v10; // rdx
  char *v11; // r10
  signed __int64 v12; // rdi
  int v13; // r11d
  int v14; // eax
  __int64 v15; // rcx
  char *result; // rax
  ULONG v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0;
  v4 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0, &v17);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = 0;
  v7 = &a1[*((unsigned int *)v4 + 8)];
  v8 = &a1[*((unsigned int *)v4 + 9)];
  v9 = *((_DWORD *)v4 + 6) - 1;
  LODWORD(v10) = 0;
  do
  {
    if ( v9 < 0 )
      break;
    v11 = *(char **)(a2 + 8);
    v10 = (unsigned int)(v6 + v9) >> 1;
    v12 = &a1[*(unsigned int *)&v7[4 * v10]] - v11;
    do
    {
      v13 = (unsigned __int8)v11[v12];
      v14 = (unsigned __int8)*v11 - v13;
      if ( v14 )
        break;
      ++v11;
    }
    while ( v13 );
    if ( v14 >= 0 )
    {
      if ( v14 <= 0 )
        break;
      v6 = v10 + 1;
    }
    else
    {
      v9 = v10 - 1;
    }
  }
  while ( v9 >= (unsigned int)v6 );
  if ( v9 < v6 )
    return 0LL;
  v15 = *(unsigned __int16 *)&v8[2 * (unsigned int)v10];
  if ( (unsigned int)v15 >= *((_DWORD *)v5 + 5) )
    return 0LL;
  result = &a1[*(unsigned int *)&a1[4 * v15 + *((unsigned int *)v5 + 7)]];
  if ( result > v5 && result < &v5[v17] )
    return 0LL;
  return result;
}
