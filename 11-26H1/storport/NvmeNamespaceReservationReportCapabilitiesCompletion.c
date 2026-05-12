/*
 * XREFs of NvmeNamespaceReservationReportCapabilitiesCompletion @ 0x14010E9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeNamespaceReservationReportCapabilitiesCompletion(__int64 a1, unsigned int *a2, char *a3)
{
  __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // r9
  char v7; // cl
  char v8; // dl
  char v9; // cl
  char v10; // al
  char v11; // cl
  char v12; // dl
  char v13; // cl
  char v14; // dl
  char v15; // r8
  char v16; // dl

  if ( a2 )
  {
    result = a2[12];
    if ( (result & 2) == 0 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)a2 + 4216LL);
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 4184LL) + 24LL);
      v7 = *(_BYTE *)(v6 + 2);
      *(_WORD *)v6 = 2048;
      v8 = *(_BYTE *)(*(_QWORD *)(v5 + 176) + 31LL);
      *(_BYTE *)(v6 + 2) = (v7 ^ (v7 ^ v8) & 1) & 0x63 | 4;
      if ( (v8 & 1) != 0 )
        v9 = *a3;
      else
        v9 = 0;
      v10 = v9 & 1 ^ *(_BYTE *)(v6 + 3) & 0xE;
      v11 = *(_BYTE *)(v6 + 4);
      *(_BYTE *)(v6 + 3) = v10 | 0x80;
      v12 = v11 ^ (*(_BYTE *)(*(_QWORD *)(v5 + 176) + 31LL) ^ v11) & 2;
      *(_BYTE *)(v6 + 4) = v12;
      v13 = v12 ^ (v12 ^ (2 * *(_BYTE *)(*(_QWORD *)(v5 + 176) + 31LL))) & 8;
      *(_BYTE *)(v6 + 4) = v13;
      v14 = v13 ^ (v13 ^ (4 * *(_BYTE *)(*(_QWORD *)(v5 + 176) + 31LL))) & 0x20;
      *(_BYTE *)(v6 + 4) = v14;
      v15 = v14 ^ (v14 ^ (4 * *(_BYTE *)(*(_QWORD *)(v5 + 176) + 31LL))) & 0x40;
      v16 = *(_BYTE *)(v6 + 5);
      *(_BYTE *)(v6 + 4) = v15;
      *(_BYTE *)(v6 + 4) = v15 & 0x7F | (4 * (*(_BYTE *)(*(_QWORD *)(v5 + 176) + 31LL) & 0xE0));
      *(_BYTE *)(v6 + 5) = v16 ^ (v16 ^ (*(_BYTE *)(*(_QWORD *)(v5 + 176) + 31LL) >> 6)) & 1;
      *(_WORD *)(*(_QWORD *)a2 + 4260LL) = 0;
      result = *(_QWORD *)a2;
      _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
    }
  }
  return result;
}
