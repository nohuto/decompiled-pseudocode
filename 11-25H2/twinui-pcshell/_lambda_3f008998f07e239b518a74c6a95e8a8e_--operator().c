/*
 * XREFs of _lambda_3f008998f07e239b518a74c6a95e8a8e_::operator() @ 0x180569204
 * Callers:
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x180569D84 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$DoesGestureOverlapWithTouchKeyboard@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x180568AAC (--$DoesGestureOverlapWithTouchKeyboard@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall lambda_3f008998f07e239b518a74c6a95e8a8e_::operator()(__int64 *a1)
{
  __int64 v1; // rdi
  bool v2; // bl
  float v3; // xmm2_4
  float v4; // xmm1_4
  char v6[4]; // [rsp+20h] [rbp-20h] BYREF
  int v7; // [rsp+24h] [rbp-1Ch] BYREF
  RECT rc; // [rsp+28h] [rbp-18h] BYREF

  v1 = *a1;
  v2 = 0;
  v6[0] = 0;
  if ( ((*(_DWORD *)(v1 + 184) - 4) & 0xFFFFFFFB) == 0 )
  {
    v7 = 0;
    rc = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, RECT *, int *))(**(_QWORD **)(v1 + 40) + 40LL))(*(_QWORD *)(v1 + 40), &rc, &v7) >= 0
      && !IsRectEmpty(&rc) )
    {
      v3 = *(float *)(v1 + 192);
      v4 = *(float *)(v1 + 196);
      if ( v3 >= (float)rc.left && (float)rc.right >= v3 && v4 >= (float)rc.top )
      {
        v2 = (float)rc.bottom >= v4;
        v6[0] = v2;
      }
    }
  }
  TouchEdgeGestureTelemetry::DoesGestureOverlapWithTouchKeyboard<bool &>(v6);
  return v2;
}
