/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x140415184
 * Callers:
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     KiIsSecureFlushRequired @ 0x140414F58 (KiIsSecureFlushRequired.c)
 *     RtlpControlFlowGuardEnforced @ 0x140415164 (RtlpControlFlowGuardEnforced.c)
 *     HvlGetEnlightenmentInfo @ 0x1405BF3E0 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x1405C4248 (HvlpDetermineEnlightenments.c)
 *     VslpGetNestedPageProtectionFlags @ 0x140795BD0 (VslpGetNestedPageProtectionFlags.c)
 *     PsLocateSystemDlls @ 0x1407F3B98 (PsLocateSystemDlls.c)
 *     PiIsDriverBlocked @ 0x140A3814C (PiIsDriverBlocked.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     MiInitializeStrongCode @ 0x140C85F10 (MiInitializeStrongCode.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     KiAreCodePatchesAllowed @ 0x140CCE210 (KiAreCodePatchesAllowed.c)
 *     KiIsKernelCfgActive @ 0x140CCE274 (KiIsKernelCfgActive.c)
 *     PsInitializeWin32kServiceTable @ 0x140CDDD28 (PsInitializeWin32kServiceTable.c)
 *     PspIumInitialize @ 0x140CDF4BC (PspIumInitialize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslGetNestedPageProtectionFlags(_QWORD *a1)
{
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // r8d
  int v13; // ecx
  int v14; // edx
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  _BYTE v19[16]; // [rsp+20h] [rbp-88h] BYREF
  int v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]

  memset_0(v19, 0, 0x68uLL);
  if ( *(_QWORD *)&HvlpVsmVtlCallVa
    && !VslpNestedPageProtectionFlags
    && (int)VslpEnterIumSecureMode(2u, 0x10Bu, 0, (__int64)v19) >= 0 )
  {
    v3 = (2 * (v20 & 1) + 4) | 0x20;
    if ( (v20 & 2) == 0 )
      v3 = 2 * (v20 & 1) + 4;
    v4 = v3 | 0x10;
    if ( (v20 & 4) != 0 )
      v4 = v3;
    v5 = v4 | 0x40;
    if ( (v20 & 8) == 0 )
      v5 = v4;
    v6 = v5 | 0x80;
    if ( (v20 & 0x10) == 0 )
      v6 = v5;
    v7 = v6 | 0x100;
    if ( (v20 & 0x20) == 0 )
      v7 = v6;
    v8 = v7 | 0x200;
    if ( (v20 & 0x40) == 0 )
      v8 = v7;
    v9 = v8 | 0x400;
    if ( (v20 & 0x80u) == 0 )
      v9 = v8;
    v10 = v9 | 0x800;
    if ( (v20 & 0x100) == 0 )
      v10 = v9;
    v11 = v10 | 0x1000;
    if ( (v20 & 0x200) == 0 )
      v11 = v10;
    v12 = v11 | 0x2000;
    VslpSecurePtRoot = v21;
    if ( (v20 & 0x400) == 0 )
      v12 = v11;
    v13 = v12 | 0x20000;
    if ( (v20 & 0x4000) == 0 )
      v13 = v12;
    v14 = v13 | 0x4000;
    if ( (v20 & 0x800) == 0 )
      v14 = v13;
    v15 = v14 | 0x8000;
    if ( (v20 & 0x1000) == 0 )
      v15 = v14;
    v16 = v15 | 0x10000;
    if ( (v20 & 0x2000) == 0 )
      v16 = v15;
    v17 = v16 | 0x40000;
    if ( (v20 & 0x8000) == 0 )
      v17 = v16;
    v18 = v17 | 0x80000;
    if ( (v20 & 0x10000) == 0 )
      v18 = v17;
    VslpNestedPageProtectionFlags = v18;
  }
  if ( a1 )
    *a1 = VslpSecurePtRoot;
  return (unsigned int)VslpNestedPageProtectionFlags;
}
