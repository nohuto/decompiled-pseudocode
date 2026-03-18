/*
 * XREFs of _PnpGetGenericStorePropertyKeys @ 0x140919888
 * Callers:
 *     PiDevCfgCopyObjectProperties @ 0x14098BB38 (PiDevCfgCopyObjectProperties.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2D44C (DrvDbDeleteObjectSubKey.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140AB4038 (PiDqPnPGetObjectPropertyKeys.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140AB4328 (_PnpGetObjectPropertyKeysWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x140917E70 (_PnpCtxRegQueryValue.c)
 *     _RegRtlEnumKey @ 0x14091A1C0 (_RegRtlEnumKey.c)
 *     RtlUnicodeStringToInteger @ 0x14091AAE0 (RtlUnicodeStringToInteger.c)
 *     _RegRtlEnumValue @ 0x14091AFB0 (_RegRtlEnumValue.c)
 *     _PnpOpenPropertiesKey @ 0x140995B20 (_PnpOpenPropertiesKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x140997950 (_RegRtlOpenKeyTransacted.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 */

__int64 __fastcall PnpGetGenericStorePropertyKeys(
        __int64 a1,
        int a2,
        const WCHAR *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  bool v7; // bl
  __int64 result; // rax
  __int64 v11; // rcx
  const WCHAR *v12; // rax
  int v13; // r12d
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r14d
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  ULONG v22; // ebx
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rbx
  NTSTATUS v27; // eax
  unsigned int v29; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE v30; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+68h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  GUID Guid; // [rsp+88h] [rbp-78h] BYREF
  WCHAR v38[12]; // [rsp+98h] [rbp-68h] BYREF
  WCHAR SourceString[40]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v40[176]; // [rsp+100h] [rbp+0h] BYREF

  v7 = 0;
  v36 = a5;
  *a7 = 0;
  KeyHandle = 0LL;
  v30 = 0LL;
  Handle = 0LL;
  v32 = 0LL;
  Guid = 0LL;
  DestinationString = 0LL;
  if ( !a3 )
    goto LABEL_2;
  v11 = 85LL;
  v12 = a3;
  do
  {
    if ( !*v12 )
      break;
    ++v12;
    --v11;
  }
  while ( v11 );
  result = v11 == 0 ? 0xC000000D : 0;
  if ( v11 )
  {
LABEL_2:
    result = PnpOpenPropertiesKey(a1, a2, 0, 9, 0);
    if ( (_DWORD)result == -1073741772 )
    {
      return 0LL;
    }
    else if ( (int)result >= 0 )
    {
      v13 = 0;
      while ( 1 )
      {
        do
        {
          v29 = 39;
          v14 = RegRtlEnumKey(KeyHandle);
          v34 = ++v13;
        }
        while ( v14 == -1073741789 );
        if ( v14 )
          break;
        if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
          && RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
        {
          if ( a1 && (v15 = *(_QWORD *)(a1 + 224)) != 0 )
            v16 = *(_QWORD *)(v15 + 8);
          else
            v16 = 0LL;
          if ( (int)RegRtlOpenKeyTransacted(KeyHandle, SourceString, 0LL, 9LL, &v30, v16) >= 0 )
          {
            v17 = 0;
            while ( 1 )
            {
              do
              {
                v29 = 9;
                v18 = RegRtlEnumKey(v30);
                ++v17;
              }
              while ( v18 == -1073741789 );
              if ( v18 )
                break;
              if ( RtlInitUnicodeStringEx(&DestinationString, v38) >= 0
                && RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)&v32 + 1) >= 0 )
              {
                if ( a1 && (v19 = *(_QWORD *)(a1 + 224)) != 0 )
                  v20 = *(_QWORD *)(v19 + 8);
                else
                  v20 = 0LL;
                if ( (int)RegRtlOpenKeyTransacted(v30, v38, 0LL, 1LL, &Handle, v20) >= 0 )
                {
                  if ( a4 )
                  {
                    v22 = 0;
                    do
                    {
                      v29 = 85;
                      v23 = RegRtlEnumValue(Handle, v22++, v40, (__int64)&v32, 0LL, 0LL);
                    }
                    while ( v23 == -1073741789 );
                    v7 = v23 == 0;
                  }
                  else
                  {
                    v29 = 0;
                    v27 = PnpCtxRegQueryValue(v21, Handle, a3, &v32, 0LL, &v29);
                    if ( !v27 || v27 == -1073741789 )
                      v7 = 1;
                  }
                  ZwClose(Handle);
                  v24 = !v7;
                  v7 = 0;
                  if ( !v24 )
                  {
                    v25 = *a7;
                    if ( (unsigned int)v25 < a6 )
                    {
                      v26 = v36;
                      *(GUID *)(v36 + 20 * v25) = Guid;
                      *(_DWORD *)(v26 + 20LL * *a7 + 16) = HIDWORD(v32);
                    }
                    ++*a7;
                    v7 = 0;
                  }
                }
              }
            }
            ZwClose(v30);
            v13 = v34;
          }
        }
      }
      ZwClose(KeyHandle);
      return a6 < *a7 ? 0xC0000023 : 0;
    }
  }
  return result;
}
