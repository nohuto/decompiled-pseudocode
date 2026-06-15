/*
 * XREFs of _Init_thread_footer @ 0x1800B2850
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x1800121EC (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@@Z @ 0x1801613FC (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV-$unique_ptr@UPac.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_1801D5EF0);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&stru_1801D5EF0);
  return Init_thread_notify();
}
