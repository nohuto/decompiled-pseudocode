/*
 * XREFs of RaUnitSetQueueDepth @ 0x14003ACFC
 * Callers:
 *     RaidStartUnit @ 0x140057F60 (RaidStartUnit.c)
 * Callees:
 *     McTemplateK0zquuuqqqt_EtwWriteTransfer @ 0x1400796C0 (McTemplateK0zquuuqqqt_EtwWriteTransfer.c)
 */

__int64 __fastcall RaUnitSetQueueDepth(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v4; // ecx
  unsigned int v5; // ebx

  v4 = *(_DWORD *)(a1 + 724);
  v5 = -1073741823;
  if ( a2 && a2 <= a3 )
  {
    *(_DWORD *)(a1 + 724) = a2;
  }
  else if ( a2 != v4 )
  {
    return v5;
  }
  v5 = 0;
  *(_DWORD *)(a1 + 928) = a3;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0zquuuqqqt_EtwWriteTransfer(
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      a2,
      a3,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      v4,
      a2,
      a3,
      0);
  return v5;
}
