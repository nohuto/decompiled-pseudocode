/*
 * XREFs of NtGdiGetCurrentDpiInfo @ 0x140087710
 * Callers:
 *     <none>
 * Callees:
 *     ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x14003DBE0 (-GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x1400877B0 (DrvGetCurrentDpiInfo.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NtGdiGetCurrentDpiInfo(__int64 a1, void *a2)
{
  int CurrentDpiInfo; // ebx
  _BYTE v6[96]; // [rsp+30h] [rbp-78h] BYREF

  memset(v6, 0, sizeof(v6));
  CurrentDpiInfo = DrvGetCurrentDpiInfo(a1, v6);
  if ( CurrentDpiInfo >= 0 )
    GreProbeAndWriteToUntrustedVa(a2, 0x60uLL, v6, 0x60uLL, 1uLL);
  return (unsigned int)CurrentDpiInfo;
}
