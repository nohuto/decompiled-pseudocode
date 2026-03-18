/*
 * XREFs of ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1403010DC
 * Callers:
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402FD854 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x140002754 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x140300C20 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SimpleHapticsController::SetAutoTriggerWaveform(PHIDP_PREPARSED_DATA *this, unsigned __int16 a2)
{
  ULONG v2; // r15d
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  NTSTATUS Caps; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  UCHAR *v11; // rsi
  int SpecificValueCaps; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rdx
  unsigned int v17; // [rsp+40h] [rbp-89h] BYREF
  const char *v18; // [rsp+48h] [rbp-81h] BYREF
  USHORT ValueCapsLength[8]; // [rsp+50h] [rbp-79h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-69h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-29h] BYREF

  v2 = a2;
  memset_0(&Capabilities, 0, sizeof(Capabilities));
  ValueCapsLength[0] = 1;
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  if ( (unsigned int)dword_1403AAAA0 > 4 )
  {
    LOWORD(v17) = v2;
    v18 = "SimpleHapticsController::SetAutoTriggerWaveform entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>>(
      v4,
      (__int64)&unk_14037A51F,
      v5,
      v6,
      (void **)&v18,
      (__int64)&v17);
  }
  Caps = HidP_GetCaps(this[2], &Capabilities);
  v10 = Caps;
  if ( Caps >= 0 )
  {
    v11 = (UCHAR *)Win32AllocPoolZInit(Capabilities.FeatureReportByteLength, 1667787091LL);
    if ( !v11 )
    {
      v10 = -1073741670;
      goto LABEL_22;
    }
    SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &ValueCaps, ValueCapsLength, this[2]);
    v10 = SpecificValueCaps;
    if ( SpecificValueCaps >= 0 )
    {
      *v11 = ValueCaps.ReportID;
      SpecificValueCaps = SimpleHapticsController::SendDeviceIOControl(
                            (SimpleHapticsController *)this,
                            0xB0192u,
                            0LL,
                            0LL,
                            v11,
                            Capabilities.FeatureReportByteLength,
                            0LL);
      v10 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
      {
        SpecificValueCaps = HidP_SetUsageValue(
                              HidP_Feature,
                              0xEu,
                              ValueCaps.LinkCollection,
                              0x20u,
                              v2,
                              this[2],
                              (PCHAR)v11,
                              Capabilities.FeatureReportByteLength);
        v10 = SpecificValueCaps;
        if ( SpecificValueCaps >= 0 )
        {
          SpecificValueCaps = SimpleHapticsController::SendDeviceIOControl(
                                (SimpleHapticsController *)this,
                                0xB0191u,
                                v11,
                                Capabilities.FeatureReportByteLength,
                                0LL,
                                0,
                                0LL);
          v10 = SpecificValueCaps;
          if ( SpecificValueCaps >= 0 || (unsigned int)dword_1403AAAA0 <= 2 )
            goto LABEL_21;
          v15 = &unk_14037A479;
          goto LABEL_20;
        }
        if ( (unsigned int)dword_1403AAAA0 > 2 )
        {
          v15 = &unk_14037A442;
          goto LABEL_20;
        }
      }
      else if ( (unsigned int)dword_1403AAAA0 > 2 )
      {
        v15 = &unk_14037A5C5;
        goto LABEL_20;
      }
    }
    else if ( (unsigned int)dword_1403AAAA0 > 2 )
    {
      v15 = &unk_14037A58E;
LABEL_20:
      v17 = SpecificValueCaps;
      v18 = "Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AAAA0,
        (__int64)v15,
        v13,
        v14,
        (void **)&v18,
        (__int64)&v17);
    }
LABEL_21:
    Win32FreePool(v11);
    goto LABEL_22;
  }
  if ( (unsigned int)dword_1403AAAA0 > 2 )
  {
    v17 = Caps;
    v18 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAAA0,
      (__int64)&unk_14037A557,
      v8,
      v9,
      (void **)&v18,
      (__int64)&v17);
  }
LABEL_22:
  if ( (unsigned int)dword_1403AAAA0 > 4 )
  {
    v17 = v10;
    v18 = "SimpleHapticsController::SetAutoTriggerWaveform exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAAA0,
      (__int64)&unk_14037A4B0,
      v8,
      v9,
      (void **)&v18,
      (__int64)&v17);
  }
  return v10;
}
