/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@12@@Z @ 0x1802BDCA4
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180222AC0 (--$CreateClassFactory@V-$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18021EC08 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1803D8B8C (--0-$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<RemoteLauncherForegroundHandler,0>,Microsoft::WRL::SimpleClassFactory<RemoteLauncherForegroundHandler,0>,>(
        __int64 *a1)
{
  void *v2; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 2147942414LL;
  v4 = Microsoft::WRL::SimpleClassFactory<RemoteLauncherForegroundHandler,0>::SimpleClassFactory<RemoteLauncherForegroundHandler,0>(v2);
  v6 = 0LL;
  v5 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    *a1 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v6);
  return 0LL;
}
