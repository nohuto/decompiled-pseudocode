/*
 * XREFs of _lambda_3f008998f07e239b518a74c6a95e8a8e_::operator() @ 0x18058D32C
 * Callers:
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18058DA78 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$DoesGestureOverlapWithTouchKeyboard@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x18058C8D4 (--$DoesGestureOverlapWithTouchKeyboard@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall lambda_3f008998f07e239b518a74c6a95e8a8e_::operator()(__int64 *a1)
{
  bool v1; // bl
  __int64 v3; // rcx
  int v4; // eax
  float v5; // xmm2_4
  float v6; // xmm1_4
  char v8[4]; // [rsp+20h] [rbp-20h] BYREF
  int v9; // [rsp+24h] [rbp-1Ch] BYREF
  RECT rc; // [rsp+28h] [rbp-18h] BYREF

  v1 = 0;
  v3 = *a1;
  v8[0] = 0;
  v4 = *(_DWORD *)(v3 + 184);
  if ( v4 == 4 || v4 == 8 )
  {
    v9 = 0;
    rc = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, RECT *, int *))(**(_QWORD **)(v3 + 40) + 40LL))(*(_QWORD *)(v3 + 40), &rc, &v9) >= 0
      && !IsRectEmpty(&rc) )
    {
      v5 = *(float *)(*a1 + 192);
      v6 = *(float *)(*a1 + 196);
      if ( v5 >= (float)rc.left && (float)rc.right >= v5 && v6 >= (float)rc.top )
      {
        v1 = (float)rc.bottom >= v6;
        v8[0] = v1;
      }
    }
  }
  TouchEdgeGestureTelemetry::DoesGestureOverlapWithTouchKeyboard<bool &>(v8);
  return v1;
}
