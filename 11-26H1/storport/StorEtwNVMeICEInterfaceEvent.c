/*
 * XREFs of StorEtwNVMeICEInterfaceEvent @ 0x1400B1A5C
 * Callers:
 *     RaidAcquireNvmeIceKeyResources @ 0x140058BB4 (RaidAcquireNvmeIceKeyResources.c)
 *     RaidInitializeNvmeIce @ 0x1400719CC (RaidInitializeNvmeIce.c)
 *     RaidNvmeIceConfigureExclusionRanges @ 0x140079E98 (RaidNvmeIceConfigureExclusionRanges.c)
 *     RaidNvmeIceIoComplete @ 0x14007A170 (RaidNvmeIceIoComplete.c)
 *     RaidNvmeIceIoStart @ 0x14007A278 (RaidNvmeIceIoStart.c)
 *     RaidAdapterGetNvmeIceCapabilities @ 0x1401877EC (RaidAdapterGetNvmeIceCapabilities.c)
 * Callees:
 *     McTemplateK0qjzzzxz_EtwWriteTransfer @ 0x1400AFE94 (McTemplateK0qjzzzxz_EtwWriteTransfer.c)
 */

void __fastcall StorEtwNVMeICEInterfaceEvent(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, int a5)
{
  __int64 v6; // rax
  const wchar_t *v7; // rdx
  const wchar_t *v8; // rdx
  const wchar_t *v9; // rdx

  if ( a4 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a4[v6] );
    if ( (unsigned int)(v6 - 1) <= 0x3F )
    {
      if ( a5 == 2 )
      {
        if ( (byte_140173448 & 1) != 0 )
        {
          v9 = (const wchar_t *)&unk_140153274;
          if ( *(_QWORD *)(a1 + 5144) )
            v9 = *(const wchar_t **)(a1 + 5144);
          McTemplateK0qjzzzxz_EtwWriteTransfer(
            a1 + 5128,
            &EventNVMeICEInterfaceError,
            a3,
            *(_DWORD *)(a1 + 56),
            a1 + 5128,
            *(const wchar_t **)(a1 + 4784),
            v9,
            *(const wchar_t **)(a2 + 32),
            a3,
            a4);
        }
      }
      else if ( a5 == 3 )
      {
        if ( byte_140173447 < 0 )
        {
          v8 = (const wchar_t *)&unk_140153274;
          if ( *(_QWORD *)(a1 + 5144) )
            v8 = *(const wchar_t **)(a1 + 5144);
          McTemplateK0qjzzzxz_EtwWriteTransfer(
            a1 + 5128,
            &EventNVMeICEInterfaceWarning,
            a3,
            *(_DWORD *)(a1 + 56),
            a1 + 5128,
            *(const wchar_t **)(a1 + 4784),
            v8,
            *(const wchar_t **)(a2 + 32),
            a3,
            a4);
        }
      }
      else if ( (byte_140173447 & 0x40) != 0 )
      {
        v7 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(a1 + 5144) )
          v7 = *(const wchar_t **)(a1 + 5144);
        McTemplateK0qjzzzxz_EtwWriteTransfer(
          a1 + 5128,
          &EventNVMeICEInterfaceInformational,
          a3,
          *(_DWORD *)(a1 + 56),
          a1 + 5128,
          *(const wchar_t **)(a1 + 4784),
          v7,
          *(const wchar_t **)(a2 + 32),
          a3,
          a4);
      }
    }
  }
}
