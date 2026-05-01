/*
 * XREFs of ??$make_shared@UInProcPropertyStore@Util@@$$V@std@@YA?AV?$shared_ptr@UInProcPropertyStore@Util@@@0@XZ @ 0x180647384
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x18064F3BC (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<Util::InProcPropertyStore,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x18uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootConnectingState>::`vftable';
  *((_QWORD *)v3 + 2) = &Util::InProcPropertyStore::`vftable';
  a1[1] = v3;
  result = a1;
  *a1 = v3 + 4;
  return result;
}
