/*
 * XREFs of NvmeQueryProtocolInfoFeatureData @ 0x140120B58
 * Callers:
 *     NvmeProcessQueryProtocolSpecificProperty @ 0x14009005C (NvmeProcessQueryProtocolSpecificProperty.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeProtocolSpecificRequestGetData @ 0x1400901DC (NvmeProtocolSpecificRequestGetData.c)
 *     NvmeProtocolSpecificRequestShiftBuffer @ 0x1400902AC (NvmeProtocolSpecificRequestShiftBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeQueryProtocolInfoFeatureData(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r12
  _DWORD *v6; // r13
  char v7; // si
  int v8; // r15d
  __int64 result; // rax
  unsigned int v10; // ebx
  int v11; // edi
  unsigned int v12; // ecx
  char v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 ExtendedCommand; // rax
  __int64 v20; // r8
  _DWORD *v21; // rsi
  union _SLIST_HEADER *v22; // rbx
  int DmaBuffer; // r12d
  __int64 v24; // rcx
  __int64 v25; // rcx
  void *v26; // rax
  char v27; // [rsp+30h] [rbp-28h]
  char v28[6]; // [rsp+32h] [rbp-26h] BYREF
  _DWORD *v29; // [rsp+38h] [rbp-20h] BYREF
  void *v30[2]; // [rsp+40h] [rbp-18h] BYREF

  v4 = 0;
  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  v5 = a1;
  v29 = 0LL;
  v28[0] = 0;
  v27 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  *(_OWORD *)v30 = 0LL;
  result = NvmeProtocolSpecificRequestGetData(a3, 0, &v29, v28);
  if ( (int)result < 0 )
    return result;
  v10 = v29[2];
  v11 = v29[3];
  if ( v10 >= 0x800 )
    return 3221225485LL;
  if ( v28[0] )
  {
    v6 = v29;
    if ( (unsigned __int8)v10 >= 0xC0u )
    {
      v7 = 1;
      v12 = (unsigned __int8)v10;
      v27 = 1;
LABEL_6:
      if ( v12 != 130 && v12 != 131 )
      {
        if ( (v12 == 192 || v12 == 194 || v12 == 196 || v12 - 198 <= 1)
          && (*(_DWORD *)(v5 + 136) & 0x100000) != 0
          && !v28[0]
          && v11 )
        {
          return 3221225485LL;
        }
LABEL_15:
        if ( v12 != 126 )
        {
          if ( v12 != 127 )
          {
            if ( v12 != 128 )
            {
              if ( v12 != 129 )
              {
                if ( v12 - 130 >= 2 )
                  goto LABEL_20;
LABEL_68:
                v13 = v27;
                goto LABEL_72;
              }
              v4 = 16;
            }
LABEL_67:
            v8 = -1;
            goto LABEL_68;
          }
          goto LABEL_70;
        }
        goto LABEL_69;
      }
      goto LABEL_32;
    }
  }
  v12 = (unsigned __int8)v10;
  if ( (unsigned __int8)v10 > 0x80u )
    goto LABEL_6;
  if ( (unsigned __int8)v10 == 128 )
    goto LABEL_32;
  if ( (unsigned __int8)v10 <= 9u )
  {
    if ( (unsigned __int8)v10 != 9
      && (unsigned __int8)v10 != 1
      && (unsigned __int8)v10 != 2
      && (unsigned __int8)v10 != 3
      && (unsigned __int8)v10 != 5
      && (unsigned __int8)v10 != 6
      && (unsigned int)(unsigned __int8)v10 - 7 > 1 )
    {
      goto LABEL_37;
    }
    goto LABEL_32;
  }
  if ( (unsigned __int8)v10 == 10
    || (unsigned __int8)v10 == 11
    || (unsigned __int8)v10 == 12
    || (unsigned __int8)v10 == 13
    || (unsigned __int8)v10 == 14
    || (unsigned int)(unsigned __int8)v10 - 16 < 2 )
  {
LABEL_32:
    if ( v11 )
      return 3221225485LL;
  }
  if ( v12 > 0x7D )
    goto LABEL_15;
  v27 = v7;
  if ( v12 == 125 )
  {
LABEL_69:
    v8 = -1;
LABEL_70:
    v13 = v27;
    goto LABEL_71;
  }
  v27 = v7;
  if ( v12 > 9 )
  {
    v27 = v7;
    switch ( v12 )
    {
      case 0xAu:
      case 0xBu:
        goto LABEL_67;
      case 0xCu:
        v4 = 256;
        break;
      case 0xDu:
        v8 = -1;
        v27 = v7;
        v13 = v7;
LABEL_71:
        v4 = 4096;
        goto LABEL_72;
      case 0xEu:
        v4 = 8;
        break;
      default:
        v14 = v12 - 16;
        if ( v12 == 16 )
          goto LABEL_67;
        goto LABEL_59;
    }
    v8 = -1;
    v27 = v7;
    v13 = v7;
    goto LABEL_72;
  }
  if ( v12 == 9 )
    goto LABEL_67;
LABEL_37:
  switch ( v12 )
  {
    case 1u:
    case 2u:
      goto LABEL_67;
    case 3u:
      goto LABEL_70;
    case 4u:
    case 5u:
    case 6u:
      goto LABEL_67;
  }
  v14 = v12 - 7;
  if ( v12 == 7 )
    return 3221225485LL;
LABEL_59:
  if ( v14 == 1 )
    goto LABEL_67;
LABEL_20:
  v13 = v27;
  if ( v28[0] )
    v4 = v29[5];
  else
    v4 = 4096;
LABEL_72:
  if ( (*(_QWORD *)(v5 + 136) & 0x100000) == 0 )
    goto LABEL_79;
  v15 = v12 - 192;
  if ( v15 )
  {
    v16 = v15 - 2;
    if ( !v16 || (v17 = v16 - 2) == 0 || v17 - 2 <= 1 )
    {
      v4 = 0;
      v8 = 0;
      goto LABEL_81;
    }
LABEL_79:
    if ( !v4 )
      goto LABEL_81;
    goto LABEL_80;
  }
  v4 = 4096;
  v8 = -(*(_BYTE *)(v5 + 945) != 0);
LABEL_80:
  if ( (unsigned int)v29[4] < (unsigned __int64)(v28[0] != 0 ? 0x18 : 0) + 40 )
    return 3221225485LL;
LABEL_81:
  if ( v29[5] < v4 )
    return 3221225485LL;
  if ( v28[0] && v13 )
  {
    v18 = a2;
    v8 = v6[11];
    if ( !a2 )
    {
      if ( (unsigned int)(v8 - 1) > 0xFFFFFFFD )
        goto LABEL_89;
      return 3221225485LL;
    }
    if ( v8 )
      return 3221225485LL;
LABEL_88:
    v8 = *(_DWORD *)(v18 + 56);
    goto LABEL_89;
  }
  if ( (*(_QWORD *)(v5 + 136) & 0x100000LL) == 0 && v8 != -1 )
  {
    v18 = a2;
    if ( !a2 )
    {
      v8 = -1;
      goto LABEL_89;
    }
    goto LABEL_88;
  }
LABEL_89:
  ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)v5);
  v20 = 0LL;
  v21 = (_DWORD *)ExtendedCommand;
  if ( ExtendedCommand )
  {
    if ( v4 )
    {
      DmaBuffer = NvmeAllocateDmaBuffer(v5, v4, 0LL, v30, &v30[1], 0);
      if ( DmaBuffer < 0 )
        goto LABEL_108;
      memset_0(v30[0], 0, v4);
      v5 = a1;
    }
    *(_DWORD *)(*(_QWORD *)v21 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v21 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v21 + 4256LL) = (v4 != 0 ? 2 : 0) | *(_DWORD *)(*(_QWORD *)v21 + 4256LL) & 0xFFFFFFFD;
    *(_DWORD *)(*(_QWORD *)v21 + 4256LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)v21 + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)v21 + 4184LL) = a3;
    *(_QWORD *)(*(_QWORD *)v21 + 4192LL) = NvmeQueryProtocolInfoCompletion;
    *(_QWORD *)(*(_QWORD *)v21 + 4200LL) = v21;
    v24 = *(_QWORD *)v21;
    if ( a2 )
      *(_QWORD *)(v24 + 4216) = a2;
    else
      *(_QWORD *)(v24 + 4224) = *(_QWORD *)(v5 + 128);
    *(void **)(*(_QWORD *)v21 + 4160LL) = v30[0];
    *(void **)(*(_QWORD *)v21 + 4168LL) = v30[1];
    *(_DWORD *)(*(_QWORD *)v21 + 4248LL) = v4;
    v25 = *(_QWORD *)v21;
    v26 = v30[1];
    *(_BYTE *)(v25 + 4096) = 10;
    *(_DWORD *)(v25 + 4100) = v8;
    *(_QWORD *)(v25 + 4120) = v26;
    *(_DWORD *)(v25 + 4136) = v10;
    *(_DWORD *)(v25 + 4140) = v11;
    if ( !v28[0] )
    {
LABEL_106:
      v22 = (union _SLIST_HEADER *)a1;
      DmaBuffer = NvmeControllerProcessCommand(a1, v21);
      if ( DmaBuffer >= 0 )
      {
        *a4 = 0;
        return 259LL;
      }
      goto LABEL_109;
    }
    if ( v27 )
    {
      *(_DWORD *)(*(_QWORD *)v21 + 4136LL) = v6[2];
      *(_DWORD *)(*(_QWORD *)v21 + 4140LL) = v6[3];
      *(_DWORD *)(*(_QWORD *)v21 + 4144LL) = v6[7];
      *(_DWORD *)(*(_QWORD *)v21 + 4148LL) = v6[8];
      *(_DWORD *)(*(_QWORD *)v21 + 4152LL) = v6[9];
      *(_DWORD *)(*(_QWORD *)v21 + 4156LL) = v6[10];
    }
    DmaBuffer = NvmeProtocolSpecificRequestShiftBuffer(a3);
    if ( DmaBuffer >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)v21 + 4256LL) |= 0x400u;
      goto LABEL_106;
    }
LABEL_108:
    v22 = (union _SLIST_HEADER *)a1;
LABEL_109:
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v21 + 4256LL), 3u);
    NvmeControllerReclaimExtendedCommand(v22, (__int64)v21);
    goto LABEL_110;
  }
  v22 = (union _SLIST_HEADER *)a1;
  DmaBuffer = -1073741670;
LABEL_110:
  if ( v30[0] )
    NvmeFreeDmaBuffer((__int64)v22, v4, v20, (__int64)v30[0], (__int64)v30[1]);
  return (unsigned int)DmaBuffer;
}
