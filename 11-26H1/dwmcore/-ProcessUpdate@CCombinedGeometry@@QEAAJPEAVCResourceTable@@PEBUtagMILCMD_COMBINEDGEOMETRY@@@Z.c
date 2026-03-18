/*
 * XREFs of ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x180152A18
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180151FF0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 */

__int64 __fastcall CCombinedGeometry::ProcessUpdate(
        CCombinedGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMBINEDGEOMETRY *a3)
{
  unsigned int v5; // edx
  __int64 v7; // rdx
  unsigned int v9; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 2);
  v5 = *((_DWORD *)a3 + 3);
  if ( v5 && !CResourceTable::GetResource((__int64)a2, v5, 0x38u) )
  {
    v7 = 22LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\marshal_generated_global.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  CResource::ReplaceNotifier<CSceneMaterialInput>(this);
  v9 = *((_DWORD *)a3 + 4);
  if ( v9 && !CResourceTable::GetResource((__int64)a2, v9, 0x38u) )
  {
    v7 = 33LL;
    goto LABEL_4;
  }
  CResource::ReplaceNotifier<CSceneMaterialInput>(this);
  CGeometry::NotifyOnChanged((__int64)this, 0, 0LL);
  return 0LL;
}
