/*
 * XREFs of NvmeAdapterProcessNvmeofNotification @ 0x1400DB140
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     NvmeAdapterNvmeControllerTransportFatalError @ 0x1400EB5C0 (NvmeAdapterNvmeControllerTransportFatalError.c)
 */

void __fastcall NvmeAdapterProcessNvmeofNotification(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  _DWORD *v3; // rcx

  if ( *(_WORD *)a2 == 1 )
  {
    v2 = *(_WORD *)(a2 + 2);
    if ( v2 >= 0x30u && *(_DWORD *)(a2 + 8) == 2 )
    {
      v3 = *(_DWORD **)(a2 + 32);
      if ( v3 )
      {
        if ( v2 >= 0x72u && *(_WORD *)(a2 + 44) >= 0x42u && *v3 == 1314276178 )
          NvmeAdapterNvmeControllerTransportFatalError(v3);
      }
    }
  }
}
