/*
 * XREFs of IsZonedWriteRequest @ 0x140034D00
 * Callers:
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     RaidUpdateZoneIoMetadata @ 0x14002B1E0 (RaidUpdateZoneIoMetadata.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x14005A824 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x14007461C (RaidUpdateZoneIoSubmission.c)
 * Callees:
 *     GetZoneIndexFromUnitAndLba @ 0x140073F50 (GetZoneIndexFromUnitAndLba.c)
 *     McTemplateK0zquuujqx_EtwWriteTransfer @ 0x1400B0968 (McTemplateK0zquuujqx_EtwWriteTransfer.c)
 *     PortSrbGetLbaFromCdb @ 0x14012FABC (PortSrbGetLbaFromCdb.c)
 */

char __fastcall IsZonedWriteRequest(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int8 *v7; // rax
  ULONG_PTR v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG_PTR v11; // r14
  __int64 v12; // r10
  unsigned int v14; // eax
  unsigned int v15; // edx
  _WORD *v16; // rcx
  char v17; // r14
  int v18; // eax
  unsigned int v19; // r10d
  char *v20; // r8
  unsigned int v21; // ebp
  unsigned int v22; // r9d
  __int64 v23; // rcx
  unsigned __int64 v24; // r11
  __int64 v25; // rsi
  int v26; // ecx
  int v27; // ecx
  unsigned __int8 v28; // r9
  unsigned int v29; // ebp
  __int64 v30; // rcx
  unsigned __int64 v31; // r11
  __int64 v32; // rsi
  int v33; // ecx
  int v34; // ecx
  char v35; // al
  __int64 v36; // rax
  __int64 LbaFromCdb; // rax

  if ( a3 )
    a2 = a3[20];
  if ( !a2 )
    return 0;
  if ( !a1 )
    return 0;
  if ( (*(_BYTE *)(a1 + 136) & 2) == 0 )
    return 0;
  v7 = *(unsigned __int8 **)(a2 + 184);
  v8 = *v7;
  if ( (_BYTE)v8 != 15 )
    return 0;
  v9 = *((_QWORD *)v7 + 1);
  if ( !v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    v11 = *(_QWORD *)(v10 + 48);
    if ( v11 )
    {
      v14 = *(unsigned __int16 *)(v10 + 40);
      if ( (_WORD)v14 )
      {
        v15 = v14 >> 1;
        while ( v15 )
        {
          v16 = (_WORD *)(v11 + 2LL * --v15);
          if ( *v16 == 92 )
          {
            if ( v16 )
              v11 = (ULONG_PTR)(v16 + 1);
            break;
          }
        }
      }
    }
    if ( MiniportBugActionPolicy == 1 )
    {
      if ( (byte_140173444 & 0x10) != 0 )
      {
        v12 = a3[28];
        McTemplateK0zquuujqx_EtwWriteTransfer(
          a3[21],
          *(_DWORD *)(v12 + 104) >> 8,
          (_DWORD)a3 + 728,
          v11,
          *(_DWORD *)(*(_QWORD *)(v12 + 24) + 56LL),
          *(_DWORD *)(v12 + 104),
          BYTE1(*(_DWORD *)(v12 + 104)),
          BYTE2(*(_DWORD *)(v12 + 104)),
          v12 + 2104,
          15,
          a3[21]);
      }
    }
    else if ( MiniportBugActionPolicy == 2 )
    {
      KeBugCheckEx(0xF0u, 7uLL, v11, v8, a3[21]);
    }
    ++*(_DWORD *)(a1 + 3484);
    return 0;
  }
  v17 = *(_BYTE *)(v9 + 2);
  if ( v17 == 40 )
    v18 = *(_DWORD *)(v9 + 20);
  else
    v18 = *(unsigned __int8 *)(v9 + 2);
  if ( v18 )
    return 0;
  if ( v17 != 40 )
  {
    v28 = *(_BYTE *)(v9 + 10);
    v20 = (char *)(v9 + 72);
    goto LABEL_61;
  }
  v19 = 0;
  v20 = 0LL;
  if ( !*(_DWORD *)(v9 + 20) )
  {
    v21 = *(_DWORD *)(v9 + 56);
    v22 = 0;
    if ( v21 )
    {
      do
      {
        v23 = *(unsigned int *)(v9 + 4LL * v22 + 120);
        if ( (unsigned int)v23 >= 0x80 )
        {
          v24 = *(unsigned int *)(v9 + 16);
          if ( (unsigned int)v23 < (unsigned int)v24 )
          {
            v25 = (unsigned int)v23;
            v26 = *(_DWORD *)(v23 + v9);
            if ( v26 == 64 )
            {
              if ( v25 + 40 <= v24 )
              {
                if ( !*(_BYTE *)(v25 + v9 + 10) )
                  break;
LABEL_40:
                v20 = (char *)(v25 + v9 + 24);
                break;
              }
            }
            else
            {
              v27 = v26 - 65;
              if ( v27 )
              {
                if ( v27 == 1 && v25 + 40 <= v24 )
                {
                  v20 = (char *)(v25 + v9 + 32);
                  if ( !*(_DWORD *)(v25 + v9 + 12) )
                    v20 = 0LL;
                  break;
                }
              }
              else if ( v25 + 56 <= v24 )
              {
                if ( !*(_BYTE *)(v25 + v9 + 10) )
                  break;
                goto LABEL_40;
              }
            }
          }
        }
      }
      while ( ++v22 < v21 );
    }
  }
  v28 = 0;
  if ( !*(_DWORD *)(v9 + 20) )
  {
    v29 = *(_DWORD *)(v9 + 56);
    if ( v29 )
    {
      do
      {
        v30 = *(unsigned int *)(v9 + 4LL * v19 + 120);
        if ( (unsigned int)v30 >= 0x80 )
        {
          v31 = *(unsigned int *)(v9 + 16);
          if ( (unsigned int)v30 < (unsigned int)v31 )
          {
            v32 = (unsigned int)v30;
            v33 = *(_DWORD *)(v30 + v9);
            if ( v33 == 64 )
            {
              if ( v32 + 40 <= v31 )
              {
LABEL_56:
                v28 = *(_BYTE *)(v32 + v9 + 10);
                break;
              }
            }
            else
            {
              v34 = v33 - 65;
              if ( v34 )
              {
                if ( v34 == 1 && v32 + 40 <= v31 )
                  break;
              }
              else if ( v32 + 56 <= v31 )
              {
                goto LABEL_56;
              }
            }
          }
        }
      }
      while ( ++v19 < v29 );
    }
  }
LABEL_61:
  if ( !v20 )
    return 0;
  v35 = *v20;
  if ( *v20 != 10 && v35 != 42 && v35 != -86 && v35 != -118 )
    return 0;
  if ( !*(_DWORD *)(a1 + 932) )
    return 0;
  v36 = 24LL;
  if ( v17 != 40 )
    v36 = 12LL;
  if ( (*(_DWORD *)(v36 + v9) & 0x1000) == 0 || !*(_QWORD *)(a1 + 3440) )
    return 0;
  if ( a4 )
  {
    LbaFromCdb = PortSrbGetLbaFromCdb(v20, v28);
    *a4 = GetZoneIndexFromUnitAndLba(a1, LbaFromCdb);
  }
  return 1;
}
