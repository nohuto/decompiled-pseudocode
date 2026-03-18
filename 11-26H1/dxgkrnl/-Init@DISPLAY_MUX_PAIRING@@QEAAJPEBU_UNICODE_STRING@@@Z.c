/*
 * XREFs of ?Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x14008CC84
 * Callers:
 *     ?ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x14008E808 (-ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x14008C758 (-Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x14008F658 (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 *     ?UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140090210 (-UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_DEVICE@@U?$default_delete@VDISPLAY_MUX_DEVICE@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_DEVICE@@@Z @ 0x140090228 (-reset@-$unique_ptr@VDISPLAY_MUX_DEVICE@@U-$default_delete@VDISPLAY_MUX_DEVICE@@@wistd@@@wistd@@.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::Init(DISPLAY_MUX_PAIRING *this, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbx

  v4 = operator new(0xA8uLL, 0x4B677844u, 256LL);
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_OWORD *)(v4 + 32) = 0LL;
    *(_OWORD *)(v4 + 48) = 0LL;
    *(_DWORD *)(v4 + 72) = 0;
    *(_QWORD *)(v4 + 80) = 0LL;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_QWORD *)(v4 + 96) = 0LL;
  }
  wistd::unique_ptr<DISPLAY_MUX_DEVICE,wistd::default_delete<DISPLAY_MUX_DEVICE>>::reset((char *)this + 8, v4);
  if ( !*((_QWORD *)this + 1) )
  {
    v5 = -1073741801;
    v6 = 10LL;
LABEL_5:
    DISPLAY_MUX_PAIRING::SetPairingStatus(this, v6);
    return (unsigned int)v5;
  }
  v5 = DISPLAY_MUX_DEVICE::Init(*((DISPLAY_MUX_DEVICE **)this + 1), a2);
  if ( v5 < 0 )
  {
    v6 = 11LL;
    goto LABEL_5;
  }
  v8 = 1LL;
  v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 64LL);
  if ( HIDWORD(v9) != 1 )
    v8 = 12LL;
  DISPLAY_MUX_PAIRING::SetPairingStatus(this, v8);
  if ( (_DWORD)v9 != 4 && !DISPLAY_MUX_MGR::UseNonFullSupportComponents(qword_140169448) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1661;
    DISPLAY_MUX_PAIRING::SetPairingStatus(this, 14LL);
  }
  return 0LL;
}
