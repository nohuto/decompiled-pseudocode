/*
 * XREFs of IoMountBootLayer @ 0x140793F80
 * Callers:
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     IopMountCompositeLayer @ 0x140D034D4 (IopMountCompositeLayer.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x140263890 (KeExpandKernelStackAndCalloutEx.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

NTSTATUS __fastcall IoMountBootLayer(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int128 Parameter; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  Parameter = 0LL;
  v6 = 0LL;
  if ( (unsigned int)InitializationPhase >= 2 )
  {
    result = -1073741431;
    goto LABEL_4;
  }
  *((_QWORD *)&Parameter + 1) = a2;
  *(_QWORD *)&v6 = a3;
  *(_QWORD *)&Parameter = BugCheckParameter1;
  result = KeExpandKernelStackAndCalloutEx(IopMountBootLayerCallout, &Parameter, 0x6000uLL, 0, 0LL);
  if ( result < 0 )
LABEL_4:
    KeBugCheckEx(0x7Bu, BugCheckParameter1, result, 0LL, 0LL);
  return result;
}
