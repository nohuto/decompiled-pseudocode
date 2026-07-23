/*
 * XREFs of ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140391140
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140391040 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 * Callees:
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(__int64 a1, unsigned int *a2, unsigned int *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // r10
  unsigned int v11; // ebp
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // esi
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // edx
  unsigned int v19; // ecx
  char v20; // al
  char *v21; // rax
  __int64 *v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  char v26; // al
  __int64 result; // rax
  __int64 v28; // r9
  int v29; // eax
  bool v30; // zf
  char *v31; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v32[2]; // [rsp+28h] [rbp-100h] BYREF
  int v33; // [rsp+38h] [rbp-F0h]
  int v34; // [rsp+3Ch] [rbp-ECh] BYREF
  __int64 v35; // [rsp+40h] [rbp-E8h]
  _BYTE v36[136]; // [rsp+48h] [rbp-E0h] BYREF

  v4 = *a2;
  memset_0(v36, 0, 0x80uLL);
  v9 = *(_QWORD *)(a1 + 288);
  v10 = v36;
  v11 = *a3;
  v12 = 0;
  v32[0] = 0LL;
  v13 = 0;
  v32[1] = 0LL;
  v14 = 1024;
  v35 = 1LL;
  v15 = 0;
  v31 = v36;
  v34 = 8;
  v33 = 0;
  if ( !v9
    || (v16 = *(unsigned __int8 *)(v9 + 2), (unsigned int)v16 <= 8)
    || (v29 = SmArrayGrow(v16, v8, &v34, &v31), v10 = v31, v30 = v29 == 0, v12 = v33, !v30) )
  {
    v17 = *(_QWORD *)(a1 + 288);
    if ( v17 )
    {
      while ( 1 )
      {
        v18 = -1;
        v19 = (unsigned __int16)*(_DWORD *)v17;
        if ( HIBYTE(*(_DWORD *)v17) )
        {
          if ( (unsigned __int16)*(_DWORD *)v17 )
          {
            do
            {
              if ( *(_DWORD *)(v17 + 8LL * ((v19 + v18) >> 1) + 16) < v4 )
                v18 = (v19 + v18) >> 1;
              else
                v19 = (v19 + v18) >> 1;
            }
            while ( v18 + 1 != v19 );
          }
        }
        else if ( (unsigned __int16)*(_DWORD *)v17 )
        {
          do
          {
            if ( *(_DWORD *)(v17 + 16LL * ((v19 + v18) >> 1) + 16) > v4 )
              v19 = (v19 + v18) >> 1;
            else
              v18 = (v19 + v18) >> 1;
          }
          while ( v18 + 1 != v19 );
        }
        v20 = *(_BYTE *)(v17 + 3);
        *(_QWORD *)v10 = v17;
        if ( v20 )
          break;
        *((_QWORD *)v10 + 1) = v17 + 16 * (v19 + 1LL);
        v10 += 16;
        if ( v19 )
          v17 = *(_QWORD *)(16LL * (v19 - 1) + v17 + 24);
        else
          v17 = *(_QWORD *)(v17 + 8);
      }
      *((_QWORD *)v10 + 1) = v17 + 8 * (v19 + 2LL);
      v21 = v10;
      v10 = v31;
      v12 = ((v21 - v31) >> 4) + 1;
      v33 = v12;
    }
  }
  if ( v12 == -1 || !v12 )
    v22 = v32;
  else
    v22 = (__int64 *)&v10[16 * (v12 - 1)];
  v23 = *v22;
  v24 = v22[1] - 8;
  while ( v23 )
  {
    v24 += 8LL;
    if ( v24 >= v23 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v23 + 2) )
    {
      v28 = *(_QWORD *)(v23 + 8);
      if ( v28 )
      {
        v23 = *(_QWORD *)(v23 + 8);
        v24 = v28 + 16;
      }
      v25 = 0LL;
      if ( v28 )
        v25 = v28 + 16;
    }
    else
    {
      v25 = v24;
    }
    if ( !v25 || v4 < *(_DWORD *)v25 || (*(_BYTE *)(v25 + 7) & 1) != 0 )
      break;
    v26 = *(_BYTE *)(v25 + 6);
    if ( v26 != 3 )
    {
      if ( v26 != 1 || (*(_DWORD *)(a1 + 2120) & 4) == 0 )
        break;
      v15 = 1;
    }
    if ( v13 )
    {
      if ( v14 != *(unsigned __int16 *)(v25 + 4) )
        goto LABEL_30;
    }
    else
    {
      v14 = *(unsigned __int16 *)(v25 + 4);
    }
    if ( ++v13 >= v11 )
      break;
    ++v4;
  }
  if ( v13 )
  {
LABEL_30:
    *a3 = v13;
    result = v14;
    *a4 = v15;
    return result;
  }
  return 1024LL;
}
