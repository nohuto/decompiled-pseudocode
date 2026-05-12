/*
 * XREFs of StorChildAdapterPdoSurpriseRemoval @ 0x14012F604
 * Callers:
 *     StorChildAdapterPdoPnpIrp @ 0x14012EFE0 (StorChildAdapterPdoPnpIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorChildAdapterPdoSurpriseRemoval(__int64 a1, IRP *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // eax

  v2 = 0LL;
  _InterlockedExchange((volatile __int32 *)(a1 + 60), 5);
  v3 = *(_QWORD *)(a1 + 72);
  v4 = **(_DWORD **)(*(_QWORD *)(v3 + 8) + 64LL);
  if ( v4 == 1094997074 )
  {
    v2 = v3 + 376;
  }
  else if ( v4 == 1314275652 )
  {
    v2 = v3 + 168;
  }
  *(_DWORD *)(v2 + 248) &= ~0x100u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
