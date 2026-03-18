/*
 * XREFs of NVMeReservationReportCapabilitiesCompletion @ 0x14001F490
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 */

char __fastcall NVMeReservationReportCapabilitiesCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 SrbExtension; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  unsigned __int8 v7; // cl
  __int64 SrbDataBuffer; // r9
  char v9; // cl
  __int64 v10; // r8
  char v11; // dl
  char v12; // cl
  char v13; // cl
  char v14; // cl
  char v15; // dl
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v19; // [rsp+40h] [rbp+18h] BYREF

  SrbExtension = GetSrbExtension(a2);
  if ( a3 )
  {
    if ( *(_BYTE *)(v6 + 2) == 40 )
      v7 = *(_BYTE *)(*(unsigned int *)(v6 + 52) + v6 + 10);
    else
      v7 = *(_BYTE *)(v6 + 7);
    if ( (unsigned int)v7 < *(_DWORD *)(v5 + 224) && *(_QWORD *)(v5 + 8LL * v7 + 1672) )
      _mm_lfence();
    SrbDataBuffer = GetSrbDataBuffer(v6, &v19);
    v9 = *(_BYTE *)(SrbDataBuffer + 2);
    *(_WORD *)SrbDataBuffer = 2048;
    v11 = v9 ^ (*(_BYTE *)(v10 + 112) ^ v9) & 1;
    v12 = *(_BYTE *)(SrbDataBuffer + 3) & 0xE;
    *(_BYTE *)(SrbDataBuffer + 2) = v11 & 0x63 | 4;
    LOBYTE(SrbExtension) = *(_BYTE *)(SrbDataBuffer + 4);
    *(_BYTE *)(SrbDataBuffer + 3) = *a3 & 1 ^ v12 | 0x80;
    v13 = SrbExtension ^ (*(_BYTE *)(v10 + 112) ^ SrbExtension) & 2;
    *(_BYTE *)(SrbDataBuffer + 4) = v13;
    LOBYTE(SrbExtension) = v13 ^ (v13 ^ (2 * *(_BYTE *)(v10 + 112))) & 8;
    *(_BYTE *)(SrbDataBuffer + 4) = SrbExtension;
    v14 = SrbExtension ^ (SrbExtension ^ (4 * *(_BYTE *)(v10 + 112))) & 0x20;
    *(_BYTE *)(SrbDataBuffer + 4) = v14;
    v15 = v14 ^ (v14 ^ (4 * *(_BYTE *)(v10 + 112))) & 0x40;
    *(_BYTE *)(SrbDataBuffer + 4) = v15;
    *(_BYTE *)(SrbDataBuffer + 4) = v15 & 0x7F | (4 * (*(_BYTE *)(v10 + 112) & 0xE0));
    LOBYTE(SrbExtension) = *(_BYTE *)(SrbDataBuffer + 5);
    *(_BYTE *)(SrbDataBuffer + 5) = SrbExtension ^ (SrbExtension ^ (*(_BYTE *)(v10 + 112) >> 6)) & 1;
    *(_BYTE *)(v16 + 3) = 1;
    *(_BYTE *)(v17 + 4225) |= 8u;
  }
  else
  {
    *(_BYTE *)(v6 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
  }
  return SrbExtension;
}
