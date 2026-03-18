/*
 * XREFs of PnprLoadPluginDriver @ 0x1407AF818
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PnprGetPluginDriverImagePath @ 0x1407AF130 (PnprGetPluginDriverImagePath.c)
 *     MmLoadSystemImage @ 0x140A26990 (MmLoadSystemImage.c)
 *     MmUnloadSystemImage @ 0x140AC7670 (MmUnloadSystemImage.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprLoadPluginDriver(_QWORD *a1, __int64 a2)
{
  int PluginDriverImagePath; // edi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  PluginDriverImagePath = PnprGetPluginDriverImagePath(&DestinationString);
  if ( PluginDriverImagePath >= 0 )
  {
    PluginDriverImagePath = MmLoadSystemImage((unsigned int)&DestinationString, 0, 0, 2, (__int64)&v11, (__int64)&v12);
    if ( PluginDriverImagePath >= 0 )
    {
      memset_0((void *)(a2 + 8), 0, 0x58uLL);
      *(_DWORD *)(a2 + 4) = 1;
      *(_DWORD *)a2 = 96;
      PluginDriverImagePath = guard_dispatch_icall_no_overrides(a2, 0LL);
      if ( PluginDriverImagePath >= 0 )
      {
        if ( *(_DWORD *)a2 >= 0x40u && *(_QWORD *)(a2 + 56) && *(_QWORD *)(a2 + 24) && *(_QWORD *)(a2 + 32) )
        {
          PluginDriverImagePath = 0;
          *a1 = v11;
          goto LABEL_23;
        }
        v5 = PnprContext;
        PluginDriverImagePath = -1073741637;
        v6 = *(_DWORD *)(PnprContext + 33288);
        if ( !v6 )
          v6 = 4893;
        v7 = 9;
      }
      else
      {
        v5 = PnprContext;
        v6 = *(_DWORD *)(PnprContext + 33288);
        if ( !v6 )
          v6 = 4877;
        v7 = 8;
      }
    }
    else
    {
      v5 = PnprContext;
      v6 = *(_DWORD *)(PnprContext + 33288);
      if ( !v6 )
        v6 = 4863;
      v7 = 10;
    }
    *(_DWORD *)(v5 + 33288) = v6;
    v8 = *(_DWORD *)(v5 + 33292);
    if ( !v8 )
      v8 = v7;
    *(_DWORD *)(v5 + 33292) = v8;
  }
  if ( v11 )
    MmUnloadSystemImage(v11);
LABEL_23:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x51706E50u);
  return (unsigned int)PluginDriverImagePath;
}
