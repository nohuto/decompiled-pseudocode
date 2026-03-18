/*
 * XREFs of NVMeNameSpaceIdentify @ 0x140027A44
 * Callers:
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     NVMeVersionCheck @ 0x1400114D0 (NVMeVersionCheck.c)
 *     IsIntelChatham @ 0x140012628 (IsIntelChatham.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x140025540 (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeLogNameSpaceIdentificationStatus @ 0x140027808 (NVMeLogNameSpaceIdentificationStatus.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x140027F0C (NVMeParseNameSpaceIdentifyData.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeNameSpaceIdentify(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  bool v4; // al
  int v5; // r9d
  void *v6; // r11
  bool v7; // r10
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  bool v10; // al
  char v11; // bl
  int v12; // eax
  unsigned int ActiveNameSpaceIdList; // eax
  unsigned int v14; // r9d
  unsigned int i; // edx
  unsigned int v16; // r8d
  unsigned int v17; // esi
  _QWORD *v18; // r12
  int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // r15d
  int j; // edx
  __int64 v23; // rcx
  bool v24; // al
  char *v25; // rdx
  unsigned int k; // ecx
  int v27; // r8d
  int v28; // eax
  int v29; // eax
  __int64 result; // rax
  unsigned int v31; // [rsp+30h] [rbp-38h]
  void *v32; // [rsp+38h] [rbp-30h] BYREF
  char *v33; // [rsp+40h] [rbp-28h]
  __int64 v34; // [rsp+48h] [rbp-20h] BYREF
  int v35[2]; // [rsp+50h] [rbp-18h]
  int v36[4]; // [rsp+58h] [rbp-10h]
  int v37; // [rsp+B0h] [rbp+48h]
  bool v38; // [rsp+B8h] [rbp+50h]
  int v39; // [rsp+C0h] [rbp+58h]
  unsigned int v40; // [rsp+C8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = *(_QWORD *)(a1 + 3992);
  *(_QWORD *)v36 = v1;
  *(_QWORD *)v35 = v2;
  v4 = NVMeVersionCheck(a1, 1u, 1u);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0LL;
  v38 = v4;
  v7 = v4;
  v32 = 0LL;
  v8 = -1056964606;
  v34 = 0LL;
  v9 = 0;
  v40 = 0;
  v31 = 0;
  if ( (v5 & 0x100000) != 0 || (v10 = NVMeVersionCheck(a1, 2u, 0), v11 = (char)v6, v10) )
    v11 = 1;
  if ( *(_BYTE *)(a1 + 20) == (_BYTE)v6 && v7 && (v5 & 0x40000) == 0 )
  {
    v12 = NVMeAllocateDmaBufferEx(a1, 0, 1, 0x1000u, (__int64 *)&v32, &v34);
    v6 = 0LL;
    if ( !v12 )
    {
      if ( v32 )
      {
        memset(v32, 0, 0x1000uLL);
        ActiveNameSpaceIdList = NVMeGetActiveNameSpaceIdList(a1, (__int64)v32, v34);
        v6 = 0LL;
        v8 = ActiveNameSpaceIdList;
        if ( !ActiveNameSpaceIdList )
        {
          v8 = 0;
          v14 = 0;
          for ( i = 0; i < 0x400; ++i )
          {
            v16 = *((_DWORD *)v32 + i);
            if ( !v16 )
              break;
            if ( v16 <= v14 )
            {
              v8 = -1056964593;
              goto LABEL_17;
            }
            v14 = *((_DWORD *)v32 + i);
          }
          v40 = i;
          v9 = v14;
          v31 = v14;
        }
      }
    }
  }
LABEL_17:
  v17 = *(_DWORD *)(v1 + 516);
  v18 = *(_QWORD **)(a1 + 1656);
  v19 = (int)v6;
  if ( v17 > 0xFF )
    v17 = 255;
  v39 = (int)v6;
  if ( !v8 )
  {
    v20 = v17;
    if ( v11 )
    {
      if ( v9 < v17 )
        v20 = v9;
      if ( v20 >= 0xFF )
      {
        v17 = 255;
        goto LABEL_25;
      }
      if ( v9 >= v17 )
        goto LABEL_25;
      goto LABEL_54;
    }
    if ( v9 > v17 )
      v20 = v9;
    if ( v20 >= 0xFF )
    {
      v17 = 255;
      goto LABEL_26;
    }
    if ( v9 > v17 )
LABEL_54:
      v17 = v9;
  }
LABEL_25:
  if ( v17 )
  {
LABEL_26:
    v21 = 1;
    while ( 1 )
    {
      if ( (*(_BYTE *)(a1 + 20) == (_BYTE)v6 || *(_DWORD *)(a1 + 216) == v21)
        && ((*(_DWORD *)(a1 + 4064) & 0x10000) == 0
         || (*(_DWORD *)(a1 + 4344) & 2) == 0
         || v21 <= *(_DWORD *)(*(_QWORD *)(a1 + 4352) + 4LL)) )
      {
        LocalCommandReuse(a1, a1 + 1008);
        for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= j )
          ++j;
        *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
        v23 = *(_QWORD *)(a1 + 1104);
        *(_QWORD *)(v23 + 4120) = *(_QWORD *)(a1 + 1664);
        *(_BYTE *)(v23 + 4136) = v21 == 0;
        *(_BYTE *)(v23 + 4096) = 6;
        *(_DWORD *)(v23 + 4100) = v21;
        ProcessCommand(a1, a1 + 1016);
        WaitForCommandComplete(a1, a1 + 1016, 1);
        v24 = IsIntelChatham(a1);
        v6 = 0LL;
        if ( v24 )
        {
          HIBYTE(v37) = *((_BYTE *)v18 + 384);
          BYTE2(v37) = *((_BYTE *)v18 + 385);
          BYTE1(v37) = *((_BYTE *)v18 + 386);
          LOBYTE(v37) = *((_BYTE *)v18 + 387);
          if ( v37 != -559038737 && v21 == 1 )
          {
            memset(v18, 0, 0x1000uLL);
            v6 = 0LL;
            *v18 = 67108336LL;
            *((_BYTE *)v18 + 130) = 9;
            v18[1] = 67108336LL;
            v18[2] = 67108336LL;
          }
        }
        if ( *(_BYTE *)(a1 + 1019) != 1 )
          goto LABEL_66;
        if ( !v38 || *((_BYTE *)v18 + 4 * (*((_BYTE *)v18 + 26) & 0xF) + 130) || *v18 )
          goto LABEL_47;
        if ( (!v11 || *(_BYTE *)(a1 + 20)) && (v17 <= 1 || *(_BYTE *)(a1 + 20)) )
          break;
      }
LABEL_67:
      if ( v21++ >= v17 )
      {
LABEL_68:
        v9 = v31;
        v19 = v39;
        goto LABEL_69;
      }
    }
    *(_DWORD *)(a1 + 4064) |= 0x40u;
LABEL_47:
    v33 = 0LL;
    if ( *(_BYTE *)(a1 + 20) )
    {
      v25 = *(char **)(a1 + 1576);
      v33 = v25;
      *(_QWORD *)(a1 + 1576) = v25 + 424;
    }
    else
    {
      StorPortExtendedFunction(0LL, a1, 424LL, 1701672526LL);
      v25 = v33;
      v6 = 0LL;
      if ( !v33 )
        goto LABEL_68;
    }
    if ( !v8 )
    {
      for ( k = 0; k < 0x400; ++k )
      {
        v27 = *((_DWORD *)v32 + k);
        if ( !v27 )
          break;
        if ( v27 == v21 )
          goto LABEL_65;
      }
      v28 = *(_DWORD *)(a1 + 4064);
      if ( (v28 & 0x20) == 0 )
        *(_DWORD *)(a1 + 4064) = v28 | 0x20;
    }
LABEL_65:
    NVMeParseNameSpaceIdentifyData(a1, (int)v18, v36[0], v35[0], v21, v25);
    ++v39;
    v6 = 0LL;
    *(_QWORD *)(a1 + 8LL * (v21 - 1) + 1672) = v33;
    *(_DWORD *)(a1 + 224) = (unsigned __int16)v21;
LABEL_66:
    if ( *(_BYTE *)(a1 + 20) )
      goto LABEL_68;
    goto LABEL_67;
  }
LABEL_69:
  *(_DWORD *)(a1 + 212) = v19;
  if ( !v8 && v19 != v40 )
  {
    v29 = *(_DWORD *)(a1 + 4064);
    if ( (v29 & 0x20) == 0 )
      *(_DWORD *)(a1 + 4064) = v29 | 0x20;
  }
  result = *(unsigned int *)(a1 + 4064);
  if ( (result & 0x60) != 0 || v8 != -1056964606 && v8 )
  {
    result = NVMeLogNameSpaceIdentificationStatus(a1, v40, v9, v8);
    v6 = 0LL;
  }
  if ( v32 != v6 )
    return NVMeFreeDmaBufferEx(a1, 0, 1, 4096LL, (__int64 *)&v32, v34);
  return result;
}
