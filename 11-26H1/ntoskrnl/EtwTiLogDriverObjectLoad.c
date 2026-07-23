/*
 * XREFs of EtwTiLogDriverObjectLoad @ 0x140A3853C
 * Callers:
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x140A38068 (EtwpTiQueryCodeIntegrityOptions.c)
 */

BOOLEAN __fastcall EtwTiLogDriverObjectLoad(unsigned __int16 *a1)
{
  BOOLEAN result; // al
  const wchar_t *v3; // rdx
  int v4; // ecx
  __int16 v5; // ax
  __int16 v6; // [rsp+30h] [rbp-40h] BYREF
  int v7; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  int *v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp-10h]

  v7 = 0;
  result = EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_DRIVER_OBJECT_LOAD);
  if ( result )
  {
    result = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x40000000uLL);
    if ( result )
    {
      if ( a1 && *a1 )
      {
        v3 = (const wchar_t *)*((_QWORD *)a1 + 1);
        v4 = *a1;
        v5 = *a1 >> 1;
      }
      else
      {
        v4 = 12;
        v3 = L"(null)";
        v5 = 6;
      }
      v6 = v5;
      v10 = v4;
      UserData.Ptr = (ULONGLONG)&v6;
      *(_QWORD *)&UserData.Size = 2LL;
      v9 = v3;
      v11 = 0;
      if ( EtwpTiQueryCodeIntegrityOptions(&v7) < 0 )
        v7 = -1;
      v12 = &v7;
      v13 = 4LL;
      return EtwWrite(EtwThreatIntProvRegHandle, &THREATINT_DRIVER_OBJECT_LOAD, 0LL, 3u, &UserData);
    }
  }
  return result;
}
