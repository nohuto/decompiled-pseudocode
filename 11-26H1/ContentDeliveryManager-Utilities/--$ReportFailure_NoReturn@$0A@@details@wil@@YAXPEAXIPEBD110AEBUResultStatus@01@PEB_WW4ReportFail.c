/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180078338
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x18007830C (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFail.c)
 * Callees:
 *     memset_0 @ 0x180021E51 (memset_0.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18003C0A4 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18003D1E0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x180077ABC (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7W.c)
 *     _alloca_probe @ 0x1800B91D0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  bool v10; // bp
  __int64 v11; // r9
  const struct wil::FailureInfo *v12; // rdx
  const struct wil::FailureInfo *v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-1508h]
  __int64 v15; // [rsp+30h] [rbp-14F8h]
  __int64 v16; // [rsp+40h] [rbp-14E8h]
  __int64 v17; // [rsp+48h] [rbp-14E0h]
  __int64 v18; // [rsp+58h] [rbp-14D0h]
  __int64 v19; // [rsp+68h] [rbp-14C0h]
  __int64 v20; // [rsp+70h] [rbp-14B8h]
  _BYTE v21[160]; // [rsp+80h] [rbp-14A8h] BYREF
  _BYTE v22[1024]; // [rsp+120h] [rbp-1408h] BYREF
  _BYTE v23[4104]; // [rsp+520h] [rbp-1008h] BYREF

  v10 = g_pfnThrowPlatformException != 0;
  memset_0(v21, 0, 0x98uLL);
  wil::details::LogFailure(
    a1,
    a2,
    a3,
    v11,
    v14,
    a6,
    v15,
    a7,
    v16,
    v17,
    (wil *)v23,
    v18,
    v22,
    v19,
    v20,
    (unsigned __int64)v21);
  if ( (v21[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v21, v12);
  if ( v10 )
    ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v21, v23);
  wil::ThrowResultException((wil *)v21, v12);
  wil::details::WilFailFast((wil::details *)v21, v13);
}
