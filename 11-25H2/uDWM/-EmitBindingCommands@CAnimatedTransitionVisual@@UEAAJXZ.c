/*
 * XREFs of ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180036710
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180036B70 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x180036E24 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x1800373DC (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x180037424 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x180037640 (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x180064A8C (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x18008D4F4 (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 *     ?Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z @ 0x180098710 (-Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     McTemplateU0ddqqqqqqp_EtwEventWriteTransfer @ 0x1800A52D8 (McTemplateU0ddqqqqqqp_EtwEventWriteTransfer.c)
 *     ?Update@CRotateTransformProxy@@QEAAJNNN@Z @ 0x1800C5B60 (-Update@CRotateTransformProxy@@QEAAJNNN@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EmitBindingCommands(CEffectGroupProxy **this)
{
  int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r8d
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct CBaseTransformProxy *v23[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v24; // [rsp+70h] [rbp-28h]

  v2 = CAnimatedTransitionVisual::_EnsureDCompResources((CAnimatedTransitionVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x737u, 0LL);
    return v3;
  }
  v4 = 0;
  v24 = 0LL;
  *(_OWORD *)v23 = 0LL;
  if ( this[71] || this[72] )
  {
    v5 = CTranslateTransformProxy::Update(this[80], 0.0, 0.0);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x745u, 0LL);
      return v3;
    }
    v4 = 1;
    v23[0] = this[80];
  }
  if ( this[73] || this[74] )
  {
    v6 = CScaleTransformProxy::Update(this[79], 1.0, 1.0, 0.0, 0.0);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x74Du, 0LL);
      return v3;
    }
    v7 = v4++;
    v23[v7] = this[79];
  }
  if ( this[75] || this[76] )
  {
    v8 = CRotateTransformProxy::Update(this[81], 0.0, 0.0, 0.0);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x755u, 0LL);
      return v3;
    }
    v9 = v4++;
    v23[v9] = this[81];
  }
  v10 = CTransformGroupProxy::Update(this[82], v23, v4);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x75Au, 0LL);
  }
  else
  {
    v12 = CEffectGroupProxy::Update(this[78], *((float *)this + 220), v11, 0LL);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x75Cu, 0LL);
    }
    else
    {
      v13 = CVisualProxy::SetEffect(*((CVisualProxy **)this[85] + 2), this[78]);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x75Eu, 0LL);
      }
      else
      {
        v14 = CVisualProxy::SetTransform(*((CVisualProxy **)this[85] + 2), this[82]);
        v3 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x760u, 0LL);
        }
        else
        {
          v15 = CAnimatedTransitionVisual::_BindIfPresent(this, 0LL, this[80], 5LL);
          v3 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x762u, 0LL);
          }
          else
          {
            v16 = CAnimatedTransitionVisual::_BindIfPresent(this, 1LL, this[80], 6LL);
            v3 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x763u, 0LL);
            }
            else
            {
              v17 = CAnimatedTransitionVisual::_BindIfPresent(this, 2LL, this[79], 3LL);
              v3 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x764u, 0LL);
              }
              else
              {
                v18 = CAnimatedTransitionVisual::_BindIfPresent(this, 3LL, this[79], 4LL);
                v3 = v18;
                if ( v18 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x765u, 0LL);
                }
                else
                {
                  v19 = CAnimatedTransitionVisual::_BindIfPresent(this, 4LL, this[81], 1LL);
                  v3 = v19;
                  if ( v19 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x766u, 0LL);
                  }
                  else
                  {
                    v20 = CAnimatedTransitionVisual::_BindIfPresent(this, 5LL, this[81], 2LL);
                    v3 = v20;
                    if ( v20 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x767u, 0LL);
                    }
                    else
                    {
                      v21 = CAnimatedTransitionVisual::_BindIfPresent(this, 6LL, this[78], 0LL);
                      v3 = v21;
                      if ( v21 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x768u, 0LL);
                      }
                      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                      {
                        McTemplateU0ddqqqqqqp_EtwEventWriteTransfer(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                          *((_QWORD *)this[81] + 2),
                          *((_DWORD *)this + 172),
                          *((_DWORD *)this + 173),
                          *(_DWORD *)(*((_QWORD *)this[3] + 2) + 24LL),
                          *(_DWORD *)(*((_QWORD *)this[78] + 2) + 24LL),
                          *(_DWORD *)(*((_QWORD *)this[82] + 2) + 24LL),
                          *(_DWORD *)(*((_QWORD *)this[80] + 2) + 24LL),
                          *(_DWORD *)(*((_QWORD *)this[79] + 2) + 24LL),
                          *(_DWORD *)(*((_QWORD *)this[81] + 2) + 24LL),
                          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL));
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
