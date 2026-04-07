/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180064EE8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800653F0 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800656CC (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18006572C (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18006578C (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r10
  FastRegion::Internal::CStripe *v4; // rbp
  __int64 v5; // r9
  _DWORD *v6; // r14
  int *v7; // rsi
  FastRegion::Internal::CStripe *v8; // rbx
  const struct FastRegion::Internal::CStripe *v9; // r15
  const struct FastRegion::Internal::CStripe *v10; // r12
  const struct FastRegion::Internal::CStripe *v11; // r13
  FastRegion::Internal::CStripe *v12; // rcx
  int v13; // eax
  const struct FastRegion::Internal::CStripe *v14; // rsi
  const struct FastRegion::Internal::CStripe *v15; // r14
  char *v16; // rcx
  int v17; // eax
  const struct FastRegion::Internal::CStripe *v18; // r15
  int v19; // ecx
  const struct FastRegion::Internal::CStripe *v20; // rax
  int v21; // r8d
  const struct FastRegion::Internal::CStripe *v22; // rdx
  int v23; // eax
  int v24; // eax
  const struct FastRegion::Internal::CStripe *v25; // rdx
  FastRegion::Internal::CStripe *v26; // rcx
  int v27; // eax
  const struct FastRegion::Internal::CStripe *v28; // r8
  int v29; // ecx
  int v30; // eax
  const struct FastRegion::Internal::CStripe *v31; // rdx
  char *v32; // rcx
  int v33; // eax
  const struct FastRegion::Internal::CStripe *v34; // r8
  const struct FastRegion::Internal::CStripe *v35; // rdx
  int v36; // ecx
  FastRegion::Internal::CStripe *v37; // r10
  int v38; // ecx
  FastRegion::Internal::CStripe *v39; // r10
  const struct FastRegion::Internal::CStripe *v40; // r8
  int v41; // eax
  const struct FastRegion::Internal::CStripe *v42; // [rsp+20h] [rbp-58h]

  v3 = *(int *)a2;
  v4 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v5 = *(int *)a3;
  v6 = (_DWORD *)((char *)a2 + 12);
  v7 = (int *)((char *)a3 + 12);
  v8 = v4;
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v42 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v5 + 12);
  v12 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  *((_DWORD *)v4 + 1) = 8 * (v5 + v3);
  v13 = *((_DWORD *)a3 + 3);
  if ( *((_DWORD *)a2 + 3) < v13 )
  {
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    FastRegion::Internal::CStripe::Copy(v12, (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
    if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
      v8 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    while ( 1 )
    {
      v27 = *(_DWORD *)v15;
      v28 = v15;
      v29 = *v7;
      if ( *(_DWORD *)v15 >= *v7 )
        break;
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v42 )
      {
        *(_DWORD *)v8 = v27;
        v36 = *((_DWORD *)v8 + 1) - 8;
        *((_DWORD *)v8 + 3) = v36;
        if ( v8 == v4 )
        {
          if ( v36 - *((_DWORD *)v8 + 1) != -8 )
            v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
        {
          v8 = v37;
        }
        v14 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
        v25 = v10;
        goto LABEL_25;
      }
      FastRegion::Internal::CStripe::Copy(v8, v28);
      if ( v8 == v4 )
      {
        if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
          v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
      {
        v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
      }
    }
    v14 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    v25 = v10;
    if ( v27 > v29 )
    {
      v28 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
LABEL_49:
      v26 = v8;
    }
    else
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v26 = v8;
      if ( v15 == v42 )
        goto LABEL_33;
    }
  }
  else
  {
    v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    if ( *v6 <= v13 )
    {
      v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
      FastRegion::Internal::CStripe::Union(
        v12,
        (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
        (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
      v16 = (char *)v4 + 8;
      v17 = *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1);
      goto LABEL_4;
    }
    FastRegion::Internal::CStripe::Copy(v12, (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    v32 = (char *)v4 + 8;
    v33 = *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1);
LABEL_52:
    if ( (_DWORD)v32 + v33 - (_DWORD)v8 )
      v8 = (FastRegion::Internal::CStripe *)v32;
    while ( 1 )
    {
      v30 = *(_DWORD *)v14;
      v31 = v14;
      v28 = v14;
      if ( *v6 < *(_DWORD *)v14 )
      {
        v15 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
        v28 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
        v25 = v9;
        goto LABEL_49;
      }
      v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
      if ( *v6 <= v30 )
        break;
      if ( v14 == v11 )
      {
        *(_DWORD *)v8 = v30;
        v38 = *((_DWORD *)v8 + 1) - 8;
        *((_DWORD *)v8 + 3) = v38;
        if ( v8 == v4 )
        {
          if ( v38 - *((_DWORD *)v8 + 1) != -8 )
            v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
        {
          v8 = v39;
        }
        v15 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
        v25 = v9;
        v26 = v8;
LABEL_40:
        FastRegion::Internal::CStripe::Copy(v26, v25);
LABEL_41:
        if ( v8 == v4 )
        {
          if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
            v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
        {
          v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        }
        while ( 1 )
        {
          v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
          if ( v15 == v42 )
            break;
          FastRegion::Internal::CStripe::Copy(v8, (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8));
          if ( v8 == v4 )
          {
            if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
              v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
          {
            v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
          }
        }
        v41 = *((_DWORD *)v15 - 2);
        goto LABEL_98;
      }
      FastRegion::Internal::CStripe::Copy(v8, v31);
      if ( v8 == v4 )
      {
        v32 = (char *)v8 + 8;
        v33 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1);
        goto LABEL_52;
      }
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
        v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
    v15 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
    v25 = v9;
    v26 = v8;
    if ( v14 == v11 )
      goto LABEL_40;
  }
  FastRegion::Internal::CStripe::Union(v26, v25, v28);
  if ( v8 != v4 )
  {
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
      v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    goto LABEL_6;
  }
  v16 = (char *)v8 + 8;
  v17 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1);
LABEL_4:
  if ( (_DWORD)v16 + v17 - (_DWORD)v8 )
    v8 = (FastRegion::Internal::CStripe *)v16;
LABEL_6:
  v18 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
  while ( 1 )
  {
    v19 = *(_DWORD *)v15;
    v20 = v15;
    v21 = *(_DWORD *)v14;
    v22 = v14;
    if ( *(_DWORD *)v15 < *(_DWORD *)v14 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v22 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
      if ( v15 == v42 )
        goto LABEL_19;
LABEL_81:
      v40 = v22;
      v22 = v20;
      goto LABEL_83;
    }
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
    if ( v19 <= v21 )
      break;
    if ( v14 == v11 )
    {
      v34 = v22;
      v35 = v18;
      goto LABEL_58;
    }
    v40 = v18;
LABEL_83:
    FastRegion::Internal::CStripe::Union(v8, v22, v40);
    if ( v8 == v4 )
    {
      if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
        v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
    {
      v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
  }
  v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
  v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
  if ( v15 != v42 )
  {
    if ( v14 == v11 )
    {
      v34 = v22;
      v35 = v20;
LABEL_58:
      FastRegion::Internal::CStripe::Copy(v8, v35, v34);
      goto LABEL_41;
    }
    goto LABEL_81;
  }
  if ( v14 == v11 )
  {
    *(_DWORD *)v8 = v19;
    goto LABEL_12;
  }
LABEL_19:
  FastRegion::Internal::CStripe::Copy(v8, v22, v20);
  while ( 1 )
  {
    if ( v8 == v4 )
    {
      if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
        v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
    {
      v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
    if ( v14 == v11 )
      break;
    v25 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
LABEL_25:
    v26 = v8;
LABEL_33:
    FastRegion::Internal::CStripe::Copy(v26, v25);
  }
  v41 = *((_DWORD *)v14 - 2);
LABEL_98:
  *(_DWORD *)v8 = v41;
LABEL_12:
  if ( v8 != v4 && (char *)v8 + *((int *)v8 + 1) != (char *)v8 + *((int *)v8 - 1) - 8 )
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
  *(_DWORD *)this = (v8 - this - 12) >> 3;
  v23 = *((_DWORD *)a2 + 1);
  if ( v23 >= *((_DWORD *)a3 + 1) )
    v23 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v23;
  v24 = *((_DWORD *)a2 + 2);
  if ( v24 <= *((_DWORD *)a3 + 2) )
    v24 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v24;
}
