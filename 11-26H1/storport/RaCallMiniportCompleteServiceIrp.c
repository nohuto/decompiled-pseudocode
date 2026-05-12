/*
 * XREFs of RaCallMiniportCompleteServiceIrp @ 0x14005CB40
 * Callers:
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019E4E8 (NvmeAdapterRemoveDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401B9154 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaCallMiniportCompleteServiceIrp(__int64 a1, char a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  void (__fastcall *v4)(__int64); // rax

  v2 = *(_QWORD *)(a1 + 240);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 232);
    if ( v3 )
    {
      if ( !a2 && (*(_DWORD *)(a1 + 248) & 8) != 0 )
      {
        v4 = *(void (__fastcall **)(__int64))(v3 + 152);
        if ( v4 )
          v4(v2 + 16);
      }
    }
  }
}
