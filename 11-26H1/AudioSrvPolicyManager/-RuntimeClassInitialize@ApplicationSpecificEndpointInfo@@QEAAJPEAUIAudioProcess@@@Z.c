/*
 * XREFs of ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180007200
 * Callers:
 *     ??$MakeAndInitialize@VApplicationSpecificEndpointInfo@@UIApplicationSpecificEndpointInfo@@AEAPEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationSpecificEndpointInfo@@AEAPEAVCProcess@@@Z @ 0x180007050 (--$MakeAndInitialize@VApplicationSpecificEndpointInfo@@UIApplicationSpecificEndpointInfo@@AEAPEA.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180005ACC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x180006110 (-GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800079B4 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029C68 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AFDC (--1last_error_context@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::RuntimeClassInitialize(
        ApplicationSpecificEndpointInfo *this,
        struct IAudioProcess *a2)
{
  _QWORD *v4; // rsi
  void *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  _QWORD *v12; // rdi
  void *v13; // rsi
  const unsigned __int16 *ApplicationName; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v20; // [rsp+30h] [rbp+8h] BYREF
  char v21; // [rsp+31h] [rbp+9h]

  v4 = (_QWORD *)((char *)this + 88);
  v5 = (void *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v20);
    CoTaskMemFree(v5);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v20);
  }
  *v4 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 56LL))(a2);
  v9 = _AllocString<CTCoAllocPolicy>(v8, v7, v6, v4);
  if ( v9 < 0 )
  {
    v10 = 25LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v9,
      v18);
    return (unsigned int)v9;
  }
  v12 = (_QWORD *)((char *)this + 80);
  v13 = (void *)*((_QWORD *)this + 10);
  if ( v13 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v20);
    CoTaskMemFree(v13);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v20);
  }
  *v12 = 0LL;
  ApplicationName = ApplicationSpecificEndpointInfo::GetApplicationName(a2);
  v9 = _AllocString<CTCoAllocPolicy>(v16, v15, ApplicationName, v12);
  if ( v9 < 0 )
  {
    v10 = 29LL;
    goto LABEL_5;
  }
  v17 = RpcImpersonateClient(0LL);
  if ( v17 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x20,
             (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
             (const char *)v17);
  v21 = 1;
  ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints((unsigned __int16 **)this);
  RpcRevertToSelf();
  return 0LL;
}
