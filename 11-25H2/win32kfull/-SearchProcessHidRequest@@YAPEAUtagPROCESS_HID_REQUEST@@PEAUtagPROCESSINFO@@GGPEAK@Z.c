/*
 * XREFs of ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x14011EAD8
 * Callers:
 *     DestroyThreadHidObjects @ 0x14011C130 (DestroyThreadHidObjects.c)
 *     _RegisterRawInputDevices @ 0x14011DA34 (_RegisterRawInputDevices.c)
 * Callees:
 *     ?SearchProcessHidRequestInclusion@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x14011EE14 (-SearchProcessHidRequestInclusion@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?SearchProcessHidRequestExclusion@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x14011F448 (-SearchProcessHidRequestExclusion@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 */

struct tagPROCESS_HID_REQUEST *__fastcall SearchProcessHidRequest(
        struct tagPROCESSINFO *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  struct tagPROCESS_HID_REQUEST *result; // rax
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // r10
  _DWORD *v9; // r9
  int v10; // r11d

  if ( !*((_QWORD *)a1 + 103) )
    return 0LL;
  result = SearchProcessHidRequestInclusion(*((struct tagPROCESS_HID_TABLE **)a1 + 103), a2, a3);
  if ( result )
  {
    *v7 = 1;
  }
  else
  {
    if ( !v6 )
    {
      for ( result = *(struct tagPROCESS_HID_REQUEST **)(v8 + 32);
            result != (struct tagPROCESS_HID_REQUEST *)(v8 + 32);
            result = *(struct tagPROCESS_HID_REQUEST **)result )
      {
        if ( *((_WORD *)result + 8) == v5 )
        {
          if ( !result )
            break;
          *v7 = 2;
          return result;
        }
      }
    }
    result = SearchProcessHidRequestExclusion((struct tagPROCESS_HID_TABLE *)v8, v5, v6);
    if ( !result )
    {
      *v9 = v10;
      return 0LL;
    }
    *v9 = 3;
  }
  return result;
}
