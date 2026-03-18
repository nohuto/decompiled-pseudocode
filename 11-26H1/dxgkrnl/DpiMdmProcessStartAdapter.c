/*
 * XREFs of DpiMdmProcessStartAdapter @ 0x140090C00
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1400361A4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     _DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A1C8 (_DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x14008BC58 (-DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     ?DpiDoesMdmChildMeetRequirements@@YA_NPEAU_FDO_CONTEXT@@PEAEW4CHECK_CHILD_REQUIREMENTS_TYPE@@@Z @ 0x14008BD88 (-DpiDoesMdmChildMeetRequirements@@YA_NPEAU_FDO_CONTEXT@@PEAEW4CHECK_CHILD_REQUIREMENTS_TYPE@@@Z.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x14008CDC4 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     ?ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x14008EF90 (-ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GP.c)
 *     ?UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140090210 (-UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     DpiDxgkDdiDisplayMuxGetRuntimeStatus @ 0x140093C08 (DpiDxgkDdiDisplayMuxGetRuntimeStatus.c)
 *     DpiDxgkDdiDisplayMuxUpdateState @ 0x140094380 (DpiDxgkDdiDisplayMuxUpdateState.c)
 *     DxgkGetDriverVersionNoLock @ 0x140195EE0 (DxgkGetDriverVersionNoLock.c)
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x1402533C0 (DpiAcpiPrepareDisplayMuxSupport.c)
 */

void __fastcall DpiMdmProcessStartAdapter(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  char *v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // r9
  _QWORD *v8; // rax
  char v9; // al
  int v10; // eax
  __int64 v11; // rax
  bool v12; // zf
  unsigned int v13; // r8d
  struct _LUID v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // [rsp+50h] [rbp-10h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  int v18; // [rsp+80h] [rbp+20h] BYREF
  __int64 v19; // [rsp+88h] [rbp+28h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3828;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(FunctionalDeviceObject)",
      3828LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *(_QWORD *)(a1 + 64);
  v19 = v2;
  if ( *(_DWORD *)(v2 + 6024) != 1 && (int)DpiAcpiPrepareDisplayMuxSupport((struct _FDO_CONTEXT *)v2) >= 0 )
  {
    *(_QWORD *)(v19 + 6036) = *(_QWORD *)(v19 + 2696);
    *(_DWORD *)(v19 + 6048) = *(_DWORD *)(v19 + 1128);
    *(_DWORD *)(v19 + 6044) = *(_DWORD *)(v19 + 1124);
    v3 = v19;
    v4 = *(char **)(v19 + 4968);
    if ( v4 )
    {
      RtlStringCbCopyW((char *)(v19 + 6052), 0x40uLL, v4);
      v3 = v19;
    }
    if ( (int)DxgkGetDriverVersionNoLock(*(_QWORD *)(v3 + 4032)) < 3000 && !*(_BYTE *)(v5 + 2716) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3858;
      *(_DWORD *)(v19 + 6032) = 10;
      return;
    }
    v18 = 0;
    if ( (int)DpiDxgkDdiDisplayMuxGetRuntimeStatus(v5, &v18) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3869;
      *(_DWORD *)(v19 + 6032) = 2;
      return;
    }
    v6 = v18;
    *(_DWORD *)(v19 + 6028) = v18;
    if ( ((v6 - 1) & 0xFFFFFFFD) != 0 )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 3879;
      return;
    }
    if ( (int)DxgkGetDriverVersionNoLock(*(_QWORD *)(v19 + 4032)) < 2400 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3886;
LABEL_56:
      *(_DWORD *)(v19 + 6032) = 3;
      return;
    }
    v8 = *(_QWORD **)(v7 + 40);
    if ( !v8[136] || !v8[141] || !v8[142] || !v8[29] || !v8[122] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3897;
      goto LABEL_56;
    }
    v9 = *(_BYTE *)(v7 + 4041);
    if ( (v9 & 8) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3903;
      goto LABEL_56;
    }
    if ( (v9 & 1) == 0 && (*(_BYTE *)(v7 + 4040) & 0x40) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3911;
      *(_DWORD *)(v19 + 6032) = 4;
      return;
    }
    v10 = *(_DWORD *)(v7 + 6380);
    if ( !v10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3919;
      *(_DWORD *)(v19 + 6032) = 5;
      return;
    }
    if ( v10 != 1 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3925;
      *(_DWORD *)(v19 + 6032) = 6;
      return;
    }
    if ( *(_DWORD *)(v7 + 6116) == 5 && byte_1401694F2 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3934;
      *(_DWORD *)(v19 + 6116) = 0;
      v7 = v19;
    }
    if ( *(_DWORD *)(v7 + 6116) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3941;
LABEL_35:
      v11 = v19;
LABEL_36:
      *(_DWORD *)(v11 + 6032) = 7;
      return;
    }
    v12 = !DpiDoesMdmChildMeetRequirements(v7, 0LL, 0);
    v11 = v19;
    if ( v12 )
      goto LABEL_36;
    if ( *(_DWORD *)(v19 + 6024) != 4 && !DISPLAY_MUX_MGR::UseNonFullSupportComponents(qword_140169448) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3957;
      *(_DWORD *)(v19 + 6032) = 11;
      return;
    }
    if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
      *(_DWORD *)(v19 + 6032) = 1;
    if ( (int)DISPLAY_MUX_MGR::ReportMuxGpuChild(
                (__int64)qword_140169448,
                v19 + 6024,
                (unsigned int)((*(_BYTE *)(v19 + 4041) & 1) == 0) + 1) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3976;
      *(_DWORD *)(v19 + 6116) = 4;
      goto LABEL_35;
    }
    v16 = &v19;
    v17 = 1;
    v13 = *(_DWORD *)(v19 + 6376);
    v14 = *(struct _LUID *)(v19 + 6036);
    LOBYTE(v18) = 0;
    if ( (int)DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_140169448, v14, v13, (unsigned __int8 *)&v18, 0LL) >= 0 )
    {
      if ( DpiDoesMdmChildMeetRequirements(v19, &v18, 1) )
      {
        if ( !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
          *(_DWORD *)(v19 + 6032) = 1;
        if ( DISPLAY_MUX_MGR::DisplayMuxPresent(qword_140169448) )
        {
          LOBYTE(v15) = v18;
          DpiDxgkDdiDisplayMuxUpdateState(v19, *(unsigned int *)(v19 + 6376), v15);
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 4028;
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4020;
          *(_DWORD *)(v19 + 6116) = 3;
          *(_DWORD *)(v19 + 6032) = 8;
        }
      }
      else
      {
        *(_DWORD *)(v19 + 6032) = 7;
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3999;
      *(_DWORD *)(v19 + 6032) = 9;
    }
    DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v16);
  }
}
