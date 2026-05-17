/*
 * XREFs of RtlSplay @ 0x1800B7F60
 * Callers:
 *     RtlpTpIoLookup @ 0x1800B74E0 (RtlpTpIoLookup.c)
 *     RtlEnumerateGenericTable @ 0x1800B7730 (RtlEnumerateGenericTable.c)
 *     RtlDelete @ 0x1800B7940 (RtlDelete.c)
 *     RtlInsertElementGenericTable @ 0x1800B7BB0 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800B7D10 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTableFull @ 0x1800B7E10 (RtlLookupElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x1800B7EE0 (RtlLookupElementGenericTable.c)
 *     PfxFindPrefix @ 0x18013C8E0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x18013C9E0 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlSplay(_QWORD *a1)
{
  _QWORD *i; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rcx

  for ( i = (_QWORD *)*a1; (_QWORD *)*a1 != a1; i = (_QWORD *)*a1 )
  {
    v3 = (_QWORD *)i[1];
    v4 = (_QWORD *)*i;
    if ( v3 == a1 )
    {
      if ( v4 == i )
      {
        v15 = (_QWORD *)a1[2];
        i[1] = v15;
        if ( v15 )
          *v15 = i;
        a1[2] = i;
        *i = a1;
        *a1 = a1;
      }
      else if ( (_QWORD *)v4[1] == i )
      {
        v7 = (_QWORD *)a1[2];
        i[1] = v7;
        if ( v7 )
          *v7 = i;
        v8 = (_QWORD *)i[2];
        v4[1] = v8;
        if ( v8 )
          *v8 = v4;
        if ( (_QWORD *)*v4 == v4 )
        {
          *a1 = a1;
          a1[2] = i;
          *i = a1;
          i[2] = v4;
          *v4 = i;
        }
        else
        {
          *a1 = *v4;
          v9 = 16LL;
          if ( *(_QWORD **)(*v4 + 8LL) == v4 )
            v9 = 8LL;
          *(_QWORD *)(*v4 + v9) = a1;
          a1[2] = i;
          *i = a1;
          i[2] = v4;
          *v4 = i;
        }
      }
      else
      {
        v12 = (_QWORD *)a1[1];
        v4[2] = v12;
        if ( v12 )
          *v12 = v4;
        v13 = (_QWORD *)a1[2];
        i[1] = v13;
        if ( v13 )
          *v13 = i;
        if ( (_QWORD *)*v4 == v4 )
        {
          *a1 = a1;
          a1[1] = v4;
          *v4 = a1;
          a1[2] = i;
          *i = a1;
        }
        else
        {
          *a1 = *v4;
          v14 = 16LL;
          if ( *(_QWORD **)(*v4 + 8LL) == v4 )
            v14 = 8LL;
          *(_QWORD *)(*v4 + v14) = a1;
          a1[1] = v4;
          *v4 = a1;
          a1[2] = i;
          *i = a1;
        }
      }
    }
    else if ( v4 == i )
    {
      v5 = (_QWORD *)a1[1];
      i[2] = v5;
      if ( v5 )
        *v5 = i;
      a1[1] = i;
      *i = a1;
      *a1 = a1;
    }
    else if ( (_QWORD *)v4[2] == i )
    {
      v4[2] = v3;
      if ( v3 )
        *v3 = v4;
      v10 = (_QWORD *)a1[1];
      i[2] = v10;
      if ( v10 )
        *v10 = i;
      if ( (_QWORD *)*v4 == v4 )
      {
        *a1 = a1;
        a1[1] = i;
        *i = a1;
        i[1] = v4;
        *v4 = i;
      }
      else
      {
        *a1 = *v4;
        v11 = 16LL;
        if ( *(_QWORD **)(*v4 + 8LL) == v4 )
          v11 = 8LL;
        *(_QWORD *)(*v4 + v11) = a1;
        a1[1] = i;
        *i = a1;
        i[1] = v4;
        *v4 = i;
      }
    }
    else
    {
      v16 = (_QWORD *)a1[1];
      i[2] = v16;
      if ( v16 )
        *v16 = i;
      v17 = (_QWORD *)a1[2];
      v4[1] = v17;
      if ( v17 )
        *v17 = v4;
      if ( (_QWORD *)*v4 == v4 )
      {
        *a1 = a1;
        a1[1] = i;
        *i = a1;
        a1[2] = v4;
        *v4 = a1;
      }
      else
      {
        *a1 = *v4;
        v18 = 16LL;
        if ( *(_QWORD **)(*v4 + 8LL) == v4 )
          v18 = 8LL;
        *(_QWORD *)(*v4 + v18) = a1;
        a1[1] = i;
        *i = a1;
        a1[2] = v4;
        *v4 = a1;
      }
    }
  }
  return a1;
}
