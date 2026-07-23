/*
 * XREFs of EtwTiLogDeviceObjectLoadUnload @ 0x14091C1B8
 * Callers:
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTiLogDeviceObjectLoadUnload(char a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  const EVENT_DESCRIPTOR *v4; // rsi
  BOOLEAN result; // al
  int v7; // ecx
  const wchar_t *v8; // rdx
  const wchar_t *v9; // r9
  int v10; // r8d
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // [rsp+38h] [rbp-9h] BYREF
  __int16 v14; // [rsp+3Ch] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  const wchar_t *v16; // [rsp+58h] [rbp+17h]
  int v17; // [rsp+60h] [rbp+1Fh]
  int v18; // [rsp+64h] [rbp+23h]
  __int16 *v19; // [rsp+68h] [rbp+27h]
  __int64 v20; // [rsp+70h] [rbp+2Fh]
  const wchar_t *v21; // [rsp+78h] [rbp+37h]
  int v22; // [rsp+80h] [rbp+3Fh]
  int v23; // [rsp+84h] [rbp+43h]

  v4 = (const EVENT_DESCRIPTOR *)THREATINT_DEVICE_OBJECT_LOAD;
  if ( !a1 )
    v4 = &THREATINT_DEVICE_OBJECT_UNLOAD;
  result = EtwEventEnabled(EtwThreatIntProvRegHandle, v4);
  if ( result )
  {
    result = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x80000000uLL);
    if ( result )
    {
      v7 = 12;
      v8 = L"(null)";
      if ( a2 && *a2 )
      {
        v9 = (const wchar_t *)*((_QWORD *)a2 + 1);
        v10 = *a2;
        v11 = *a2 >> 1;
      }
      else
      {
        v10 = 12;
        v9 = L"(null)";
        v11 = 6;
      }
      v13 = v11;
      UserData.Ptr = (ULONGLONG)&v13;
      *(_QWORD *)&UserData.Size = 2LL;
      v16 = v9;
      v17 = v10;
      v18 = 0;
      if ( a3 && *a3 )
      {
        v8 = (const wchar_t *)*((_QWORD *)a3 + 1);
        v7 = *a3;
        v12 = *a3 >> 1;
      }
      else
      {
        v12 = 6;
      }
      v14 = v12;
      v21 = v8;
      v19 = &v14;
      v22 = v7;
      v20 = 2LL;
      v23 = 0;
      return EtwWrite(EtwThreatIntProvRegHandle, v4, 0LL, 4u, &UserData);
    }
  }
  return result;
}
