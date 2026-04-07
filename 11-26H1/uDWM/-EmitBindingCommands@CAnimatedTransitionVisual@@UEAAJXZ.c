/*
 * XREFs of ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18004F520
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800055E8 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x1800056D8 (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x18004F94C (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18004F9A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18006D520 (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x18007C52C (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 *     ?Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z @ 0x18008BCD4 (-Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x18008C388 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 *     McTemplateU0ddqqqqqqp_EtwEventWriteTransfer @ 0x180097F80 (McTemplateU0ddqqqqqqp_EtwEventWriteTransfer.c)
 *     ?Update@CRotateTransformProxy@@QEAAJNNN@Z @ 0x1800BF3AC (-Update@CRotateTransformProxy@@QEAAJNNN@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EmitBindingCommands(CEffectGroupProxy **this)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r8
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x65Du, 0LL);
    return v3;
  }
  v4 = 0;
  v24 = 0LL;
  *(_OWORD *)v23 = 0LL;
  if ( this[69] || this[70] )
  {
    v5 = CTranslateTransformProxy::Update(this[78], 0.0, 0.0);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x66Bu, 0LL);
      return v3;
    }
    v4 = 1;
    v23[0] = this[78];
  }
  if ( this[71] || this[72] )
  {
    v6 = CScaleTransformProxy::Update(this[77], 1.0, 1.0, 0.0, 0.0);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x673u, 0LL);
      return v3;
    }
    v7 = v4++;
    v23[v7] = this[77];
  }
  if ( this[73] || this[74] )
  {
    v8 = CRotateTransformProxy::Update(this[79], 0.0, 0.0, 0.0);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x67Bu, 0LL);
      return v3;
    }
    v9 = v4++;
    v23[v9] = this[79];
  }
  v10 = CTransformGroupProxy::Update(this[80], v23, v4);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x680u, 0LL);
  }
  else
  {
    v12 = CEffectGroupProxy::Update(this[76], *((float *)this + 216), v11, 0LL);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x682u, 0LL);
    }
    else
    {
      v13 = CVisualProxy::SetEffect(*((CVisualProxy **)this[83] + 2), this[76]);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x684u, 0LL);
      }
      else
      {
        v14 = CVisualProxy::SetTransform(*((CVisualProxy **)this[83] + 2), this[80]);
        v3 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x686u, 0LL);
        }
        else
        {
          v15 = CAnimatedTransitionVisual::_BindIfPresent(this, 0LL, this[78], 5LL);
          v3 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x688u, 0LL);
          }
          else
          {
            v16 = CAnimatedTransitionVisual::_BindIfPresent(this, 1LL, this[78], 6LL);
            v3 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x689u, 0LL);
            }
            else
            {
              v17 = CAnimatedTransitionVisual::_BindIfPresent(this, 2LL, this[77], 3LL);
              v3 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x68Au, 0LL);
              }
              else
              {
                v18 = CAnimatedTransitionVisual::_BindIfPresent(this, 3LL, this[77], 4LL);
                v3 = v18;
                if ( v18 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x68Bu, 0LL);
                }
                else
                {
                  v19 = CAnimatedTransitionVisual::_BindIfPresent(this, 4LL, this[79], 1LL);
                  v3 = v19;
                  if ( v19 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x68Cu, 0LL);
                  }
                  else
                  {
                    v20 = CAnimatedTransitionVisual::_BindIfPresent(this, 5LL, this[79], 2LL);
                    v3 = v20;
                    if ( v20 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x68Du, 0LL);
                    }
                    else
                    {
                      v21 = CAnimatedTransitionVisual::_BindIfPresent(this, 6LL, this[76], 0LL);
                      v3 = v21;
                      if ( v21 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x68Eu, 0LL);
                      }
                      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                      {
                        McTemplateU0ddqqqqqqp_EtwEventWriteTransfer(
                          (unsigned int)this[79],
                          (unsigned int)this[77],
                          *((_DWORD *)this + 168),
                          *((_DWORD *)this + 169),
                          *((_DWORD *)this[3] + 6),
                          *((_DWORD *)this[76] + 6),
                          *((_DWORD *)this[80] + 6),
                          *((_DWORD *)this[78] + 6),
                          *((_DWORD *)this[77] + 6),
                          *((_DWORD *)this[79] + 6),
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
