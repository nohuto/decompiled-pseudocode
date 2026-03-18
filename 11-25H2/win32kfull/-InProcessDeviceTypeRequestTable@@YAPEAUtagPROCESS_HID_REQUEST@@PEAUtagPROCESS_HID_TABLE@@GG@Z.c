/*
 * XREFs of ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x14011E984
 * Callers:
 *     PostDeviceNotification @ 0x14011D5FC (PostDeviceNotification.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14011E5B0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall InProcessDeviceTypeRequestTable(
        struct tagPROCESS_HID_TABLE *a1,
        __int16 a2,
        __int16 a3)
{
  struct tagPROCESS_HID_REQUEST *v3; // r9
  struct tagPROCESS_HID_REQUEST *result; // rax
  struct tagPROCESS_HID_REQUEST *v8; // rcx
  char *v9; // rdx
  __int64 *i; // rcx
  __int64 v11; // rcx
  struct tagPROCESS_HID_REQUEST **v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 **v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  struct tagPROCESS_HID_REQUEST **v18; // r8
  struct tagPROCESS_HID_REQUEST *v19; // rdx

  v3 = (struct tagPROCESS_HID_TABLE *)((char *)a1 + 16);
  for ( result = (struct tagPROCESS_HID_REQUEST *)*((_QWORD *)a1 + 2); ; result = *(struct tagPROCESS_HID_REQUEST **)result )
  {
    if ( result == v3 )
      goto LABEL_7;
    if ( *((_WORD *)result + 8) == a2 && *((_WORD *)result + 9) == a3 )
      break;
  }
  if ( result )
  {
    if ( *((struct tagPROCESS_HID_REQUEST **)a1 + 2) != result )
    {
      v11 = *(_QWORD *)result;
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)result + 8LL) == result )
      {
        v12 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)result + 1);
        if ( *v12 == result )
        {
          *v12 = (struct tagPROCESS_HID_REQUEST *)v11;
          *(_QWORD *)(v11 + 8) = v12;
          v13 = *(_QWORD *)v3;
          if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)v3 + 8LL) == v3 )
          {
            *(_QWORD *)result = v13;
            *((_QWORD *)result + 1) = v3;
            *(_QWORD *)(v13 + 8) = result;
            *(_QWORD *)v3 = result;
            return result;
          }
        }
      }
      goto LABEL_24;
    }
  }
  else
  {
LABEL_7:
    v8 = (struct tagPROCESS_HID_TABLE *)((char *)a1 + 32);
    for ( result = *(struct tagPROCESS_HID_REQUEST **)v8; ; result = *(struct tagPROCESS_HID_REQUEST **)result )
    {
      if ( result == v8 )
        return 0LL;
      if ( *((_WORD *)result + 8) == a2 )
        break;
    }
    if ( !result )
      return 0LL;
    if ( *(struct tagPROCESS_HID_REQUEST **)v8 != result )
    {
      v17 = *(_QWORD *)result;
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)result + 8LL) != result )
        goto LABEL_24;
      v18 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)result + 1);
      if ( *v18 != result )
        goto LABEL_24;
      *v18 = (struct tagPROCESS_HID_REQUEST *)v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = *(struct tagPROCESS_HID_REQUEST **)v8;
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)v8 + 8LL) != v8 )
        goto LABEL_24;
      *(_QWORD *)result = v19;
      *((_QWORD *)result + 1) = v8;
      *((_QWORD *)v19 + 1) = result;
      *(_QWORD *)v8 = result;
    }
    v9 = (char *)a1 + 48;
    for ( i = (__int64 *)*((_QWORD *)a1 + 6); ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)v9 )
        return result;
      if ( *((_WORD *)i + 8) == a2 && *((_WORD *)i + 9) == a3 )
        break;
    }
    if ( i )
    {
      if ( *((__int64 **)a1 + 6) == i )
        return 0LL;
      v14 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) == i )
      {
        v15 = (__int64 **)i[1];
        if ( *v15 == i )
        {
          *v15 = v14;
          v14[1] = (__int64)v15;
          v16 = *(_QWORD *)v9;
          if ( *(char **)(*(_QWORD *)v9 + 8LL) == v9 )
          {
            *i = v16;
            i[1] = (__int64)v9;
            *(_QWORD *)(v16 + 8) = i;
            *(_QWORD *)v9 = i;
            return 0LL;
          }
        }
      }
LABEL_24:
      __fastfail(3u);
    }
  }
  return result;
}
