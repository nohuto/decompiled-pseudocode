/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800B602C
 * Callers:
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B612C (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180028B6C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800612C8 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation(CIconicAnimatedVisual *this)
{
  unsigned int v1; // ebx
  struct CSecondaryWindowRepresentation **v2; // rbp
  __int64 *v4; // rsi
  _DWORD *v5; // r14
  HMONITOR v6; // rax
  int ScaleFactorForMonitorImp; // eax
  int v8; // r9d
  int v9; // eax
  enum DEVICE_SCALE_FACTOR v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (struct CSecondaryWindowRepresentation **)((char *)this + 216);
  if ( !*((_QWORD *)this + 27) )
  {
    v4 = (__int64 *)((char *)this + 224);
    if ( *((_QWORD *)this + 28) )
    {
      v5 = (_DWORD *)((char *)this + 248);
      v11 = DEVICE_SCALE_FACTOR_INVALID;
      v6 = MonitorFromRect((LPCRECT)((char *)this + 248), 2u);
      ScaleFactorForMonitorImp = GetScaleFactorForMonitorImp(v6, &v11);
      v1 = ScaleFactorForMonitorImp;
      if ( ScaleFactorForMonitorImp < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ScaleFactorForMonitorImp, 0x3Eu, 0LL);
      }
      else
      {
        v8 = 0;
        if ( v5[2] - *v5 >= 0 )
          v8 = v5[2] - *v5;
        v9 = CSecondaryWindowRepresentation::Create(
               *((_DWORD *)this + 70) | 0x802u,
               ((unsigned __int64)this + 208) & -(__int64)(this != 0LL),
               *v4,
               v8,
               v11,
               v2);
        v1 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x45u, 0LL);
      }
    }
  }
  return v1;
}
