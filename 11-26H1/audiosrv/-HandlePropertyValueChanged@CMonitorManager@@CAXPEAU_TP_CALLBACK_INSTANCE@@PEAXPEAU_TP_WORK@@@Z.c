/*
 * XREFs of ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180060100
 * Callers:
 *     <none>
 * Callees:
 *     ?DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x180060BFC (-DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z.c)
 */

void __fastcall CMonitorManager::HandlePropertyValueChanged(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WORK Work)
{
  GUID v3; // xmm0
  const unsigned __int16 *v5; // rdx
  unsigned int v6; // edx
  struct _tagpropertykey v7; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(GUID *)(Context + 8);
  v7.pid = *((_DWORD *)Context + 6);
  v5 = *(const unsigned __int16 **)Context;
  v7.fmtid = v3;
  CMonitorManager::DoHandlePropertyValueChanged(*((CMonitorManager **)Context + 4), v5, &v7);
  PropertyChangedContext::`scalar deleting destructor'((PropertyChangedContext *)Context, v6);
}
