/*
 * XREFs of ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1401CB05C
 * Callers:
 *     DxgkCheckDisplayState @ 0x1401CC150 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x14005A034 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?GetLongPowerButtonHoldListener@DisplayDiagnostics@@QEAAPEAVLongPowerButtonHoldListener@@XZ @ 0x140077CB4 (-GetLongPowerButtonHoldListener@DisplayDiagnostics@@QEAAPEAVLongPowerButtonHoldListener@@XZ.c)
 *     ?GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x1401CB004 (-GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::Initialize(__int64 a1, int a2, __int16 a3, const char *a4, __int128 *a5)
{
  struct DXGGLOBAL *Global; // rax
  struct LongPowerButtonHoldListener *LongPowerButtonHoldListener; // rax
  __int128 v9; // xmm0
  struct DXGGLOBAL *v10; // rax

  *(_DWORD *)a1 = 0;
  *(_BYTE *)a1 = a2;
  *(_DWORD *)a1 ^= ((unsigned __int16)*(_DWORD *)a1 ^ (unsigned __int16)(a3 << 8)) & 0x100;
  if ( a2 == 8 )
  {
    Global = DXGGLOBAL::GetGlobal();
    LongPowerButtonHoldListener = DisplayDiagnostics::GetLongPowerButtonHoldListener((struct DXGGLOBAL *)((char *)Global + 305024));
    if ( LongPowerButtonHoldListener )
      v9 = *(_OWORD *)((char *)LongPowerButtonHoldListener + 72);
    else
      v9 = *a5;
    *(_OWORD *)(a1 + 20) = v9;
  }
  else
  {
    *(_OWORD *)(a1 + 20) = *a5;
  }
  if ( a4 )
    RtlStringCchCopyA((char *)(a1 + 4), 15LL, a4);
  else
    *(_BYTE *)(a1 + 4) = 0;
  v10 = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(v10, DISPLAYSTATECHECKER::CollectDisplayAdaptersCallback, a1, 4LL);
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ ((unsigned int)DISPLAYSTATECHECKER::GetTotalNumOfVidpnSourcesAcrossAdapters((DISPLAYSTATECHECKER *)a1) << 9)) & 0x1FE00;
  return 0LL;
}
