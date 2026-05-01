/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCFullScreenManager@@$0A@@12@@Z @ 0x1803257F8
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180325560 (--$CreateClassFactory@V-$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@@Details@WR.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18022DF84 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180325B50 (--0-$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<CFullScreenManager,0>,Microsoft::WRL::SimpleClassFactory<CFullScreenManager,0>,>(
        __int64 *a1)
{
  unsigned int v1; // ebx
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = Microsoft::WRL::SimpleClassFactory<CFullScreenManager,0>::SimpleClassFactory<CFullScreenManager,0>(v3);
    v7 = 0LL;
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
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v7);
  return v1;
}
