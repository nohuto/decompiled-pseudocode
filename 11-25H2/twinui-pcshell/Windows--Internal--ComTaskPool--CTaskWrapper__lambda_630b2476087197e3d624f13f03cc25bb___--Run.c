/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::Run @ 0x1803AFD00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x1803A4910 (--0-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@A.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803AC24C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::Run(
        __int64 a1)
{
  _QWORD *v1; // rbx
  __int64 *v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 16);
  v2 = tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>(
         &v4,
         a1 + 80);
  return InstallWebSearchPackage(v1, v1 + 4, v2);
}
