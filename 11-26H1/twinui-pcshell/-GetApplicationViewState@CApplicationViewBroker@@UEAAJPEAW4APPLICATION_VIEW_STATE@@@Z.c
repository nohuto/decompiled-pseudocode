/*
 * XREFs of ?GetApplicationViewState@CApplicationViewBroker@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z @ 0x1804E7440
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18021EFF0 (-_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 */

__int64 __fastcall CApplicationViewBroker::GetApplicationViewState(
        CApplicationViewBroker *this,
        enum APPLICATION_VIEW_STATE *a2)
{
  __int64 result; // rax
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  *(_DWORD *)a2 = 0;
  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  result = CApplicationViewBroker::_GetAppViewDataForCallingProcess(this, (struct APPLICATION_VIEW_DATA *)v4);
  if ( (int)result >= 0 )
    *(_DWORD *)a2 = v4[0];
  return result;
}
