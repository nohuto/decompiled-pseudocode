/*
 * XREFs of ?UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ @ 0x140090010
 * Callers:
 *     ?UpdateMuxPosition@DISPLAY_MUX_MGR@@QEAAXXZ @ 0x14008FFF4 (-UpdateMuxPosition@DISPLAY_MUX_MGR@@QEAAXXZ.c)
 * Callees:
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x14008BA7C (-DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z.c)
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x14008F658 (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 *     ?UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z @ 0x1400900B8 (-UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DISPLAY_MUX_PAIRING::UpdateMuxPosition(DISPLAY_MUX_PAIRING *this)
{
  __int64 v1; // rdi
  __int64 v3; // r8
  signed int updated; // edi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 1);
  v5 = 0;
  if ( (*(int (__fastcall **)(_QWORD, int *))(v1 + 144))(*(_QWORD *)(v1 + 112), &v5) >= 0 )
  {
    *(_DWORD *)(v1 + 72) = v5;
    if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1495;
    }
  }
  LOBYTE(v3) = 1;
  updated = DISPLAY_MUX_PAIRING::UpdateMuxProperties(this, *(unsigned int *)(*((_QWORD *)this + 1) + 72LL), v3);
  if ( updated < 0 )
  {
    DISPLAY_MUX_PAIRING::DestroyActivePairing((__int64)this, 4);
    DISPLAY_MUX_PAIRING::SetPairingStatus(this, 8, updated);
  }
}
