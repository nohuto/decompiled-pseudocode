/*
 * XREFs of PiCMDeleteDeviceKey @ 0x140B69C68
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14095AF34 (PiCMReturnBasicResultData.c)
 *     _PnpCtxRegEnumKey @ 0x140974BF4 (_PnpCtxRegEnumKey.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 *     _CmDeleteDeviceRegKey @ 0x1409B7554 (_CmDeleteDeviceRegKey.c)
 *     PiCMConvertDeviceKeyType @ 0x140AA3810 (PiCMConvertDeviceKeyType.c)
 */

__int64 __fastcall PiCMDeleteDeviceKey(void *a1, unsigned int a2, void *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // rdi
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // r14
  __int16 v12; // r11
  int v13; // edi
  __int64 v14; // rcx
  int v15; // r15d
  int inited; // esi
  int v18; // [rsp+30h] [rbp-59h] BYREF
  ULONG Value; // [rsp+34h] [rbp-55h] BYREF
  __int64 v20; // [rsp+38h] [rbp-51h] BYREF
  _DWORD *v21; // [rsp+40h] [rbp-49h]
  HANDLE Handle; // [rsp+48h] [rbp-41h] BYREF
  __int128 v23; // [rsp+50h] [rbp-39h] BYREF
  __int128 v24; // [rsp+60h] [rbp-29h]
  __int64 v25; // [rsp+70h] [rbp-19h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-11h] BYREF
  WCHAR SourceString[8]; // [rsp+88h] [rbp-1h] BYREF

  v6 = a6;
  v21 = a6;
  v25 = 0LL;
  v20 = 0LL;
  *a6 = 0;
  v23 = 0LL;
  Handle = 0LL;
  v24 = 0LL;
  Value = 0;
  DestinationString = 0LL;
  v18 = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v23);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      v11 = v24;
      if ( (_QWORD)v24 && DWORD2(v23) == 1 && a3 && a4 >= 8 )
      {
        v10 = PiCMConvertDeviceKeyType(SWORD2(v23), &v18);
        if ( v10 >= 0 )
        {
          if ( (v12 & 0xFF00) == 0x200 && HIDWORD(v24) == -1 )
          {
            if ( (int)PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v20) >= 0 )
            {
              v13 = 0;
              if ( (int)PnpCtxRegOpenKey(
                          *(__int64 *)&PiPnpRtlCtx,
                          v20,
                          (__int64)L"Control\\IDConfigDB\\Hardware Profiles",
                          0,
                          8u,
                          (__int64)&Handle) >= 0 )
              {
                do
                {
                  v15 = v13;
                  if ( v10 < 0 )
                    break;
                  while ( 1 )
                  {
                    LODWORD(v20) = 5;
                    inited = PnpCtxRegEnumKey(v14, Handle);
                    if ( inited < 0 )
                      break;
                    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
                    if ( inited < 0 )
                      break;
                    inited = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
                    if ( inited < 0 )
                      break;
                    v10 = CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v11, v18, Value);
                    if ( v10 != -1073741772 )
                      break;
                    v13 = v15 + 1;
                    v10 = 0;
                    ++v15;
                  }
                  ++v13;
                }
                while ( inited >= 0 );
              }
              v6 = v21;
            }
          }
          else
          {
            v10 = CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v11, v18, SHIDWORD(v24));
          }
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741790;
    }
    if ( Handle )
      ZwClose(Handle);
    v9 = PiCMReturnBasicResultData(v10, v25, a3, a4, v6);
  }
  if ( (_QWORD)v24 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v24);
  return (unsigned int)v9;
}
