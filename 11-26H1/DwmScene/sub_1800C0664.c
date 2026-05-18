/*
 * XREFs of sub_1800C0664 @ 0x1800C0664
 * Callers:
 *     sub_1800C0B9C @ 0x1800C0B9C (sub_1800C0B9C.c)
 * Callees:
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_1800425BC @ 0x1800425BC (sub_1800425BC.c)
 *     sub_1800C1830 @ 0x1800C1830 (sub_1800C1830.c)
 *     sub_1800C1880 @ 0x1800C1880 (sub_1800C1880.c)
 *     sub_1800C1A00 @ 0x1800C1A00 (sub_1800C1A00.c)
 */

_QWORD *__fastcall sub_1800C0664(__int64 a1, _QWORD *a2, int a3)
{
  __int64 *v3; // rbx
  __int64 *v6; // r11
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 *i; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 j; // rcx
  __int64 *v13; // rcx
  __int64 *k; // rcx
  __int64 v16[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+60h] [rbp+20h] BYREF
  int v18; // [rsp+70h] [rbp+30h] BYREF

  v18 = a3;
  v3 = (__int64 *)(a1 + 1664);
  if ( sub_1800C1880(a1 + 1664, &v18) )
  {
    *a2 = *(_QWORD *)sub_1800C1830(v3, &v18);
    return a2;
  }
  if ( (unsigned __int64)v3[1] < 2 )
  {
    *a2 = 0LL;
    return a2;
  }
  sub_1800425BC(v3, v16, &v18);
  sub_1800C1A00(v3, &v17, &v18);
  v7 = (__int64 *)*v3;
  if ( v6 != *(__int64 **)*v3 )
  {
    if ( *((_BYTE *)v6 + 25) )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v8 = (__int64 *)*v6;
      if ( *(_BYTE *)(*v6 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)*i; i = (__int64 *)i[1] )
          v6 = i;
        if ( *((_BYTE *)v6 + 25) )
          i = v6;
        v6 = i;
      }
      else
      {
        do
        {
          v6 = v8;
          v8 = (__int64 *)v8[2];
        }
        while ( !*((_BYTE *)v8 + 25) );
      }
    }
  }
  v10 = (__int64)v17;
  if ( v17 == v7 )
  {
    if ( *((_BYTE *)v17 + 25) )
    {
      v10 = v17[2];
    }
    else
    {
      v11 = *v17;
      if ( *(_BYTE *)(*v17 + 25) )
      {
        for ( j = v17[1]; !*(_BYTE *)(j + 25) && v10 == *(_QWORD *)j; j = *(_QWORD *)(j + 8) )
        {
          v10 = j;
          v17 = (__int64 *)j;
        }
        if ( !*(_BYTE *)(v10 + 25) )
        {
          v10 = j;
          v17 = (__int64 *)j;
        }
        goto LABEL_29;
      }
      do
      {
        v10 = v11;
        v11 = *(_QWORD *)(v11 + 16);
      }
      while ( !*(_BYTE *)(v11 + 25) );
    }
    v17 = (__int64 *)v10;
  }
LABEL_29:
  if ( v6 == (__int64 *)v10 )
  {
    if ( v6 == (__int64 *)*v7 )
    {
      sub_18001D6F4((__int64 *)&v17, (__int64)v7);
      v10 = (__int64)v17;
    }
    else if ( *((_BYTE *)v6 + 25) )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v13 = (__int64 *)*v6;
      if ( *(_BYTE *)(*v6 + 25) )
      {
        for ( k = (__int64 *)v6[1]; !*((_BYTE *)k + 25) && v6 == (__int64 *)*k; k = (__int64 *)k[1] )
          v6 = k;
        if ( *((_BYTE *)v6 + 25) )
          k = v6;
        v6 = k;
      }
      else
      {
        do
        {
          v6 = v13;
          v13 = (__int64 *)v13[2];
        }
        while ( !*((_BYTE *)v13 + 25) );
      }
    }
  }
  *a2 = v6[5]
      + (a3 - *((_DWORD *)v6 + 8))
      * ((*(_QWORD *)(v10 + 40) - v6[5])
       / (unsigned int)(*(_DWORD *)(v10 + 32) - *((_DWORD *)v6 + 8)));
  return a2;
}
