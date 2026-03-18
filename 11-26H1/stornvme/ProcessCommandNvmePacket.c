/*
 * XREFs of ProcessCommandNvmePacket @ 0x14002B038
 * Callers:
 *     NVMeHwBuildIo @ 0x140002CA0 (NVMeHwBuildIo.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     SetPrpFromSrb @ 0x140003380 (SetPrpFromSrb.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeSplitIoCommand @ 0x14002015C (NVMeSplitIoCommand.c)
 */

__int64 __fastcall ProcessCommandNvmePacket(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  __int64 SrbExtension; // rax
  bool v6; // zf
  __int64 v7; // rsi
  bool v8; // r14
  __int64 v9; // rdi
  char v10; // cl
  __int64 v11; // rax
  int v12; // r13d
  char v13; // cl
  char v14; // dl
  char v15; // dl
  _WORD *v16; // rcx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  unsigned int v25; // eax
  char v26; // dl
  __int64 v28; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v6 = *(_BYTE *)(a2 + 2) == 40;
  v7 = SrbExtension;
  v28 = 0LL;
  v8 = 0;
  if ( !v6 )
    goto LABEL_44;
  if ( *(_DWORD *)(a2 + 20) != 10 )
    goto LABEL_44;
  v9 = a2 + *(unsigned int *)(a2 + 120);
  if ( !v9 )
    goto LABEL_44;
  GetSrbDataBuffer(a2, &v28);
  v10 = *(_BYTE *)(v9 + 80);
  v11 = 24LL;
  v12 = *(_DWORD *)(v9 + 20);
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v11 = 12LL;
  if ( (*(_DWORD *)(v11 + a2) & 0xC0) == 0 && v10 != 1 && *(_BYTE *)(v9 + 16) )
    goto LABEL_44;
  v13 = (v10 == 1) | *(_BYTE *)(v7 + 4225) & 0xFE;
  *(_BYTE *)(v7 + 4225) = v13;
  v14 = v13 & 0xFD | ((*(_BYTE *)(v9 + 82) & 3) != 0 ? 2 : 0);
  *(_BYTE *)(v7 + 4225) = v14;
  v15 = *(_BYTE *)(v9 + 82) & 4 | v14 & 0xFB;
  *(_BYTE *)(v7 + 4225) = v15;
  if ( (v15 & 1) != 0 )
  {
    v16 = (_WORD *)(v9 + 88);
    v17 = *(_DWORD *)(v9 + 88);
    if ( v17 == -1 || v17 == *(unsigned __int16 *)(a1 + 384) )
      goto LABEL_14;
LABEL_44:
    v26 = 40;
    goto LABEL_45;
  }
  if ( !*(_WORD *)(a1 + 330) )
    goto LABEL_44;
  v16 = (_WORD *)(v9 + 88);
LABEL_14:
  if ( *(_DWORD *)v16 == -1 )
    SrbAssignQueueId(a1, a2);
  else
    *(_WORD *)(v7 + 4212) = *v16;
  if ( (*(_BYTE *)(v9 + 82) & 0x10) != 0 )
    *(_BYTE *)(v7 + 4225) |= 0x20u;
  *(_OWORD *)(v7 + 4096) = *(_OWORD *)(v9 + 16);
  *(_OWORD *)(v7 + 4112) = *(_OWORD *)(v9 + 32);
  *(_OWORD *)(v7 + 4128) = *(_OWORD *)(v9 + 48);
  *(_OWORD *)(v7 + 4144) = *(_OWORD *)(v9 + 64);
  v18 = (unsigned __int8)*(_DWORD *)(v9 + 16);
  if ( v18 != 2 && v18 != 1 || (unsigned int)(v12 - 1) > 0xFFFFFFFD )
    goto LABEL_36;
  v19 = *(_DWORD *)(v9 + 20);
  if ( !v19
    || (v20 = (unsigned int)(v19 - 1), (_DWORD)v20 == -1)
    || (v21 = *(_QWORD *)(a1 + 8 * v20 + 1672)) == 0
    || (v22 = *(_DWORD *)(v21 + 52)) == 0 )
  {
    NVMeSetSenseData(a2, 8, 0, 0);
    return 3238002695LL;
  }
  if ( !*(_QWORD *)(v21 + 56)
    || (v23 = *(unsigned __int16 *)(v21 + 92), !*(_DWORD *)v28)
    || ((v22 - 1) & *(_DWORD *)v28) != 0 )
  {
    v26 = 6;
LABEL_45:
    NVMeSetSenseData(a2, v26, 0, 0);
    return 3238002694LL;
  }
  v24 = *(_DWORD *)(a1 + 52);
  if ( v24 >= v22 && !(v24 % v22) || (_WORD)v23 )
  {
    v28 = *(_QWORD *)(v7 + 4136);
    if ( (_WORD)v23 )
      v25 = v23;
    else
      v25 = v24 / v22;
    v8 = v28 / v25 != (v28 + (unsigned int)(unsigned __int16)*(_DWORD *)(v7 + 4144) + 1 - 1LL) / v25;
  }
LABEL_36:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    v3 = SetPrpFromSrb((_DWORD *)a1, a2);
    if ( v3 )
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
    else if ( v8 )
    {
      NVMeSplitIoCommand(a1, a2);
    }
  }
  return v3;
}
