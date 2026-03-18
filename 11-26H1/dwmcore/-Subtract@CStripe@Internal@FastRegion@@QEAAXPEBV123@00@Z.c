/*
 * XREFs of ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x180077650
 * Callers:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180075F40 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Subtract(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3,
        const struct FastRegion::Internal::CStripe *a4)
{
  int *v5; // rax
  char *v6; // r10
  int *v7; // r9
  char *v8; // rbx
  _DWORD *v9; // rdx
  int v10; // r8d
  int v11; // ecx
  int *v12; // r9
  int v13; // ecx
  int v14; // ecx
  int v15; // r8d
  int v16; // ecx
  int v17; // r8d
  int v18; // ecx

  *(_DWORD *)this = *(_DWORD *)a4;
  v5 = (int *)((char *)a2 + *((int *)a2 + 1));
  v6 = (char *)a2 + *((int *)a2 + 3) + 8;
  v7 = (int *)((char *)a3 + *((int *)a3 + 1));
  v8 = (char *)a3 + *((int *)a3 + 3) + 8;
  v9 = (_DWORD *)((char *)this + *((int *)this + 1));
  if ( v5 != (int *)v6 )
  {
    if ( v7 == (int *)v8 )
    {
      do
      {
LABEL_22:
        v18 = *v5++;
        *v9++ = v18;
      }
      while ( v5 != (int *)v6 );
      goto LABEL_10;
    }
    while ( 1 )
    {
LABEL_3:
      v10 = *v7;
      v11 = *v5;
      if ( *v5 < *v7 )
      {
        ++v5;
        *v9++ = v11;
        goto LABEL_12;
      }
      v12 = v7 + 1;
      if ( v10 < v11 )
      {
LABEL_18:
        while ( 1 )
        {
          v13 = *v12;
          v17 = *v5;
          if ( *v5 < *v12 )
            break;
          v7 = v12 + 1;
          if ( v13 < v17 )
          {
            if ( v7 != (int *)v8 )
              goto LABEL_3;
            goto LABEL_21;
          }
          *v9 = v17;
          ++v5;
          ++v9;
          if ( v7 == (int *)v8 )
            goto LABEL_21;
LABEL_12:
          v15 = *v7;
          v16 = *v5;
          if ( *v5 < *v7 )
          {
            *v9 = v16;
            ++v5;
            ++v9;
            if ( v5 != (int *)v6 )
              goto LABEL_3;
            goto LABEL_10;
          }
          v12 = v7 + 1;
          if ( v15 < v16 )
          {
            *v9++ = v15;
            v13 = *v12;
            goto LABEL_7;
          }
          *v9 = v16;
          ++v5;
          ++v9;
          if ( v5 == (int *)v6 )
            goto LABEL_10;
        }
      }
      else
      {
        v13 = *v12;
      }
      ++v5;
LABEL_7:
      if ( *v5 < v13 )
      {
        if ( ++v5 != (int *)v6 )
          goto LABEL_18;
        goto LABEL_10;
      }
      v14 = *v12;
      v7 = v12 + 1;
      if ( v14 < *v5 )
        break;
      if ( ++v5 == (int *)v6 )
        goto LABEL_10;
      if ( v7 == (int *)v8 )
        goto LABEL_22;
    }
    *v9++ = v14;
    if ( v7 != (int *)v8 )
      goto LABEL_12;
LABEL_21:
    if ( v5 != (int *)v6 )
      goto LABEL_22;
  }
LABEL_10:
  *((_DWORD *)this + 3) = (_DWORD)v9 - ((_DWORD)this + 8);
}
