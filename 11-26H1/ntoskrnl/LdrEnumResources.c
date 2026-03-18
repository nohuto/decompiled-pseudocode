/*
 * XREFs of LdrEnumResources @ 0x140801960
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1404ABCB0 (LdrpCompareResourceNamesWithValidation.c)
 */

__int64 __fastcall LdrEnumResources(
        unsigned __int64 a1,
        const wchar_t **a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v6; // ebp
  const wchar_t **v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned int *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rcx
  const wchar_t *v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r15
  unsigned int *v20; // r14
  unsigned int v21; // eax
  const wchar_t *v22; // r8
  int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // rbp
  unsigned int *v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  unsigned int i; // r13d
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r9
  unsigned int v34; // [rsp+30h] [rbp-68h]
  unsigned int v35; // [rsp+34h] [rbp-64h]
  unsigned int v36; // [rsp+38h] [rbp-60h]
  unsigned int v37; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v38; // [rsp+40h] [rbp-58h]
  unsigned int v39; // [rsp+44h] [rbp-54h]
  unsigned int v40; // [rsp+48h] [rbp-50h]
  unsigned int v41; // [rsp+4Ch] [rbp-4Ch]
  int v45; // [rsp+B8h] [rbp+20h] BYREF

  v6 = a3;
  v7 = a2;
  v34 = 0;
  if ( a5 )
    v35 = *a4;
  else
    v35 = 0;
  *a4 = 0;
  v8 = RtlImageDirectoryEntryToData(a1, 1, 2u, &v45);
  v10 = v8;
  if ( !v8 )
    return 3221225609LL;
  v12 = (unsigned int *)(v8 + 16);
  v13 = 0;
  v14 = *(unsigned __int16 *)(v8 + 12) + (unsigned int)*(unsigned __int16 *)(v8 + 14);
  v38 = 0;
  v41 = *(unsigned __int16 *)(v8 + 12) + *(unsigned __int16 *)(v8 + 14);
  while ( 1 )
  {
    v37 = v13;
    if ( v13 >= (unsigned int)v14 )
      break;
    if ( !v6
      || (v15 = *v7, LOBYTE(v45) = 0,
                     !(unsigned int)LdrpCompareResourceNamesWithValidation(v14, v9, v15, v10, v12, &v45)) )
    {
      v16 = v12[1];
      v17 = (unsigned int)v16;
      if ( v16 >= 0 )
        return 3221225595LL;
      v18 = *v12;
      if ( (*v12 & 0x80000000) == 0 )
      {
        v19 = *(unsigned __int16 *)v12;
      }
      else
      {
        LODWORD(v18) = *v12 & 0x7FFFFFFF;
        v19 = v10 + v18;
      }
      LODWORD(v17) = v16 & 0x7FFFFFFF;
      v20 = (unsigned int *)(v17 + v10 + 16);
      v9 = *(unsigned __int16 *)(v17 + v10 + 12) + (unsigned int)*(unsigned __int16 *)(v17 + v10 + 14);
      v40 = *(unsigned __int16 *)(v17 + v10 + 12) + *(unsigned __int16 *)(v17 + v10 + 14);
      v21 = 0;
      while ( 1 )
      {
        v36 = v21;
        if ( v21 >= (unsigned int)v9 )
          break;
        if ( v6 <= 1
          || (v22 = v7[1],
              LOBYTE(v45) = 0,
              !(unsigned int)LdrpCompareResourceNamesWithValidation(v17, v9, v22, v10, v20, &v45)) )
        {
          v23 = v20[1];
          v17 = (unsigned int)v23;
          if ( v23 >= 0 )
            return 3221225595LL;
          v24 = *v20;
          if ( (*v20 & 0x80000000) == 0 )
          {
            v25 = *(unsigned __int16 *)v20;
          }
          else
          {
            LODWORD(v24) = *v20 & 0x7FFFFFFF;
            v25 = v10 + v24;
          }
          LODWORD(v17) = v23 & 0x7FFFFFFF;
          v26 = (unsigned int *)(v17 + v10 + 16);
          v27 = *(unsigned __int16 *)(v17 + v10 + 12);
          v28 = v27 + (unsigned int)*(unsigned __int16 *)(v17 + v10 + 14);
          v39 = v27 + *(unsigned __int16 *)(v17 + v10 + 14);
          for ( i = 0; i < (unsigned int)v28; ++i )
          {
            if ( a3 <= 2
              || (LOBYTE(v45) = 0, !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                                    v17,
                                                    v28,
                                                    a2[2],
                                                    v10,
                                                    v26,
                                                    &v45)) )
            {
              if ( (v26[1] & 0x80000000) != 0 )
                return 3221225595LL;
              v30 = *v26;
              if ( (*v26 & 0x80000000) == 0 )
              {
                v17 = *(unsigned __int16 *)v26;
              }
              else
              {
                LODWORD(v30) = *v26 & 0x7FFFFFFF;
                v17 = v10 + v30;
              }
              v31 = v26[1];
              v32 = 5LL * v34++;
              if ( v34 > v35 )
              {
                v38 = -1073741820;
              }
              else
              {
                v33 = a5;
                *(_QWORD *)(a5 + 8 * v32) = v19;
                *(_QWORD *)(v33 + 8 * v32 + 8) = v25;
                *(_QWORD *)(v33 + 8 * v32 + 16) = v17;
                *(_QWORD *)(v33 + 8 * v32 + 24) = a1 + *(unsigned int *)(v31 + v10);
                *(_QWORD *)(v33 + 8 * v32 + 32) = *(unsigned int *)(v31 + v10 + 4);
              }
            }
            v28 = v39;
            v26 += 2;
          }
          v6 = a3;
          v7 = a2;
        }
        v9 = v40;
        v21 = v36 + 1;
        v20 += 2;
      }
      v13 = v37;
    }
    v14 = v41;
    ++v13;
    v12 += 2;
  }
  *a4 = v34;
  return v38;
}
