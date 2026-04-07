/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180055060
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180054A84 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180055560 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x1800556CC (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18005572C (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18007438C (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r10
  FastRegion::Internal::CStripe *v4; // rbp
  __int64 v5; // r9
  _DWORD *v6; // rsi
  int *v7; // r14
  const struct FastRegion::Internal::CStripe *v8; // r12
  const struct FastRegion::Internal::CStripe *v9; // r15
  char *v10; // r13
  int v11; // ecx
  const struct FastRegion::Internal::CStripe *v12; // r14
  const struct FastRegion::Internal::CStripe *v13; // rsi
  const struct FastRegion::Internal::CStripe *v14; // r12
  FastRegion::Internal::CStripe *v15; // rbx
  const struct FastRegion::Internal::CStripe *v16; // r15
  int v17; // ecx
  const struct FastRegion::Internal::CStripe *v18; // r11
  const struct FastRegion::Internal::CStripe *v19; // rdx
  const struct FastRegion::Internal::CStripe *v20; // r9
  const struct FastRegion::Internal::CStripe *v21; // rax
  bool v22; // cc
  char *v23; // r8
  int v24; // eax
  int v25; // eax
  const struct FastRegion::Internal::CStripe *v26; // rdx
  const struct FastRegion::Internal::CStripe *v27; // r8
  const struct FastRegion::Internal::CStripe *v28; // rdx
  FastRegion::Internal::CStripe *v29; // rcx
  int v30; // eax
  int v31; // eax
  const struct FastRegion::Internal::CStripe *v32; // rdx
  int v33; // ecx
  const struct FastRegion::Internal::CStripe *v34; // r8
  int v35; // ecx
  const struct FastRegion::Internal::CStripe *v36; // rdx
  const struct FastRegion::Internal::CStripe *v37; // r8
  char *v38; // rax
  const struct FastRegion::Internal::CStripe *v39; // rdx
  FastRegion::Internal::CStripe *v40; // rcx
  bool v41; // zf
  const struct FastRegion::Internal::CStripe *v42; // r8
  bool v43; // al
  FastRegion::Internal::CStripe *v44; // r10
  int v45; // eax
  bool IsEqualToPrevious; // al
  FastRegion::Internal::CStripe *v47; // r10
  int v48; // eax
  const struct FastRegion::Internal::CStripe *v52; // [rsp+88h] [rbp+20h]

  v3 = *(int *)a2;
  v4 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v5 = *(int *)a3;
  v6 = (_DWORD *)((char *)a2 + 12);
  v7 = (int *)((char *)a3 + 12);
  v8 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v52 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  v10 = (char *)a3 + 8 * v5 + 12;
  *((_DWORD *)this + 4) = 8 * (v5 + v3);
  v11 = *((_DWORD *)a3 + 3);
  if ( *((_DWORD *)a2 + 3) < v11 )
  {
    v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    FastRegion::Internal::CStripe::Copy(v4, (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
    v14 = v52;
    v15 = v4;
    if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
      v15 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    while ( 1 )
    {
      v31 = *(_DWORD *)v13;
      v32 = v13;
      v33 = *v7;
      v34 = v13;
      if ( *(_DWORD *)v13 >= *v7 )
        break;
      v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
      if ( v13 == v52 )
      {
        *(_DWORD *)v15 = v31;
        v44 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
        v45 = *((_DWORD *)v15 + 1) - 8;
        *((_DWORD *)v15 + 3) = v45;
        if ( v15 == v4 )
        {
          if ( v45 - *((_DWORD *)v15 + 1) != -8 )
LABEL_69:
            v15 = v44;
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
        {
          goto LABEL_69;
        }
        v12 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
        v28 = v9;
        goto LABEL_21;
      }
      FastRegion::Internal::CStripe::Copy(v15, v32);
      if ( v15 == v4 )
      {
        if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
          v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
      {
        v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
      }
    }
    v12 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    v28 = v9;
    v22 = v31 <= v33;
    v29 = v15;
    if ( v22 )
    {
      v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
      if ( v13 == v52 )
        goto LABEL_22;
    }
    else
    {
      v34 = (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8);
    }
    FastRegion::Internal::CStripe::Union(v15, v9, v34);
    if ( v15 == v4 )
      goto LABEL_49;
    IsEqualToPrevious = FastRegion::Internal::CStripe::IsEqualToPrevious(v15);
    goto LABEL_75;
  }
  v12 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
  if ( *((_DWORD *)a2 + 3) > v11 )
  {
    FastRegion::Internal::CStripe::Copy(v4, (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    v15 = v4;
    if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
      v15 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    while ( 1 )
    {
      v35 = *(_DWORD *)v12;
      v36 = v12;
      v37 = v12;
      if ( *v6 < *(_DWORD *)v12 )
      {
        v13 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
        v37 = (const struct FastRegion::Internal::CStripe *)((char *)v12 - 8);
        v39 = v8;
        v40 = v15;
        goto LABEL_47;
      }
      v38 = (char *)v12 + 8;
      v12 = (const struct FastRegion::Internal::CStripe *)((char *)v12 + 8);
      if ( *v6 <= v35 )
        break;
      if ( v38 == v10 )
      {
        v47 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
        *(_DWORD *)v15 = v35;
        v48 = *((_DWORD *)v15 + 1) - 8;
        *((_DWORD *)v15 + 3) = v48;
        if ( v15 == v4 )
        {
          if ( v48 - *((_DWORD *)v15 + 1) != -8 )
LABEL_87:
            v15 = v47;
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
        {
          goto LABEL_87;
        }
        v13 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
        v39 = v8;
        v40 = v15;
LABEL_40:
        FastRegion::Internal::CStripe::Copy(v40, v39);
        if ( v15 == v4 )
        {
          v14 = v52;
          goto LABEL_42;
        }
        v43 = FastRegion::Internal::CStripe::IsEqualToPrevious(v15);
        v14 = v52;
        goto LABEL_57;
      }
      FastRegion::Internal::CStripe::Copy(v15, v36);
      if ( v15 == v4 )
      {
        if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
          v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
      {
        v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
      }
    }
    v13 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
    v39 = v8;
    v40 = v15;
    if ( v38 == v10 )
      goto LABEL_40;
LABEL_47:
    FastRegion::Internal::CStripe::Union(v40, v39, v37);
    if ( v15 == v4 )
    {
      v14 = v52;
LABEL_49:
      if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
        v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
      goto LABEL_5;
    }
    IsEqualToPrevious = FastRegion::Internal::CStripe::IsEqualToPrevious(v15);
    v14 = v52;
LABEL_75:
    if ( !IsEqualToPrevious )
      v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
    goto LABEL_5;
  }
  v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  FastRegion::Internal::CStripe::Union(
    v4,
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
  v14 = v52;
  v15 = v4;
  if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
    v15 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
LABEL_5:
  v16 = (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8);
  while ( 1 )
  {
    v17 = *(_DWORD *)v13;
    v18 = v12;
    v19 = v13;
    v20 = v13;
    v21 = v12;
    v22 = *(_DWORD *)v13 <= *(_DWORD *)v12;
    if ( *(_DWORD *)v13 >= *(_DWORD *)v12 )
      break;
    v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
    v26 = (const struct FastRegion::Internal::CStripe *)((char *)v12 - 8);
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    if ( v13 == v14 )
    {
      v27 = v20;
LABEL_19:
      FastRegion::Internal::CStripe::Copy(v15, v26, v27);
      while ( 1 )
      {
        if ( v15 == v4 )
        {
          if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
            v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
        {
          v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
        }
        v12 = (const struct FastRegion::Internal::CStripe *)((char *)v12 + 8);
        if ( v12 == (const struct FastRegion::Internal::CStripe *)v10 )
          break;
        v28 = (const struct FastRegion::Internal::CStripe *)((char *)v12 - 8);
LABEL_21:
        v29 = v15;
LABEL_22:
        FastRegion::Internal::CStripe::Copy(v29, v28);
      }
      v30 = *((_DWORD *)v12 - 2);
      goto LABEL_28;
    }
    v42 = (const struct FastRegion::Internal::CStripe *)((char *)v12 - 8);
    v19 = v20;
LABEL_92:
    FastRegion::Internal::CStripe::Union(v15, v19, v42);
    if ( v15 == v4 )
    {
      if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
        v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
    {
      v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
    }
  }
  v23 = (char *)v12 + 8;
  v12 = (const struct FastRegion::Internal::CStripe *)((char *)v12 + 8);
  if ( v22 )
  {
    v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    if ( v13 == v14 )
    {
      if ( v23 == v10 )
      {
        *(_DWORD *)v15 = v17;
        goto LABEL_11;
      }
      v27 = v16;
      v26 = v18;
      goto LABEL_19;
    }
    v41 = v23 == v10;
    v42 = v21;
    if ( v41 )
      goto LABEL_54;
    goto LABEL_92;
  }
  if ( v23 != v10 )
  {
    v42 = v16;
    v19 = v21;
    goto LABEL_92;
  }
  v42 = v21;
  v19 = v16;
LABEL_54:
  FastRegion::Internal::CStripe::Copy(v15, v19, v42);
  while ( 1 )
  {
    if ( v15 == v4 )
    {
LABEL_42:
      if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
        v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
    }
    else
    {
      v43 = FastRegion::Internal::CStripe::IsEqualToPrevious(v15);
LABEL_57:
      if ( !v43 )
        v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
    }
    v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
    if ( v13 == v14 )
      break;
    FastRegion::Internal::CStripe::Copy(v15, (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8));
  }
  v30 = *((_DWORD *)v13 - 2);
LABEL_28:
  *(_DWORD *)v15 = v30;
LABEL_11:
  if ( v15 != v4 && (char *)v15 + *((int *)v15 + 1) != (char *)v15 + *((int *)v15 - 1) - 8 )
    v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
  *(_DWORD *)this = (v15 - this - 12) >> 3;
  v24 = *((_DWORD *)a2 + 1);
  if ( v24 >= *((_DWORD *)a3 + 1) )
    v24 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v24;
  v25 = *((_DWORD *)a2 + 2);
  if ( v25 <= *((_DWORD *)a3 + 2) )
    v25 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v25;
}
