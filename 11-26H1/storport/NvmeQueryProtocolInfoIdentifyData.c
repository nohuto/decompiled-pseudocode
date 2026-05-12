/*
 * XREFs of NvmeQueryProtocolInfoIdentifyData @ 0x14012113C
 * Callers:
 *     NvmeProcessQueryProtocolSpecificProperty @ 0x14009005C (NvmeProcessQueryProtocolSpecificProperty.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeProtocolSpecificRequestGetData @ 0x1400901DC (NvmeProtocolSpecificRequestGetData.c)
 *     NvmeProtocolSpecificRequestShiftBuffer @ 0x1400902AC (NvmeProtocolSpecificRequestShiftBuffer.c)
 *     BuildIdentifyCommandGeneric @ 0x1400C5AC0 (BuildIdentifyCommandGeneric.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     NvmeSetCommandUUIDIndex @ 0x140121F70 (NvmeSetCommandUUIDIndex.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeQueryProtocolInfoIdentifyData(
        union _SLIST_HEADER *SystemArgument2,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  bool v6; // r15
  int v7; // ebx
  int v8; // r12d
  __int64 result; // rax
  _DWORD *v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _DWORD *ExtendedCommand; // rdi
  __int64 v19; // r8
  int DmaBuffer; // r15d
  __int64 v21; // r9
  __int64 v22; // rcx
  char v23; // r8
  int v24; // [rsp+20h] [rbp-50h]
  int v25; // [rsp+50h] [rbp-20h] BYREF
  _DWORD *v26; // [rsp+58h] [rbp-18h] BYREF
  void *v27[2]; // [rsp+60h] [rbp-10h] BYREF
  char v28; // [rsp+C0h] [rbp+50h] BYREF
  _BYTE *v29; // [rsp+C8h] [rbp+58h]

  v29 = a4;
  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  v6 = 0;
  v25 = 0;
  v7 = 0;
  v26 = 0LL;
  LOBYTE(v8) = 0;
  v28 = 0;
  *(_OWORD *)v27 = 0LL;
  result = NvmeProtocolSpecificRequestGetData(a3, 0, &v26, &v28);
  if ( (int)result < 0 )
    return result;
  v11 = v26;
  v12 = v26[2];
  LODWORD(v26) = v12;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( !v13 )
    {
      NvmeSetCommandUUIDIndex(SystemArgument2, v11, &v25);
      goto LABEL_35;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( a2 )
        v7 = *(_DWORD *)(a2 + 56);
      else
        v7 = v11[3];
      goto LABEL_35;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 2;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 != 17 )
            return 3221225474LL;
          if ( (*(_DWORD *)(SystemArgument2[37].Alignment + 96) & 0x200) == 0 )
            return 3221225488LL;
        }
        else
        {
          v8 = v11[9];
        }
        goto LABEL_35;
      }
      if ( a2 )
      {
        v7 = *(_DWORD *)(a2 + 56);
      }
      else
      {
        v7 = v11[3];
        v6 = v7 == 0;
        if ( !v7 )
          v7 = 0;
      }
      v8 = v11[9];
    }
    else if ( a2 )
    {
      v7 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v7 = v11[3];
      v6 = v7 == 0;
      if ( !v7 )
        v7 = 0;
    }
  }
  else
  {
    if ( a2 )
    {
      v7 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v7 = v11[3];
      v6 = v7 == 0;
      if ( !v7 )
        v7 = 0;
    }
    NvmeSetCommandUUIDIndex(SystemArgument2, v11, &v25);
  }
  if ( v6 )
    return 3221225485LL;
LABEL_35:
  if ( v11[5] < 0x1000u )
    return 3221225485LL;
  ExtendedCommand = (_DWORD *)NvmeControllerGetExtendedCommand(SystemArgument2);
  if ( ExtendedCommand )
  {
    DmaBuffer = NvmeAllocateDmaBuffer((__int64)SystemArgument2, 0x1000u, v19, v27, &v27[1], 0);
    if ( DmaBuffer >= 0 )
    {
      memset_0(v27[0], 0, 0x1000uLL);
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = a3;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeQueryProtocolInfoCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      v22 = *(_QWORD *)ExtendedCommand;
      if ( a2 )
        *(_QWORD *)(v22 + 4216) = a2;
      else
        *(_QWORD *)(v22 + 4224) = SystemArgument2[8].Alignment;
      v23 = (char)v26;
      *(void **)(*(_QWORD *)ExtendedCommand + 4160LL) = v27[0];
      *(void **)(*(_QWORD *)ExtendedCommand + 4168LL) = v27[1];
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
      BuildIdentifyCommandGeneric(
        (__int64)SystemArgument2,
        *(_QWORD *)ExtendedCommand + 4096LL,
        v23,
        v21,
        v24,
        v8,
        (__int64)v27[1],
        v7,
        v25);
      if ( !v28 )
      {
LABEL_45:
        DmaBuffer = NvmeControllerProcessCommand((__int64)SystemArgument2, ExtendedCommand);
        if ( DmaBuffer >= 0 )
        {
          *v29 = 0;
          return 259LL;
        }
        goto LABEL_47;
      }
      DmaBuffer = NvmeProtocolSpecificRequestShiftBuffer(a3);
      if ( DmaBuffer >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x400u;
        goto LABEL_45;
      }
    }
LABEL_47:
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)ExtendedCommand + 4256LL), 3u);
    NvmeControllerReclaimExtendedCommand(SystemArgument2, (__int64)ExtendedCommand);
    goto LABEL_48;
  }
  DmaBuffer = -1073741670;
LABEL_48:
  if ( v27[0] )
    NvmeFreeDmaBuffer((__int64)SystemArgument2, 0x1000u, v19, (__int64)v27[0], (__int64)v27[1]);
  return (unsigned int)DmaBuffer;
}
