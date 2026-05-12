/*
 * XREFs of sub_1400D18F0 @ 0x1400D18F0
 * Callers:
 *     sub_1401282DC @ 0x1401282DC (sub_1401282DC.c)
 *     sub_1401929D8 @ 0x1401929D8 (sub_1401929D8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400D18F0(__int64 a1)
{
  struct _ERESOURCE *v2; // rdi
  volatile signed __int32 **v3; // rbx
  volatile signed __int32 *i; // rax

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)(a1 + 1136) + 948LL), 0);
  }
  else if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
  {
    KeEnterCriticalRegion();
    v2 = (struct _ERESOURCE *)(a1 + 1176);
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
    v3 = (volatile signed __int32 **)(a1 + 1288);
    for ( i = *v3; i != (volatile signed __int32 *)v3; i = *(volatile signed __int32 **)i )
      _interlockedbittestandset(i + 209, 0);
    ExReleaseResourceLite(v2);
    KeLeaveCriticalRegion();
  }
}
