/*
 * XREFs of ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800ACE54
 * Callers:
 *     ?_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800C4044 (-_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4B74 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x180066578 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180068014 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18007A244 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopManager::GetDisplaySDRWhiteLevel(CDesktopManager *this, HMONITOR a2, float *a3)
{
  int AllDisplaysNoRef; // eax
  unsigned int v7; // ebx
  __int64 i; // rcx
  int PrimaryDisplay; // eax
  CDWMDisplay *v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  char *v14; // rax
  __int64 v15; // rdx
  float v16; // xmm0_4
  void *v17[3]; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CDWMDisplay *v20; // [rsp+68h] [rbp+28h] BYREF

  *a3 = 1.0;
  if ( a2 )
  {
    CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v17);
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)v17);
    v7 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDEE,
        (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)AllDisplaysNoRef);
      DynArrayImpl<0>::~DynArrayImpl<0>(v17);
      return v7;
    }
    for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
    {
      if ( *(HMONITOR *)(*((_QWORD *)v17[0] + i) + 16LL) == a2 )
      {
        _mm_lfence();
        if ( *(_BYTE *)(*((_QWORD *)v17[0] + i) + 292LL) )
        {
          _mm_lfence();
          *a3 = *(float *)(*((_QWORD *)v17[0] + (unsigned int)i) + 256LL);
        }
        break;
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v17);
  }
  else
  {
    v20 = 0LL;
    PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(*((CDWMDisplaySet **)this + 18), &v20);
    v7 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDFE,
        (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)PrimaryDisplay);
      if ( v20 )
        CDWMDisplay::Release(v20);
      return v7;
    }
    v11 = v20;
    if ( *((_BYTE *)v20 + 292) )
    {
      *a3 = *((float *)v20 + 64);
    }
    else
    {
      CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v17);
      v12 = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)v17);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE07,
          (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
          (const char *)(unsigned int)v12);
        DynArrayImpl<0>::~DynArrayImpl<0>(v17);
        CDWMDisplay::Release(v11);
        return v13;
      }
      if ( v18 )
      {
        v14 = (char *)v17[0];
        v15 = v18;
        do
        {
          if ( *(_BYTE *)(*(_QWORD *)v14 + 292LL) )
          {
            v16 = *(float *)(*(_QWORD *)v14 + 256LL);
            if ( v16 > *a3 )
              *a3 = v16;
          }
          v14 += 8;
          --v15;
        }
        while ( v15 );
      }
      DynArrayImpl<0>::~DynArrayImpl<0>(v17);
    }
    CDWMDisplay::Release(v11);
  }
  return 0LL;
}
