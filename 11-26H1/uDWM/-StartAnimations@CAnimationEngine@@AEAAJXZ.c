/*
 * XREFs of ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800512BC
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18001D6A4 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180050E4C (-BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180050FBC (-PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180051450 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18005354C (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::StartAnimations(CAnimationEngine *this)
{
  int v2; // edi
  __int64 i; // rsi
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int j; // ebx

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
    if ( v4 )
      CBaseObject::AddRef((CBaseObject *)v4);
    if ( !*(_BYTE *)(v4 + 48) && !*(_BYTE *)(v4 + 49) )
    {
      v6 = CAnimationEngine::SetupStoryboard(this, (struct CAnimationEngine::CTransitionVisualSet *)v4);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xD5u, 0LL);
        goto LABEL_19;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 32) + 96LL))(
             *(_QWORD *)(v4 + 32),
             v7,
             0LL);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xD8u, 0LL);
        goto LABEL_19;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
              *((_QWORD *)this + 1),
              v9,
              0LL);
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xDBu, 0LL);
        goto LABEL_19;
      }
      if ( *(_BYTE *)(v4 + 48) && !*(_BYTE *)(v4 + 49) )
      {
        v11 = CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
        v2 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xE1u, 0LL);
          goto LABEL_19;
        }
        v12 = CAnimationEngine::CTransitionVisualSet::BindAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
        v2 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xE2u, 0LL);
LABEL_19:
          CBaseObject::Release((CBaseObject *)v4);
          goto LABEL_20;
        }
      }
    }
    CBaseObject::Release((CBaseObject *)v4);
  }
  if ( v2 >= 0 )
    return (unsigned int)v2;
LABEL_20:
  for ( j = *((_DWORD *)this + 16); (int)--j >= (int)i; CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(
                                                          this,
                                                          j) )
    ;
  return (unsigned int)v2;
}
