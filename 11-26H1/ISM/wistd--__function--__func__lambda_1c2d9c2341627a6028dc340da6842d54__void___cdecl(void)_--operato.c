/*
 * XREFs of wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_::operator() @ 0x18010D530
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RotationWnfCallback@RotationWatcher@@SAJAEBV?$com_ptr_t@UIMessageSession@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18010D6AC (-RotationWnfCallback@RotationWatcher@@SAJAEBV-$com_ptr_t@UIMessageSession@@Uerr_exception_policy.c)
 */

void __fastcall wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = RotationWatcher::RotationWnfCallback(a1 + 8);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\rotationwatcher\\rotationwatcher.cpp",
      (const char *)(unsigned int)v1);
}
