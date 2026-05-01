/*
 * XREFs of ?GetFrameForHwnd@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18023DB2C
 * Callers:
 *     ?IsFrameWindowForHost@TaskViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x18067FB10 (-IsFrameWindowForHost@TaskViewHost@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BFCC (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall TaskViewHost::GetFrameForHwnd(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rsi

  v3 = *(_QWORD **)(a1 + 320);
  v5 = *(_QWORD **)(a1 + 328);
  while ( v3 != v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 32LL))(*v3, a3) )
    {
      wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
        a2,
        v3);
      return a2;
    }
    ++v3;
  }
  *a2 = 0LL;
  return a2;
}
