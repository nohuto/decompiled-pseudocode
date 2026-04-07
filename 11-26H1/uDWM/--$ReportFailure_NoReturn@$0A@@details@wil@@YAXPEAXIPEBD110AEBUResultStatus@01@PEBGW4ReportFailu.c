/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800D0828
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1800D07B0 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180025440 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x180079028 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4F.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x180092D48 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     _alloca_probe @ 0x1800E6C10 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<0>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  bool v9; // r14
  const struct wil::FailureInfo *v11; // rdx
  const struct wil::FailureInfo *v12; // rdx
  __int64 v13; // [rsp+48h] [rbp-1500h]
  __int64 v14; // [rsp+58h] [rbp-14F0h]
  __int64 v15; // [rsp+68h] [rbp-14E0h]
  _BYTE v16[160]; // [rsp+80h] [rbp-14C8h] BYREF
  _BYTE v17[1024]; // [rsp+120h] [rbp-1428h] BYREF
  _BYTE v18[4136]; // [rsp+520h] [rbp-1028h] BYREF

  v9 = g_pfnThrowPlatformException != 0;
  memset_0(v16, 0, 0x98uLL);
  wil::details::LogFailure(
    a1,
    a2,
    a3,
    0LL,
    0LL,
    a6,
    0,
    a7,
    0LL,
    v13,
    (wil *)v18,
    v14,
    v17,
    v15,
    0,
    (unsigned __int64)v16);
  if ( (v16[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v16, v11);
  if ( v9 )
    ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v16, v18);
  wil::ThrowResultException((wil *)v16, v11);
  wil::details::WilFailFast((wil::details *)v16, v12);
}
