/*
 * XREFs of ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALCAPTURE@@@Z @ 0x1801D8944
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualCapture::ProcessUpdate(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALCAPTURE *a3)
{
  struct CResource *Resource; // rax
  unsigned int v5; // edx
  __int64 v8; // rdx
  unsigned int v10; // edx
  struct CResource *v11; // rax
  unsigned int v12; // edx
  struct CResource *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x9Cu);
    if ( !Resource )
    {
      v8 = 126LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\marshal_generated_global.cpp",
        (const char *)0x88980403LL);
      return 2291663875LL;
    }
  }
  CResource::ReplaceNotifier<CSceneMaterialInput>((CResource *)this, this + 298, Resource);
  v10 = *((_DWORD *)a3 + 3);
  v11 = 0LL;
  if ( v10 )
  {
    v11 = (struct CResource *)CResourceTable::GetResource((__int64)a2, v10, 0x9Cu);
    if ( !v11 )
    {
      v8 = 137LL;
      goto LABEL_4;
    }
  }
  CResource::ReplaceNotifier<CSceneMaterialInput>((CResource *)this, this + 299, v11);
  v12 = *((_DWORD *)a3 + 4);
  v13 = 0LL;
  if ( v12 )
  {
    v13 = (struct CResource *)CResourceTable::GetResource((__int64)a2, v12, 0x1Fu);
    if ( !v13 )
    {
      v8 = 148LL;
      goto LABEL_4;
    }
  }
  CResource::ReplaceNotifier<CSceneMaterialInput>((CResource *)this, this + 300, v13);
  *((_DWORD *)this + 602) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 603) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 604) = *((_DWORD *)a3 + 7);
  *((_BYTE *)this + 2420) = *((_BYTE *)a3 + 32);
  (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*this + 10))(this, 0LL, 0LL);
  return 0LL;
}
