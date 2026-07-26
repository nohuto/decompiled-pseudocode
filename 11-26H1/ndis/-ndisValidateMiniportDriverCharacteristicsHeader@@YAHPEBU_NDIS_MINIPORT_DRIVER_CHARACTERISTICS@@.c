/*
 * XREFs of ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x14016B5B0
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140076300 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14009A748 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     ?NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z @ 0x1401420CC (-NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z.c)
 */

__int64 __fastcall ndisValidateMiniportDriverCharacteristicsHeader(
        const struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a1,
        const struct _UNICODE_STRING *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int MajorNdisVersion; // r10d
  unsigned int v10; // r15d
  int v11; // eax
  int MinorNdisVersion; // ecx
  int v13; // eax
  const struct _GUID *i; // rcx
  int v16; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+30h] [rbp-68h]

  MajorNdisVersion = a1->MajorNdisVersion;
  *a5 = 0;
  v10 = 152;
  if ( __PAIR16__(a1->MinorNdisVersion, MajorNdisVersion) == 22790 && (unsigned __int16)(a1->Header.Size - 152) <= 7u )
  {
    v11 = 6;
    MinorNdisVersion = 70;
    *a3 = 6;
    *a4 = 70;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids,
        6,
        89);
      MinorNdisVersion = *a4;
      v11 = *a3;
    }
    if ( a2 )
    {
      NdisTraceLoggingLogoFailure(MinorNdisVersion);
      MinorNdisVersion = *a4;
      v11 = *a3;
    }
  }
  else
  {
    MinorNdisVersion = a1->MinorNdisVersion;
    v11 = MajorNdisVersion;
    *a3 = MajorNdisVersion;
    *a4 = MinorNdisVersion;
  }
  v13 = MinorNdisVersion | (v11 << 16);
  for ( i = (const struct _GUID *)&unk_1400F9FA0; ; i = (const struct _GUID *)((char *)i + 8) )
  {
    if ( i == &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids )
      goto LABEL_25;
    if ( v13 == i->Data1 )
      break;
  }
  switch ( LOBYTE(i->Data2) )
  {
    case 1:
      v10 = 136;
      goto LABEL_20;
    case 2:
LABEL_16:
      if ( a1->Header.Type != 0x8A || a1->Header.Revision < (unsigned int)LOBYTE(i->Data2) )
      {
LABEL_21:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a1->Header.Type,
            a1->MinorNdisVersion,
            0xCu,
            v16);
        return 3221291013LL;
      }
LABEL_20:
      if ( a1->Header.Size >= v10 )
      {
        *a5 = v10;
        return 0LL;
      }
      goto LABEL_21;
    case 3:
      v10 = 160;
      goto LABEL_16;
  }
LABEL_25:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = a1->MinorNdisVersion;
    WPP_RECORDER_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids,
      a1->MajorNdisVersion,
      v17);
  }
  return 3221291012LL;
}
