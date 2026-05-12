/*
 * XREFs of NvmeNamespaceScsiModeSelectRequest @ 0x140117DCC
 * Callers:
 *     NvmeNamespaceExecuteScsiSrb @ 0x140104C20 (NvmeNamespaceExecuteScsiSrb.c)
 * Callees:
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400ED69C (NvmeAdapterSetFabricControllerFeature.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 */

__int64 __fastcall NvmeNamespaceScsiModeSelectRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  unsigned int v5; // ebx
  _BYTE *v6; // r12
  __int64 v9; // rsi
  __int64 v10; // r14
  char v11; // r11
  unsigned int v12; // edi
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // eax
  _BYTE *v24; // rdi
  __int64 v25; // rcx
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-48h]
  __int64 v31; // [rsp+48h] [rbp-40h]
  __int64 v32; // [rsp+50h] [rbp-38h]
  __int64 v33; // [rsp+98h] [rbp+10h] BYREF

  v33 = a2;
  v4 = *(_BYTE *)(a3 + 2);
  v5 = 0;
  v6 = (_BYTE *)a4;
  v9 = 0LL;
  v10 = 64LL;
  if ( v4 == 40 )
  {
    v11 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      v12 = *(_DWORD *)(a3 + 56);
      a4 = 0LL;
      if ( v12 )
      {
        while ( 1 )
        {
          v13 = *(unsigned int *)(a3 + 4LL * (unsigned int)a4 + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v14 = *(unsigned int *)(a3 + 16);
            if ( (unsigned int)v13 < (unsigned int)v14 )
              break;
          }
LABEL_11:
          a4 = (unsigned int)(a4 + 1);
          if ( (unsigned int)a4 >= v12 )
            goto LABEL_12;
        }
        v15 = (unsigned int)v13;
        v16 = *(_DWORD *)(v13 + a3) - 64;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
          {
            if ( v15 + 56 <= v14 )
              v11 = 1;
            goto LABEL_10;
          }
          if ( v17 != 1 )
            goto LABEL_10;
        }
        if ( v15 + 40 <= v14 )
          goto LABEL_12;
LABEL_10:
        if ( v11 )
          goto LABEL_12;
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  LOBYTE(a4) = *v6;
  if ( v4 != 40 )
    v10 = 24LL;
  v18 = 60LL;
  v19 = *(_QWORD *)(v10 + a3);
  if ( v4 != 40 )
    v18 = 16LL;
  v20 = 4;
  if ( (_BYTE)a4 != 21 )
    v20 = 8;
  v21 = *(_DWORD *)(v18 + a3);
  if ( (v6[1] & 0x10) != 0 )
  {
    if ( v19
      && v21 >= v20
      && ((_BYTE)a4 != 21
        ? (BYTE1(v33) = *(_BYTE *)MEMORY[3], LOBYTE(v33) = *(_BYTE *)(MEMORY[3] + 1LL), v22 = (unsigned __int16)v33)
        : (v22 = *(unsigned __int8 *)(v19 + 3), v9 = *(_QWORD *)(v10 + a3)),
          (v23 = v20 + v22, v24 = (_BYTE *)(v9 + v23), v21 - v23 >= 0xC)
       && (*v24 & 0x3F) == 8
       && v24[1] == 10
       && (v25 = *(_QWORD *)(a1 + 16), (*(_BYTE *)(*(_QWORD *)(v25 + 592) + 525LL) & 1) != 0)) )
    {
      NvmeAdapterSetFabricControllerFeature(
        v25,
        *(_DWORD *)(a1 + 56),
        6,
        a4,
        ((unsigned __int8)v24[2] >> 2) & 1,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        &v33);
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL) = ((unsigned __int64)(v24[2] & 0xFC) << 17) ^ (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL) ^ ((unsigned __int64)(v24[2] & 0xFC) << 17)) & 0xFFFFFFFFFFF7FFFFuLL;
    }
    else
    {
      SetSrbSenseData(a3, 6, 5, 36, 0);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    SetSrbSenseData(a3, 6, 5, 36, 0);
    return (unsigned int)-1073741808;
  }
  return v5;
}
