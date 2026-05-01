/*
 * XREFs of _lambda_fa0a17b5823100ead362db86d99d2363_::operator() @ 0x18029ED80
 * Callers:
 *     wil::ResultFromException__lambda_fa0a17b5823100ead362db86d99d2363___ @ 0x18029ED60 (wil--ResultFromException__lambda_fa0a17b5823100ead362db86d99d2363___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180068428 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180113DD8 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_fa0a17b5823100ead362db86d99d2363_::operator()(__int64 a1)
{
  int v2; // eax
  _QWORD *v3; // rax
  int v4; // eax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 result; // rax
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = WindowSizeConverter::EnsureEntry(*(WindowSizeConverter **)a1, **(struct IImmersiveMonitor ***)(a1 + 8));
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x258,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v2,
      v8[0]);
  v3 = *(_QWORD **)(a1 + 8);
  v10 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v3 + 24LL))(*v3, &v10);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25C,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v4,
      v8[0]);
  v5 = *(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
                    (_QWORD *)(*(_QWORD *)a1 + 136LL),
                    (__int64)v8,
                    &v10);
  v6 = **(_QWORD ***)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v5 + 40));
  result = *(_QWORD *)(v5 + 40);
  *v6 = result;
  return result;
}
