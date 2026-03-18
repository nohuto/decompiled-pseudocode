/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x14000FEA0
 * Callers:
 *     <none>
 * Callees:
 *     GetControllerMaxTransferSize @ 0x140001580 (GetControllerMaxTransferSize.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     GetFirmwareGranularity @ 0x14001AEA4 (GetFirmwareGranularity.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetLogPageFirmwareSlotCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rbx
  __int64 v4; // r8
  __int64 v5; // rbp
  __int64 v6; // rax
  _BYTE *v7; // r12
  _DWORD *v8; // rdi
  _DWORD *v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // eax
  char v12; // al
  unsigned __int8 v13; // dl
  unsigned int v14; // r9d
  __int64 v15; // r10
  char v16; // al
  char v17; // al
  int FirmwareGranularity; // eax
  _DWORD *v19; // rcx
  unsigned int ControllerMaxTransferSize; // eax
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // eax
  unsigned __int8 i; // dl
  _DWORD *v25; // r9
  char v26; // al
  __int64 result; // rax
  char v28; // [rsp+60h] [rbp+8h]

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_QWORD *)(a1 + 1560);
  v6 = 64LL;
  v7 = *(_BYTE **)(SrbExtension + 4160);
  if ( *(_BYTE *)(v4 + 2) != 40 )
    v6 = 24LL;
  v8 = *(_DWORD **)(v6 + v4);
  v9 = (_DWORD *)((char *)v8 + (unsigned int)v8[11]);
  if ( *(_BYTE *)(v4 + 3) == 1 )
  {
    if ( *v9 != 2 || (v28 = 1, v9[1] < 0x18u) )
      v28 = 0;
    v10 = v8[12];
    if ( (v10 & 3) != 0 )
    {
      if ( v10 )
        memset(v9, 0, (unsigned int)v8[12]);
    }
    else
    {
      v11 = v10 >> 2;
      if ( v11 )
        memset(v9, 0, 4LL * v11);
    }
    if ( !v28 )
    {
      *v9 = 1;
      v9[1] = 16;
      *((_BYTE *)v9 + 8) = (*(_BYTE *)(v5 + 256) & 4) != 0;
      *((_BYTE *)v9 + 9) = (*(_BYTE *)(v5 + 260) >> 1) & 7;
      *((_BYTE *)v9 + 10) = *v7 & 7;
      v12 = -1;
      if ( ((*v7 >> 4) & 7) != 0 )
        v12 = (*v7 >> 4) & 7;
      v13 = 0;
      *((_BYTE *)v9 + 11) = v12;
      while ( 1 )
      {
        v14 = *(unsigned __int8 *)(v5 + 260);
        if ( v13 >= (unsigned __int8)(((unsigned __int8)v14 >> 1) & 7) )
          break;
        v15 = v13;
        v4 = 16LL * v13;
        if ( (unsigned int)v8[12] < (unsigned __int64)(v4 + 32) )
          goto LABEL_37;
        *((_BYTE *)v9 + v4 + 16) = v13 + 1;
        if ( v13 )
          v16 = 0;
        else
          v16 = *(_BYTE *)(v5 + 260) & 1;
        *((_BYTE *)v9 + v4 + 17) = v16;
        ++v13;
        *(_QWORD *)((char *)v9 + v4 + 24) = *(_QWORD *)&v7[8 * v15 + 8];
      }
LABEL_38:
      v8[5] = 0;
      goto LABEL_39;
    }
    v9[1] = 24;
    *v9 = 2;
    *((_BYTE *)v9 + 8) = (*(_BYTE *)(v5 + 256) & 4) != 0;
    *((_BYTE *)v9 + 9) = (*(_BYTE *)(v5 + 260) >> 1) & 7;
    *((_BYTE *)v9 + 10) = *v7 & 7;
    v17 = -1;
    if ( ((*v7 >> 4) & 7) != 0 )
      v17 = (*v7 >> 4) & 7;
    *((_BYTE *)v9 + 11) = v17;
    *((_BYTE *)v9 + 12) = 1;
    FirmwareGranularity = GetFirmwareGranularity(a1);
    v19 = (_DWORD *)a1;
    if ( FirmwareGranularity )
    {
      v9[4] = FirmwareGranularity;
      ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
      if ( ControllerMaxTransferSize % v21 )
      {
        v22 = GetControllerMaxTransferSize(v19);
        v23 = v22 - v4;
        goto LABEL_30;
      }
    }
    else
    {
      v9[4] = 4;
    }
    v23 = GetControllerMaxTransferSize(v19);
LABEL_30:
    v9[5] = v23;
    for ( i = 0; ; ++i )
    {
      v14 = *(unsigned __int8 *)(v5 + 260);
      if ( i >= (unsigned __int8)(((unsigned __int8)v14 >> 1) & 7) )
        break;
      v4 = i;
      if ( (unsigned int)v8[12] < 16 * ((unsigned __int64)i + 2) )
      {
LABEL_37:
        v8[12] = 16 * (((v14 >> 1) & 7) + 1);
        v8[5] = 5;
        goto LABEL_39;
      }
      v25 = &v9[6 * i];
      *((_BYTE *)v25 + 24) = i + 1;
      if ( i )
        v26 = 0;
      else
        v26 = *(_BYTE *)(v5 + 260) & 1;
      *((_BYTE *)v25 + 25) = v26;
      *((_QWORD *)v25 + 4) = *(_QWORD *)&v7[8 * v4 + 8];
    }
    goto LABEL_38;
  }
  v8[5] = 1;
LABEL_39:
  LOBYTE(v4) = 1;
  result = NVMeFreeDmaBufferEx(
             a1,
             0,
             v4,
             *(_DWORD *)(SrbExtension + 4208),
             SrbExtension + 4160,
             *(_QWORD *)(SrbExtension + 4168));
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  *(_DWORD *)(SrbExtension + 4208) = 0;
  return result;
}
