/*
 * XREFs of FreeProcessorInfo @ 0x14000EAC0
 * Callers:
 *     NVMeControllerRemove @ 0x14000E0B0 (NVMeControllerRemove.c)
 *     GetProcessorInformation @ 0x14000E550 (GetProcessorInformation.c)
 *     NVMeControllerStop @ 0x140017BD4 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeProcessorInfo(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v6; // r8
  __int64 result; // rax

  v4 = a1[32];
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4, a4);
    a1[32] = 0LL;
  }
  v6 = a1[33];
  if ( v6 )
  {
    result = StorPortExtendedFunction(1LL, a1, v6, a4);
    a1[33] = 0LL;
  }
  *(_QWORD *)((char *)a1 + 236) = 0LL;
  return result;
}
