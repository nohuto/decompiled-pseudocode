/*
 * XREFs of ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18008ACE0
 * Callers:
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18008ABF4 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIAppli.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SizeConversionViewInfo::RuntimeClassInitialize(
        SizeConversionViewInfo *this,
        struct IImmersiveMonitor *a2,
        int a3,
        int a4,
        struct IApplicationViewTitlebarConfiguration *a5)
{
  __int64 v8; // rcx
  int ScaleFactorForMonitor; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 4, (__int64)a5);
  if ( a4 )
    *((_DWORD *)this + 6) |= 1u;
  if ( a3 )
    *((_DWORD *)this + 6) |= 2u;
  v8 = *((_QWORD *)this + 2);
  v13 = 0LL;
  ScaleFactorForMonitor = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 40LL))(v8, &v13);
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 61LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return (unsigned int)ScaleFactorForMonitor;
  }
  v14 = 0;
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v13, &v14);
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 64LL;
    goto LABEL_7;
  }
  *((_DWORD *)this + 10) = v14;
  return 0LL;
}
