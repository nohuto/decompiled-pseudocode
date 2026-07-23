/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x1409AC150
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 *     _CmDeleteDeviceWorker @ 0x1409B70E4 (_CmDeleteDeviceWorker.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140A1AA20 (PiDcHandleCustomDeviceEvent.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     wcscmp @ 0x14053A470 (wcscmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 *     PnpIsValidGuidString @ 0x140963020 (PnpIsValidGuidString.c)
 *     _RegRtlEnumKey @ 0x140974C20 (_RegRtlEnumKey.c)
 *     _CmIsDeviceInContainer @ 0x1409AC314 (_CmIsDeviceInContainer.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(_QWORD *a1, __int64 a2, const wchar_t *a3, wchar_t *a4)
{
  ULONG v4; // esi
  int CachedNodeBaseKey; // ebx
  _QWORD *v10; // rdx
  int v12; // eax
  _QWORD *v13; // rdx
  char v14; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v15[3]; // [rsp+41h] [rbp-50h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-4Dh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  wchar_t Str2[40]; // [rsp+50h] [rbp-41h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  v15[0] = 0;
  v14 = 0;
  CachedNodeBaseKey = RtlStringCchCopyW(a4, 0x27uLL, a3);
  if ( CachedNodeBaseKey >= 0 && wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
  {
    v10 = (_QWORD *)a1[22];
    if ( !v10 )
    {
      v13 = (_QWORD *)a1[7];
      if ( v13 == a1 + 7 )
        v10 = (_QWORD *)a1[11];
      else
        v10 = v13 - 2;
      a1[22] = v10;
    }
    CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey((__int64)a1, v10, 10, &KeyHandle);
    if ( CachedNodeBaseKey >= 0 )
    {
      CachedNodeBaseKey = CmIsDeviceInContainer(
                            (_DWORD)a1,
                            (_DWORD)KeyHandle,
                            (_DWORD)a3,
                            (_DWORD)a3,
                            a2,
                            (__int64)v15,
                            (__int64)&v14);
      if ( CachedNodeBaseKey >= 0 && !v14 )
      {
        while ( 1 )
        {
          v16 = 39;
          v12 = RegRtlEnumKey(KeyHandle, v4, (char *)Str2, &v16);
          CachedNodeBaseKey = v12;
          if ( v12 != -1073741789 )
          {
            if ( v12 == -2147483622 )
              return 0;
            if ( v12 < 0 )
              return (unsigned int)CachedNodeBaseKey;
            if ( PnpIsValidGuidString(Str2) && wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
            {
              CachedNodeBaseKey = CmIsDeviceInContainer(
                                    (_DWORD)a1,
                                    (_DWORD)KeyHandle,
                                    (unsigned int)Str2,
                                    (_DWORD)a3,
                                    a2,
                                    (__int64)v15,
                                    (__int64)&v14);
              if ( CachedNodeBaseKey < 0 )
                return (unsigned int)CachedNodeBaseKey;
              if ( v15[0] )
              {
                CachedNodeBaseKey = RtlStringCchCopyW(a4, 0x27uLL, Str2);
                if ( CachedNodeBaseKey < 0 )
                  return (unsigned int)CachedNodeBaseKey;
              }
              if ( v14 )
                return (unsigned int)CachedNodeBaseKey;
            }
          }
          ++v4;
        }
      }
    }
  }
  return (unsigned int)CachedNodeBaseKey;
}
