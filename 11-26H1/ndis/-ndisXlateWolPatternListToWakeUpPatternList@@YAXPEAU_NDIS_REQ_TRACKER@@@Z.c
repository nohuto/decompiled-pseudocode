/*
 * XREFs of ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA1D8
 * Callers:
 *     ?ndisOidPostWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B65E0 (-ndisOidPostWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z @ 0x1400B5A20 (-ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisXlateWolPatternListToWakeUpPatternList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r10d
  size_t v4; // r9
  char *v5; // rbp
  char *i; // r8
  int v7; // eax
  size_t v8; // r8
  size_t v9; // rbx
  char *Pool2; // rax
  struct _NDIS_PM_WOL_PATTERN *v11; // r15
  int v12; // r12d
  struct _NDIS_PM_WOL_PATTERN *v13; // rdi
  struct _NDIS_PM_PACKET_PATTERN *PMPacketPattern; // rax
  struct _NDIS_PM_PACKET_PATTERN *v15; // r13
  __int64 v16; // rbx
  __int64 NextWoLPatternOffset; // rax
  size_t Size; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  LODWORD(Size) = 0;
  v4 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 48) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        11,
        115,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids);
    return;
  }
  if ( !(_DWORD)v4 )
    return;
  v5 = *(char **)(v1 + 40);
  *(_QWORD *)(v1 + 52) = 0LL;
  for ( i = v5; i; i = &v5[v7] )
  {
    if ( *((_DWORD *)i + 3) == 1 )
    {
      LODWORD(Size) = *((_DWORD *)i + 43) + *((_DWORD *)i + 41) + 24;
      v2 += Size;
    }
    v7 = *((_DWORD *)i + 38);
    if ( !v7 )
      break;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < v2 )
  {
    *(_DWORD *)(v1 + 56) = v2;
    v8 = v4;
    *((_DWORD *)a1 + 10) = -1073676268;
LABEL_12:
    memset(v5, 0, v8);
    return;
  }
  v9 = v4;
  Pool2 = (char *)ExAllocatePool2(66LL, v4, 2021082190LL);
  v11 = (struct _NDIS_PM_WOL_PATTERN *)Pool2;
  v8 = v9;
  if ( !Pool2 )
  {
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_12;
  }
  memmove(Pool2, v5, v9);
  memset(v5, 0, *(unsigned int *)(v1 + 48));
  v12 = 0;
  v13 = v11;
  while ( v13 )
  {
    if ( v13->WoLPacketType == NdisPMWoLPacketBitmapPattern )
    {
      PMPacketPattern = ndisCreatePMPacketPattern(v13, (unsigned int *)&Size);
      v15 = PMPacketPattern;
      if ( !PMPacketPattern )
      {
        *((_DWORD *)a1 + 10) = -1073741670;
        break;
      }
      v16 = (unsigned int)Size;
      memmove(v5, PMPacketPattern, (unsigned int)Size);
      ExFreePoolWithTag(v15, 0);
      v12 += Size;
      v5 += v16;
    }
    NextWoLPatternOffset = v13->NextWoLPatternOffset;
    if ( (_DWORD)NextWoLPatternOffset )
      v13 = (struct _NDIS_PM_WOL_PATTERN *)((char *)v11 + NextWoLPatternOffset);
    else
      v13 = 0LL;
  }
  *(_DWORD *)(v1 + 52) = v12;
  *(_DWORD *)(v1 + 56) = v12;
  ExFreePoolWithTag(v11, 0);
}
