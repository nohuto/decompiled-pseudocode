/*
 * XREFs of RtlpHpLfhContextMetadataAllocate @ 0x1800932F8
 * Callers:
 *     RtlpHpLfhContextSlotAllocate @ 0x180092EAC (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x180093238 (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180097438 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockExtension @ 0x1800973B4 (RtlpHpLfhContextLockExtension.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataAllocate(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  bool v4; // zf
  __int64 v5; // rbx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h]

  v2 = (int)a2;
  v7[0] = 256;
  v7[1] = 256;
  v4 = *(_QWORD *)(a1 + 8LL * (int)a2 + 136) == 0LL;
  v7[2] = ((((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1) + 1) << 6;
  if ( v4 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
             *(_QWORD *)a1,
             (unsigned int)v7[v2]);
  RtlpHpLfhContextLockExtension(a1, a2);
  v5 = *(_QWORD *)(a1 + 8 * v2 + 136);
  if ( v5 )
    *(_QWORD *)(a1 + 8 * v2 + 136) = *(_QWORD *)v5;
  if ( (_DWORD)v2 == 1 && v5 )
  {
    if ( v5 == a1 + 192 )
      NT_ASSERT("HeatMap != &LfhContext->HeatMap");
    if ( *(_BYTE *)(v5 + 250) != 1 )
      NT_ASSERT("HeatMap->OnFreeList == 1");
    *(_BYTE *)(v5 + 250) = 0;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 128));
  if ( !v5 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
             *(_QWORD *)a1,
             (unsigned int)v7[v2]);
  return v5;
}
