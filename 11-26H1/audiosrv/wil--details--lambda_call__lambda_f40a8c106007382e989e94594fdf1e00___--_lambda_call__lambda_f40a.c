/*
 * XREFs of wil::details::lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___::_lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___ @ 0x1800ABD0C
 * Callers:
 *     _CAudioDGProcess::LaunchADGProcess_::_1_::dtor$0 @ 0x1801663CB (_CAudioDGProcess--LaunchADGProcess_--_1_--dtor$0.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180067DCC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___::_lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___(
        _BYTE *a1)
{
  __int64 result; // rax
  void *v3; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v3 = *(void **)(*(_QWORD *)a1 + 88LL);
    if ( v3 )
    {
      if ( v3 != (void *)-1LL )
      {
        WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          (void **)(*(_QWORD *)a1 + 88LL),
          0LL);
        result = *(_QWORD *)a1;
        *(_DWORD *)(*(_QWORD *)a1 + 96LL) = 0;
      }
    }
  }
  return result;
}
