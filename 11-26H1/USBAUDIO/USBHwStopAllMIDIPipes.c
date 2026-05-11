/*
 * XREFs of USBHwStopAllMIDIPipes @ 0x14002D314
 * Callers:
 *     USBDeviceSetPowerState @ 0x14003FD40 (USBDeviceSetPowerState.c)
 *     USBDeviceStop @ 0x14003FE50 (USBDeviceStop.c)
 * Callees:
 *     USBHwStopMIDIPipe @ 0x14000D7E0 (USBHwStopMIDIPipe.c)
 */

__int64 __fastcall USBHwStopAllMIDIPipes(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 *v3; // rdi
  __int64 i; // rbx
  unsigned int j; // esi
  unsigned int v6; // eax

  v1 = 0;
  v3 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 192LL);
  for ( i = *v3; (__int64 *)i != v3; i = *(_QWORD *)i )
  {
    for ( j = 0; j < *(_DWORD *)(i + 32); v1 = v6 )
      v6 = USBHwStopMIDIPipe(a1, i, j++);
    *(_BYTE *)(i + 16) = 0;
  }
  return v1;
}
