/*
 * XREFs of WerpCreateCrashDataSection @ 0x180111BE4
 * Callers:
 *     RtlReportExceptionEx @ 0x18013A9A0 (RtlReportExceptionEx.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall WerpCreateCrashDataSection(HANDLE *a1, void **a2)
{
  int v4; // ebx
  HANDLE v5; // rcx
  void *v6; // rdx
  _DWORD v8[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  __int128 v13; // [rsp+70h] [rbp-10h]
  void *v14; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+C8h] [rbp+48h] BYREF

  v8[1] = 0;
  v12 = 0;
  Handle = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  if ( a1 )
    *a1 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v8[0] = 48;
      v9 = 0LL;
      v13 = 0LL;
      v11 = 2;
      v10 = 0LL;
      v16 = 1648LL;
      v4 = NtCreateSection(&Handle, 983047LL, v8, &v16, 4, 0x8000000, 0LL);
      if ( v4 < 0 || (v4 = ZwMapViewOfSection(Handle, -1LL, &v14, 0LL, 0LL, 0LL, &v17, 1, 0, 4), v4 < 0) )
      {
        v5 = Handle;
        v6 = v14;
      }
      else
      {
        memset_thunk_772440563353939046(v14, 0, 0xF8uLL);
        v5 = 0LL;
        *a1 = Handle;
        v6 = 0LL;
        v4 = 0;
        *a2 = v14;
        Handle = 0LL;
        v14 = 0LL;
      }
      if ( v6 )
      {
        NtUnmapViewOfSection(-1LL, v6);
        v5 = Handle;
        v14 = 0LL;
      }
      if ( v5 )
        NtClose(v5);
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v4;
}
