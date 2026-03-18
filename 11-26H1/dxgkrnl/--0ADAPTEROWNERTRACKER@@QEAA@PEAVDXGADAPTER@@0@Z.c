/*
 * XREFs of ??0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z @ 0x1400313D4
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2480 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 * Callees:
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1400316CC (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 */

ADAPTEROWNERTRACKER *__fastcall ADAPTEROWNERTRACKER::ADAPTEROWNERTRACKER(
        ADAPTEROWNERTRACKER *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER *a3)
{
  struct _ETHREAD *CurrentThread; // rdi
  DXGADAPTER *v5; // rcx

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
    DXGADAPTER::PushWorkerThreadOfExclusiveOwner(a2, CurrentThread);
  v5 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( v5 && *((DXGADAPTER **)this + 1) != v5 )
    DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v5, CurrentThread);
  return this;
}
