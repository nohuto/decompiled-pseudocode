/*
 * XREFs of ??1?$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ @ 0x18064A144
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x18064F3BC (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x1806517D0 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 *     _Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::dtor$6 @ 0x180703CBF (_Util--FileMappingHelpers--ReadBufferFromSharedMemory_--_1_--dtor$6.c)
 *     _Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x180703FBF (_Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))a1)();
  return result;
}
