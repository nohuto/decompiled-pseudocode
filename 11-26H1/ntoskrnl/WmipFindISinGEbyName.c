/*
 * XREFs of WmipFindISinGEbyName @ 0x140A0A608
 * Callers:
 *     WmipMangleInstanceName @ 0x140A0B280 (WmipMangleInstanceName.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     _wtoi @ 0x140538D50 (_wtoi.c)
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 *     WmipIsNumber @ 0x140AFA4F4 (WmipIsNumber.c)
 */

ULONG_PTR __fastcall WmipFindISinGEbyName(__int64 a1, const wchar_t *a2, unsigned int *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v7; // rbp
  ULONG_PTR i; // rbx
  int v9; // eax
  unsigned int j; // edx
  const wchar_t *v11; // r8
  int v12; // eax
  int v13; // ecx
  const wchar_t *v14; // rdx
  size_t v15; // rdi
  const wchar_t *v17; // rdi
  unsigned int v18; // eax
  unsigned int *v19; // rdx
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  __int64 v22; // r8

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v7 = a1 + 56;
  for ( i = *(_QWORD *)(a1 + 56); ; i = *(_QWORD *)i )
  {
    if ( i == v7 )
    {
      i = 0LL;
      goto LABEL_21;
    }
    v9 = *(_DWORD *)(i + 16);
    if ( (v9 & 1) != 0 )
      break;
    if ( (v9 & 2) != 0 )
    {
      for ( j = 0; j < *(_DWORD *)(i + 72); ++j )
      {
        v11 = a2;
        do
        {
          v12 = *(const wchar_t *)((char *)v11 + *(_QWORD *)(*(_QWORD *)(i + 88) + 8LL * j) - (_QWORD)a2);
          v13 = *v11 - v12;
          if ( v13 )
            break;
          ++v11;
        }
        while ( v12 );
        if ( !v13 )
        {
          *a3 = j;
          goto LABEL_20;
        }
      }
    }
LABEL_15:
    ;
  }
  v14 = (const wchar_t *)(*(_QWORD *)(i + 88) + 4LL);
  v15 = -1LL;
  do
    ++v15;
  while ( v14[v15] );
  if ( v15 >= v3 )
    goto LABEL_15;
  if ( wcsncmp(a2, v14, v15) )
    goto LABEL_15;
  v17 = &a2[v15];
  v18 = wtoi(v17);
  v19 = *(unsigned int **)(i + 88);
  v20 = v18;
  v21 = *v19;
  if ( v18 < *v19 )
    goto LABEL_15;
  v22 = v21 + *(_DWORD *)(i + 72);
  if ( v18 >= (unsigned int)v22 || !v18 && !(unsigned __int8)WmipIsNumber(v17, v19, v22, 0LL) )
    goto LABEL_15;
  *a3 = v20 - v21;
LABEL_20:
  WmipReferenceEntry(i);
LABEL_21:
  KeReleaseMutex(&WmipSMMutex, 0);
  return i;
}
