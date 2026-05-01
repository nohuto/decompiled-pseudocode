/*
 * XREFs of ?reset@?$unique_ptr@XP6AHPEBX@Z@std@@QEAAXPEAX@Z @ 0x18062EFA4
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x1806298F0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x18062BE80 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::unique_ptr<void,int (*)(void const *)>::reset(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = a1;
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(result + 8) = a2;
  if ( v3 )
    return (*(__int64 (**)(void))result)();
  return result;
}
