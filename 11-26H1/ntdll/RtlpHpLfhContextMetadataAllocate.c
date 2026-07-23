/*
 * XREFs of RtlpHpLfhContextMetadataAllocate @ 0x18007225C
 * Callers:
 *     RtlpHpLfhContextSlotAllocate @ 0x180072140 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x18007219C (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x18010B444 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockExtension @ 0x180071B4C (RtlpHpLfhContextLockExtension.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataAllocate(_RTL_SRWLOCK *a1, int a2)
{
  __int64 v2; // rbp
  bool v4; // zf
  unsigned __int64 Value; // rbx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v7[0] = 256;
  v7[1] = 256;
  v4 = a1[a2 + 17].Value == 0;
  v7[2] = ((((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1) + 1) << 6;
  if ( v4 )
    return ((__int64 (__fastcall *)(unsigned __int64, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[5].Value))(
             a1->Value,
             (unsigned int)v7[v2]);
  RtlpHpLfhContextLockExtension(a1);
  Value = a1[v2 + 17].Value;
  if ( Value )
    a1[v2 + 17] = *(_RTL_SRWLOCK *)Value;
  if ( (_DWORD)v2 == 1 && Value )
  {
    if ( (_RTL_SRWLOCK *)Value == &a1[24] )
      NT_ASSERT("HeatMap != &LfhContext->HeatMap");
    if ( *(_BYTE *)(Value + 250) != 1 )
      NT_ASSERT("HeatMap->OnFreeList == 1");
    *(_BYTE *)(Value + 250) = 0;
  }
  RtlReleaseSRWLockExclusive(a1 + 16);
  if ( !Value )
    return ((__int64 (__fastcall *)(unsigned __int64, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[5].Value))(
             a1->Value,
             (unsigned int)v7[v2]);
  return Value;
}
