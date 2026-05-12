/*
 * XREFs of RaAdapterDeregisterFromIdleDetection @ 0x14005C4B8
 * Callers:
 *     RaidAdapterReleaseResources @ 0x140185C48 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall RaAdapterDeregisterFromIdleDetection(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx

  v1 = *(_QWORD **)(a1 + 5024);
  if ( v1 )
  {
    v3 = (void *)v1[14];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x4F506152u);
      v1[14] = 0LL;
      *((_DWORD *)v1 + 26) = 0;
    }
    *(_QWORD *)(a1 + 5024) = 0LL;
    PoFxUnregisterDevice(*v1);
    ExFreePoolWithTag(v1, 0x4F506152u);
  }
}
