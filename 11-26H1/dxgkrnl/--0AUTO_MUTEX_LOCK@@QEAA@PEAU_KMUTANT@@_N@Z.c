/*
 * XREFs of ??0AUTO_MUTEX_LOCK@@QEAA@PEAU_KMUTANT@@_N@Z @ 0x140064BD8
 * Callers:
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x140093840 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiIndirectCbDisableRenderD3Requests @ 0x1402503F0 (DpiIndirectCbDisableRenderD3Requests.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x140426148 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     <none>
 */

AUTO_MUTEX_LOCK *__fastcall AUTO_MUTEX_LOCK::AUTO_MUTEX_LOCK(AUTO_MUTEX_LOCK *this, struct _KMUTANT *a2)
{
  AUTO_MUTEX_LOCK *result; // rax

  *((_QWORD *)this + 1) = a2;
  *(_BYTE *)this = 0;
  KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
  result = this;
  *(_BYTE *)this = 1;
  return result;
}
