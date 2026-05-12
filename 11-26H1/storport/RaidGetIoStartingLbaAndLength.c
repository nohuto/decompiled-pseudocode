/*
 * XREFs of RaidGetIoStartingLbaAndLength @ 0x140026030
 * Callers:
 *     StorpTelemetryConstructErrorEntry @ 0x140025BA0 (StorpTelemetryConstructErrorEntry.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x14005A824 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x14007461C (RaidUpdateZoneIoSubmission.c)
 *     NvmeNamespaceScsiReadWriteRequest @ 0x140118588 (NvmeNamespaceScsiReadWriteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetIoStartingLbaAndLength(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  __int64 result; // rax

  v4 = *a1;
  if ( (_BYTE)v4 == 8 || (_BYTE)v4 == 10 )
  {
    if ( a2 )
    {
      result = a1[3];
      *(_QWORD *)a2 = result | ((a1[2] | ((unsigned __int64)(a1[1] & 0x1F) << 8)) << 8);
    }
    if ( a3 )
    {
      result = a1[4];
      *(_DWORD *)a3 = result;
    }
  }
  else
  {
    result = (unsigned int)(v4 - 40);
    if ( (((_BYTE)v4 - 40) & 0xFD) != 0 )
    {
      result = (unsigned int)(v4 + 88);
      if ( (((_BYTE)v4 + 88) & 0xFD) != 0 )
      {
        if ( (((_BYTE)v4 + 120) & 0xFD) != 0 )
        {
          if ( a2 )
            *(_QWORD *)a2 = -1LL;
          if ( a3 )
            *(_DWORD *)a3 = 0;
        }
        else
        {
          if ( a2 )
          {
            *(_BYTE *)(a2 + 7) = a1[2];
            *(_BYTE *)(a2 + 6) = a1[3];
            *(_BYTE *)(a2 + 5) = a1[4];
            *(_BYTE *)(a2 + 4) = a1[5];
            *(_BYTE *)(a2 + 3) = a1[6];
            *(_BYTE *)(a2 + 2) = a1[7];
            *(_BYTE *)(a2 + 1) = a1[8];
            result = a1[9];
            *(_BYTE *)a2 = result;
          }
          if ( a3 )
          {
            *(_BYTE *)(a3 + 3) = a1[10];
            *(_BYTE *)(a3 + 2) = a1[11];
            *(_BYTE *)(a3 + 1) = a1[12];
            result = a1[13];
            *(_BYTE *)a3 = result;
          }
        }
      }
      else
      {
        if ( a2 )
        {
          *(_BYTE *)(a2 + 3) = a1[2];
          *(_BYTE *)(a2 + 2) = a1[3];
          *(_BYTE *)(a2 + 1) = a1[4];
          result = a1[5];
          *(_BYTE *)a2 = result;
        }
        if ( a3 )
        {
          *(_BYTE *)(a3 + 3) = a1[6];
          *(_BYTE *)(a3 + 2) = a1[7];
          *(_BYTE *)(a3 + 1) = a1[8];
          result = a1[9];
          *(_BYTE *)a3 = result;
        }
      }
    }
    else
    {
      if ( a2 )
      {
        *(_BYTE *)(a2 + 3) = a1[2];
        *(_BYTE *)(a2 + 2) = a1[3];
        *(_BYTE *)(a2 + 1) = a1[4];
        result = a1[5];
        *(_BYTE *)a2 = result;
      }
      if ( a3 )
      {
        *(_BYTE *)(a3 + 1) = a1[7];
        result = a1[8];
        *(_BYTE *)a3 = result;
      }
    }
  }
  return result;
}
