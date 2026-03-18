/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1403C72C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x14001815C (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x140078930 (-ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z.c)
 *     DpiIsFeatureEnabled2 @ 0x140085590 (DpiIsFeatureEnabled2.c)
 *     DxgkCaptureQueryInterface @ 0x1401BC2EC (DxgkCaptureQueryInterface.c)
 *     ?SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z @ 0x1401E00D0 (-SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z.c)
 *     ?DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z @ 0x140209BC0 (-DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1403C7AF4 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1403C804C (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, __int64 a2)
{
  unsigned int v3; // r14d
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned int *v9; // r15
  int TestInterface; // esi
  __int64 v11; // rcx
  struct DXGKW32KIMPORTS **v13; // rax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(PDRIVER_OBJECT); // rax
  struct DXGGLOBAL *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  const wchar_t *v19; // r9
  DXGGLOBAL *Global; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdi
  int v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]
  char v27; // [rsp+60h] [rbp-10h]
  unsigned int v28; // [rsp+A8h] [rbp+38h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v28 = 0;
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(unsigned int *)(v4 + 8);
  v7 = *(unsigned int *)(v4 + 16);
  if ( *(_BYTE *)(a2 + 64) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1133;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pIrp->RequestorMode == KernelMode",
      1133LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (v5 & 3) != 3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1139;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"METHOD_FROM_CTL_CODE(Ioctl) == METHOD_NEITHER",
      1139LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *(_QWORD *)(a2 + 112);
  v9 = *(unsigned int **)(v4 + 32);
  if ( (unsigned int)v5 > 0x232063 )
  {
    if ( (_DWORD)v5 != 2351191 )
    {
      switch ( (_DWORD)v5 )
      {
        case 0x23E05B:
          if ( (unsigned int)v7 < 0x210 || (unsigned int)v6 < 0x210 )
          {
            v14 = v7;
            TestInterface = -1073741306;
            WdLogSingleEntry3(3LL, v14, v6, -1073741306LL);
            WdLogGlobalForLineNumber = 1161;
            goto LABEL_17;
          }
          TestInterface = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v28);
          if ( TestInterface < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1171;
          }
          break;
        case 0x23E05F:
          if ( (unsigned int)v7 < 0x30 || (unsigned int)v6 < 0x30 )
          {
            v22 = v7;
            TestInterface = -1073741306;
            WdLogSingleEntry3(3LL, v22, v6, -1073741306LL);
            WdLogGlobalForLineNumber = 1402;
            goto LABEL_17;
          }
          TestInterface = DxgkCaptureQueryInterface(*(_QWORD **)(a2 + 112), &v28);
          if ( TestInterface < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1412;
          }
          break;
        case 0x23E067:
          if ( (unsigned int)v7 < 0x268 || (unsigned int)v6 < 0x268 )
          {
            v21 = v7;
            TestInterface = -1073741306;
            WdLogSingleEntry3(3LL, v21, v6, -1073741306LL);
            WdLogGlobalForLineNumber = 1184;
            goto LABEL_17;
          }
          TestInterface = ComputeQueryInterface(*(struct _DXGKCOMPUTE_INTERFACE **)(a2 + 112), &v28);
          if ( TestInterface < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1194;
          }
          break;
        case 0x23E06B:
          if ( (unsigned int)v7 >= 0xC )
          {
            if ( v9[2] == 1 )
            {
              if ( v9[1] == 1 )
              {
                if ( *v9 == 80 )
                {
                  Global = DXGGLOBAL::GetGlobal();
                  TestInterface = DXGGLOBAL::SetWslInterface(Global, (struct _DXGWSL_INTERFACE *)v9);
                  goto LABEL_17;
                }
                WdLogSingleEntry1(2LL);
                v18 = *v9;
                v19 = L"Invalid size of DXGWSL_INTERFACE: %I64x";
                WdLogGlobalForLineNumber = 1221;
              }
              else
              {
                WdLogSingleEntry1(2LL);
                v18 = v9[1];
                v19 = L"Invalid version of DXGINTERFACE_WSL: %I64x";
                WdLogGlobalForLineNumber = 1215;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL);
              v18 = (int)v9[2];
              v19 = L"Invalid interface type in IOCTL_INTERNAL_VIDEO_SET_INTERFACE: %I64x";
              WdLogGlobalForLineNumber = 1229;
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, v18, 0LL, 0LL, 0LL, 0LL);
            TestInterface = -1073741811;
          }
          else
          {
            v17 = v7;
            TestInterface = -1073741306;
            WdLogSingleEntry2(3LL, v17, -1073741306LL);
            WdLogGlobalForLineNumber = 1205;
          }
          goto LABEL_17;
        case 0x23E06F:
          if ( (unsigned int)v7 < 8 )
          {
            WdLogSingleEntry2(3LL, v7, 8LL);
            WdLogGlobalForLineNumber = 1445;
LABEL_35:
            TestInterface = -1073741306;
            goto LABEL_17;
          }
          TestInterface = DxgkpQueryTestInterface(*(_QWORD **)(a2 + 112), v6, *v9, v9[1]);
          if ( TestInterface < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1456;
          }
          goto LABEL_17;
        default:
LABEL_28:
          TestInterface = -1073741808;
          WdLogSingleEntry2(3LL, v5, -1073741808LL);
          WdLogGlobalForLineNumber = 1486;
          goto LABEL_17;
      }
LABEL_16:
      v3 = v28;
      goto LABEL_17;
    }
    if ( (unsigned int)v7 < 0x338 || (unsigned int)v6 < 0x338 )
    {
      v23 = v6;
      v24 = v7;
      TestInterface = -1073741306;
      WdLogSingleEntry4(1LL, v24, v23, 824LL, -1073741306LL);
      WdLogGlobalForLineNumber = 1253;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Invalid lengths specified for IOCTL_INTERNAL_VIDEO_QUERY_WIN32K_INTERFACE (Input = 0n%I64d, Output = 0n"
                  "%I64d, sizeof(DXGKWIN32K_INTERFACE) = 0n%I64d), returing 0x%I64x",
        v24,
        v23,
        824LL,
        -1073741306LL,
        0LL);
      goto LABEL_17;
    }
    v13 = (struct DXGKW32KIMPORTS **)DXGGLOBAL::GetGlobal();
    TestInterface = DXGGLOBAL::DelayLoadWin32k(v13, *(void **)(v8 + 8));
    if ( TestInterface >= 0 )
    {
      TestInterface = DxgkWin32kQueryInterface((struct _DXGKWIN32K_INTERFACE *)v8, &v28);
      if ( TestInterface >= 0 )
        goto LABEL_16;
      v3 = v28;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1269;
    goto LABEL_17;
  }
  switch ( (_DWORD)v5 )
  {
    case 0x232063:
      if ( (unsigned int)v6 < 8 || !v8 )
      {
        TestInterface = -1073741789;
        WdLogSingleEntry3(3LL, v6, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1377;
        goto LABEL_17;
      }
      v15 = DpiReportSoftwareDevice;
      goto LABEL_55;
    case 0x230007:
      v16 = DXGGLOBAL::GetGlobal();
      v28 = -1073741275;
      TestInterface = DXGGLOBAL::IterateAdaptersWithCallback(
                        (__int64)v16,
                        (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                        (__int64)&v28,
                        0);
      if ( TestInterface < 0 || (TestInterface = v28, (v28 & 0x80000000) != 0) )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1433;
      }
      goto LABEL_17;
    case 0x23003F:
      if ( (unsigned int)v6 < 8 || !v8 )
      {
        TestInterface = -1073741789;
        WdLogSingleEntry3(3LL, v6, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1305;
        goto LABEL_17;
      }
      v15 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiInitialize;
      goto LABEL_55;
    case 0x230043:
      if ( (unsigned int)v6 < 8 || !v8 )
      {
        TestInterface = -1073741789;
        WdLogSingleEntry3(3LL, v6, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1329;
        goto LABEL_17;
      }
      v15 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiKmdDodInitialize;
      goto LABEL_55;
    case 0x230047:
      if ( (unsigned int)v6 < 8 || !v8 )
      {
        TestInterface = -1073741789;
        WdLogSingleEntry3(3LL, v6, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1281;
        goto LABEL_17;
      }
      v15 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiInitializeWin8;
      goto LABEL_55;
    case 0x23004B:
      if ( (unsigned int)v6 < 8 || !v8 )
      {
        TestInterface = -1073741789;
        WdLogSingleEntry3(3LL, v6, *(_QWORD *)(a2 + 112), -1073741789LL);
        WdLogGlobalForLineNumber = 1353;
        goto LABEL_17;
      }
      v15 = (__int64 (__fastcall *)(PDRIVER_OBJECT))DpiUnInitialize;
LABEL_55:
      TestInterface = 0;
      *(_QWORD *)v8 = v15;
      v3 = 8;
      goto LABEL_17;
  }
  if ( (_DWORD)v5 != 2293839 )
    goto LABEL_28;
  if ( (unsigned int)v7 < 0x10 )
  {
    WdLogSingleEntry2(3LL, v7, 16LL);
    WdLogGlobalForLineNumber = 1467;
    goto LABEL_35;
  }
  TestInterface = DpiIsFeatureEnabled2(0LL, *((unsigned int **)v9 + 1));
  if ( TestInterface < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1477;
  }
LABEL_17:
  *(_QWORD *)(a2 + 56) = v3;
  *(_DWORD *)(a2 + 48) = TestInterface;
  IofCompleteRequest((PIRP)a2, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  return (unsigned int)TestInterface;
}
