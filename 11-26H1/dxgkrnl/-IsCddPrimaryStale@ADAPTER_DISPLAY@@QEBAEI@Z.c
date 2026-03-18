/*
 * XREFs of ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14006D090
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1401A2764 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1402BB200 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_DISPLAY::IsCddPrimaryStale(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  v2 = *((_QWORD *)this + 16);
  v3 = 4024LL * a2;
  return *(_QWORD *)(v3 + v2 + 948) != *(_QWORD *)(v3 + v2 + 992)
      || *(_DWORD *)(v3 + v2 + 956) != *(_DWORD *)(v3 + v2 + 1000)
      || *(_DWORD *)(v3 + v2 + 964) != *(_DWORD *)(v3 + v2 + 1008)
      || *(_DWORD *)(v3 + v2 + 968) != *(_DWORD *)(v3 + v2 + 1012);
}
