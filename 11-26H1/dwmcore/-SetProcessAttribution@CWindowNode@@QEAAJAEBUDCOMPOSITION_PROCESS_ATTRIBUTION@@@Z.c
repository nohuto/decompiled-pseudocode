/*
 * XREFs of ?SetProcessAttribution@CWindowNode@@QEAAJAEBUDCOMPOSITION_PROCESS_ATTRIBUTION@@@Z @ 0x180163EE4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x18016426C (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 */

__int64 __fastcall CWindowNode::SetProcessAttribution(
        CWindowNode *this,
        const struct DCOMPOSITION_PROCESS_ATTRIBUTION *a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // edx
  int ProcessAttribution; // eax
  unsigned int v6; // ebx
  volatile signed __int32 *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcessAttribution *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 1);
  v3 = *(_DWORD *)a2;
  v10 = 0LL;
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(qword_1803DEAE0, v3, v2, &v10);
  v6 = ProcessAttribution;
  if ( ProcessAttribution < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x777,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
      (const char *)(unsigned int)ProcessAttribution);
    if ( v10 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)v10);
    return v6;
  }
  else
  {
    v7 = (volatile signed __int32 *)*((_QWORD *)this + 102);
    *((_QWORD *)this + 102) = v10;
    if ( v7 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v7);
    return 0LL;
  }
}
