/*
 * XREFs of WmipMRCleanup @ 0x140B4BBB0
 * Callers:
 *     <none>
 * Callees:
 *     WmipGenerateMofResourceNotification @ 0x140B551C8 (WmipGenerateMofResourceNotification.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall WmipMRCleanup(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rdx
  void *v4; // rcx
  void *v5; // rcx

  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    v3 = *(void **)(a1 + 48);
    if ( v3 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
        WmipGenerateMofResourceNotification(v2, v3);
    }
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = *(void **)(a1 + 48);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
