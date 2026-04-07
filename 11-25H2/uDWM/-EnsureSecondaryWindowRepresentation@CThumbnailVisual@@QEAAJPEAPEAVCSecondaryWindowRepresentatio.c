/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800150BC
 * Callers:
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800133E8 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18002317C (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x18005FEB4 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180060078 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18001E45C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180052AC4 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?s_CalculateSWRUsageFlags@CThumbnailVisual@@SA?AU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@H_NK@Z @ 0x1800769FC (-s_CalculateSWRUsageFlags@CThumbnailVisual@@SA-AU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@H_NK@Z.c)
 *     ?_GetDestWidth@CThumbnailVisual@@AEAAHXZ @ 0x18007CDB8 (-_GetDestWidth@CThumbnailVisual@@AEAAHXZ.c)
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
  int DestWidth; // eax
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r8
  int *v14; // rax
  int v15; // r11d
  int v16; // eax
  HMONITOR v17; // rax
  void *v18; // [rsp+20h] [rbp-28h]
  enum DEVICE_SCALE_FACTOR v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (struct CSecondaryWindowRepresentation **)((char *)this + 336);
  if ( *((_QWORD *)this + 42) )
    goto LABEL_2;
  v7 = *((_QWORD *)this + 41);
  if ( !v7 )
    goto LABEL_2;
  v8 = *(CWindowData **)(v7 + 24);
  v9 = SCALE_100_PERCENT;
  v19 = SCALE_100_PERCENT;
  if ( CWindowData::IsImmersiveWindow(v8) )
  {
    v17 = MonitorFromRect((LPCRECT)(*(_QWORD *)(*((_QWORD *)this + 41) + 16LL) + 48LL), 2u);
    GetScaleFactorForMonitorImp(v17, &v19);
    v9 = v19;
  }
  DestWidth = CThumbnailVisual::_GetDestWidth(this);
  v11 = *((_QWORD *)this + 41);
  v12 = DestWidth;
  LOBYTE(v13) = *(_BYTE *)(v11 + 32);
  v14 = (int *)CThumbnailVisual::s_CalculateSWRUsageFlags(
                 &v19,
                 *(unsigned int *)(v11 + 77),
                 v13,
                 *(unsigned int *)(v11 + 36));
  LODWORD(v18) = v9;
  v16 = CSecondaryWindowRepresentation::Create(
          *v14,
          ((_DWORD)this + 320) & (unsigned int)-(this != 0LL),
          v15,
          v12,
          v18,
          (__int64)v3);
  v2 = v16;
  if ( v16 >= 0 )
  {
LABEL_2:
    if ( a2 )
      *a2 = *v3;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x216u, 0LL);
  }
  return v2;
}
