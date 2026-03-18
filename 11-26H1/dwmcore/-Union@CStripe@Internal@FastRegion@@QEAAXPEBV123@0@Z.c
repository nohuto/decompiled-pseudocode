/*
 * XREFs of ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800EC980
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800EBC90 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Union(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  char *v4; // r9
  char *v5; // rbx
  char *v6; // rdx
  char *v7; // r8
  _DWORD *v8; // rax
  int v9; // ecx
  int v10; // r10d
  int v11; // ecx
  int v12; // r10d
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // edi
  char *v17; // rdi

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (char *)a2 + *((int *)a2 + 1);
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (char *)a3 + *((int *)a3 + 1);
  v7 = (char *)a3 + *((int *)a3 + 3) + 8;
  v8 = (_DWORD *)((char *)this + *((int *)this + 1));
  if ( v4 != v5 )
  {
    if ( v6 != v7 )
    {
      while ( 1 )
      {
LABEL_3:
        v9 = *(_DWORD *)v6;
        v10 = *(_DWORD *)v4;
        if ( *(_DWORD *)v4 < *(_DWORD *)v6 )
        {
          *v8 = v10;
          v4 += 4;
          ++v8;
          v13 = *(_DWORD *)v4;
          v12 = *(_DWORD *)v4;
LABEL_24:
          while ( 1 )
          {
            v16 = *(_DWORD *)v6;
            if ( v13 < *(_DWORD *)v6 )
              break;
            v6 += 4;
            if ( v16 < v12 )
            {
              v11 = *(_DWORD *)v6;
              goto LABEL_7;
            }
            v4 += 4;
            if ( v4 == v5 )
              goto LABEL_10;
LABEL_15:
            v11 = *(_DWORD *)v6;
            if ( *(_DWORD *)v4 < *(_DWORD *)v6 )
            {
              v4 += 4;
              goto LABEL_6;
            }
            v17 = v6 + 4;
            v6 += 4;
            if ( *(_DWORD *)v4 > v11 )
            {
              *v8++ = v11;
              if ( v17 != v7 )
                goto LABEL_3;
              goto LABEL_20;
            }
            v4 += 4;
            if ( v6 == v7 )
              goto LABEL_20;
            v13 = *(_DWORD *)v4;
            v12 = *(_DWORD *)v4;
          }
          *v8 = v12;
          v4 += 4;
          ++v8;
          if ( v4 != v5 )
            continue;
          goto LABEL_10;
        }
        v6 += 4;
        if ( v9 < v10 )
        {
          *v8++ = v9;
          goto LABEL_15;
        }
        *v8 = v10;
        v4 += 4;
        v11 = *(_DWORD *)v6;
        ++v8;
LABEL_6:
        v12 = *(_DWORD *)v4;
LABEL_7:
        if ( v12 < v11 )
        {
          v4 += 4;
          if ( v4 != v5 )
            goto LABEL_15;
          goto LABEL_10;
        }
        v13 = *(_DWORD *)v4;
        if ( *(_DWORD *)v6 < *(_DWORD *)v4 )
          break;
        *v8 = v13;
        v4 += 4;
        ++v8;
        v6 += 4;
        if ( v4 == v5 )
          goto LABEL_10;
        if ( v6 == v7 )
          goto LABEL_21;
      }
      v6 += 4;
      v12 = *(_DWORD *)v4;
      if ( v6 != v7 )
        goto LABEL_24;
LABEL_20:
      if ( v4 == v5 )
        goto LABEL_10;
    }
    do
    {
LABEL_21:
      v15 = *(_DWORD *)v4;
      v4 += 4;
      *v8++ = v15;
    }
    while ( v4 != v5 );
  }
LABEL_10:
  while ( v6 != v7 )
  {
    v14 = *(_DWORD *)v6;
    v6 += 4;
    *v8++ = v14;
  }
  *((_DWORD *)this + 3) = (_DWORD)v8 - ((_DWORD)this + 8);
}
