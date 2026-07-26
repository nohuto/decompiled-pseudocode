/*
 * XREFs of ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x14016B430
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x14009D990 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14009A748 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x14009A8C8 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateFilterDriverCharacteristicsHeader(
        const struct _NDIS_FILTER_DRIVER_CHARACTERISTICS *a1,
        unsigned int *a2)
{
  unsigned __int8 MajorNdisVersion; // r11
  const struct _GUID *v3; // rax
  int MinorNdisVersion; // r10d
  __int64 Data3_low; // r8
  int v6; // eax
  int v7; // eax
  unsigned int Size; // ebx
  int v10; // [rsp+20h] [rbp-58h]

  MajorNdisVersion = a1->MajorNdisVersion;
  v3 = (const struct _GUID *)&unk_1400F9FA0;
  MinorNdisVersion = a1->MinorNdisVersion;
  Data3_low = MinorNdisVersion | (MajorNdisVersion << 16);
  *a2 = 0;
  while ( 1 )
  {
    if ( v3 == &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids )
      goto LABEL_21;
    if ( (_DWORD)Data3_low == v3->Data1 )
      break;
    v3 = (const struct _GUID *)((char *)v3 + 8);
  }
  Data3_low = LOBYTE(v3->Data3);
  v6 = LOBYTE(v3->Data3) - 1;
  if ( !v6 )
    goto LABEL_18;
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
LABEL_21:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (__int64)a2,
          Data3_low,
          0x10u,
          v10,
          MajorNdisVersion,
          MinorNdisVersion,
          &a1->FriendlyName.Length);
      return 3221291012LL;
    }
    Size = 240;
  }
  else
  {
    Size = 224;
  }
  if ( a1->Header.Type == 0x8B && a1->Header.Size >= Size && a1->Header.Revision >= (unsigned int)Data3_low )
  {
    if ( (_DWORD)Data3_low != 1 )
    {
LABEL_20:
      *a2 = Size;
      return 0LL;
    }
LABEL_18:
    Size = a1->Header.Size;
    if ( a1->Header.Size >= 0xE0u )
      Size = 224;
    goto LABEL_20;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, Data3_low, 0x11u, v10);
  return 3221291013LL;
}
