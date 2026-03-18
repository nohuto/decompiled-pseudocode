/*
 * XREFs of Interrupter_ReleaseHardware @ 0x14007C3C0
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1400794C0 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     Interrupter_ReleaseInterrupter @ 0x14007C448 (Interrupter_ReleaseInterrupter.c)
 */

void __fastcall Interrupter_ReleaseHardware(__int64 a1)
{
  __int64 i; // rdi
  void *v3; // rcx

  if ( *(_QWORD *)(a1 + 32) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 92); i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i) )
        Interrupter_ReleaseInterrupter();
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0x49434858u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v3 = *(void **)(a1 + 56);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x49434858u);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
