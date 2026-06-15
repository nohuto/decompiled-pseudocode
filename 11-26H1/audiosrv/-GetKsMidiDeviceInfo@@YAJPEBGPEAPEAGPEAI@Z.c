/*
 * XREFs of ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x180105908
 * Callers:
 *     s_midiOpenPort @ 0x180105B50 (s_midiOpenPort.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall GetKsMidiDeviceInfo(const unsigned __int16 *a1, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned __int16 *v3; // rdi
  int ObjectProperties; // ebx
  __int64 Property; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned __int16 *v16; // rax
  __int64 v18; // [rsp+28h] [rbp-71h]
  __int64 v19; // [rsp+28h] [rbp-71h]
  __int64 v20; // [rsp+30h] [rbp-69h]
  __int64 v21; // [rsp+30h] [rbp-69h]
  unsigned int v22; // [rsp+40h] [rbp-59h] BYREF
  __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 *v24; // [rsp+50h] [rbp-49h] BYREF
  DEVPROPKEY v25; // [rsp+60h] [rbp-39h]
  int v26; // [rsp+74h] [rbp-25h]
  __int64 v27; // [rsp+78h] [rbp-21h]
  __int128 v28; // [rsp+80h] [rbp-19h]
  int v29; // [rsp+90h] [rbp-9h]
  int v30; // [rsp+94h] [rbp-5h]
  __int64 v31; // [rsp+98h] [rbp-1h]
  __int128 v32; // [rsp+A0h] [rbp+7h]
  int v33; // [rsp+B0h] [rbp+17h]
  int v34; // [rsp+B4h] [rbp+1Bh]
  __int64 v35; // [rsp+B8h] [rbp+1Fh]

  v3 = 0LL;
  v25 = DEVPKEY_DeviceInterface_ClassGuid;
  v29 = 1;
  v33 = 2;
  v22 = 0;
  v28 = DEVPKEY_KsMidiPort_KsFilterInterfaceId;
  v23 = 0LL;
  v32 = DEVPKEY_KsMidiPort_KsPinId;
  v24 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v30 = 0;
  v31 = 0LL;
  v34 = 0;
  v35 = 0LL;
  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  if ( ObjectProperties >= 0 )
  {
    Property = DevFindProperty(&DEVPKEY_DeviceInterface_ClassGuid, 0LL, 0LL, v22, v23, &v22, &v23);
    if ( !Property || *(_DWORD *)(Property + 32) != 13 )
      goto LABEL_18;
    v8 = *(_QWORD **)(Property + 40);
    v9 = *v8 - DEVINTERFACE_MIDI_OUTPUT;
    if ( *v8 == DEVINTERFACE_MIDI_OUTPUT )
      v9 = v8[1] - 0x1428BFEBB3BBD480LL;
    if ( v9 )
    {
      v10 = *v8 - DEVINTERFACE_MIDI_INPUT;
      if ( *v8 == DEVINTERFACE_MIDI_INPUT )
        v10 = v8[1] - 0x2BE247378B6F3FB7LL;
      if ( v10 )
      {
        ObjectProperties = -2147024809;
        goto LABEL_19;
      }
    }
    v11 = DevFindProperty(&DEVPKEY_KsMidiPort_KsFilterInterfaceId, 0LL, 0LL, v22, v23, v18, v20);
    if ( !v11 || *(_DWORD *)(v11 + 32) != 18 )
    {
LABEL_18:
      ObjectProperties = -2147023728;
      goto LABEL_19;
    }
    ObjectProperties = _AllocString<CTCoAllocPolicy>(v13, v12, *(const wchar_t **)(v11 + 40), &v24);
    if ( ObjectProperties >= 0 )
    {
      v14 = DevFindProperty(&DEVPKEY_KsMidiPort_KsPinId, 0LL, 0LL, v22, v23, v19, v21);
      if ( v14 && *(_DWORD *)(v14 + 32) == 7 )
      {
        ObjectProperties = 0;
        v15 = **(_DWORD **)(v14 + 40);
        v16 = v24;
        *a3 = v15;
        *a2 = v16;
        goto LABEL_19;
      }
      v3 = v24;
      goto LABEL_18;
    }
    v3 = v24;
  }
LABEL_19:
  CoTaskMemFree(v3);
  DevFreeObjectProperties(v22, v23);
  if ( ObjectProperties < 0 )
    AudSrvTraceLoggingErrorHelper("GetKsMidiDeviceInfo", 91, ObjectProperties);
  return (unsigned int)ObjectProperties;
}
