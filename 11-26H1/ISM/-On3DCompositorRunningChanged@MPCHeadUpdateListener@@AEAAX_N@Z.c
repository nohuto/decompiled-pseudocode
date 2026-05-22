/*
 * XREFs of ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800D15D0
 * Callers:
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800D14B4 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180056F88 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180057000 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHeadUpdateListener::On3DCompositorRunningChanged(MPCHeadUpdateListener *this, char a2)
{
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v5; // eax
  RTL_SRWLOCK *v6; // rax
  struct IMPCInputPostProcessor *v7; // rax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    v5 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, void (__fastcall *)(_OWORD *, __int64 (__fastcall ***)(_QWORD, GUID *, char *), __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))))(*(_QWORD *)PostProcessor + 88LL))(
           PostProcessor,
           MPCHeadUpdateListener::OnHeadEventOccurred);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA0,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v5,
        v9);
    *((_WORD *)this + 100) = 257;
  }
  else
  {
    v6 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    v7 = MPC3DStateHelper::GetPostProcessor(v6);
    v8 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD))(*(_QWORD *)v7 + 88LL))(v7, 0LL);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v8,
        v9);
    *((_BYTE *)this + 200) = 0;
    *((_BYTE *)this + 202) = 1;
  }
}
