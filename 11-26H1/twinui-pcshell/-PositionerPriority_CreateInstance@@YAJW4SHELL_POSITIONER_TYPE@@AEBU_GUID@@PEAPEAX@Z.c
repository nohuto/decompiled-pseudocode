/*
 * XREFs of ?PositionerPriority_CreateInstance@@YAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x18050DCD8
 * Callers:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800614C8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180254910 (-Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyTo@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C87AC (-CopyTo@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VPositionerPriority@@V1@AEAW4SHELL_POSITIONER_TYPE@@@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAW4SHELL_POSITIONER_TYPE@@@Z @ 0x18050DAF8 (--$MakeAndInitialize@VPositionerPriority@@V1@AEAW4SHELL_POSITIONER_TYPE@@@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall PositionerPriority_CreateInstance(int a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = a1;
  *a3 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<PositionerPriority,PositionerPriority,enum SHELL_POSITIONER_TYPE &>(
         &v9,
         &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 319LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = Microsoft::WRL::ComPtr<PositionerPriority>::CopyTo(&v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 320LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  return v4;
}
