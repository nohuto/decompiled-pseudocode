/*
 * XREFs of LdrEnumResources @ 0x18013BAB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1800BFFC0 (LdrpCompareResourceNamesWithValidation.c)
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
  _DWORD *v8; // rax
  __int64 v9; // rbx
  int *v11; // rsi
  unsigned int v12; // edi
  unsigned int v13; // ecx
  const wchar_t *v14; // r8
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r15
  int *v18; // r14
  unsigned int v19; // ecx
  unsigned int v20; // eax
  const wchar_t *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rbp
  int *v25; // rdi
  unsigned int v26; // r13d
  unsigned int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r9
  unsigned int v33; // [rsp+30h] [rbp-68h]
  unsigned int v34; // [rsp+34h] [rbp-64h]
  unsigned int v35; // [rsp+38h] [rbp-60h]
  unsigned int v36; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v37; // [rsp+40h] [rbp-58h]
  unsigned int v38; // [rsp+44h] [rbp-54h]
  unsigned int v39; // [rsp+48h] [rbp-50h]
  unsigned int v40; // [rsp+4Ch] [rbp-4Ch]
  int v44; // [rsp+B8h] [rbp+20h] BYREF

  v6 = a3;
  v7 = a2;
  v33 = 0;
  if ( a5 )
    v34 = *a4;
  else
    v34 = 0;
  *a4 = 0;
  v8 = RtlImageDirectoryEntryToData(a1, 1, 2u, &v44);
  v9 = (__int64)v8;
  if ( !v8 )
    return 3221225609LL;
  v11 = v8 + 4;
  v12 = 0;
  v13 = *((unsigned __int16 *)v8 + 6) + *((unsigned __int16 *)v8 + 7);
  v37 = 0;
  v40 = v13;
  while ( 1 )
  {
    v36 = v12;
    if ( v12 >= v13 )
      break;
    if ( !v6
      || (v14 = *v7, LOBYTE(v44) = 0,
                     !(unsigned int)LdrpCompareResourceNamesWithValidation(0LL, 0LL, v14, v9, v11, &v44)) )
    {
      v15 = (unsigned int)v11[1];
      if ( (int)v15 >= 0 )
        return 3221225595LL;
      v16 = (unsigned int)*v11;
      if ( (int)v16 >= 0 )
      {
        v17 = *(unsigned __int16 *)v11;
      }
      else
      {
        LODWORD(v16) = v16 & 0x7FFFFFFF;
        v17 = v9 + v16;
      }
      LODWORD(v15) = v15 & 0x7FFFFFFF;
      v18 = (int *)(v15 + v9 + 16);
      v19 = *(unsigned __int16 *)(v15 + v9 + 12) + *(unsigned __int16 *)(v15 + v9 + 14);
      v39 = v19;
      v20 = 0;
      while ( 1 )
      {
        v35 = v20;
        if ( v20 >= v19 )
          break;
        if ( v6 <= 1
          || (v21 = v7[1],
              LOBYTE(v44) = 0,
              !(unsigned int)LdrpCompareResourceNamesWithValidation(0LL, 0LL, v21, v9, v18, &v44)) )
        {
          v22 = (unsigned int)v18[1];
          if ( (int)v22 >= 0 )
            return 3221225595LL;
          v23 = (unsigned int)*v18;
          if ( (int)v23 >= 0 )
          {
            v24 = *(unsigned __int16 *)v18;
          }
          else
          {
            LODWORD(v23) = v23 & 0x7FFFFFFF;
            v24 = v9 + v23;
          }
          LODWORD(v22) = v22 & 0x7FFFFFFF;
          v25 = (int *)(v22 + v9 + 16);
          v26 = 0;
          v27 = *(unsigned __int16 *)(v22 + v9 + 12) + *(unsigned __int16 *)(v22 + v9 + 14);
          v38 = v27;
          while ( v26 < v27 )
          {
            if ( a3 <= 2
              || (LOBYTE(v44) = 0, !(unsigned int)LdrpCompareResourceNamesWithValidation(0LL, 0LL, a2[2], v9, v25, &v44)) )
            {
              if ( v25[1] < 0 )
                return 3221225595LL;
              v28 = (unsigned int)*v25;
              if ( (int)v28 >= 0 )
              {
                v29 = *(unsigned __int16 *)v25;
              }
              else
              {
                LODWORD(v28) = v28 & 0x7FFFFFFF;
                v29 = v9 + v28;
              }
              v30 = (unsigned int)v25[1];
              v31 = 5LL * v33++;
              if ( v33 > v34 )
              {
                v37 = -1073741820;
              }
              else
              {
                v32 = a5;
                *(_QWORD *)(a5 + 8 * v31) = v17;
                *(_QWORD *)(v32 + 8 * v31 + 8) = v24;
                *(_QWORD *)(v32 + 8 * v31 + 16) = v29;
                *(_QWORD *)(v32 + 8 * v31 + 24) = a1 + *(unsigned int *)(v30 + v9);
                *(_QWORD *)(v32 + 8 * v31 + 32) = *(unsigned int *)(v30 + v9 + 4);
              }
            }
            v27 = v38;
            ++v26;
            v25 += 2;
          }
          v6 = a3;
          v7 = a2;
        }
        v19 = v39;
        v20 = v35 + 1;
        v18 += 2;
      }
      v12 = v36;
    }
    v13 = v40;
    ++v12;
    v11 += 2;
  }
  *a4 = v33;
  return v37;
}
