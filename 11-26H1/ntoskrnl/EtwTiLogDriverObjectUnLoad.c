/*
 * XREFs of EtwTiLogDriverObjectUnLoad @ 0x140B2DA80
 * Callers:
 *     IoDeleteDriver @ 0x140798F00 (IoDeleteDriver.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTiLogDriverObjectUnLoad(unsigned __int16 *a1)
{
  BOOLEAN result; // al
  const wchar_t *v3; // rdx
  int v4; // ecx
  __int16 v5; // ax
  __int16 v6; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  const wchar_t *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  result = EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_DRIVER_OBJECT_UNLOAD);
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
      v8 = v3;
      UserData.Ptr = (ULONGLONG)&v6;
      v9 = v4;
      *(_QWORD *)&UserData.Size = 2LL;
      v10 = 0;
      return EtwWrite(EtwThreatIntProvRegHandle, &THREATINT_DRIVER_OBJECT_UNLOAD, 0LL, 2u, &UserData);
    }
  }
  return result;
}
