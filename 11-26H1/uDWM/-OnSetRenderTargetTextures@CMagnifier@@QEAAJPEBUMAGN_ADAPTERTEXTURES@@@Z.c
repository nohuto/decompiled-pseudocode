/*
 * XREFs of ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BA214
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007A548 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800B9FA4 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BA0FC (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?Create@CMagnifierRenderTargetProxy@@QEAAJ_KAEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BB6C4 (-Create@CMagnifierRenderTargetProxy@@QEAAJ_KAEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?Update@CMagnifierRenderTargetProxy@@QEAAJAEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BB768 (-Update@CMagnifierRenderTargetProxy@@QEAAJAEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetRenderTargetTextures(CMagnifier *this, const struct MAGN_ADAPTERTEXTURES *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // ecx
  CBaseObject *v6; // rcx
  int v7; // eax
  unsigned int v8; // esi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // edx
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rax
  int v23; // eax
  _OWORD v25[6]; // [rsp+30h] [rbp-88h] BYREF
  int v26; // [rsp+90h] [rbp-28h]

  v2 = *((_DWORD *)this + 40);
  v4 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 <= v2 )
  {
    if ( v4 > 6 )
      v4 = 6;
    *((_DWORD *)this + 40) = v4;
    *((_DWORD *)this + 43) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 41) = *((_DWORD *)a2 + 2);
    v20 = *((_DWORD *)a2 + 3);
    v21 = 0;
    for ( *((_DWORD *)this + 42) = v20;
          v21 < *((_DWORD *)this + 40);
          *(_OWORD *)((char *)this + v22 + 192) = *(_OWORD *)((char *)a2 + v22 + 32) )
    {
      v22 = v21++;
      v22 *= 32LL;
      *(_OWORD *)((char *)this + v22 + 176) = *(_OWORD *)((char *)a2 + v22 + 16);
    }
    v23 = CMagnifierRenderTargetProxy::Update(*((CMagnifierRenderTargetProxy **)this + 3), a2);
    v8 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x17Cu, 0LL);
  }
  else
  {
    if ( !v2 )
      goto LABEL_9;
    v6 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v6 )
    {
      CBaseObject::Release(v6);
      *((_QWORD *)this + 3) = 0LL;
    }
    *((_DWORD *)this + 40) = 0;
    v7 = CMagnifier::Initialize((struct CMagnifierRenderTargetProxy **)this);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x150u, 0LL);
      return v8;
    }
    v9 = *(_OWORD *)((char *)this + 60);
    v10 = *(_OWORD *)((char *)this + 76);
    v26 = *((_DWORD *)this + 39);
    v25[0] = v9;
    v11 = *(_OWORD *)((char *)this + 92);
    v25[1] = v10;
    v12 = *(_OWORD *)((char *)this + 108);
    v25[2] = v11;
    v13 = *(_OWORD *)((char *)this + 124);
    v25[3] = v12;
    v14 = *(_OWORD *)((char *)this + 140);
    v25[4] = v13;
    *(_OWORD *)((char *)this + 60) = xmmword_1800F6880;
    v25[5] = v14;
    *(_OWORD *)((char *)this + 76) = xmmword_1800F6890;
    *(_OWORD *)((char *)this + 92) = xmmword_1800F68A0;
    *(_OWORD *)((char *)this + 108) = xmmword_1800F68B0;
    *(_OWORD *)((char *)this + 124) = xmmword_1800F68C0;
    *(_OWORD *)((char *)this + 140) = xmmword_1800F68D0;
    *((_DWORD *)this + 39) = 1065353216;
    v15 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)v25);
    v8 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x154u, 0LL);
    }
    else
    {
LABEL_9:
      v16 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 6u )
        v16 = 6;
      v17 = 0;
      *((_DWORD *)this + 40) = v16;
      *((_DWORD *)this + 43) = *((_DWORD *)a2 + 1);
      *((_DWORD *)this + 41) = *((_DWORD *)a2 + 2);
      for ( *((_DWORD *)this + 42) = *((_DWORD *)a2 + 3);
            v17 < *((_DWORD *)this + 40);
            *(_OWORD *)((char *)this + v18 + 192) = *(_OWORD *)((char *)a2 + v18 + 32) )
      {
        v18 = v17++;
        v18 *= 32LL;
        *(_OWORD *)((char *)this + v18 + 176) = *(_OWORD *)((char *)a2 + v18 + 16);
      }
      v19 = CMagnifierRenderTargetProxy::Create(*((CMagnifierRenderTargetProxy **)this + 3), *((_QWORD *)this + 6), a2);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x166u, 0LL);
    }
  }
  return v8;
}
