/*
 * XREFs of ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1401AC778
 * Callers:
 *     xxxProcessHidInput @ 0x14001EB20 (xxxProcessHidInput.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall HidIsRequestedByThisProcess(
        struct DEVICEINFO *a1,
        struct tagPROCESS_HID_TABLE *a2)
{
  __int64 v2; // rax
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // r11
  char *v5; // rcx
  __int64 *i; // rax
  char *v7; // rcx
  char *v8; // r8
  __int64 *j; // rcx
  __int64 *v10; // rcx
  __int64 *v12; // r8
  __int64 **v13; // r10
  __int64 v14; // r8
  __int64 *v15; // r8
  __int64 **v16; // r10
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 **v19; // rdx
  __int64 v20; // rax

  if ( !a2 )
    return 0LL;
  v2 = *((_QWORD *)a1 + 55);
  v3 = *(_WORD *)(v2 + 42);
  v4 = *(_WORD *)(v2 + 40);
  if ( __PAIR32__(*((_WORD *)a2 + 48), *((_WORD *)a2 + 49)) != __PAIR32__(v3, v4) )
  {
    v5 = (char *)a2 + 16;
    for ( i = (__int64 *)*((_QWORD *)a2 + 2); ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)v5 )
        goto LABEL_9;
      if ( *((_WORD *)i + 8) == v3 && *((_WORD *)i + 9) == v4 )
        break;
    }
    if ( i )
    {
      if ( *((__int64 **)a2 + 2) != i )
      {
        v12 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i )
          goto LABEL_31;
        v13 = (__int64 **)i[1];
        if ( *v13 != i )
          goto LABEL_31;
        *v13 = v12;
        v12[1] = (__int64)v13;
        v14 = *(_QWORD *)v5;
        if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
          goto LABEL_31;
        *i = v14;
        i[1] = (__int64)v5;
        *(_QWORD *)(v14 + 8) = i;
        *(_QWORD *)v5 = i;
      }
      v10 = i;
    }
    else
    {
LABEL_9:
      v7 = (char *)a2 + 32;
      for ( i = (__int64 *)*((_QWORD *)a2 + 4); ; i = (__int64 *)*i )
      {
        if ( i == (__int64 *)v7 )
          return 0LL;
        if ( *((_WORD *)i + 8) == v3 )
          break;
      }
      if ( !i )
        return 0LL;
      if ( *((__int64 **)a2 + 4) != i )
      {
        v15 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i )
          goto LABEL_31;
        v16 = (__int64 **)i[1];
        if ( *v16 != i )
          goto LABEL_31;
        *v16 = v15;
        v15[1] = (__int64)v16;
        v17 = *(_QWORD *)v7;
        if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
          goto LABEL_31;
        *i = v17;
        i[1] = (__int64)v7;
        *(_QWORD *)(v17 + 8) = i;
        *(_QWORD *)v7 = i;
      }
      v8 = (char *)a2 + 48;
      for ( j = (__int64 *)*((_QWORD *)a2 + 6); ; j = (__int64 *)*j )
      {
        if ( j == (__int64 *)v8 )
          goto LABEL_16;
        if ( *((_WORD *)j + 8) == v3 && *((_WORD *)j + 9) == v4 )
          break;
      }
      if ( j )
      {
        if ( *((__int64 **)a2 + 6) == j )
          return 0LL;
        v18 = (__int64 *)*j;
        if ( *(__int64 **)(*j + 8) == j )
        {
          v19 = (__int64 **)j[1];
          if ( *v19 == j )
          {
            *v19 = v18;
            v18[1] = (__int64)v19;
            v20 = *(_QWORD *)v8;
            if ( *(char **)(*(_QWORD *)v8 + 8LL) == v8 )
            {
              *j = v20;
              j[1] = (__int64)v8;
              *(_QWORD *)(v20 + 8) = j;
              *(_QWORD *)v8 = j;
              return 0LL;
            }
          }
        }
LABEL_31:
        __fastfail(3u);
      }
LABEL_16:
      v10 = i;
    }
    *((_WORD *)a2 + 48) = v3;
    *((_WORD *)a2 + 49) = v4;
    *((_QWORD *)a2 + 11) = i;
    return (struct tagPROCESS_HID_REQUEST *)v10;
  }
  return (struct tagPROCESS_HID_REQUEST *)*((_QWORD *)a2 + 11);
}
