/*
 * XREFs of _lambda_9623573e77ecd9e21901cd71a385e3bc_::operator() @ 0x1400151D4
 * Callers:
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007F18 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     _scope_exit__lambda_9623573e77ecd9e21901cd71a385e3bc____::_2_::scope_exit::_scope_exit @ 0x1400088D4 (_scope_exit__lambda_9623573e77ecd9e21901cd71a385e3bc____--_2_--scope_exit--_scope_exit.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

ULONG *__fastcall lambda_9623573e77ecd9e21901cd71a385e3bc_::operator()(PIRP **a1)
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
