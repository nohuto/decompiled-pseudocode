/*
 * XREFs of ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x1800C2CE0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4B30 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Contains@?$DynArray@PEAUHMONITOR__@@$0A@@@QEBA_NAEBQEAUHMONITOR__@@@Z @ 0x180065B0C (-Contains@-$DynArray@PEAUHMONITOR__@@$0A@@@QEBA_NAEBQEAUHMONITOR__@@@Z.c)
 */

void __fastcall CAppArrangementBase::_AddToAnimatingMonitors(CAppArrangementBase *this, const struct tagRECT *a2)
{
  HMONITOR v3; // rbx
  __int64 v4; // r11
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // eax
  HMONITOR v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = MonitorFromRect(a2, 0);
  v3 = v8;
  if ( v8 && !DynArray<HMONITOR__ *,0>::Contains((__int64)this + 152, &v8) )
  {
    v5 = *(_DWORD *)(v4 + 24);
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
    }
    else if ( v6 > *(_DWORD *)(v4 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(v4, 8, 1, &v8);
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC2u, 0LL);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v4 + 8LL * v5) = v3;
      *(_DWORD *)(v4 + 24) = v6;
    }
  }
}
