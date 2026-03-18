/*
 * XREFs of ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18012EE20
 * Callers:
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18012E3B0 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Intersect(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  char *v4; // r11
  char *v5; // rbx
  int *v6; // r9
  _DWORD *v7; // rax
  int *v8; // rdx
  int v9; // r8d
  int v10; // ecx
  int *v11; // rdx
  int *v12; // r9
  _DWORD *v13; // rax
  int v14; // r8d
  int v15; // ecx
  int v16; // r8d

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (char *)a2 + *((int *)a2 + 3) + 8;
  v5 = (char *)a3 + *((int *)a3 + 3) + 8;
  v6 = (int *)((char *)a2 + *((int *)a2 + 1));
  v7 = (_DWORD *)((char *)this + *((int *)this + 1));
  v8 = (int *)((char *)a3 + *((int *)a3 + 1));
  if ( v8 != (int *)v5 && v6 != (int *)v4 )
  {
    while ( 1 )
    {
LABEL_4:
      v9 = *v8;
      v10 = *v6;
      if ( *v6 < *v8 )
      {
        v12 = v6 + 1;
        goto LABEL_14;
      }
      v11 = v8 + 1;
      if ( v9 < v10 )
      {
LABEL_9:
        while ( 1 )
        {
          v16 = *v11;
          v10 = *v6;
          if ( *v6 < *v11 )
            break;
          v8 = v11 + 1;
          if ( v16 < v10 )
            goto LABEL_19;
          v12 = v6 + 1;
          if ( v8 == (int *)v5 )
            goto LABEL_3;
LABEL_14:
          v10 = *v8;
          if ( *v12 < *v8 )
          {
            v6 = v12 + 1;
            if ( v6 != (int *)v4 )
              goto LABEL_4;
            goto LABEL_3;
          }
          v11 = v8 + 1;
          if ( v10 < *v12 )
            goto LABEL_7;
          v6 = v12 + 1;
          if ( v6 == (int *)v4 )
            goto LABEL_3;
        }
      }
      v12 = v6 + 1;
LABEL_7:
      *v7 = v10;
      v13 = v7 + 1;
      v14 = *v11;
      v15 = *v12;
      if ( *v12 < *v11 )
      {
        *v13 = v15;
        v6 = v12 + 1;
        v7 = v13 + 1;
        if ( v6 != (int *)v4 )
          goto LABEL_9;
        goto LABEL_3;
      }
      v8 = v11 + 1;
      if ( v14 < v15 )
        break;
      *v13 = v15;
      v6 = v12 + 1;
      v7 = v13 + 1;
      if ( v6 == (int *)v4 )
        goto LABEL_3;
LABEL_19:
      if ( v8 == (int *)v5 )
        goto LABEL_3;
    }
    *v13 = v14;
    v7 = v13 + 1;
    if ( v8 != (int *)v5 )
      goto LABEL_14;
  }
LABEL_3:
  *((_DWORD *)this + 3) = (_DWORD)v7 - ((_DWORD)this + 8);
}
