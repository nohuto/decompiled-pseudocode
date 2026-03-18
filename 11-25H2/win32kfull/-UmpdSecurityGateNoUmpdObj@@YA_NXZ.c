/*
 * XREFs of ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D3200
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     NtGdiEngCreateBitmap @ 0x140202D60 (NtGdiEngCreateBitmap.c)
 *     ?GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x140208BE4 (-GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiStartPage @ 0x140214680 (NtGdiStartPage.c)
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x14026A7D8 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 *     ?GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x140327ABC (-GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiEndPage @ 0x140328F50 (NtGdiEndPage.c)
 *     NtGdiEngCreateDeviceSurface @ 0x14033B570 (NtGdiEngCreateDeviceSurface.c)
 * Callees:
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x14026E000 (-bIsProcessLocalSystem@@YAHXZ.c)
 */

char __fastcall UmpdSecurityGateNoUmpdObj(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  int v4; // eax

  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 4752LL);
  if ( v4 != 2 && (!v4 || !(unsigned int)bIsProcessLocalSystem()) )
    return 1;
  return v3;
}
