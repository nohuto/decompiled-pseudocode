/*
 * XREFs of MiFindExport @ 0x14097EEA0
 * Callers:
 *     MiSnapThunk @ 0x14097ECD8 (MiSnapThunk.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall MiFindExport(char *a1, __int64 a2, _WORD *a3, char **a4, unsigned __int16 *a5)
{
  unsigned int *v9; // r10
  unsigned __int16 *v10; // rax
  char *v11; // r15
  __int64 v12; // rcx
  char *v13; // rdi
  unsigned int v14; // r11d
  char *v15; // rdx
  unsigned __int8 *v16; // rcx
  signed __int64 v17; // rdx
  int v18; // r9d
  int v19; // r8d
  int v20; // r9d
  int v21; // r11d
  int v22; // ecx
  unsigned __int8 *v23; // r8
  int v24; // esi
  int v25; // edx
  unsigned __int16 v27; // dx
  char *v28; // rdx
  ULONG v29[10]; // [rsp+20h] [rbp-28h] BYREF

  v29[0] = 0;
  v9 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 0, v29);
  if ( !v9 )
    return 3221226083LL;
  v10 = a5;
  if ( *(__int64 *)a3 < 0 )
  {
    if ( !a5 )
    {
      v27 = *a3 - *((_WORD *)v9 + 8);
      goto LABEL_23;
    }
  }
  else if ( !a5 )
  {
    v10 = (unsigned __int16 *)(*(_QWORD *)a3 + a2);
  }
  v11 = &a1[v9[8]];
  v12 = *v10;
  v13 = &a1[v9[9]];
  v14 = v9[6];
  if ( (unsigned int)v12 >= v14 )
    goto LABEL_10;
  v15 = &a1[*(unsigned int *)&v11[4 * v12]];
  v16 = (unsigned __int8 *)(v10 + 1);
  v17 = v15 - (char *)(v10 + 1);
  do
  {
    v18 = v16[v17];
    v19 = *v16 - v18;
    if ( v19 )
      break;
    ++v16;
  }
  while ( v18 );
  if ( v19 )
  {
LABEL_10:
    v20 = 0;
    if ( v14 )
    {
      v21 = v14 - 1;
      while ( v21 >= v20 )
      {
        v22 = (v20 + v21) >> 1;
        v23 = (unsigned __int8 *)(v10 + 1);
        do
        {
          v24 = v23[&a1[*(unsigned int *)&v11[4 * v22]] - (char *)(v10 + 1)];
          v25 = *v23 - v24;
          if ( v25 )
            break;
          ++v23;
        }
        while ( v24 );
        if ( v25 >= 0 )
        {
          if ( v25 <= 0 )
          {
            v27 = *(_WORD *)&v13[2 * v22];
            goto LABEL_23;
          }
          v20 = v22 + 1;
        }
        else
        {
          if ( !v22 )
            return 3221226083LL;
          v21 = v22 - 1;
        }
      }
    }
    return 3221226083LL;
  }
  v27 = *(_WORD *)&v13[2 * *v10];
LABEL_23:
  if ( v27 >= v9[5] )
    return 3221226082LL;
  v28 = &a1[*(unsigned int *)&a1[4 * v27 + v9[7]]];
  *a4 = v28;
  if ( v28 > (char *)v9 )
    return v28 < (char *)v9 + v29[0] ? 0xC0000016 : 0;
  else
    return 0LL;
}
