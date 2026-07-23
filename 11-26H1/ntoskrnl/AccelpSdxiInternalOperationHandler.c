/*
 * XREFs of AccelpSdxiInternalOperationHandler @ 0x1406E4C90
 * Callers:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 * Callees:
 *     AccelpWaitForCompletionBusySpin @ 0x140526FC4 (AccelpWaitForCompletionBusySpin.c)
 *     AccelpGetCopyBuffer @ 0x1406E3840 (AccelpGetCopyBuffer.c)
 */

__int64 __fastcall AccelpSdxiInternalOperationHandler(int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int8 v32; // dl
  __int64 result; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  char v43; // r8
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  char v49; // al
  unsigned __int64 v50; // rdx
  char *v51; // r11
  __int64 v52; // r10
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // r8
  signed __int64 v55; // r9
  _QWORD *v56; // r8
  __int64 v57; // r10
  _QWORD *v58; // rcx
  unsigned __int64 *v59; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v60; // [rsp+50h] [rbp+18h]
  signed __int64 *v61; // [rsp+58h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 1);
  v3 = 0LL;
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 16);
  v5 = *a1;
  if ( !v5 )
  {
    v45 = 32;
    *(_DWORD *)a2 = 64;
    *(_DWORD *)(a2 + 8) = 32;
    goto LABEL_61;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v47 = *(_DWORD *)(v3 + 184);
    v48 = *((_QWORD *)a1 + 5);
    switch ( v47 )
    {
      case 1:
        if ( *(_DWORD *)(v3 + 188) != 1 && *(_DWORD *)(v3 + 188) != 2 )
        {
          if ( *(_DWORD *)(v3 + 188) == 3 )
          {
            v49 = *(_BYTE *)(v48 + 6) != 1;
            goto LABEL_48;
          }
LABEL_50:
          v50 = 0LL;
          v51 = (char *)*((_QWORD *)a1 + 4);
          v52 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 48LL);
          v61 = (signed __int64 *)*((_QWORD *)a1 + 7);
          v53 = *(unsigned int *)(v52 + 24);
          v59 = (unsigned __int64 *)(v52 + 16);
          v60 = (unsigned __int64 *)(v52 + 8);
          while ( 1 )
          {
            v54 = *v59;
            if ( *v60 > *v59 )
              break;
            v55 = v54 + 1;
            if ( v54 + 1 - *v60 <= v53 && v54 == _InterlockedCompareExchange64((volatile signed __int64 *)v59, v55, v54) )
            {
              v56 = (_QWORD *)(v52 + ((v54 % v53 + 1) << 6));
              v57 = 7LL;
              v58 = v56 + 1;
              do
              {
                *v58 = *(_QWORD *)((char *)v58 + v51 - (char *)v56);
                ++v58;
                --v57;
              }
              while ( v57 );
              *v56 = *(_QWORD *)v51;
              *v61 = v55;
              return 0LL;
            }
            if ( v50 >= 0xA )
              return 3236888577LL;
            ++v50;
          }
          return 3221225473LL;
        }
        break;
      case 2:
        if ( (*(_BYTE *)(v48 + 8) & 1) != 0 )
          LOBYTE(v59) = 2;
        else
          LOBYTE(v59) = *(_QWORD *)v48 != 0LL;
        goto LABEL_47;
      case 3:
        break;
      default:
        goto LABEL_50;
    }
    LOBYTE(v59) = *(_BYTE *)v48 & 0x3F;
LABEL_47:
    v49 = (char)v59;
