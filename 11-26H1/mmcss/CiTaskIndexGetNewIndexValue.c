/*
 * XREFs of CiTaskIndexGetNewIndexValue @ 0x14000E450
 * Callers:
 *     CiTaskIndexCreate @ 0x14000E260 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

__int64 CiTaskIndexGetNewIndexValue()
{
  struct _DEVICE_OBJECT *DeferredRoutine; // rax
  unsigned int v1; // ecx

  while ( 1 )
  {
    DeferredRoutine = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.DeferredRoutine;
    v1 = ++CiTaskIndex;
    if ( (PKDEFERRED_ROUTINE *)WPP_MAIN_CB.Dpc.DeferredRoutine == &WPP_MAIN_CB.Dpc.DeferredRoutine )
      break;
    while ( LODWORD(DeferredRoutine[-1].DeviceObjectExtension) != v1 )
    {
      DeferredRoutine = *(struct _DEVICE_OBJECT **)&DeferredRoutine->Type;
      if ( DeferredRoutine == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.DeferredRoutine )
        return (unsigned int)CiTaskIndex;
    }
  }
  return v1;
}
