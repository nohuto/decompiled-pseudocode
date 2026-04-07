/*
 * XREFs of ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006DC2C
 * Callers:
 *     ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x18001D450 (-FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18001995C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetGlobalTime@CDesktopManager@@SANXZ @ 0x18001E1EC (-GetGlobalTime@CDesktopManager@@SANXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18002CA30 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180038D60 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18006DD44 (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ @ 0x18006DDC8 (-UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800DE760 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::ProcessTick(CIconicBitmapRegistry *this)
{
  double GlobalTime; // xmm0_8
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  CWindowIconic *v10; // rsi
  int v11; // eax

  GlobalTime = CDesktopManager::GetGlobalTime();
  v3 = 0;
  if ( *(_DWORD *)(v4 + 72) )
  {
    do
    {
      v8 = *((_QWORD *)this + 6);
      if ( *(double *)(v8 + 16LL * v3) > GlobalTime )
        break;
      if ( !IsWindowTab(*(struct CWindowData **)(v8 + 16LL * v3 + 8)) )
      {
        if ( v9 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v10 = (CWindowIconic *)*((_QWORD *)this + 12);
          *(_WORD *)((char *)this + 89) = 256;
        }
        else
        {
          CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)v9, 0);
          *(_BYTE *)(v9 + 738) |= 0x10u;
          v10 = *(CWindowIconic **)(v9 + 488);
        }
        CIconicBitmapRegistry::ClearBitmap(this, (struct CWindowData *)v9);
        if ( v10 )
        {
          v11 = CWindowIconic::OnRepresentationTypeUpdated(v10);
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3CFu, 0LL);
        }
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 18) );
  }
  v5 = DynArray<CIconicBitmapPending,0>::ShiftLeft((char *)this + 48, v3);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x3D5u, 0LL);
  else
    CIconicBitmapRegistry::UpdateIconicBitmapTimerEnabled(this);
  return v6;
}
