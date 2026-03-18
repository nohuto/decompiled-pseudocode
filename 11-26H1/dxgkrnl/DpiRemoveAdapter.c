/*
 * XREFs of DpiRemoveAdapter @ 0x1400859EC
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?RemoveChildPairing@DISPLAY_MUX_PAIRING@@AEAAXU_LUID@@PEAW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x14008EC28 (-RemoveChildPairing@DISPLAY_MUX_PAIRING@@AEAAXU_LUID@@PEAW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@.c)
 *     DxgkNotifyAdapterRemoval @ 0x1401E0834 (DxgkNotifyAdapterRemoval.c)
 *     DxgkRemoveAdapter @ 0x1401E0898 (DxgkRemoveAdapter.c)
 */

__int64 __fastcall DpiRemoveAdapter(
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  DISPLAY_MUX_MGR *v5; // rdi
  struct _LUID v6; // rbx
  DISPLAY_MUX_PAIRING *v9; // rcx
  __int64 result; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = qword_140169448;
  v6 = *(struct _LUID *)(a2 + 2696);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DISPLAY_MUX_MGR *)((char *)qword_140169448 + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( *((_DWORD *)v5 + 20) == 1 )
  {
    v9 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)v5 + 9);
    if ( v9 )
      DISPLAY_MUX_PAIRING::RemoveChildPairing(v9, v6, 0LL);
  }
  else
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2930;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  result = DxgkRemoveAdapter(a1, *(DXGADAPTER **)(a2 + 4032));
  if ( a5 )
    return DxgkNotifyAdapterRemoval();
  return result;
}
