/*
 * XREFs of EtwTiLogDriverObjectUnLoad @ 0x140B2BA00
 * Callers:
 *     IoDeleteDriver @ 0x1407963D0 (IoDeleteDriver.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1402563E0 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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

  result = EtwEventEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, &THREATINT_DRIVER_OBJECT_UNLOAD);
  if ( result )
  {
    result = EtwProviderEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, 0, 0x40000000uLL);
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
      return EtwWrite(
               *(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount,
               &THREATINT_DRIVER_OBJECT_UNLOAD,
               0LL,
               2u,
               &UserData);
    }
  }
  return result;
}
