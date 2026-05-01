/*
 * XREFs of ?RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ @ 0x1802ADB48
 * Callers:
 *     ??$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18004E768 (--$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800275B4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x18021E19C (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 */

__int64 __fastcall CDesktopPositioner::RuntimeClassInitialize(
        CDesktopPositioner *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  LSTATUS ValueW; // eax
  bool v6; // sf
  volatile int *v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  SHRegGetBOOLWithREGSAM(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationFrame\\Positions",
    L"UseDefaultRestorePosition",
    a4,
    (int *)this + 136);
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\DesktopPositioner",
             L"HorizontalDropOffset",
             0x10u,
             0LL,
             (char *)this + 408,
             &pcbData);
  v6 = ValueW < 0;
  if ( ValueW > 0 )
    v6 = 1;
  if ( v6 )
    *((_DWORD *)this + 102) = 40;
  v8 = CImmersiveShellComponent::RegisterServiceInformation(
         (CDesktopPositioner *)((char *)this + 48),
         &GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa);
  if ( v8 < 0 )
  {
    v9 = 153LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = *((_QWORD *)this + 71);
  *((_QWORD *)this + 71) = 0LL;
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(
      v11,
      v7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((_QWORD *)this + 71);
  if ( v8 < 0 )
  {
    v9 = 155LL;
    goto LABEL_7;
  }
  return 0LL;
}
