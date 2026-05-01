/*
 * XREFs of _lambda_a52ede4a43d16daf4adcd8b06664ad67_::operator() @ 0x18058D638
 * Callers:
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18058DA78 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IsGamingOverlayFullscreenMode@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x18058C9E4 (--$IsGamingOverlayFullscreenMode@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall lambda_a52ede4a43d16daf4adcd8b06664ad67_::operator()(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( v2 )
  {
    v8 = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 440LL))(v2, &v8);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFE,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
        (const char *)(unsigned int)v3,
        v5);
    v1 = v8 == 2;
    v7 = v8 == 2;
    TouchEdgeGestureTelemetry::IsGamingOverlayFullscreenMode<bool &>((char *)&v7);
  }
  return v1;
}
