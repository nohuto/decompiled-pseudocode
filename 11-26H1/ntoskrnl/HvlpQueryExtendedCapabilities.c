/*
 * XREFs of HvlpQueryExtendedCapabilities @ 0x1405C48A4
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x1405C4248 (HvlpDetermineEnlightenments.c)
 *     MiInitializeSystemDefaults @ 0x140CF9BC0 (MiInitializeSystemDefaults.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall HvlpQueryExtendedCapabilities(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int16 v3; // bx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v2 = HvlpAcquireHypercallPage((__int64)&v8, 2, (__int64)&v11, 8LL);
  v3 = HvcallInitiateHypercall(32769LL, 0LL);
  HvlpReleaseHypercallPage((unsigned int *)&v8, v4, v5, v6);
  if ( v3 )
    return 0;
  *a1 = *v2;
  return 1;
}
