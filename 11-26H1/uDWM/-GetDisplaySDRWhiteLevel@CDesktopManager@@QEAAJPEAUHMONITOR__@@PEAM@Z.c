/*
 * XREFs of ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800AB854
 * Callers:
 *     ?_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800A5224 (-_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A6294 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 * Callees:
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x1800070F0 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180008418 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x1800645B8 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopManager::GetDisplaySDRWhiteLevel(CDesktopManager *this, HMONITOR a2, float *a3)
{
  CDWMDisplaySet *v6; // rcx
  int AllDisplaysNoRef; // eax
  unsigned int v8; // ebx
  __int64 i; // rcx
  int PrimaryDisplay; // eax
  CDWMDisplay *v12; // rbx
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdx
  float v17; // xmm0_4
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  unsigned int v20; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CDWMDisplay *v22; // [rsp+68h] [rbp+28h] BYREF

  *a3 = 1.0;
  v6 = (CDWMDisplaySet *)*((_QWORD *)this + 18);
  if ( a2 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0;
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef((__int64)v6, (__int64)&v18);
    v8 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDCF,
        (int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)AllDisplaysNoRef);
      CBitmapSourceArray::~CBitmapSourceArray((void **)&v18);
      return v8;
    }
    for ( i = 0LL; (unsigned int)i < v20; i = (unsigned int)(i + 1) )
    {
      if ( *(HMONITOR *)(*(_QWORD *)(v18 + 8 * i) + 16LL) == a2 )
      {
        _mm_lfence();
        if ( *(_BYTE *)(*(_QWORD *)(v18 + 8 * i) + 292LL) )
        {
          _mm_lfence();
          *a3 = *(float *)(*(_QWORD *)(v18 + 8 * i) + 256LL);
        }
        break;
      }
    }
    CBitmapSourceArray::~CBitmapSourceArray((void **)&v18);
  }
  else
  {
    v22 = 0LL;
    PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(v6, &v22);
    v8 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDDF,
        (int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)PrimaryDisplay);
      if ( v22 )
        CDWMDisplay::Release(v22);
      return v8;
    }
    v12 = v22;
    if ( *((_BYTE *)v22 + 292) )
    {
      *a3 = *((float *)v22 + 64);
    }
    else
    {
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0;
      v13 = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)&v18);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDE8,
          (int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
          (const char *)(unsigned int)v13);
        CBitmapSourceArray::~CBitmapSourceArray((void **)&v18);
        CDWMDisplay::Release(v12);
        return v14;
      }
      if ( v20 )
      {
        v15 = v18;
        v16 = v20;
        do
        {
          if ( *(_BYTE *)(*(_QWORD *)v15 + 292LL) )
          {
            v17 = *(float *)(*(_QWORD *)v15 + 256LL);
            if ( v17 > *a3 )
              *a3 = v17;
          }
          v15 += 8LL;
          --v16;
        }
        while ( v16 );
      }
      CBitmapSourceArray::~CBitmapSourceArray((void **)&v18);
    }
    CDWMDisplay::Release(v12);
  }
  return 0LL;
}
