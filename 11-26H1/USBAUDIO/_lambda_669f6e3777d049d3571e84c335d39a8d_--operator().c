/*
 * XREFs of _lambda_669f6e3777d049d3571e84c335d39a8d_::operator() @ 0x14001505C
 * Callers:
 *     _scope_exit__lambda_669f6e3777d049d3571e84c335d39a8d____::_2_::scope_exit::_scope_exit @ 0x140014E90 (_scope_exit__lambda_669f6e3777d049d3571e84c335d39a8d____--_2_--scope_exit--_scope_exit.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

ULONG *__fastcall lambda_669f6e3777d049d3571e84c335d39a8d_::operator()(PIRP **a1)
{
  int v1; // edx
  int v2; // r8d
  ULONG *result; // rax

  (**a1)->IoStatus.Status = *(_DWORD *)a1[1];
  IofCompleteRequest(**a1, 0);
  LOBYTE(v2) = 1;
  LOBYTE(v1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v2) = 0;
  if ( (_BYTE)v1 || (_BYTE)v2 )
    return (ULONG *)WPP_RECORDER_AND_TRACE_SF_d(
                      WPP_GLOBAL_Control->AttachedDevice,
                      v1,
                      v2,
                      WPP_GLOBAL_Control->DeviceExtension);
  return result;
}
