/*
 * XREFs of ?GrepProbeAndReadXFROMLFromUntrustedVa@@YA_NPEAU_XFORML@@0@Z @ 0x1400100C0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1400101C0 (NtGdiExtCreateRegion.c)
 * Callees:
 *     ?GrepConvertDwordToFloat@@YA_NKPEAM@Z @ 0x1400101A0 (-GrepConvertDwordToFloat@@YA_NKPEAM@Z.c)
 *     ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790 (-GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

char __fastcall GrepProbeAndReadXFROMLFromUntrustedVa(struct _XFORML *a1, struct _XFORML *a2)
{
  char v3; // di
  unsigned int v5[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  *(_OWORD *)v5 = 0LL;
  v6 = 0LL;
  v3 = 1;
  GreProbeAndReadFromUntrustedVa(v5, 0x18uLL, a2, 0x18uLL, 1uLL);
  if ( !GrepConvertDwordToFloat(v5[0], &a1->eM11)
    || !GrepConvertDwordToFloat(v5[1], &a1->eM12)
    || !GrepConvertDwordToFloat(v5[2], &a1->eM21)
    || !GrepConvertDwordToFloat(v5[3], &a1->eM22)
    || !GrepConvertDwordToFloat(v6, &a1->eDx)
    || !GrepConvertDwordToFloat(HIDWORD(v6), &a1->eDy) )
  {
    return 0;
  }
  return v3;
}
