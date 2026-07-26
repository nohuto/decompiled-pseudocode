/*
 * XREFs of NdisAllocateGenericObject @ 0x140064550
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLL @ 0x14004CC70 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLLq @ 0x1400646B0 (WPP_RECORDER_SF_qLLq.c)
 */

PNDIS_GENERIC_OBJECT __stdcall NdisAllocateGenericObject(PDRIVER_OBJECT DriverObject, ULONG Tag, USHORT Size)
{
  unsigned __int16 v6; // di
  __int64 Pool2; // rax
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  struct _NDIS_GENERIC_OBJECT *v11; // rbx
  int v13; // [rsp+20h] [rbp-58h]
  PVOID CallersCaller; // [rsp+50h] [rbp-28h] BYREF
  PVOID CallersAddress; // [rsp+98h] [rbp+20h] BYREF

  CallersAddress = 0LL;
  CallersCaller = 0LL;
  if ( traceInited && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Tag,
      0x15u,
      0x8Fu,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)DriverObject,
      Tag);
  RtlGetCallersAddress(&CallersAddress, &CallersCaller);
  v6 = Size + 32;
  if ( Size >= 0xFFE0u )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, v6, Tag);
  v11 = (struct _NDIS_GENERIC_OBJECT *)Pool2;
  if ( Pool2 )
  {
    *(_WORD *)Pool2 = 257;
    *(_WORD *)(Pool2 + 2) = v6;
    *(_QWORD *)(Pool2 + 8) = CallersAddress;
    *(_QWORD *)(Pool2 + 16) = CallersCaller;
    *(_QWORD *)(Pool2 + 24) = DriverObject;
  }
  if ( traceInited )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLLq(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, v10, v13, (char)DriverObject, Tag, Size, Pool2);
  }
  return v11;
}