LABEL_48:
    if ( v49 )
      return 3221225485LL;
    goto LABEL_50;
  }
  v7 = v6 - 1;
  if ( !v7 )
    return AccelpWaitForCompletionBusySpin(*(_DWORD *)(v3 + 184), *(_DWORD *)(v3 + 188), *((_QWORD *)a1 + 5));
  v8 = v7 - 1;
  if ( !v8 )
  {
    v46 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v46 + 8) & 1) != 0 )
      LOBYTE(v59) = 2;
    else
      LOBYTE(v59) = *(_QWORD *)v46 != 0LL;
    if ( !(_BYTE)v59 )
      return 259LL;
    if ( (unsigned __int8)v59 == 1 )
      return 0LL;
    return 3221225473LL;
  }
  v9 = v8 - 253;
  if ( !v9 )
    return 3221225659LL;
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) &= ~1uLL;
    v29 = *((_QWORD *)a1 + 7);
    if ( (v29 & 0xFFF) == 0 )
    {
      v30 = *((_QWORD *)a1 + 8);
      if ( v30 >= 0x1000 && (v30 & 0xFFF) == 0 )
      {
        v31 = *((_QWORD *)a1 + 1);
        v32 = *((_BYTE *)a1 + 72);
        v59 = 0LL;
        result = AccelpGetCopyBuffer(*(_QWORD *)(v31 + 16), v32, (__int64 *)&v59);
        if ( (int)result < 0 )
          return result;
        v24 = *((_QWORD *)a1 + 4);
        v34 = *((_QWORD *)a1 + 9);
        v35 = *((_QWORD *)a1 + 5) & 0xFFFFFFFFFFFFFFE0uLL;
        v36 = *((_QWORD *)a1 + 8);
        v26 = *((_QWORD *)a1 + 7);
        *(_DWORD *)(v24 + 4) &= 0xFFE00FFF;
        *(_QWORD *)(v24 + 56) = v35;
        *(_DWORD *)v24 = *(_DWORD *)v24 & 0xF800FFFE | 0x10001;
        LODWORD(v36) = *(_DWORD *)(v24 + 32) & 0xFFF | (((unsigned int)(v36 >> 12) - 1) << 12);
        *(_BYTE *)(v24 + 1) = 4;
        *(_DWORD *)v24 |= 4u;
        v37 = (unsigned __int64)v59;
        *(_QWORD *)(v24 + 16) = v59;
        *(_DWORD *)(v24 + 32) = v36;
        if ( !v34 )
          *(_QWORD *)(v24 + 16) = v37 | 1;
        goto LABEL_17;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 240LL) & 6) == 0 )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) |= 1uLL;
      v38 = *((_QWORD *)a1 + 4);
      v39 = *((_QWORD *)a1 + 8);
      v40 = *((unsigned __int8 *)a1 + 72);
      v41 = *((_QWORD *)a1 + 7);
      *(_BYTE *)(v38 + 7) = 3;
      *(_QWORD *)(v38 + 24) = v41;
      *(_QWORD *)(v38 + 16) = v40;
      *(_DWORD *)(v38 + 32) = v39;
      return 0LL;
    }
    a2 = *((_QWORD *)a1 + 4);
    v42 = *((_QWORD *)a1 + 8);
    v43 = *((_BYTE *)a1 + 72);
    *(_QWORD *)(a2 + 56) = *((_QWORD *)a1 + 5) & 0xFFFFFFFFFFFFFFE0uLL;
    v44 = *(_DWORD *)a2 & 0xF806FFFF;
    *(_BYTE *)(a2 + 24) = v43;
    *(_QWORD *)(a2 + 16) = v29;
    *(_DWORD *)a2 = v44 | 0x60001;
    v45 = v42 - 1;
    *(_BYTE *)(a2 + 1) = 1;
    *(_DWORD *)a2 |= 4u;
LABEL_61:
    *(_DWORD *)(a2 + 4) = v45;
    return 0LL;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) &= ~1uLL;
    v24 = *((_QWORD *)a1 + 4);
    v25 = *((_QWORD *)a1 + 9);
    v26 = *((_QWORD *)a1 + 8);
    v27 = *((_QWORD *)a1 + 7);
    *(_QWORD *)(v24 + 56) = *((_QWORD *)a1 + 5) & 0xFFFFFFFFFFFFFFE0uLL;
    v28 = *(_DWORD *)v24 & 0xF801FFFF;
    *(_QWORD *)(v24 + 16) = v27;
    *(_DWORD *)v24 = v28 | 0x10001;
    *(_BYTE *)(v24 + 1) = 3;
    *(_DWORD *)v24 |= 4u;
    *(_DWORD *)(v24 + 4) = v25 - 1;
LABEL_17:
    *(_QWORD *)(v24 + 24) = v26;
    return 0LL;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) &= ~1uLL;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 240LL) & 6) != 0 )
    {
      v18 = *((_QWORD *)a1 + 5);
      v19 = *((_QWORD *)a1 + 4);
      v20 = *((_QWORD *)a1 + 9);
      v21 = *((_QWORD *)a1 + 8);
      v22 = *((_QWORD *)a1 + 7);
      *(_QWORD *)(v19 + 56) = v18 & 0xFFFFFFFFFFFFFFE0uLL;
      v23 = *(_DWORD *)v19 & 0xF806FFFF;
      *(_QWORD *)(v19 + 16) = v22;
      *(_QWORD *)(v19 + 24) = v21;
      *(_DWORD *)v19 = v23 | 0x60001;
      *(_DWORD *)(v19 + 4) = v20 - 1;
      *(_BYTE *)(v19 + 1) = 2;
      *(_DWORD *)v19 |= 4u;
      *(_QWORD *)(v19 + 40) = v18 + 24;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) |= 1uLL;
      v14 = *((_QWORD *)a1 + 4);
      v15 = *((_QWORD *)a1 + 9);
      v16 = *((_QWORD *)a1 + 8);
      v17 = *((_QWORD *)a1 + 7);
      *(_BYTE *)(v14 + 7) = 4;
      *(_QWORD *)(v14 + 16) = v17;
      *(_QWORD *)(v14 + 24) = v16;
      *(_DWORD *)(v14 + 32) = v15;
    }
    return 0LL;
  }
  if ( v12 != 1 )
    return 3221225659LL;
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) &= ~1uLL;
  v13 = *((_QWORD *)a1 + 4);
  *(_QWORD *)(v13 + 56) = *((_QWORD *)a1 + 5) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)v13 = *(_DWORD *)v13 & 0xF800FFFE | 0x10001;
  *(_BYTE *)(v13 + 1) = 1;
  *(_DWORD *)v13 |= 4u;
  return 0LL;
}
