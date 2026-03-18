/*
 * XREFs of ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x180151BF8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180151FC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RemoveAt@?$DynArray@UAnimationBinding@CBaseAnimation@@$0A@@@QEAAJI@Z @ 0x1801520BC (-RemoveAt@-$DynArray@UAnimationBinding@CBaseAnimation@@$0A@@@QEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseAnimation::ProcessRemoveBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEANIMATION_REMOVEBINDING *a3)
{
  __int64 v4; // r8
  struct CResource *ResourceWithoutType; // r15
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // rdx

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  if ( ResourceWithoutType )
  {
    v6 = 0;
    v7 = 0;
    while ( v6 < *((_DWORD *)this + 26) )
    {
      v8 = *((_QWORD *)this + 10);
      if ( *(struct CResource **)(v8 + 16LL * v6) == ResourceWithoutType
        && *(_DWORD *)(v8 + 16LL * v6 + 8) == *(_DWORD *)(v4 + 12) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(CBaseAnimation *))(*(_QWORD *)this + 200LL))(this) )
          (**((void (__fastcall ***)(char *))this + 9))((char *)this + 72);
        if ( *((_DWORD *)this + 26) )
        {
          DynArray<CBaseAnimation::AnimationBinding,0>::RemoveAt((char *)this + 80, v6);
          (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 16LL))(ResourceWithoutType);
        }
        return v7;
      }
      ++v6;
    }
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x44u, 0LL);
  }
  return v7;
}
