/*
 * XREFs of sub_140112294 @ 0x140112294
 * Callers:
 *     sub_1400FDA54 @ 0x1400FDA54 (sub_1400FDA54.c)
 * Callees:
 *     sub_1400F7688 @ 0x1400F7688 (sub_1400F7688.c)
 *     sub_1400F7D38 @ 0x1400F7D38 (sub_1400F7D38.c)
 *     sub_140111E3C @ 0x140111E3C (sub_140111E3C.c)
 *     sub_140111FC4 @ 0x140111FC4 (sub_140111FC4.c)
 *     sub_14011206C @ 0x14011206C (sub_14011206C.c)
 *     sub_14011212C @ 0x14011212C (sub_14011212C.c)
 *     sub_1401121D4 @ 0x1401121D4 (sub_1401121D4.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 */

__int64 __fastcall sub_140112294(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  PHYSICAL_ADDRESS **v4; // r15
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  char v8; // r11
  unsigned __int8 *v9; // rdi
  char v10; // si
  unsigned int v11; // r10d
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rdi
  char v16; // bp
  unsigned __int8 v17; // dl
  unsigned int v18; // esi
  __int64 i; // r10
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // r14
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  int v28; // edi
  int v29; // eax
  char v30; // cl
  int v31; // eax
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // esi
  PHYSICAL_ADDRESS v42; // rcx

  v4 = (PHYSICAL_ADDRESS **)a4;
  v5 = a3;
  v6 = a2;
  v8 = 1;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v9 = (unsigned __int8 *)(a2 + 72);
    v17 = *(_BYTE *)(a2 + 10);
    goto LABEL_39;
  }
  v9 = 0LL;
  v10 = 0;
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_22;
  v11 = *(_DWORD *)(a2 + 56);
  a4 = 0LL;
  if ( !v11 )
    goto LABEL_22;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v6 + 4 * a4 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      a3 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v12 < (unsigned int)a3 )
        break;
    }
LABEL_17:
    a4 = (unsigned int)(a4 + 1);
    if ( (unsigned int)a4 >= v11 )
      goto LABEL_22;
  }
  a2 = (unsigned int)v12;
  v13 = *(_DWORD *)(v12 + v6) - 64;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 && a2 + 40 <= a3 )
      {
        if ( !*(_DWORD *)(a2 + v6 + 12) )
          goto LABEL_22;
        v15 = v6 + 32;
        goto LABEL_21;
      }
    }
    else if ( a2 + 56 <= a3 )
    {
      v10 = 1;
      if ( !*(_BYTE *)(a2 + v6 + 10) )
        goto LABEL_22;
      v9 = (unsigned __int8 *)(a2 + v6 + 24);
    }
    goto LABEL_16;
  }
  if ( a2 + 40 > a3 )
  {
LABEL_16:
    if ( v10 )
      goto LABEL_22;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a2 + v6 + 10) )
    goto LABEL_22;
  v15 = v6 + 24;
LABEL_21:
  v9 = (unsigned __int8 *)(a2 + v15);
LABEL_22:
  v16 = 0;
  v17 = 0;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v18 = *(_DWORD *)(v6 + 56);
    for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
    {
      v20 = *(unsigned int *)(v6 + 4 * i + 120);
      if ( (unsigned int)v20 >= 0x80 )
      {
        a4 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v20 < (unsigned int)a4 )
        {
          a3 = (unsigned int)v20;
          v21 = *(_DWORD *)(v20 + v6) - 64;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 == 1 && a3 + 40 <= a4 )
                break;
            }
            else if ( a3 + 56 <= a4 )
            {
              v17 = *(_BYTE *)(a3 + v6 + 10);
              v16 = 1;
            }
          }
          else if ( a3 + 40 <= a4 )
          {
            v17 = *(_BYTE *)(a3 + v6 + 10);
            break;
          }
          if ( v16 )
            break;
        }
      }
    }
  }
