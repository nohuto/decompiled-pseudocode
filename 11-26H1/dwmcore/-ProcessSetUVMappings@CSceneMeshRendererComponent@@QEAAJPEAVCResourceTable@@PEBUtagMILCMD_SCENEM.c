/*
 * XREFs of ?ProcessSetUVMappings@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS@@PEBXI@Z @ 0x180280110
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1802801B0 (-SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV-$span@$$CBUSceneMeshMaterialAttrib.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::ProcessSetUVMappings(
        CSceneMeshRendererComponent *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 v8; // r8
  int appended; // eax
  unsigned int v10; // ebx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  gsl::details::extent_type<-1>::extent_type<-1>(v12, (unsigned __int64)a5 >> 3);
  v12[1] = a4;
  if ( v12[0] == -1LL || !a4 && v12[0] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  LOBYTE(v8) = *((_BYTE *)a3 + 8);
  appended = CSceneMeshRendererComponent::SetOrAppendUVMappings(this, v12, v8);
  v10 = appended;
  if ( appended >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9F,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
    (const char *)(unsigned int)appended);
  return v10;
}
