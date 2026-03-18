/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x14045FEB8
 * Callers:
 *     SeDuplicateTokenWithPredictedClaims @ 0x1408149DC (SeDuplicateTokenWithPredictedClaims.c)
 *     SeSubProcessToken @ 0x140A2B26C (SeSubProcessToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403CB2B8 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14045FC94 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlQueryPackageClaims @ 0x140460570 (RtlQueryPackageClaims.c)
 *     SepVerifyDesktopAppxImage @ 0x140460C84 (SepVerifyDesktopAppxImage.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x14063B594 (SepDesktopAppModifyTokenBreakaway.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
 *     PsReferenceEffectiveToken @ 0x14094F580 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(__int64 a1, __int64 a2, __int64 a3, char a4, _BYTE *a5, _BYTE *a6)
{
  bool v8; // r14
  int PackageClaims; // eax
  int v10; // r9d
  int v11; // ebx
  int v12; // eax
  void *v13; // rsi
  __int64 v15; // r8
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+28h] [rbp-D8h]
  __int64 *v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  char v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+90h] [rbp-70h] BYREF
  const wchar_t *v34; // [rsp+98h] [rbp-68h]
  __int128 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  const wchar_t *v38; // [rsp+C0h] [rbp-40h]
  __int128 v39; // [rsp+C8h] [rbp-38h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+E0h] [rbp-20h]
  const wchar_t *v42; // [rsp+E8h] [rbp-18h]
  __int128 v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp+0h]

  v34 = L"WIN://SYSAPPID";
  v21 = 0LL;
  v36 = 0LL;
  v32 = a3;
  v38 = L"WIN://PKG";
  v30 = a2;
  v40 = 0LL;
  *a5 = 0;
  v42 = L"WIN://PKGHOSTID";
  v24 = 0LL;
  v44 = 0LL;
  v29[0] = 0LL;
  v20 = &v24;
  v8 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v22 = 0;
  v33 = 1966108;
  v35 = 0LL;
  v37 = 1310738;
  v39 = 0LL;
  v41 = 2097182;
  v43 = 0LL;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v23[0] = 0;
  *a6 = 0;
  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, v18, v19, v20, v21);
  v11 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v11;
    v11 = 0;
  }
  v12 = v24;
  if ( (v24 & 4) == 0 )
  {
    if ( (v24 & 0x10000) != 0 )
    {
      *a6 = 1;
      return (unsigned int)v11;
    }
    v13 = (void *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, &v28, v23, &v32, 0LL);
    v11 = RtlQueryPackageClaims(v13, 0LL, 0LL, 0LL, 0LL, 0LL, v29, 0LL);
    if ( v11 < 0 )
    {
      if ( v11 != -1073741275 )
      {
LABEL_11:
        if ( v13 )
        {
          if ( v28 == 1 )
            ObFastDereferenceObject(
              (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
              (ULONG_PTR)v13,
              0x74726853u);
          else
            ObfDereferenceObjectWithTag(v13, 0x74726853u);
        }
        return (unsigned int)v11;
      }
      v11 = 0;
    }
    if ( (v29[0] & 0x10004) != 0 )
      *a5 = 1;
    goto LABEL_11;
  }
  if ( (a4 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a4 & 1) != 0 && (v24 & 0x20) != 0 )
  {
    v11 = SepDesktopAppModifyTokenBreakaway(a1, &v24, 0LL);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v12 = v24;
  }
  v15 = 2LL;
  if ( (a4 & 6) != 0 || (v12 & 0x20) != 0 )
  {
    if ( (a4 & 2) != 0 && (v12 & 0x20) == 0 )
    {
      LOBYTE(v15) = 1;
      v11 = SepDesktopAppModifyTokenBreakaway(a1, &v24, v15);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( SepVerifyDesktopAppPolicyOverrideCaller(a1) )
    {
LABEL_26:
      *a6 = 1;
      return (unsigned int)v11;
    }
    v12 = v24;
  }
  if ( BYTE4(v24) == 3 && (v12 & 0x22000) == 0 )
  {
    v8 = 1;
    if ( (int)ZwQueryLicenseValue(a02, &v25, &v27, 4LL, &v26) >= 0 && v25 == 4 && v26 == 4 )
      v8 = v27 != 1;
  }
  LOBYTE(v10) = v8;
  v11 = SepVerifyDesktopAppxImage(v30, v32, a1, v10, (__int64)&v22);
  if ( v11 >= 0 )
  {
    if ( !v22 )
    {
      DWORD2(v35) = 0;
      LOWORD(v35) = 3;
      DWORD2(v39) = 0;
      DWORD2(v43) = 0;
      v30 = 0x300000003LL;
      LOWORD(v39) = 2;
      LOWORD(v43) = 2;
      v31 = 3;
      v29[1] = &v33;
      CurrentThread = KeGetCurrentThread();
      v29[0] = 0x300000001LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
      _InterlockedOr(v17, 0);
      v11 = AuthzBasepSetSecurityAttributesToken(*(_QWORD *)(a1 + 776), (int *)&v30, (__int64)v29);
      *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v17, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      *a5 = 1;
      return (unsigned int)v11;
    }
    goto LABEL_26;
  }
  return (unsigned int)v11;
}
