/*
 * XREFs of ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x140175674
 * Callers:
 *     xxxProcessHidInput @ 0x1400388A0 (xxxProcessHidInput.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall HidIsRequestedByThisProcess(
        struct DEVICEINFO *a1,
        struct tagPROCESS_HID_TABLE *a2)
{
  __int64 *v2; // r8
  __int64 v3; // rax
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // bx
  char *v6; // rcx
  __int64 *i; // rax
  char *v8; // rcx
  char *v10; // r9
  __int64 *j; // rcx
  __int64 *v12; // r8
  __int64 **v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 **v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // r9
  __int64 **v19; // r11
  __int64 v20; // r9

  v2 = 0LL;
  if ( !a2 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 55);
  v4 = *(_WORD *)(v3 + 42);
  v5 = *(_WORD *)(v3 + 40);
  if ( __PAIR32__(*((_WORD *)a2 + 48), *((_WORD *)a2 + 49)) != __PAIR32__(v4, v5) )
  {
    v6 = (char *)a2 + 16;
    for ( i = (__int64 *)*((_QWORD *)a2 + 2); ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)v6 )
        goto LABEL_9;
      if ( *((_WORD *)i + 8) == v4 && *((_WORD *)i + 9) == v5 )
        break;
    }
    if ( i )
    {
      if ( *((__int64 **)a2 + 2) != i )
      {
        v12 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i )
          goto LABEL_28;
        v13 = (__int64 **)i[1];
        if ( *v13 != i )
          goto LABEL_28;
        *v13 = v12;
        v12[1] = (__int64)v13;
        v14 = *(_QWORD *)v6;
        if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
          goto LABEL_28;
        *i = v14;
        i[1] = (__int64)v6;
        *(_QWORD *)(v14 + 8) = i;
        *(_QWORD *)v6 = i;
      }
    }
    else
    {
LABEL_9:
      v8 = (char *)a2 + 32;
      for ( i = (__int64 *)*((_QWORD *)a2 + 4); ; i = (__int64 *)*i )
      {
        if ( i == (__int64 *)v8 )
          return (struct tagPROCESS_HID_REQUEST *)v2;
        if ( *((_WORD *)i + 8) == v4 )
          break;
      }
      if ( !i )
        return (struct tagPROCESS_HID_REQUEST *)v2;
      if ( *((__int64 **)a2 + 4) != i )
      {
        v18 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i )
          goto LABEL_28;
        v19 = (__int64 **)i[1];
        if ( *v19 != i )
          goto LABEL_28;
        *v19 = v18;
        v18[1] = (__int64)v19;
        v20 = *(_QWORD *)v8;
        if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
          goto LABEL_28;
        *i = v20;
        i[1] = (__int64)v8;
        *(_QWORD *)(v20 + 8) = i;
        *(_QWORD *)v8 = i;
      }
      v10 = (char *)a2 + 48;
      for ( j = (__int64 *)*((_QWORD *)a2 + 6); ; j = (__int64 *)*j )
      {
        if ( j == (__int64 *)v10 )
          goto LABEL_18;
        if ( *((_WORD *)j + 8) == v4 && *((_WORD *)j + 9) == v5 )
          break;
      }
      if ( j )
      {
        if ( *((__int64 **)a2 + 6) != j )
        {
          v15 = (__int64 *)*j;
          if ( *(__int64 **)(*j + 8) == j )
          {
            v16 = (__int64 **)j[1];
            if ( *v16 == j )
            {
              *v16 = v15;
              v15[1] = (__int64)v16;
              v17 = *(_QWORD *)v10;
              if ( *(char **)(*(_QWORD *)v10 + 8LL) == v10 )
              {
                *j = v17;
                j[1] = (__int64)v10;
                *(_QWORD *)(v17 + 8) = j;
                *(_QWORD *)v10 = j;
                return (struct tagPROCESS_HID_REQUEST *)v2;
              }
            }
          }
LABEL_28:
          __fastfail(3u);
        }
        return (struct tagPROCESS_HID_REQUEST *)v2;
      }
    }
LABEL_18:
    v2 = i;
    *((_WORD *)a2 + 48) = v4;
    *((_WORD *)a2 + 49) = v5;
    *((_QWORD *)a2 + 11) = i;
    return (struct tagPROCESS_HID_REQUEST *)v2;
  }
  return (struct tagPROCESS_HID_REQUEST *)*((_QWORD *)a2 + 11);
}
