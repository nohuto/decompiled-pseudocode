/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x140892980
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140892080 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x140719740 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1407197BC (RtlFileMapMapView.c)
 *     AslFileMappingEnsureMappedAs @ 0x14088EEB8 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksum @ 0x14089282C (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x140892EA4 (AslpFileGetCrcChecksum.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, __int64 a2)
{
  int Checksum; // edi
  const char *v5; // r9
  int v6; // r8d
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  _OWORD v11[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h]
  unsigned int v13; // [rsp+88h] [rbp+18h] BYREF

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( !*(_DWORD *)(a2 + 84) )
  {
    if ( *(_DWORD *)(a2 + 80) )
    {
      *(_DWORD *)(a1 + 88) |= 2u;
      *(_DWORD *)(a1 + 856) |= 2u;
LABEL_18:
      *(_DWORD *)(a1 + 1112) |= 2u;
      Checksum = 0;
      goto LABEL_19;
    }
    Checksum = AslFileMappingEnsureMappedAs(a2);
    if ( (int)(Checksum + 0x80000000) < 0 || Checksum == -1073741554 )
    {
      v7 = (_QWORD *)(a2 + 8);
      if ( Checksum == -1073741554 )
      {
        *(_QWORD *)&v11[0] = *v7;
        Checksum = RtlFileMapMapView((__int64)v11, 0);
        if ( Checksum < 0 )
        {
          v5 = "RtlFileMapMapView failed [%x]";
          v6 = 4770;
          goto LABEL_8;
        }
        v7 = v11;
      }
      v13 = 0;
      Checksum = AslpFileGetChecksum(&v13, (__int64)v7);
      if ( Checksum >= 0 )
      {
        v8 = v13;
        *(_DWORD *)(a1 + 88) |= 1u;
        *(_QWORD *)(a1 + 80) = v8;
        *(_DWORD *)(a1 + 64) = 2;
        *(_QWORD *)(a1 + 72) = 4LL;
        v13 = 0;
        Checksum = AslpFileGetCrcChecksum(&v13, v7);
        if ( Checksum >= 0 )
        {
          v9 = v13;
          *(_DWORD *)(a1 + 856) |= 1u;
          *(_QWORD *)(a1 + 848) = v9;
          *(_DWORD *)(a1 + 832) = 2;
          *(_QWORD *)(a1 + 840) = 4LL;
          goto LABEL_18;
        }
        v5 = "AslpFileGetCrcChecksum failed [%x]";
        v6 = 4804;
      }
      else
      {
        v5 = "AslpFileGetChecksum failed [%x]";
        v6 = 4787;
      }
    }
    else
    {
      v5 = "AslFileMappingEnsureMappedAs failed [%x]";
      v6 = 4752;
    }
LABEL_8:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetChecksumAttributes", v6, (_DWORD)v5);
    goto LABEL_19;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"AslpFileGetChecksumAttributes",
    4723,
    (unsigned int)"AslpFileGetChecksumAttributes called with a partial view which is not supported");
  *(_DWORD *)(a1 + 88) |= 2u;
  Checksum = -1073741823;
  *(_DWORD *)(a1 + 856) |= 2u;
  *(_DWORD *)(a1 + 1112) |= 2u;
LABEL_19:
  RtlFileMapFree((__int64)v11);
  return (unsigned int)Checksum;
}
