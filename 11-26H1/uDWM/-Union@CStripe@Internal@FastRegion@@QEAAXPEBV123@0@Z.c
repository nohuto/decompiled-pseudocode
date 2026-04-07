/*
 * XREFs of ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180055560
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180055060 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Union(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  char *v4; // r9
  char *v5; // r11
  char *v6; // rdx
  char *v7; // r10
  _DWORD *v8; // rcx
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  int v12; // r8d
  int v13; // eax
  char *v14; // r8
  int v15; // ebx
  bool v16; // zf

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (char *)a2 + *((int *)a2 + 1);
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (char *)a3 + *((int *)a3 + 1);
  v7 = (char *)a3 + *((int *)a3 + 3) + 8;
  v8 = (_DWORD *)((char *)this + *((int *)this + 1));
  while ( 2 )
  {
    if ( v4 == v5 )
      goto LABEL_3;
    if ( v6 == v7 )
      goto LABEL_24;
LABEL_6:
    v9 = *(_DWORD *)v6;
    v10 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 >= *(_DWORD *)v6 )
    {
      v6 += 4;
      if ( v9 < v10 )
      {
        *v8++ = v9;
        goto LABEL_14;
      }
      *v8 = v10;
      v4 += 4;
      v11 = *(_DWORD *)v6;
      ++v8;
LABEL_9:
      v12 = *(_DWORD *)v4;
      goto LABEL_10;
    }
    v4 += 4;
    *v8++ = v10;
    while ( 1 )
    {
      v13 = *(_DWORD *)v4;
      v12 = *(_DWORD *)v4;
LABEL_20:
      v15 = *(_DWORD *)v6;
      if ( v13 < *(_DWORD *)v6 )
      {
        *v8 = v12;
        v4 += 4;
        ++v8;
        v16 = v4 == v5;
LABEL_34:
        if ( v16 )
          goto LABEL_25;
        goto LABEL_6;
      }
      v6 += 4;
      if ( v15 < v12 )
      {
        v11 = *(_DWORD *)v6;
LABEL_10:
        if ( v12 >= v11 )
          break;
      }
      v4 += 4;
      if ( v4 == v5 )
        goto LABEL_3;
LABEL_14:
      v11 = *(_DWORD *)v6;
      if ( *(_DWORD *)v4 < *(_DWORD *)v6 )
      {
        v4 += 4;
        goto LABEL_9;
      }
      v14 = v6 + 4;
      v6 += 4;
      if ( *(_DWORD *)v4 > v11 )
      {
        *v8++ = v11;
        v16 = v14 == v7;
        goto LABEL_34;
      }
      v4 += 4;
      if ( v6 == v7 )
        goto LABEL_25;
    }
    v13 = *(_DWORD *)v4;
    if ( *(_DWORD *)v6 >= *(_DWORD *)v4 )
    {
      *v8 = v13;
      v4 += 4;
      ++v8;
      v6 += 4;
      continue;
    }
    break;
  }
  v6 += 4;
  v12 = *(_DWORD *)v4;
  if ( v6 != v7 )
    goto LABEL_20;
LABEL_25:
  while ( v4 != v5 )
  {
LABEL_24:
    *v8++ = *(_DWORD *)v4;
    v4 += 4;
  }
LABEL_3:
  while ( v6 != v7 )
  {
    *v8++ = *(_DWORD *)v6;
    v6 += 4;
  }
  *((_DWORD *)this + 3) = (_DWORD)v8 - ((_DWORD)this + 8);
}
