/*
 * XREFs of NvmeQueryProtocolInfoLogPageData @ 0x140121494
 * Callers:
 *     NvmeProcessQueryProtocolSpecificProperty @ 0x14009005C (NvmeProcessQueryProtocolSpecificProperty.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeProtocolSpecificRequestGetData @ 0x1400901DC (NvmeProtocolSpecificRequestGetData.c)
 *     NvmeProtocolSpecificRequestShiftBuffer @ 0x1400902AC (NvmeProtocolSpecificRequestShiftBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeControllerSupportsUUIDList @ 0x1400C6630 (NvmeControllerSupportsUUIDList.c)
 *     NvmeVersionCheck2 @ 0x1400C6E44 (NvmeVersionCheck2.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     NvmeCopyCachedLogPage @ 0x14011FF34 (NvmeCopyCachedLogPage.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeQueryProtocolInfoLogPageData(
        union _SLIST_HEADER *SystemArgument2,
        __int64 a2,
        _QWORD *a3,
        _BYTE *a4)
{
  unsigned __int64 Alignment; // rdi
  unsigned __int64 v5; // rax
  __int64 v8; // rsi
  int v9; // r14d
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  _DWORD *v12; // r13
  char v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // r11
  const wchar_t *v16; // r9
  unsigned int v17; // r10d
  unsigned int v18; // edi
  unsigned __int64 v19; // rdx
  bool v20; // al
  char v21; // cl
  unsigned __int8 v22; // al
  bool v23; // zf
  int v24; // ecx
  __int64 v25; // rcx
  const wchar_t *v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned int v29; // r12d
  __int64 *ExtendedCommand; // rsi
  __int64 v31; // r8
  int DmaBuffer; // ebx
  void *v33; // rsi
  unsigned int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // r8
  _DWORD *v38; // r9
  int v39; // edx
  __int64 Pool; // rax
  __int64 v41; // rcx
  const void *Region; // rdx
  int v43; // eax
  unsigned __int64 v44; // rsi
  _DWORD *v45; // rcx
  unsigned __int64 v46; // rax
  int v47; // edx
  unsigned __int64 *v48; // r8
  _DWORD *v49; // rcx
  int v50; // edx
  char v51; // [rsp+A8h] [rbp-39h] BYREF
  unsigned __int8 v52; // [rsp+A9h] [rbp-38h]
  unsigned __int64 v53; // [rsp+B0h] [rbp-31h]
  unsigned int v54; // [rsp+B8h] [rbp-29h]
  void *v55[2]; // [rsp+C0h] [rbp-21h] BYREF
  void *v56; // [rsp+D0h] [rbp-11h]
  __int64 v57; // [rsp+D8h] [rbp-9h]
  unsigned __int64 v58; // [rsp+E0h] [rbp-1h]
  __int64 v59; // [rsp+E8h] [rbp+7h] BYREF
  _DWORD *v60; // [rsp+F0h] [rbp+Fh]
  bool v61; // [rsp+148h] [rbp+67h]

  Alignment = SystemArgument2[37].Alignment;
  v5 = SystemArgument2[8].Alignment;
  *a4 = 1;
  v59 = 0LL;
  *(_OWORD *)v55 = 0LL;
  v54 = *(_DWORD *)(v5 + 200);
  v8 = 0LL;
  a3[7] = 0LL;
  v60 = 0LL;
  v51 = 0;
  v9 = 0;
  v10 = 0LL;
  v57 = 0LL;
  v53 = Alignment;
  v61 = 1;
  v56 = 0LL;
  v58 = 0LL;
  result = NvmeProtocolSpecificRequestGetData((__int64)a3, 0, &v59, &v51);
  if ( (int)result >= 0 )
  {
    v12 = (_DWORD *)v59;
    v13 = v51;
    v14 = *(unsigned __int8 *)(v59 + 8);
    v52 = *(_BYTE *)(v59 + 8);
    if ( v51 )
    {
      if ( (unsigned __int8)v14 < 0xC0u )
      {
        StorEtwNvmeControllerEvent(
          (__int64)SystemArgument2,
          0,
          3LL,
          (__int64)L"NVMeDataTypeLogPageEx protocol query request for non-vendor-specific log page identifier",
          L"IRP Status",
          13,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0);
        return 3221225485LL;
      }
      v8 = v59;
      v60 = (_DWORD *)v59;
    }
    v15 = (_DWORD *)SystemArgument2[78].Alignment;
    if ( v15 && (v15[v14] & 1) == 0 )
    {
      v16 = L"Invalid log page identifier in protocol query request";
LABEL_12:
      StorEtwNvmeControllerEvent(
        (__int64)SystemArgument2,
        0,
        3LL,
        (__int64)v16,
        L"IRP Status",
        2,
        0LL,
        0,
        0LL,
        0,
        0LL,
        0,
        0LL,
        0,
        0LL,
        0,
        0LL,
        0,
        0LL,
        0);
      return 3221225474LL;
    }
    if ( v51 && (*(_DWORD *)(v8 + 36) & 0x800000) != 0 )
    {
      v16 = L"Protocol query request contains unsupported OT for log page offset";
      goto LABEL_12;
    }
    v17 = 3;
    if ( (unsigned int)v14 <= 0x12 )
    {
      if ( (_DWORD)v14 != 18 )
      {
        if ( (unsigned int)v14 <= 5 )
        {
          if ( (_DWORD)v14 == 5 )
          {
            v19 = v53;
            v9 = -1;
            v18 = 4096;
            v21 = *(_BYTE *)(v53 + 261) >> 1;
            goto LABEL_52;
          }
          if ( (_BYTE)v14 )
          {
            if ( (_DWORD)v14 != 1 )
            {
              if ( (_DWORD)v14 == 2 )
              {
                v19 = v53;
                v18 = 512;
                v9 = -((*(_BYTE *)(v53 + 261) & 1) == 0);
                goto LABEL_53;
              }
              if ( (_DWORD)v14 != 3 )
              {
                v18 = 4096;
LABEL_23:
                v9 = -1;
LABEL_24:
                v19 = v53;
LABEL_53:
                if ( v12[5] < v18 )
                  goto LABEL_135;
                v20 = v61;
LABEL_63:
                if ( v18 && v20 )
                {
                  if ( (_BYTE)v14 )
                  {
                    if ( (_BYTE)v14 == 5 )
                    {
                      Region = (const void *)SystemArgument2[77].Alignment;
                    }
                    else
                    {
                      if ( (_BYTE)v14 != 18 )
                      {
                        if ( v13 )
                        {
                          v25 = a2;
                          v9 = *(_DWORD *)(v8 + 44);
                          if ( !a2 )
                          {
                            if ( (unsigned int)(v9 - 1) <= 0xFFFFFFFD )
                            {
                              v26 = L"Adapter protocol query log page request specified invalid NSID";
LABEL_136:
                              StorEtwNvmeControllerEvent(
                                (__int64)SystemArgument2,
                                0,
                                v17,
                                (__int64)v26,
                                L"IRP Status",
                                13,
                                0LL,
                                0,
                                0LL,
                                0,
                                0LL,
                                0,
                                0LL,
                                0,
                                0LL,
                                0,
                                0LL,
                                0,
                                0LL,
                                0);
                              return 3221225485LL;
                            }
                            goto LABEL_77;
                          }
                          if ( v9 )
                          {
                            v26 = L"Namespace protocol query log page request cannot specify NSID";
                            goto LABEL_136;
                          }
                        }
                        else
                        {
                          if ( v9 == -1 )
                            goto LABEL_77;
                          v25 = a2;
                          v9 = -1;
                          if ( !a2 )
                            goto LABEL_77;
                        }
                        v9 = *(_DWORD *)(v25 + 56);
LABEL_77:
                        if ( (*(_BYTE *)(v19 + 261) & 4) != 0 )
                        {
                          if ( v13 )
                          {
                            v27 = *(unsigned int *)(v8 + 32);
                            v28 = *(unsigned int *)(v8 + 28);
                          }
                          else
                          {
                            v27 = (unsigned int)v12[7];
                            v28 = (unsigned int)v12[3];
                          }
                          v10 = v28 | (v27 << 32);
                          v57 = v10;
                        }
                        if ( v13
                          && 4
                           * (*(unsigned __int16 *)(v8 + 10) | ((unsigned __int64)(unsigned __int16)*(_DWORD *)(v8 + 12) << 16))
                           + 4 > v18 )
                        {
                          v26 = L"Protocol query log page request specifies transfer length larger than buffer";
                          goto LABEL_136;
                        }
                        if ( !v58 )
                          goto LABEL_89;
                        if ( v10 < v58 )
                        {
                          if ( v18 > (int)v58 - (int)v10 )
                            v18 = v58 - v10;
LABEL_89:
                          v29 = v54;
                          if ( v18 <= v54 )
                            v29 = v18;
                          ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(SystemArgument2);
                          if ( !ExtendedCommand )
                          {
                            DmaBuffer = -1073741670;
                            v18 = v29;
                            v33 = 0LL;
LABEL_123:
                            if ( v55[0] )
                              NvmeFreeDmaBuffer((__int64)SystemArgument2, v18, v31, (__int64)v55[0], (__int64)v55[1]);
                            if ( v33 )
                              ExFreePoolWithTag(v33, 0x4C4E6152u);
                            return (unsigned int)DmaBuffer;
                          }
                          DmaBuffer = NvmeAllocateDmaBuffer((__int64)SystemArgument2, v29, v31, v55, &v55[1], 0);
                          if ( DmaBuffer < 0 )
                            goto LABEL_106;
                          memset_0(v55[0], 0, v29);
                          *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
                          *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
                          *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
                          *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
                          *(_WORD *)(*ExtendedCommand + 4252) = 0;
                          *(_QWORD *)(*ExtendedCommand + 4184) = a3;
                          *(_QWORD *)(*ExtendedCommand + 4192) = NvmeQueryProtocolInfoCompletion;
                          *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
                          v35 = *ExtendedCommand;
                          if ( a2 )
                            *(_QWORD *)(v35 + 4216) = a2;
                          else
                            *(_QWORD *)(v35 + 4224) = SystemArgument2[8].Alignment;
                          v36 = v57;
                          LOBYTE(v34) = v52;
                          *(void **)(*ExtendedCommand + 4160) = v55[0];
                          *(void **)(*ExtendedCommand + 4168) = v55[1];
                          *(_DWORD *)(*ExtendedCommand + 4248) = v29;
                          BuildGetLogPageCommand(
                            (__int64)SystemArgument2,
                            *ExtendedCommand + 4096,
                            v34,
                            v29,
                            (__int64)v55[1],
                            v9,
                            v36,
                            v12[8],
                            *ExtendedCommand,
                            ExtendedCommand[1]);
                          v37 = *ExtendedCommand;
                          if ( v51 )
                          {
                            v38 = v60;
                            v39 = (v29 >> 2) - 1;
                            *(_DWORD *)(v37 + 4136) = v60[2];
                            *(_WORD *)(*ExtendedCommand + 4138) = v39;
                            *(_DWORD *)(*ExtendedCommand + 4140) = v38[3];
                            *(_WORD *)(*ExtendedCommand + 4140) = HIWORD(v39);
                            *(_DWORD *)(*ExtendedCommand + 4144) = v38[7];
                            *(_DWORD *)(*ExtendedCommand + 4148) = v38[8];
                            *(_DWORD *)(*ExtendedCommand + 4152) = v38[9];
                            *(_DWORD *)(*ExtendedCommand + 4156) = 0;
                            *(_DWORD *)(*ExtendedCommand + 4100) = v9;
                          }
                          else
                          {
                            *(_DWORD *)(v37 + 4136) ^= ((unsigned __int16)*(_DWORD *)(v37 + 4136) ^ (unsigned __int16)((unsigned __int16)v12[9] << 15)) & 0x8000;
                            *(_DWORD *)(*ExtendedCommand + 4136) ^= ((unsigned __int16)*(_DWORD *)(*ExtendedCommand
                                                                                                 + 4136) ^ (unsigned __int16)((unsigned __int16)v12[9] << 7)) & 0xF00;
                            if ( NvmeControllerSupportsUUIDList((__int64)SystemArgument2)
                              && (v12[9] & 0x7F00) != 0
                              && v52 >= 0xC0u )
                            {
                              *(_DWORD *)(*ExtendedCommand + 4152) ^= ((unsigned __int8)BYTE1(v12[9]) ^ (unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4152)) & 0x7F;
                            }
                          }
                          if ( v18 <= v54 )
                          {
                            v41 = (__int64)v56;
                          }
                          else
                          {
                            Pool = RaidAllocatePool(
                                     72LL,
                                     56LL,
                                     1280205138LL,
                                     *(_QWORD *)(SystemArgument2[8].Alignment + 8));
                            v56 = (void *)Pool;
                            v41 = Pool;
                            if ( !Pool )
                            {
                              DmaBuffer = -1073741670;
LABEL_106:
                              v18 = v29;
LABEL_107:
                              _interlockedbittestandreset((volatile signed __int32 *)(*ExtendedCommand + 4256), 3u);
                              NvmeControllerReclaimExtendedCommand(SystemArgument2, (__int64)ExtendedCommand);
                              v33 = v56;
                              goto LABEL_123;
                            }
                            *(_DWORD *)(Pool + 4) = 1;
                            *(_QWORD *)(Pool + 32) = v36;
                            *(_DWORD *)(Pool + 44) = 0;
                            *(void **)(Pool + 16) = v55[0];
                            *(void **)(Pool + 24) = v55[1];
                            *(_DWORD *)(Pool + 12) = v29;
                            *(_DWORD *)Pool = v12[2];
                            *(_DWORD *)(Pool + 8) = v9;
                            *(_DWORD *)(Pool + 40) = v12[5];
                            *(_QWORD *)(Pool + 48) = v58;
                          }
                          *(_QWORD *)(*ExtendedCommand + 4208) = v41;
                          if ( v51 )
                          {
                            DmaBuffer = NvmeProtocolSpecificRequestShiftBuffer((__int64)a3);
                            v18 = v29;
                            if ( DmaBuffer < 0 )
                              goto LABEL_107;
                            *(_DWORD *)(*ExtendedCommand + 4256) |= 0x400u;
                          }
                          DmaBuffer = NvmeControllerProcessCommand((__int64)SystemArgument2, ExtendedCommand);
                          v18 = v29;
                          if ( DmaBuffer < 0 )
                            goto LABEL_107;
                          DmaBuffer = 259;
                          *a4 = 0;
                          return (unsigned int)DmaBuffer;
                        }
                        return 3221225485LL;
                      }
                      Region = (const void *)SystemArgument2[78].Region;
                    }
                  }
                  else
                  {
                    Region = v15;
                  }
                  v43 = NvmeCopyCachedLogPage((__int64)v12, Region, v18);
                  DmaBuffer = v43;
                  if ( v43 >= 0 && v43 != 259 )
                  {
                    v44 = *(unsigned int *)(a3[23] + 8LL);
                    if ( v51 )
                    {
                      DmaBuffer = NvmeProtocolSpecificRequestShiftBuffer((__int64)a3);
                      if ( DmaBuffer < 0 )
                      {
                        v33 = 0LL;
                        goto LABEL_123;
                      }
                      v45 = (_DWORD *)a3[3];
                      v46 = 72LL;
                      v47 = v45[7];
                      *v45 = 1;
                      v45[1] = 72;
                      if ( v47 )
                        v46 = (unsigned int)(v47 + v45[6] + 8);
                      v48 = a3 + 7;
                    }
                    else
                    {
                      v49 = (_DWORD *)a3[3];
                      v48 = a3 + 7;
                      v46 = 48LL;
                      v50 = v49[7];
                      *v49 = 48;
                      v49[1] = 48;
                      if ( v50 )
                        v46 = (unsigned int)(v50 + v49[6] + 8);
                    }
                    *v48 = v46;
                    if ( v46 > v44 )
                    {
                      a3[7] = v44;
                      return (unsigned int)-2147483643;
                    }
                    return (unsigned int)DmaBuffer;
                  }
                  return (unsigned int)DmaBuffer;
                }
LABEL_135:
                v26 = L"Invalid buffer length for log page in protocol query request";
                goto LABEL_136;
              }
LABEL_25:
              v18 = 512;
              goto LABEL_23;
            }
            v18 = *(_DWORD *)(v59 + 20);
            v9 = -1;
            v20 = v18 >= 0x40;
LABEL_62:
            v19 = v53;
            goto LABEL_63;
          }
          if ( !NvmeVersionCheck2((__int64)SystemArgument2, 2u, 0) )
            return 3221225474LL;
          v13 = v51;
          v18 = 1024;
          LOBYTE(v14) = v52;
          v61 = v12[5] >= 0x400u;
          goto LABEL_51;
        }
        switch ( (_DWORD)v14 )
        {
          case 6:
            v18 = 564;
            goto LABEL_23;
          case 7:
          case 8:
            v19 = v53;
            v9 = -1;
            v18 = *(_DWORD *)(v59 + 20);
            v61 = v18 >= 0x200;
            v21 = *(_BYTE *)(v53 + 261) >> 3;
            goto LABEL_52;
          case 9:
            goto LABEL_25;
          case 0xD:
            v22 = *(_BYTE *)(Alignment + 261);
            v18 = *(_DWORD *)(v59 + 20);
            v19 = v53;
            v21 = v22 >> 4;
            v61 = v18 >= 0x200;
            if ( (v22 & 0x10) != 0 )
              v58 = (unsigned __int64)*(unsigned int *)(v53 + 352) << 16;
            v9 = -1;
LABEL_52:
            if ( (v21 & 1) == 0 )
              return 3221225474LL;
            goto LABEL_53;
        }
LABEL_61:
        v20 = 1;
        v18 = *(_DWORD *)(v59 + 20);
        goto LABEL_62;
      }
      v18 = 1024;
      v61 = *(_DWORD *)(v59 + 20) >= 0x400u;
LABEL_51:
      v19 = v53;
      v21 = *(_BYTE *)(v53 + 261) >> 5;
      goto LABEL_52;
    }
    if ( (unsigned int)v14 > 0xC2 )
    {
      if ( (_DWORD)v14 != 196 && (_DWORD)v14 != 197 )
      {
        v24 = v14 - 200;
        v23 = (_DWORD)v14 == 200;
LABEL_58:
        if ( !v23 && v24 != 1 )
          goto LABEL_61;
      }
    }
    else if ( (_DWORD)v14 != 194 )
    {
      switch ( (_DWORD)v14 )
      {
        case 0x13:
          v18 = *(_DWORD *)(v59 + 20);
          v61 = v18 >= 0x1000;
          goto LABEL_51;
        case 0x80:
          v18 = 64;
          goto LABEL_24;
        case 0x81:
          v18 = 512;
          goto LABEL_24;
      }
      v24 = v14 - 192;
      v23 = (_DWORD)v14 == 192;
      goto LABEL_58;
    }
    v9 = -1;
    goto LABEL_61;
  }
  return result;
}
