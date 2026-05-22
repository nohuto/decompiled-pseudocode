/*
 * XREFs of ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x1800C3680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?IsInContact@ManipulationInjector@@QEAA_NXZ @ 0x1800B1F9C (-IsInContact@ManipulationInjector@@QEAA_NXZ.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x1800C1F48 (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x1800C3330 (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x1800C4584 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationStarted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  int v5; // eax
  __int64 v6; // xmm0_8
  int v7; // eax
  __int64 v8; // rcx
  int v9; // esi
  int v10; // edi
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-E0h] BYREF
  int v14; // [rsp+30h] [rbp-D8h]
  _BYTE v15[168]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+E0h] [rbp-28h]
  int v17; // [rsp+E8h] [rbp-20h]
  __int64 v18; // [rsp+ECh] [rbp-1Ch]
  int v19; // [rsp+F4h] [rbp-14h]
  char v20; // [rsp+230h] [rbp+128h]
  float v21; // [rsp+234h] [rbp+12Ch]
  float v22; // [rsp+238h] [rbp+130h]
  _BYTE v23[4]; // [rsp+D08h] [rbp+C00h] BYREF
  float v24; // [rsp+D0Ch] [rbp+C04h]
  float v25; // [rsp+D10h] [rbp+C08h]

  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v15, Instance, 0xCD0uLL);
  v5 = v17;
  *((_QWORD *)this + 17) = v16;
  v6 = v18;
  *((_DWORD *)this + 36) = v5;
  v7 = v19;
  *(_QWORD *)((char *)this + 148) = v6;
  *((_DWORD *)this + 39) = v7;
  v13 = 0LL;
  v14 = 0;
  MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta((__int64)this, v23, (float *)&v13);
  if ( ManipulationInjector::IsInContact(*((ManipulationInjector **)this + 26)) )
  {
    v13 = *(_QWORD *)(v8 + 144);
    v9 = v13;
    v10 = HIDWORD(v13);
  }
  else
  {
    if ( !v20 )
    {
LABEL_7:
      *((_BYTE *)this + 200) = 1;
      return 0LL;
    }
    v9 = (int)v21;
    v10 = (int)v22;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
  if ( (int)MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(this, *((_QWORD *)this + 20)) < 0 )
    goto LABEL_7;
  *(_DWORD *)(*((_QWORD *)this + 13) + 856LL) = 7;
  *(float *)(*((_QWORD *)this + 13) + 872LL) = (float)v9;
  *(float *)(*((_QWORD *)this + 13) + 876LL) = (float)v10;
  v11 = (int)v24;
  *((_BYTE *)this + 188) = 1;
  *((_DWORD *)this + 48) = v11;
  *((_DWORD *)this + 49) = (int)v25;
  ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[14]>(L"PathStarted");
  return 0LL;
}
