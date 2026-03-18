/*
 * XREFs of VidSchiRequestSchedulerStatus @ 0x1400C1914
 * Callers:
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 *     VidSchInitializeAdapter @ 0x1400C2230 (VidSchInitializeAdapter.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x140054CD0 (VidSchiGetSchedulerStatus.c)
 */

__int64 __fastcall VidSchiRequestSchedulerStatus(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi
  struct _ERESOURCE *v4; // rbp

  v3 = 0;
  v4 = (struct _ERESOURCE *)(a1 + 384);
  if ( a2 != 2 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 384), 1u);
  if ( *(_DWORD *)(a1 + 380) != a2 )
  {
    *(_DWORD *)(a1 + 380) = a2;
    *(_QWORD *)(a1 + 1552) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1520), 0, 0);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1600) = MEMORY[0xFFFFF78000000320];
      KeWaitForSingleObject((PVOID)(a1 + 1576), Executive, 0, 0, 0LL);
      if ( (unsigned int)VidSchiGetSchedulerStatus(a1) != a2 )
        v3 = -1073741823;
    }
  }
  if ( a2 != 2 )
    ExReleaseResourceLite(v4);
  return v3;
}
