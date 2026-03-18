/*
 * XREFs of ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14007D358
 * Callers:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14007D0C8 (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x14007D128 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x14007D414 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x14007D4F8 (DrvQueryDisplayConfigInternal.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x14007D640 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 */

__int64 __fastcall QDC_AUTO_BUFFERS::TryFillOnce(
        QDC_AUTO_BUFFERS *this,
        unsigned int a2,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a3)
{
  int *v3; // rdi
  int v5; // ebp
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  QDC_AUTO_BUFFERS *v12; // r8

  v3 = (int *)((char *)this + 432);
  v5 = *((_DWORD *)this + 108);
  result = DrvGetDisplayConfigBufferSizesInternal(a2, (char *)this + 432);
  if ( (int)result >= 0 )
  {
    v9 = v5 + 1;
    if ( v5 + 1 <= (unsigned int)*v3 )
      v9 = *v3;
    *v3 = v9;
    QDC_AUTO_BUFFERS::Free(this);
    if ( (unsigned int)*v3 > 2 )
      v12 = (QDC_AUTO_BUFFERS *)PALLOCMEM((unsigned int)(216 * *v3), 1936876615LL, v10, v11);
    else
      v12 = this;
    *((_QWORD *)this + 55) = v12;
    result = v12 == 0LL ? 0xC0000017 : 0;
    if ( v12 )
      return DrvQueryDisplayConfigInternal(a2, (char *)this + 432, v12, a3);
  }
  return result;
}
