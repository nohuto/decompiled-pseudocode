/*
 * XREFs of ?ProcessHapticNotificationMessage@Haptics@InputTraceLogging@@SAXW4_MIT_HAPTIC_NOTIFICATION_MESSAGE_ID@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800CA214
 * Callers:
 *     ?ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z @ 0x1800CA110 (-ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800030B0 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800C99F0 (-InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 */

char __fastcall InputTraceLogging::Haptics::ProcessHapticNotificationMessage(
        int a1,
        enum tagINPUT_MESSAGE_DEVICE_TYPE a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  const char *v10; // rax
  const char *v12; // [rsp+40h] [rbp-18h] BYREF
  enum tagINPUT_MESSAGE_DEVICE_TYPE v13; // [rsp+70h] [rbp+18h] BYREF
  const char *v14; // [rsp+78h] [rbp+20h] BYREF

  v4 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 4u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 512LL);
    if ( (_BYTE)v4 )
    {
      v13 = a2;
      v14 = InputTraceLogging::InputMessageDeviceTypeToString(a2);
      if ( a1 )
      {
        v7 = a1 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 == 1 )
                v10 = "SCREEN_BOUNDARY_LIMIT";
              else
                v10 = "UNKNOWN";
            }
            else
            {
              v10 = "RESIZE_LIMIT";
            }
          }
          else
          {
            v10 = "CLOSE_BUTTON_HOVER";
          }
        }
        else
        {
          v10 = "DRAG_DOCK_HOVER";
        }
      }
      else
      {
        v10 = "SNAP_PREVIEW";
      }
      v12 = v10;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                     v5,
                     (__int64)&unk_180214B96,
                     v5,
                     v6,
                     (const unsigned __int16 **)&v12,
                     (const unsigned __int16 **)&v14,
                     (__int64)&v13);
    }
  }
  return (char)v4;
}
