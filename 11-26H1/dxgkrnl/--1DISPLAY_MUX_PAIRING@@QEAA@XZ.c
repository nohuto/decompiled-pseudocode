/*
 * XREFs of ??1DISPLAY_MUX_PAIRING@@QEAA@XZ @ 0x14008A070
 * Callers:
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_PAIRING@@U?$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_PAIRING@@@Z @ 0x140085B2C (-reset@-$unique_ptr@VDISPLAY_MUX_PAIRING@@U-$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x14008BA7C (-DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z.c)
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x14008F658 (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_DEVICE@@U?$default_delete@VDISPLAY_MUX_DEVICE@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_DEVICE@@@Z @ 0x140090228 (-reset@-$unique_ptr@VDISPLAY_MUX_DEVICE@@U-$default_delete@VDISPLAY_MUX_DEVICE@@@wistd@@@wistd@@.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall DISPLAY_MUX_PAIRING::~DISPLAY_MUX_PAIRING(DISPLAY_MUX_PAIRING *this)
{
  __int64 v1; // rdi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  void *v6; // rcx
  void *v7; // rcx
  _OWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    memset(v8, 0, sizeof(v8));
    v3 = v8[1];
    *(_OWORD *)(v1 + 104) = v8[0];
    v4 = v8[2];
    *(_OWORD *)(v1 + 120) = v3;
    v5 = v8[3];
    *(_OWORD *)(v1 + 136) = v4;
    *(_OWORD *)(v1 + 152) = v5;
  }
  DISPLAY_MUX_PAIRING::DestroyActivePairing(this, 3LL);
  DISPLAY_MUX_PAIRING::SetPairingStatus(this, 9LL);
  v6 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v6 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  v7 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v7 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  wistd::unique_ptr<DISPLAY_MUX_DEVICE,wistd::default_delete<DISPLAY_MUX_DEVICE>>::reset((char *)this + 8, 0LL);
}
