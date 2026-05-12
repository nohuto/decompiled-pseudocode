/*
 * XREFs of StorpTelemetrySendUnitNvmeLogPage @ 0x1400C2F00
 * Callers:
 *     StorpTelemetryEnumUnitNvmeLogPages @ 0x1400BA5D0 (StorpTelemetryEnumUnitNvmeLogPages.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer @ 0x1400B6798 (McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1400BDD10 (StorpTelemetryNvmeGetLogPage.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeLogPage(__int64 a1, int a2, unsigned int a3)
{
  ULONG InputBufferLength; // edi
  int *Pool; // rax
  unsigned int *v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rdi
  const wchar_t *v11; // rbx

  InputBufferLength = a3 + 48;
  Pool = (int *)RaidAllocatePool(256LL, a3 + 48, 1700028754LL, *(_QWORD *)(a1 + 8));
  v8 = (unsigned int *)Pool;
  if ( Pool )
  {
    if ( StorpTelemetryNvmeGetLogPage(*(PDEVICE_OBJECT *)(a1 + 8), a2, a3, Pool, InputBufferLength) >= 0 )
    {
      v9 = v8[7];
      if ( v9 <= a3 && (byte_140173444 & 4) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(v10 + 5144) )
          v11 = *(const wchar_t **)(v10 + 5144);
        McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer(
          a1 + 242,
          a1 + 177,
          a1 + 168,
          *(_DWORD *)(v10 + 56),
          *(_BYTE *)(a1 + 104),
          *(_BYTE *)(a1 + 105),
          *(_BYTE *)(a1 + 106),
          a1 + 2104,
          v10 + 5128,
          *(const wchar_t **)(v10 + 4784),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v11,
          (const char *)(*(_QWORD *)(a1 + 160) + 90LL),
          *(_BYTE *)(a1 + 506) & 1,
          a2,
          v9,
          (__int64)v8 + v8[6] + 8);
      }
    }
    ExFreePoolWithTag(v8, 0x65546152u);
  }
}
