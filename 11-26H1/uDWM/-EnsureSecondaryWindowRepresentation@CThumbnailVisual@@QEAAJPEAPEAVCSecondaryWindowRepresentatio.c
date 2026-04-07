/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800289EC
 * Callers:
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180028574 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180029810 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800C9A60 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?s_CalculateSWRUsageFlags@CThumbnailVisual@@SA?AU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@H_NK@Z @ 0x180028B18 (-s_CalculateSWRUsageFlags@CThumbnailVisual@@SA-AU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@H_NK@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180028B6C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?_GetDestWidth@CThumbnailVisual@@AEAAHXZ @ 0x1800290E4 (-_GetDestWidth@CThumbnailVisual@@AEAAHXZ.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800612C8 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowRepresentation(
        CThumbnailVisual *this,
        struct CSecondaryWindowRepresentation **a2)
{
  unsigned int v2; // ebx
  struct CSecondaryWindowRepresentation **v3; // rsi
  __int64 v7; // rcx
  CWindowData *v8; // rcx
  enum DEVICE_SCALE_FACTOR v9; // ebp
  unsigned int DestWidth; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // r8
  unsigned int *v14; // rax
  __int64 v15; // r11
  int v16; // eax
  HMONITOR v17; // rax
  enum DEVICE_SCALE_FACTOR v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (struct CSecondaryWindowRepresentation **)((char *)this + 360);
  if ( *((_QWORD *)this + 45) )
    goto LABEL_2;
  v7 = *((_QWORD *)this + 44);
  if ( !v7 )
    goto LABEL_2;
  v8 = *(CWindowData **)(v7 + 24);
  v9 = SCALE_100_PERCENT;
  v18 = SCALE_100_PERCENT;
  if ( CWindowData::IsImmersiveWindow(v8) )
  {
    v17 = MonitorFromRect((LPCRECT)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL) + 48LL), 2u);
    GetScaleFactorForMonitorImp(v17, &v18);
    v9 = v18;
  }
  DestWidth = CThumbnailVisual::_GetDestWidth(this);
  v11 = *((_QWORD *)this + 44);
  v12 = DestWidth;
  LOBYTE(v13) = *(_BYTE *)(v11 + 32);
  v14 = (unsigned int *)CThumbnailVisual::s_CalculateSWRUsageFlags(
                          &v18,
                          *(unsigned int *)(v11 + 77),
                          v13,
                          *(unsigned int *)(v11 + 36));
  v16 = CSecondaryWindowRepresentation::Create(
          *v14,
          ((unsigned __int64)this + 344) & -(__int64)(this != 0LL),
          v15,
          v12,
          v9,
          v3);
  v2 = v16;
  if ( v16 >= 0 )
  {
LABEL_2:
    if ( a2 )
      *a2 = *v3;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1F2u, 0LL);
  }
  return v2;
}
