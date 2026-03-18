/*
 * XREFs of ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x140300568
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x140300258 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x140300C20 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x140301508 (-UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SimpleHapticsController::InitializeSupportedWaveformList(PHIDP_PREPARSED_DATA *this)
{
  unsigned int v2; // edi
  unsigned int v3; // r15d
  int v4; // r12d
  NTSTATUS Caps; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rsi
  NTSTATUS SpecificValueCaps; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rdx
  const char *v11; // rax
  __int64 v12; // rdx
  unsigned int i; // ecx
  UCHAR *p_ReportID; // rcx
  __int16 v15; // ax
  __int64 v16; // rax
  UCHAR *v17; // rax
  CHAR *v18; // r15
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  USHORT v22; // cx
  unsigned int v23; // r12d
  USAGE UsageMin; // r9
  USHORT LinkCollection; // r8
  __int64 v26; // r8
  struct _HIDP_PREPARSED_DATA *ValueCapsLength; // [rsp+30h] [rbp-41h]
  USHORT v29[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v30; // [rsp+4Ch] [rbp-25h] BYREF
  ULONG UsageValue[2]; // [rsp+50h] [rbp-21h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+58h] [rbp-19h] BYREF

  memset_0(&Capabilities, 0, sizeof(Capabilities));
  v2 = 0;
  v3 = 0;
  v4 = 0;
  Caps = HidP_GetCaps(this[2], &Capabilities);
  v29[0] = Capabilities.NumberFeatureValueCaps;
  if ( Caps >= 0 && Capabilities.NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInit(72LL * Capabilities.NumberFeatureValueCaps, 1667787091LL);
    if ( !ValueCaps )
      return (unsigned int)-1073741670;
    SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xAu, 0, 0, ValueCaps, v29, this[2]);
    Caps = SpecificValueCaps;
    if ( SpecificValueCaps >= 0 )
    {
      v12 = v29[0];
      for ( i = 0; i < v29[0]; ++i )
      {
        if ( ValueCaps[i].LinkUsagePage == 14 )
        {
          *((_BYTE *)this + 92) = ValueCaps[i].ReportID;
          break;
        }
      }
      if ( (_DWORD)v12 )
      {
        p_ReportID = &ValueCaps->ReportID;
        v8 = v12;
        do
        {
          if ( *((_WORD *)p_ReportID + 4) == 14 && *p_ReportID == *((_BYTE *)this + 92) )
          {
            v15 = *((_WORD *)p_ReportID + 3);
            if ( v15 == 16 )
            {
              ++v3;
            }
            else if ( v15 == 17 )
            {
              ++v4;
            }
          }
          p_ReportID += 72;
          --v8;
        }
        while ( v8 );
        if ( v3 && v3 == v4 )
        {
          *((_DWORD *)this + 22) = v3;
          v16 = Win32AllocPoolZInit(8LL * v3, 1667787091LL);
          this[10] = (PHIDP_PREPARSED_DATA)v16;
          if ( v16
            && (v17 = (UCHAR *)Win32AllocPoolZInit(Capabilities.FeatureReportByteLength, 1667787091LL),
                (v18 = (CHAR *)v17) != 0LL) )
          {
            *v17 = ValueCaps->ReportID;
            v19 = SimpleHapticsController::SendDeviceIOControl(
                    (SimpleHapticsController *)this,
                    0xB0192u,
                    0LL,
                    0,
                    v17,
                    Capabilities.FeatureReportByteLength,
                    0LL);
            Caps = v19;
            if ( v19 >= 0 )
            {
              v22 = v29[0];
              v23 = 0;
              v30 = 0;
              if ( v29[0] )
              {
                do
                {
                  if ( ValueCaps[v23].LinkUsagePage == 14 && ValueCaps[v23].LinkUsage == 17 )
                  {
                    UsageMin = ValueCaps[v23].Range.UsageMin;
                    LinkCollection = ValueCaps[v23].LinkCollection;
                    ValueCapsLength = this[2];
                    UsageValue[0] = 0;
                    Caps = HidP_GetUsageValue(
                             HidP_Feature,
                             0xAu,
                             LinkCollection,
                             UsageMin,
                             UsageValue,
                             ValueCapsLength,
                             v18,
                             Capabilities.FeatureReportByteLength);
                    if ( Caps < 0 )
                    {
                      v22 = v29[0];
                    }
                    else
                    {
                      v26 = v30;
                      *((_WORD *)this[10] + 4 * v30) = ValueCaps[v23].Range.UsageMin;
                      *((_DWORD *)this[10] + 2 * v26 + 1) = UsageValue[0];
                      v22 = v29[0];
                      v30 = v26 + 1;
                    }
                  }
                  ++v23;
                }
                while ( v23 < v22 );
                if ( v22 )
                {
                  do
                  {
                    if ( ValueCaps[v2].LinkUsagePage == 14 && ValueCaps[v2].LinkUsage == 16 )
                    {
                      SimpleHapticsController::UpdateWaveformInfoList(
                        (SimpleHapticsController *)this,
                        ValueCaps[v2].Range.UsageMin,
                        ValueCaps[v2].PhysicalMin);
                      v22 = v29[0];
                    }
                    ++v2;
                  }
                  while ( v2 < v22 );
                }
              }
            }
            else if ( (unsigned int)dword_1403AAAA0 > 2 )
            {
              v30 = v19;
              *(_QWORD *)UsageValue = "Function failed.";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                (__int64)&dword_1403AAAA0,
                (__int64)&unk_14037A21A,
                v20,
                v21,
                (void **)UsageValue,
                (__int64)&v30);
            }
            Win32FreePool(v18);
          }
          else
          {
            Caps = -1073741670;
          }
          goto LABEL_46;
        }
      }
      if ( (unsigned int)dword_1403AAAA0 > 2 )
      {
        v30 = -1073741216;
        v11 = "Either there is no waveform or waveform list is not equal to duration list.";
        v10 = &unk_14037A1E3;
        goto LABEL_45;
      }
    }
    else if ( (unsigned int)dword_1403AAAA0 > 2 )
    {
      v30 = SpecificValueCaps;
      v10 = &unk_14037A365;
      v11 = "Function failed.";
LABEL_45:
      *(_QWORD *)UsageValue = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AAAA0,
        (__int64)v10,
        v8,
        v9,
        (void **)UsageValue,
        (__int64)&v30);
    }
LABEL_46:
    Win32FreePool(ValueCaps);
  }
  return (unsigned int)Caps;
}
