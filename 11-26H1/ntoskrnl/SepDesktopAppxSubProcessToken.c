/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x14051E308
 * Callers:
 *     SeDuplicateTokenWithPredictedClaims @ 0x14081AACC (SeDuplicateTokenWithPredictedClaims.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140459608 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlQueryPackageClaims @ 0x140459AB0 (RtlQueryPackageClaims.c)
 *     SepVerifyDesktopAppxImage @ 0x14051E754 (SepVerifyDesktopAppxImage.c)
 *     Feature_TrustedLaunchCiClaim__private_IsEnabledDeviceUsageNoInline @ 0x14063E654 (Feature_TrustedLaunchCiClaim__private_IsEnabledDeviceUsageNoInline.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x14063E6B0 (SepDesktopAppModifyTokenBreakaway.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(
        PERESOURCE *TokenHandle,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _BYTE *a6,
        _BYTE *a7)
{
  bool v8; // r14
  NTSTATUS PackageClaims; // eax
  __int64 v10; // r8
  int v11; // r9d
  int v12; // ebx
  ULONG Flags; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v15; // rcx
  _DWORD *v16; // rcx
  void *v17; // rsi
  NTSTATUS v18; // eax
  signed __int32 v20[8]; // [rsp+0h] [rbp-100h] BYREF
  PSIZE_T AppIdSize; // [rsp+20h] [rbp-E0h]
  PGUID DynamicId; // [rsp+28h] [rbp-D8h]
  PPS_PKG_CLAIM PkgClaim; // [rsp+30h] [rbp-D0h]
  PULONG64 AttributesPresent; // [rsp+38h] [rbp-C8h]
  _BYTE v25[8]; // [rsp+40h] [rbp-C0h] BYREF
  _PS_PKG_CLAIM v26; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Type; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize; // [rsp+54h] [rbp-ACh] BYREF
  int Data; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  _PS_PKG_CLAIM v31; // [rsp+60h] [rbp-A0h] BYREF
  int *v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v37; // [rsp+90h] [rbp-70h]
  __int128 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+B0h] [rbp-50h] BYREF
  const wchar_t *v41; // [rsp+B8h] [rbp-48h]
  __int128 v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  int v44; // [rsp+D8h] [rbp-28h]
  const wchar_t *v45; // [rsp+E0h] [rbp-20h]
  __int128 v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+100h] [rbp+0h]
  const wchar_t *v49; // [rsp+108h] [rbp+8h]
  __int128 v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+20h]

  v41 = L"WIN://SYSAPPID";
  AttributesPresent = 0LL;
  v43 = 0LL;
  v35 = a3;
  v45 = L"WIN://PKG";
  v33 = a2;
  v47 = 0LL;
  *a6 = 0;
  v49 = L"WIN://PKGHOSTID";
  v26 = 0LL;
  v51 = 0LL;
  v8 = 0;
  v31 = 0LL;
  v37 = L"WIN://CIPOLICY";
  v39 = 0LL;
  PkgClaim = &v26;
  DynamicId = 0LL;
  AppIdSize = 0LL;
  v25[0] = 0;
  v40 = 1966108;
  v42 = 0LL;
  v44 = 1310738;
  v46 = 0LL;
  v48 = 2097182;
  v50 = 0LL;
  v36 = 1966108;
  v38 = 0LL;
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  v30 = 0;
  *a7 = 0;
  PackageClaims = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, AppIdSize, DynamicId, PkgClaim, AttributesPresent);
  v12 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v12;
    v12 = 0;
  }
  Flags = v26.Flags;
  if ( (v26.Flags & 4) == 0 )
  {
    if ( (v26.Flags & 0x10000) != 0 )
    {
      *a7 = 1;
      return (unsigned int)v12;
    }
    v17 = (void *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, &v30, v25, &v35, 0LL);
    v18 = RtlQueryPackageClaims(v17, 0LL, 0LL, 0LL, 0LL, 0LL, &v31, 0LL);
    v12 = v18;
    if ( v18 < 0 )
    {
      if ( v18 != -1073741275 )
      {
LABEL_39:
        if ( v17 )
        {
          if ( v30 == 1 )
            ObFastDereferenceObject(
              (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
              (ULONG_PTR)v17,
              0x74726853u);
          else
            ObfDereferenceObjectWithTag(v17, 0x74726853u);
        }
        return (unsigned int)v12;
      }
      v12 = 0;
    }
    if ( (v31.Flags & 0x10004) != 0 )
      *a6 = 1;
    goto LABEL_39;
  }
  if ( (a5 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a5 & 1) != 0 && (v26.Flags & 0x20) != 0 )
  {
    v12 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v26, 0LL);
    if ( v12 < 0 )
      return (unsigned int)v12;
    Flags = v26.Flags;
  }
  if ( (a5 & 6) != 0 || (Flags & 0x20) != 0 )
  {
    if ( (a5 & 2) != 0 && (Flags & 0x20) == 0 )
    {
      LOBYTE(v10) = 1;
      v12 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v26, v10);
      if ( v12 < 0 )
        return (unsigned int)v12;
    }
    if ( SepVerifyDesktopAppPolicyOverrideCaller(TokenHandle) )
    {
LABEL_17:
      *a7 = 1;
      return (unsigned int)v12;
    }
    Flags = v26.Flags;
  }
  if ( LOBYTE(v26.Origin) == 3 && (Flags & 0x22000) == 0 )
  {
    v8 = 1;
    if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) >= 0 && Type == 4 && ResultDataSize == 4 )
      v8 = Data != 1;
  }
  LOBYTE(v11) = v8;
  v12 = SepVerifyDesktopAppxImage(v33, v35, (_DWORD)TokenHandle, v11, (__int64)v25);
  if ( v12 >= 0 )
  {
    if ( v25[0] )
      goto LABEL_17;
    DWORD2(v42) = 0;
    LOWORD(v42) = 3;
    DWORD2(v46) = 0;
    DWORD2(v50) = 0;
    v33 = 0x300000003LL;
    LOWORD(v46) = 2;
    LOWORD(v50) = 2;
    v32 = &v40;
    CurrentThread = KeGetCurrentThread();
    v34 = 3;
    v31.Flags = 1;
    --CurrentThread->KernelApcDisable;
    v15 = TokenHandle[6];
    v31.Origin = 3;
    ExAcquireResourceExclusiveLite(v15, 1u);
    _InterlockedOr(v20, 0);
    v12 = AuthzBasepSetSecurityAttributesToken(TokenHandle[97], (int *)&v33, (__int64)&v31);
    if ( (unsigned int)Feature_TrustedLaunchCiClaim__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v12 >= 0 )
      {
        v16 = TokenHandle[97];
        v32 = &v36;
        LOWORD(v38) = 3;
        DWORD2(v38) = 0;
        v31.Origin = 1;
        v12 = AuthzBasepSetSecurityAttributesToken(v16, (int *)&v33, (__int64)&v31);
        if ( v12 == -1073741275 )
          v12 = 0;
      }
    }
    TokenHandle[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
    _InterlockedOr(v20, 0);
    ExReleaseResourceLite(TokenHandle[6]);
    KeLeaveCriticalRegion();
    *a6 = 1;
  }
  return (unsigned int)v12;
}
