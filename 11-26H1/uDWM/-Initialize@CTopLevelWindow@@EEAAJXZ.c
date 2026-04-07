/*
 * XREFs of ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180022DC0
 * Callers:
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180017330 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x1800235C0 (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18000FAD4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800211D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z @ 0x180021AAC (-Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180021BA0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x1800229C0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CPrimitiveGroupVisual@@SAJPEAPEAV1@@Z @ 0x180027730 (-Create@CPrimitiveGroupVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180063EAC (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct CVisual **v4; // rsi
  int v5; // eax
  struct CVisual **v6; // r12
  int v7; // eax
  CVisualProxy ***v8; // r13
  int v9; // eax
  int v10; // eax
  struct CVisual **v11; // r14
  int v12; // eax
  int v13; // eax
  struct CVisual **v14; // r15
  int v15; // eax
  CVisual **v16; // rbp
  int v17; // eax
  bool v18; // dl
  int v19; // eax
  int v20; // eax
  int v21; // eax
  bool v22; // r8
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  CVisual *v29; // rcx
  struct _MARGINS v31; // [rsp+30h] [rbp-48h] BYREF
  struct CVisual **v32; // [rsp+88h] [rbp+10h]
  struct CVisual **v33; // [rsp+90h] [rbp+18h]

  v2 = CContainerVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xCCu, 0LL);
  }
  else if ( ((_BYTE)this[23] & 8) == 0 )
  {
    v4 = this + 25;
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(this + 25);
    v5 = CWindowBackgroundTreatmentVisual::Create(this + 25);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xD0u, 0LL);
    }
    else
    {
      v6 = this + 26;
      v7 = CWindowBorder::Create(this + 26);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xD1u, 0LL);
      }
      else
      {
        v8 = (CVisualProxy ***)(this + 27);
        v9 = CCanvasVisual::Create(this + 27);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xD2u, 0LL);
        }
        else
        {
          v32 = this + 28;
          v10 = CCanvasVisual::Create(this + 28);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xD3u, 0LL);
          }
          else
          {
            v11 = this + 29;
            v12 = CCanvasVisual::Create(this + 29);
            v3 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xD4u, 0LL);
            }
            else
            {
              v33 = this + 66;
              v13 = CCanvasVisual::Create(this + 66);
              v3 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xD5u, 0LL);
              }
              else
              {
                v14 = this + 67;
                v15 = CCanvasVisual::Create(this + 67);
                v3 = v15;
                if ( v15 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xD6u, 0LL);
                }
                else
                {
                  v16 = this + 31;
                  v17 = CPrimitiveGroupVisual::Create(this + 31);
                  v3 = v17;
                  if ( v17 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xD9u, 0LL);
                  }
                  else
                  {
                    v19 = CVisual::SetHitTestVisibility(*v16, v18);
                    v3 = v19;
                    if ( v19 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xDAu, 0LL);
                    }
                    else
                    {
                      v20 = CContainerVisual::AddChild((CContainerVisual *)this, *v4);
                      v3 = v20;
                      if ( v20 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0xDCu, 0LL);
                      }
                      else
                      {
                        v21 = CContainerVisual::AddChild(*v4, *v6);
                        v3 = v21;
                        if ( v21 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0xDDu, 0LL);
                        }
                        else
                        {
                          v23 = CWindowBorder::SetContent((struct CVisual **)*v6, *v8, v22);
                          v3 = v23;
                          if ( v23 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0xDEu, 0LL);
                          }
                          else
                          {
                            v24 = CContainerVisual::AddChild((CContainerVisual *)*v8, *v32);
                            v3 = v24;
                            if ( v24 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xDFu, 0LL);
                            }
                            else
                            {
                              v25 = CContainerVisual::AddChild(*v32, *v11);
                              v3 = v25;
                              if ( v25 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0xE0u, 0LL);
                              }
                              else
                              {
                                v26 = CContainerVisual::AddChild(*v11, *v16);
                                v3 = v26;
                                if ( v26 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0xE1u, 0LL);
                                }
                                else
                                {
                                  v27 = CContainerVisual::AddChild(*v11, *v14);
                                  v3 = v27;
                                  if ( v27 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xE2u, 0LL);
                                  }
                                  else
                                  {
                                    v28 = CContainerVisual::AddChild(*v14, *v33);
                                    v3 = v28;
                                    if ( v28 < 0 )
                                    {
                                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xE3u, 0LL);
                                    }
                                    else
                                    {
                                      v29 = *v33;
                                      v31 = 0LL;
                                      CVisual::SetInsetFromParent(v29, &v31);
                                      CVisual::SetInsetFromParent(*v16, &v31);
                                      *((_DWORD *)*v14 + 30) = -1;
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
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
