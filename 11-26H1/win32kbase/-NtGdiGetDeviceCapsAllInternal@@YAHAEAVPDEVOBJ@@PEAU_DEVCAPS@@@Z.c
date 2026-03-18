/*
 * XREFs of ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1400FE9C4
 * Callers:
 *     NtGdiGetDeviceCapsAll @ 0x1400FE730 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x14003DBE0 (-GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x140137258 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAllInternal(struct PDEVOBJ *this, struct _DEVCAPS *a2)
{
  _BYTE v5[144]; // [rsp+40h] [rbp-B8h] BYREF

  ProbeForWrite(a2, 0x90uLL, 1u);
  memset(v5, 0, sizeof(v5));
  vGetDeviceCaps(this, (struct _DEVCAPS *)v5);
  GreProbeAndWriteToUntrustedVa(a2, 0x90uLL, v5, 0x90uLL, 1uLL);
  return 1LL;
}
