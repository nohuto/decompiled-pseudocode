/*
 * XREFs of ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401CA340
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CB5C8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x14004AB54 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x140076180 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1400761DC (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x140076254 (-GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1401CA9A8 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO@@I@Z @ 0x1401CAD7C (-GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CreateBlackScreenLiveDump(
        DISPLAYSTATECHECKER *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        enum DxgkrnlLiveDumpFailureReason *a7)
{
  enum DxgkrnlLiveDumpFailureReason *v7; // r14
  int BlackScreenDiagPacket; // edi
  struct DXGGLOBAL *Global; // rax
  DXGDIAGNOSTICS *v12; // r12
  DXGDIAGNOSTICS *v13; // rax
  int v14; // ebp
  int v15; // r15d
  int v16; // ebx
  __int64 v17; // rsi
  unsigned int v18; // r15d
  unsigned int v19; // ebx
  __int64 v20; // rbp
  _DWORD *v21; // rbx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r9
  unsigned int v24; // r12d
  _DWORD *i; // r15
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  const void *v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // [rsp+50h] [rbp-58h]
  _QWORD *v35; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-48h]
  DXGDIAGNOSTICS *v37; // [rsp+68h] [rbp-40h]
  unsigned int v38; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v39; // [rsp+C0h] [rbp+18h]
  __int64 v40; // [rsp+C8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v38 = a2;
  v7 = a7;
  BlackScreenDiagPacket = 0;
  *(_DWORD *)a7 = 0;
  Global = DXGGLOBAL::GetGlobal();
  if ( !Global )
  {
    *(_DWORD *)v7 = 1;
    return 3221225473LL;
  }
  v12 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 121);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 899;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility object; pDiagnostics = 0x%I64x",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_DWORD *)v7 = 2;
    return 3221225860LL;
  }
  v13 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 122);
  v37 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 907;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility object; pDiagnostics = 0x%I64x",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_DWORD *)v7 = 4;
    return 3221225860LL;
  }
  v15 = *((_DWORD *)v13 + 4);
  v16 = *((_DWORD *)this + 3522) << 13;
  LODWORD(a5) = *((_DWORD *)v12 + 4);
  v14 = a5;
  LODWORD(a7) = v15;
  LODWORD(v40) = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  LODWORD(a6) = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagDataSize(this);
  v38 = *((_DWORD *)this + 3522);
  v17 = 8 * v38 + 48;
  v34 = v40 + a6 + v17 + v16;
  v18 = v14 + v34 + v15;
  v19 = (v18 + 4095) & 0xFFFFF000;
  if ( (unsigned int)WdDbgGetSecondaryDataMaxSize(424LL) < v19 )
  {
    *(_DWORD *)v7 = 8;
    return 3221225473LL;
  }
  v20 = v19;
  v35 = (_QWORD *)operator new[](v19, 0x4B677844u, 256LL);
  v21 = v35;
  if ( v35 )
  {
    v22 = (unsigned int)a5;
    *v35 = v38 + 5;
    v21[2] = v17;
    v21[3] = 160;
    v38 = v22;
    if ( v17 + v22 >= v22 && v17 + v22 <= v18 )
    {
      BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(
                                v12,
                                (unsigned __int8 *)v21 + (unsigned int)v17,
                                &v38,
                                0xFFFFFFFF);
      if ( BlackScreenDiagPacket >= 0 )
      {
        v17 = v38 + (unsigned int)v17;
        LODWORD(a5) = v38;
      }
      else
      {
        *(_DWORD *)v7 = 32;
      }
    }
    v23 = (unsigned int)a7;
    v36 = v18;
    v21[4] = v17;
    v21[5] = 176;
    v38 = v23;
    if ( v17 + v23 >= v23 && v17 + v23 <= v18 )
    {
      BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(
                                v37,
                                (unsigned __int8 *)v21 + (unsigned int)v17,
                                &v38,
                                0xFFFFFFFF);
      if ( BlackScreenDiagPacket >= 0 )
      {
        v17 = v38 + (unsigned int)v17;
        LODWORD(a7) = v38;
      }
      else
      {
        *(_DWORD *)v7 = 64;
      }
    }
    v24 = 0;
    for ( i = v21 + 6; v24 < *((_DWORD *)this + 3522); ++v24 )
    {
      *i = v17;
      i[1] = 5;
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v24);
      if ( *((_BYTE *)DisplayAdapterDiagData + 56) )
      {
        v27 = (const void *)*((_QWORD *)DisplayAdapterDiagData + 6);
        if ( v27 )
        {
          memmove((char *)v21 + (unsigned int)v17, v27, 0x2000uLL);
          i += 2;
          v17 = (unsigned int)(v17 + 0x2000);
        }
      }
    }
    v28 = (unsigned int)v40;
    v29 = v36;
    *i = v17;
    i[1] = 194;
    if ( v28 + v17 >= v28 && v28 + v17 <= v29 )
    {
      BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
                                this,
                                (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)((char *)v21 + (unsigned int)v17),
                                v28);
      if ( BlackScreenDiagPacket >= 0 )
        v17 = (unsigned int)(v40 + v17);
      else
        *(_DWORD *)v7 = 1024;
    }
    v30 = (unsigned int)a6;
    i[2] = v17;
    i[3] = 208;
    if ( v30 + v17 >= v30 && v30 + v17 <= v29 )
    {
      BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagData(
                                this,
                                (struct _DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO *)((char *)v21 + (unsigned int)v17),
                                v30);
      if ( BlackScreenDiagPacket >= 0 )
        LODWORD(v17) = a6 + v17;
      else
        *(_DWORD *)v7 = 2048;
    }
    v31 = v39;
    i[4] = v17;
    i[5] = 0;
    v32 = WdDbgReportCreate(0LL, 424LL, v31, 0LL, 0LL, 0LL, 0);
    v33 = v32;
    if ( !v32 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1100;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"WdDbgReportCreate failed", 1100LL, 0LL, 0LL, 0LL, 0LL);
      *(_DWORD *)v7 = 128;
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v35);
      return 3221225473LL;
    }
    if ( !(unsigned __int8)WdDbgReportSecondaryData(v32, v21, (unsigned int)(a5 + (_DWORD)a7 + v34)) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1107;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"WdDbgReportSecondaryData returned FALSE while building live dump.",
        1107LL,
        0LL,
        0LL,
        0LL,
        0LL);
      *(_DWORD *)v7 = 256;
      BlackScreenDiagPacket = -1073741823;
    }
    WdDbgReportComplete(v33);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v35);
    return (unsigned int)BlackScreenDiagPacket;
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 946;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating black screen live dump data (size 0x%I64x)",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_DWORD *)v7 = 16;
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v35);
    return 3221225495LL;
  }
}
