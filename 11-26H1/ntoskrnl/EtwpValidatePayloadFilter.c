/*
 * XREFs of EtwpValidatePayloadFilter @ 0x1408384A0
 * Callers:
 *     EtwpAllocatePayloadFilterData @ 0x14083825C (EtwpAllocatePayloadFilterData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidatePayloadFilter(_QWORD *a1, __int16 *a2, unsigned int a3)
{
  __int16 v5; // dx
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r10
  int v9; // r13d
  int v10; // eax
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // r15d
  int v18; // esi
  int v19; // eax
  unsigned int v20; // r12d
  int v21; // eax
  unsigned int v22; // r14d
  int v23; // ecx
  int v24; // r8d
  unsigned int v25; // r15d
  __int64 v26; // rdi
  __int64 v27; // r10
  unsigned __int16 *v28; // r12
  _WORD *v29; // rdx
  unsigned int v30; // ebx
  __int64 v31; // r11
  unsigned int v32; // eax
  unsigned int v33; // ebp
  unsigned int i; // ecx
  unsigned int v35; // esi
  _WORD *v36; // rdx
  unsigned int v37; // r10d
  unsigned int j; // r11d
  unsigned int v39; // ecx
  _WORD *v40; // rcx
  int v41; // edx
  unsigned __int64 v42; // rax
  _WORD *v43; // rcx
  __int64 v44; // rax
  int v45; // edx
  _BYTE *v46; // rcx
  unsigned __int64 v47; // rax
  _BYTE *v48; // rcx
  int v50; // [rsp+0h] [rbp-A8h]
  int v51; // [rsp+4h] [rbp-A4h]
  unsigned int v52; // [rsp+Ch] [rbp-9Ch]
  int v53; // [rsp+10h] [rbp-98h]
  _WORD *v54; // [rsp+18h] [rbp-90h]
  unsigned int v55; // [rsp+28h] [rbp-80h]
  _BYTE *v56; // [rsp+30h] [rbp-78h]
  _WORD *v57; // [rsp+38h] [rbp-70h]
  __int64 v58; // [rsp+40h] [rbp-68h]
  __int64 v59; // [rsp+48h] [rbp-60h]
  __int64 v60; // [rsp+60h] [rbp-48h]
  int v61; // [rsp+C0h] [rbp+18h]
  int v62; // [rsp+C8h] [rbp+20h]

  if ( a3 < 0x50 )
    return 3221225485LL;
  if ( (unsigned __int16)a2[1] != a3 )
    return 3221225485LL;
  if ( a3 > 0x1000 )
    return 3221225485LL;
  v5 = *a2;
  if ( (v5 & 0xFFF) != 0xA66 )
    return 3221225485LL;
  if ( (v5 & 0xF000) != 0x1000 )
    return 3221225485LL;
  v6 = (unsigned __int16)a2[2];
  if ( (unsigned __int16)v6 > 0xAAu || a2[3] )
    return 3221225485LL;
  v7 = *a1 - *((_QWORD *)a2 + 2);
  if ( *a1 == *((_QWORD *)a2 + 2) )
    v7 = a1[1] - *((_QWORD *)a2 + 3);
  if ( v7 )
    return 3221225485LL;
  v8 = (unsigned __int16)a2[16];
  v9 = (unsigned __int16)a2[2];
  v10 = 24 * v6 + 56;
  if ( (_DWORD)v8 != v10 )
    return 3221225485LL;
  v11 = (unsigned __int16)a2[17];
  v12 = (unsigned __int16)a2[18];
  v13 = v11 + v10;
  if ( (_DWORD)v12 != v13 )
    return 3221225485LL;
  v14 = (unsigned __int16)a2[19];
  v15 = (unsigned __int16)a2[20];
  v16 = v14 + v13;
  if ( (_DWORD)v15 != v16 )
    return 3221225485LL;
  v17 = (unsigned __int16)a2[21];
  v18 = (unsigned __int16)a2[22];
  v19 = v17 + v16;
  if ( v18 != v19 )
    return 3221225485LL;
  v20 = (unsigned __int16)a2[23];
  v21 = v20 + v19;
  if ( (unsigned __int16)a2[24] != v21 )
    return 3221225485LL;
  v53 = (unsigned __int16)a2[25];
  if ( a3 != v53 + v21
    || v11 != 12 * (v11 / 0xC)
    || (v14 & 3) != 0
    || (v17 & 3) != 0
    || (v20 & 1) != 0
    || (v8 & 3) != 0
    || (v12 & 3) != 0
    || (v15 & 3) != 0
    || (v18 & 3) != 0 )
  {
    return 3221225485LL;
  }
  v22 = v14 >> 2;
  v50 = 0;
  v23 = 0;
  v51 = 0;
  v24 = 0;
  v62 = 0;
  v61 = 0;
  v25 = v17 >> 2;
  v26 = (__int64)a2 + v8;
  v55 = v20 >> 1;
  v27 = (__int64)a2 + v12;
  v28 = (unsigned __int16 *)(a2 + 28);
  v29 = (__int16 *)((char *)a2 + v15);
  v58 = (__int64)a2 + v12;
  v54 = (__int16 *)((char *)a2 + (unsigned __int16)a2[22]);
  v30 = 0;
  v56 = (char *)a2 + (unsigned __int16)a2[24];
  v31 = 0LL;
  v57 = v29;
  v32 = 0;
  while ( 1 )
  {
    v52 = v32;
    if ( v32 >= (unsigned __int16)a2[17] / 0xCu )
      break;
    v60 = v31 | (1LL << (*(_WORD *)v26 % 0x3Fu));
    if ( *(unsigned __int16 *)(v26 + 4) != v51 )
      return 3221225485LL;
    v33 = *(unsigned __int16 *)(v26 + 6);
    if ( v33 > v22 - v51 )
      return 3221225485LL;
    v59 = v27;
    v51 += v33;
    for ( i = 0; i < v33; ++i )
    {
      if ( *(_WORD *)(v27 + 2) >= 0x40u
        || *(_BYTE *)(v27 + 1) >= 0x40u
        || *(_BYTE *)v27 >= 0x40u
        || (*(_BYTE *)v27 & 0xFu) >= 9 )
      {
        return 3221225485LL;
      }
      v27 += 4LL;
      v58 = v27;
    }
    if ( *(unsigned __int16 *)(v26 + 8) != v62 )
      return 3221225485LL;
    v35 = *(unsigned __int16 *)(v26 + 10);
    if ( v35 > v25 - v62 )
      return 3221225485LL;
    v36 = v57;
    v62 += v35;
    while ( v30 < v35 )
    {
      if ( (*v36 & 0xFCu) > 0x20 )
        return 3221225485LL;
      if ( (unsigned __int16)v36[1] != v50 )
        return 3221225485LL;
      v37 = (unsigned __int8)*v36 >> 2;
      if ( v37 > v9 - v50 )
        return 3221225485LL;
      v50 += v37;
      for ( j = 0; j < v37; ++j )
      {
        v39 = *v28;
        if ( v39 >= v22
          || (unsigned __int16)v39 >= (unsigned __int16)v33
          || (unsigned __int16)v39 > *(unsigned __int8 *)(v26 + 3) )
        {
          return 3221225485LL;
        }
        if ( (*(_BYTE *)(v59 + 4LL * *v28) & 0xF) == 3 )
        {
          if ( *((_QWORD *)v28 + 1) != v24 || *((_QWORD *)v28 + 2) )
            return 3221225485LL;
          v45 = (int)v56;
          v46 = v56;
          v47 = (unsigned __int64)a2 + (unsigned __int16)a2[24] + (unsigned __int64)(unsigned __int16)v53;
          if ( *v56 )
          {
            do
            {
              if ( (unsigned __int64)v46 >= v47 - 1 )
                break;
              ++v46;
            }
            while ( *v46 );
            v45 = (int)v56;
          }
          v48 = v46 + 1;
          if ( (unsigned __int64)v48 > v47 )
            return 3221225485LL;
          v56 = v48;
          v24 += (_DWORD)v48 - v45;
        }
        else if ( (*(_BYTE *)(v59 + 4LL * *v28) & 0xF) == 4 )
        {
          if ( *((_QWORD *)v28 + 1) != v61 || *((_QWORD *)v28 + 2) )
            return 3221225485LL;
          v40 = v54;
          v41 = v61;
          v42 = (unsigned __int64)a2 + (unsigned __int16)a2[22] + (unsigned __int64)(unsigned __int16)a2[23];
          v9 = (unsigned __int16)a2[2];
          if ( *v54 )
          {
            do
            {
              if ( (unsigned __int64)v40 >= v42 - 2 )
                break;
              ++v40;
            }
            while ( *v40 );
            v9 = (unsigned __int16)a2[2];
            v41 = v61;
          }
          v43 = v40 + 1;
          if ( (unsigned __int64)v43 > v42 )
            return 3221225485LL;
          v44 = v43 - v54;
          v54 = v43;
          v61 = v44 + v41;
        }
        v28 += 12;
      }
      ++v30;
      v36 = v57 + 2;
      v57 += 2;
    }
    v26 += 12LL;
    v27 = v58;
    v32 = v52 + 1;
    v23 = v62;
    v30 = 0;
    v31 = v60;
  }
  if ( v31 == *((_QWORD *)a2 + 1) && v50 == v9 && v51 == v22 && v23 == v25 && v61 == v55 )
    return v53 != v24 ? 0xC000000D : 0;
  else
    return 3221225485LL;
}
