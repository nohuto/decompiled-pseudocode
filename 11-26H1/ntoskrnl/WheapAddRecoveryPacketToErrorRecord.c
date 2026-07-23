/*
 * XREFs of WheapAddRecoveryPacketToErrorRecord @ 0x1406DA64C
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x1406DA99C (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall WheapAddRecoveryPacketToErrorRecord(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  unsigned int v5; // esi
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v16; // [rsp+20h] [rbp-50h] BYREF
  __int128 v17; // [rsp+30h] [rbp-40h]
  __int128 v18; // [rsp+40h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-20h]
  __int128 v20; // [rsp+60h] [rbp-10h]

  v3 = *(unsigned __int16 *)(a2 + 10);
  v5 = a1[6];
  if ( (unsigned int)v3 >= v5 )
    return (unsigned int)-1073741789;
  memset_0(&v16, 0, 0x50uLL);
  v9 = a2 + 128;
  v8 = 0;
  DWORD2(v17) = a1[7];
  HIDWORD(v17) = a1[2];
  *(_QWORD *)&v16 = 0x341454857LL;
  DWORD2(v16) = 80;
  *(_QWORD *)&v19 = a2;
  if ( (_WORD)v3 )
  {
    v9 += 72 * v3;
    v10 = (unsigned int)(*(_DWORD *)(v9 - 72) + *(_DWORD *)(v9 - 68));
  }
  else
  {
    v10 = 72 * v5 + 128;
  }
  if ( (unsigned int)(a3 - v10) < 0x50 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v11 = v17;
    *(_DWORD *)v9 = v10;
    *(_DWORD *)(v9 + 4) = 80;
    *(_WORD *)(v9 + 8) = 768;
    *(_DWORD *)(v9 + 48) = 0;
    *(GUID *)(v9 + 16) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_OWORD *)(v10 + a2) = v16;
    v12 = v18;
    *(_OWORD *)(v10 + a2 + 16) = v11;
    v13 = v19;
    *(_OWORD *)(v10 + a2 + 32) = v12;
    v14 = v20;
    *(_OWORD *)(v10 + a2 + 48) = v13;
    *(_OWORD *)(v10 + a2 + 64) = v14;
    ++*(_WORD *)(a2 + 10);
  }
  return v8;
}
