/*
 * XREFs of __scrt_dllmain_exception_filter @ 0x1802203A8
 * Callers:
 *     dllmain_dispatch @ 0x18022089C (dllmain_dispatch.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x1802211B8 (__scrt_is_ucrt_dll_in_use.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall _scrt_dllmain_exception_filter(
        __int64 a1,
        int a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, _QWORD, __int64),
        unsigned int ExceptionNum,
        struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() && a2 == 1 )
    a4(a1, 0LL, a3);
  return seh_filter_dll_0(ExceptionNum, ExceptionPtr);
}
