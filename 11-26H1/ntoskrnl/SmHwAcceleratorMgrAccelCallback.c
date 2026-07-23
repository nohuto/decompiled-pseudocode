/*
 * XREFs of SmHwAcceleratorMgrAccelCallback @ 0x140820C80
 * Callers:
 *     <none>
 * Callees:
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x140643798 (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 */

void __fastcall SmHwAcceleratorMgrAccelCallback(__int64 a1, struct _KTHREAD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  if ( *(_DWORD *)(a1 + 4) == 1 )
    SmHwAcceleratorMgrHotRemoveAccelerator(a2, *(_QWORD *)(a1 + 16), a3, a4);
}
