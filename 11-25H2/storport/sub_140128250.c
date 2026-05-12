/*
 * XREFs of sub_140128250 @ 0x140128250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140128250(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  __int64 v4; // rcx

  *(_QWORD *)(*(_QWORD *)(Context[20] + 8LL) + 72LL) = 0LL;
  v4 = Context[20];
  if ( *(_BYTE *)v4 == 1
    && (*(_DWORD *)(v4 + 68) != 1 || (*(_DWORD *)(v4 + 76) & 4) != 0)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v4 + 8) + 136LL), 1, 0) )
  {
    PoFxActivateComponent(**(_QWORD **)(Context[20] + 8LL), 0LL, 0LL);
  }
}
