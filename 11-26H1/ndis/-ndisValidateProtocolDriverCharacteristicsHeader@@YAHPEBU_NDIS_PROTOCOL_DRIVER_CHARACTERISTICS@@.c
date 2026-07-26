/*
 * XREFs of ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x14016B7D0
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1400BC420 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14009A748 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x14009A8C8 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateProtocolDriverCharacteristicsHeader(
        const struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *a1,
        unsigned int *a2)
{
  unsigned __int8 MajorNdisVersion; // r11
  const struct _GUID *v3; // rax
  int MinorNdisVersion; // r10d
  __int64 Data3_high; // r8
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-58h]

  MajorNdisVersion = a1->MajorNdisVersion;
  v3 = (const struct _GUID *)&unk_1400F9FA0;
  MinorNdisVersion = a1->MinorNdisVersion;
  Data3_high = MinorNdisVersion | (MajorNdisVersion << 16);
  *a2 = 0;
  while ( 1 )
  {
    if ( v3 == &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids )
      goto LABEL_16;
    if ( (_DWORD)Data3_high == v3->Data1 )
      break;
    v3 = (const struct _GUID *)((char *)v3 + 8);
  }
  Data3_high = HIBYTE(v3->Data3);
  v6 = HIBYTE(v3->Data3) - 1;
  if ( !v6 )
  {
    v7 = 120;
    goto LABEL_11;
  }
  if ( v6 == 1 )
  {
    v7 = 128;
    if ( a1->Header.Type != 0x95 || a1->Header.Revision < 2u )
    {
LABEL_12:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->Header.Type, Data3_high, 0x13u, v9);
      return 3221291013LL;
    }
LABEL_11:
    if ( a1->Header.Size >= v7 )
    {
      *a2 = v7;
      return 0LL;
    }
    goto LABEL_12;
  }
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      Data3_high,
      0x12u,
      v9,
      MajorNdisVersion,
      MinorNdisVersion,
      &a1->Name.Length);
  return 3221291012LL;
}