LABEL_39:
  v23 = (__int64)&(*v4)[512];
  if ( v17 < 6u || !v9 )
  {
    LOBYTE(a4) = 32;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 8;
    sub_140112680(v6, a2, a3, a4, 0);
    return (unsigned int)-1056964601;
  }
  v24 = *v9;
  if ( v24 > 0x48 )
  {
    v33 = v24 - 77;
    if ( !v33 )
      goto LABEL_58;
    v34 = v33 - 8;
    if ( !v34 )
      goto LABEL_58;
    v35 = v34 - 5;
    if ( !v35 )
      goto LABEL_58;
    v36 = v35 - 46;
    if ( !v36 )
      goto LABEL_58;
    v37 = v36 - 2;
    if ( !v37 )
      goto LABEL_58;
    v38 = v37 - 5;
    if ( !v38 )
      goto LABEL_83;
    v39 = v38 - 12;
    if ( !v39 )
      goto LABEL_58;
    v40 = v39 - 7;
    if ( v40 )
    {
      if ( v40 != 19 )
        goto LABEL_76;
      if ( (unsigned int)sub_1400F7688() )
        v29 = sub_1401121D4(a1, v6, v9, v23);
      else
        v29 = sub_14011212C(a1, v6, v9, v23);
    }
    else if ( (unsigned int)sub_1400F7688() )
    {
      v29 = sub_14011206C(a1, v6, v9, v23);
    }
    else
    {
      v29 = sub_140111FC4(a1, v6, v9, v23);
    }
LABEL_53:
    v28 = v29;
    goto LABEL_60;
  }
  if ( v24 == 72 )
  {
LABEL_58:
    *(_BYTE *)(v6 + 3) = 6;
LABEL_59:
    v28 = -1073741808;
    goto LABEL_60;
  }
  if ( v24 > 0x28 )
  {
    if ( v24 != 42 )
    {
      if ( v24 == 47 )
        goto LABEL_83;
      if ( v24 == 53 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL) + 525LL) & 1) != 0 )
        {
          v32 = *(_DWORD *)(a1 + 56);
          v28 = 259;
          *(_BYTE *)v23 = 0;
          v8 = 0;
          *(_DWORD *)(v23 + 4) = v32;
        }
        else
        {
          v28 = 0;
        }
        *(_BYTE *)(v6 + 3) = v8;
        goto LABEL_60;
      }
      if ( v24 != 59 )
        goto LABEL_76;
    }
    goto LABEL_58;
  }
  if ( v24 == 40 )
    goto LABEL_58;
  if ( !*v9 )
  {
LABEL_83:
    *(_BYTE *)(v6 + 3) = 1;
    v28 = 0;
    goto LABEL_60;
  }
  v25 = v24 - 18;
  if ( !v25 )
  {
    v29 = sub_140111E3C(a1, v6, (__int64)v9);
    goto LABEL_53;
  }
  v26 = v25 - 3;
  if ( !v26 )
    goto LABEL_58;
  v27 = v26 - 5;
  if ( !v27 )
    goto LABEL_58;
  if ( v27 != 1 )
  {
LABEL_76:
    LOBYTE(a4) = 32;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    sub_140112680(v6, a2, a3, a4, 0);
    goto LABEL_59;
  }
  if ( (v9[1] & 1) == 0 )
    goto LABEL_83;
  LOBYTE(a4) = 36;
  LOBYTE(a3) = 5;
  LOBYTE(a2) = 6;
  sub_140112680(v6, a2, a3, a4, 0);
  v28 = -1073741811;
LABEL_60:
  if ( !*(_BYTE *)(v6 + 3) )
  {
    v30 = *(_BYTE *)(v6 + 2);
    if ( v30 == 40 )
      v31 = *(_DWORD *)(v6 + 24);
    else
      v31 = *(_DWORD *)(v6 + 12);
    if ( (v31 & 0xC0) != 0 && (v30 != 40 ? (v41 = *(_DWORD *)(v6 + 16)) : (v41 = *(_DWORD *)(v6 + 60)), v41) )
    {
      v28 = sub_1400F7D38(v23, v41, *(_DWORD **)(v5 + 8), *v4, (__int64)v4[1]);
      if ( v28 < 0 )
        *(_BYTE *)(v6 + 3) = 4;
      (*v4)[532].LowPart |= 2u;
      if ( *(_BYTE *)(v6 + 2) == 40 )
        v42 = *(PHYSICAL_ADDRESS *)(v6 + 64);
      else
        v42 = *(PHYSICAL_ADDRESS *)(v6 + 24);
      (*v4)[520] = v42;
      (*v4)[521] = MmGetPhysicalAddress((PVOID)(*v4)[520].QuadPart);
      (*v4)[531].LowPart = v41;
    }
    else
    {
      (*v4)[532].LowPart &= ~2u;
    }
  }
  return (unsigned int)v28;
}
