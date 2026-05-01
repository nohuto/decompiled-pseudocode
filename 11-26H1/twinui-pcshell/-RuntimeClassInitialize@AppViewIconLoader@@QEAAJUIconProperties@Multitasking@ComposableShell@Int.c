/*
 * XREFs of ?RuntimeClassInitialize@AppViewIconLoader@@QEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Z @ 0x1801C77E0
 * Callers:
 *     ??$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x1801C7668 (--$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertSize@AppViewIconLoader@@CA?AUtagSIZE@@HUSize@Foundation@Windows@@@Z @ 0x1802BC490 (-ConvertSize@AppViewIconLoader@@CA-AUtagSIZE@@HUSize@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewIconLoader::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64, unsigned int, __int64); // rsi
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, __int64))(*(_QWORD *)a5 + 24LL);
  v10 = *(_DWORD *)(a2 + 24);
  v11 = AppViewIconLoader::ConvertSize(v10, *(_QWORD *)(a2 + 16));
  v12 = AppViewIconLoader::ConvertSize(v10, *(_QWORD *)(a2 + 8));
  v13 = v9(a5, a3, v12, v11, v10, (a1 + 8) & -(__int64)(a1 != 0));
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
      (const char *)(unsigned int)v13);
  return v14;
}
