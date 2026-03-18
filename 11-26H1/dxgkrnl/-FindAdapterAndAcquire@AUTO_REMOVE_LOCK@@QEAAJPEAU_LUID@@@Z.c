/*
 * XREFs of ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x140093840
 * Callers:
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x14008C2F8 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x14008F734 (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 * Callees:
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x14004CC14 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1400569DC (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ??0AUTO_MUTEX_LOCK@@QEAA@PEAU_KMUTANT@@_N@Z @ 0x140064BD8 (--0AUTO_MUTEX_LOCK@@QEAA@PEAU_KMUTANT@@_N@Z.c)
 *     ?SetDeviceContext@AUTO_REMOVE_LOCK@@QEAAXPEAU_COMMON_CONTEXT@@@Z @ 0x140093960 (-SetDeviceContext@AUTO_REMOVE_LOCK@@QEAAXPEAU_COMMON_CONTEXT@@@Z.c)
 */

__int64 __fastcall AUTO_REMOVE_LOCK::FindAdapterAndAcquire(AUTO_REMOVE_LOCK *this, struct _LUID *a2)
{
  __int64 i; // rdi
  struct _COMMON_CONTEXT *j; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  PRKMUTEX Mutex; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+60h] [rbp+18h] BYREF

  MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK((MINIPORT_LIST_AUTO_LOCK *)&v9);
  for ( i = qword_140168E08; (__int64 *)i != &qword_140168E08; i = *(_QWORD *)i )
  {
    AUTO_MUTEX_LOCK::AUTO_MUTEX_LOCK((AUTO_MUTEX_LOCK *)v7, (struct _KMUTANT *)(i + 72));
    for ( j = *(struct _COMMON_CONTEXT **)(i + 56);
          j != (struct _COMMON_CONTEXT *)(i + 56);
          j = *(struct _COMMON_CONTEXT **)j )
    {
      if ( j && *((_DWORD *)j + 4) == 1953656900 && *((_DWORD *)j + 5) == 2 )
      {
        AUTO_REMOVE_LOCK::SetDeviceContext(this, j);
        if ( AUTO_REMOVE_LOCK::Acquire((struct _IO_REMOVE_LOCK **)this) >= 0
          && *((_DWORD *)j + 674) == a2->LowPart
          && *((_DWORD *)j + 675) == a2->HighPart )
        {
          if ( v7[0] )
            KeReleaseMutex(Mutex, 0);
          if ( v9 )
            ReleaseMiniportListMutex();
          return 0LL;
        }
        AUTO_REMOVE_LOCK::SetDeviceContext(this, 0LL);
      }
    }
    if ( v7[0] )
    {
      KeReleaseMutex(Mutex, 0);
      v7[0] = 0;
    }
  }
  if ( v9 )
    ReleaseMiniportListMutex();
  return 3222863905LL;
}
