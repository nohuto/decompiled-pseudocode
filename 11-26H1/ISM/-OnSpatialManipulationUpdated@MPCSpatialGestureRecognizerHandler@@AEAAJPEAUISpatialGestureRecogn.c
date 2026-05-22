/*
 * XREFs of ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x1800C3820
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x1800C25EC (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x1800C3330 (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationUpdated(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs *a3)
{
  __int64 v4; // rax
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  unsigned __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+38h] [rbp-C8h]
  _BYTE v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  float v15; // [rsp+44h] [rbp-BCh]
  float v16; // [rsp+48h] [rbp-B8h]

  MPCSpatialGestureRecognizerHandler::CalculatePathingDelta(this, &v10, (__int64)a3);
  v12 = v10;
  v13 = v11;
  MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta((__int64)this, v14, (float *)&v12);
  v4 = *((_QWORD *)this + 13);
  if ( !v14[0] )
  {
    *(_BYTE *)(v4 + 3000) = 1;
    goto LABEL_11;
  }
  *(float *)(v4 + 872) = v15;
  *(float *)(*((_QWORD *)this + 13) + 876LL) = v16;
  if ( *((_BYTE *)this + 188) )
  {
    if ( (float)*((int *)this + 48) == v15 && (float)*((int *)this + 49) == v16 )
    {
      *((_BYTE *)this + 188) = 1;
      goto LABEL_11;
    }
    *((_BYTE *)this + 188) = 0;
  }
  v5 = v14;
  v6 = 3LL;
  *(_DWORD *)(*((_QWORD *)this + 13) + 856LL) = 7;
  v7 = (_OWORD *)(*((_QWORD *)this + 13) + 240LL);
  do
  {
    *v7 = *v5;
    v7[1] = v5[1];
    v7[2] = v5[2];
    v7[3] = v5[3];
    v7[4] = v5[4];
    v7[5] = v5[5];
    v7[6] = v5[6];
    v7 += 8;
    v8 = v5[7];
    v5 += 8;
    *(v7 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *v7 = *v5;
  v7[1] = v5[1];
LABEL_11:
  *((_BYTE *)this + 172) = 1;
  return 0LL;
}
