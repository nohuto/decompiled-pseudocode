/*
 * XREFs of ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18002592C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045718 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z @ 0x1800256E0 (-AddMultipleAndSet@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180025784 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180025DB8 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007E478 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_CollectWindows(CLivePreview *this)
{
  unsigned int v2; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  CLivePreview *v4; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int v6; // r14d
  bool IsTrulyMaximized; // r12
  HMONITOR v8; // rax
  char v9; // di
  bool v10; // zf
  char v11; // al
  unsigned int v12; // ecx
  unsigned int k; // edi
  __int64 v14; // r8
  int v15; // eax
  unsigned int j; // edi
  unsigned int i; // edi
  CLivePreview *v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // r8d
  int v22; // eax
  HMONITOR v23; // [rsp+38h] [rbp-D0h] BYREF
  void *v24[2]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-B4h]
  __int64 v26; // [rsp+58h] [rbp-B0h]
  _QWORD v27[3]; // [rsp+60h] [rbp-A8h] BYREF
  bool v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+79h] [rbp-8Fh]
  __int16 v30; // [rsp+7Dh] [rbp-8Bh]
  char v31; // [rsp+7Fh] [rbp-89h]
  HMONITOR v32; // [rsp+80h] [rbp-88h]
  struct tagRECT rcDst; // [rsp+88h] [rbp-80h] BYREF
  WCHAR ClassName[264]; // [rsp+98h] [rbp-70h] BYREF

  v2 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           *((_QWORD *)this + 31));
  *((_QWORD *)this + 62) = 0LL;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v24, 0LL, 0);
  Blink = WindowListForDesktop->Blink;
  v6 = v26;
  while ( Blink != WindowListForDesktop )
  {
    if ( !Blink || !CLivePreview::_IsEligibleForLivePreview(v4, (const struct CWindowData *)Blink) )
      goto LABEL_26;
    BYTE3(Blink[42].Flink) &= ~1u;
    BYTE2(Blink[42].Flink) &= ~0x80u;
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v4, (const struct CWindowData *)Blink);
    v8 = MonitorFromWindow((HWND)Blink[2].Blink, 0);
    v23 = v8;
    if ( *((_DWORD *)this + 124) >= 0x1Eu )
    {
      BYTE3(Blink[42].Flink) |= 1u;
LABEL_30:
      BYTE2(Blink[42].Flink) |= 0x80u;
      goto LABEL_25;
    }
    if ( IsTrulyMaximized )
    {
      if ( v8 )
      {
        for ( i = 0; i < *((_DWORD *)this + 72); ++i )
        {
          v19 = (CLivePreview *)*((_QWORD *)this + 33);
          if ( *((HMONITOR *)v19 + 5 * i + 4) == v23
            && CLivePreview::_IsTrulyMaximized(v19, *((const struct CWindowData **)v19 + 5 * i)) )
          {
            goto LABEL_43;
          }
        }
      }
      else
      {
LABEL_43:
        BYTE3(Blink[42].Flink) |= 1u;
        BYTE2(Blink[42].Flink) |= 0x80u;
      }
    }
    else
    {
      if ( GetClassNameW((HWND)Blink[2].Blink, ClassName, 260) )
      {
        for ( j = 0; j < 3; ++j )
        {
          if ( !(unsigned int)_o__wcsicmp(off_1800EFA38[j], ClassName) )
          {
            BYTE2(Blink[42].Flink) |= 0x80u;
            BYTE3(Blink[42].Flink) |= 1u;
            break;
          }
        }
      }
      if ( SBYTE2(Blink[42].Flink) >= 0 )
      {
        v9 = ((__int64)Blink[7].Blink & 0x80) != 0;
        if ( !CWindowData::IsImmersiveWindow((CWindowData *)Blink) )
        {
          if ( !Blink[26].Blink )
          {
            v10 = (HIDWORD(Blink[7].Flink) & 0xC00000) == 12582912;
            goto LABEL_12;
          }
          goto LABEL_13;
        }
        if ( Blink[37].Blink )
          goto LABEL_13;
        v10 = (HIDWORD(Blink[7].Flink) & 0x40000000) == 0;
LABEL_12:
        if ( !v10 )
LABEL_13:
          v9 = 1;
        BYTE2(Blink[42].Flink) = (v9 << 7) | BYTE2(Blink[42].Flink) & 0x7F;
      }
    }
    if ( (BYTE3(Blink[42].Flink) & 1) == 0 || SBYTE2(Blink[42].Flink) >= 0 )
    {
      ++*((_DWORD *)this + 124);
      v11 = BYTE3(Blink[42].Flink);
      if ( (v11 & 1) == 0 )
      {
        v12 = *((_DWORD *)this + 125);
        if ( v12 >= 0xA )
        {
          BYTE3(Blink[42].Flink) = v11 | 1;
        }
        else
        {
          *((_DWORD *)this + 125) = v12 + 1;
          for ( k = 0; k < *((_DWORD *)this + 72); ++k )
          {
            v14 = *(_QWORD *)(*((_QWORD *)this + 33) + 40LL * k);
            if ( (*(_BYTE *)(v14 + 675) & 1) == 0 && *(_DWORD *)(v14 + 128) == 1 )
            {
              rcDst = 0LL;
              if ( IntersectRect(&rcDst, (const RECT *)&Blink[3], (const RECT *)(v14 + 48)) )
              {
                if ( EqualRect(&rcDst, (const RECT *)&Blink[3]) )
                {
                  --*((_DWORD *)this + 125);
                  BYTE3(Blink[42].Flink) |= 1u;
                  break;
                }
              }
            }
          }
        }
      }
      if ( SBYTE2(Blink[42].Flink) >= 0 && ((LODWORD(Blink[8].Flink) - 8) & 0xFFFFFFFD) == 0 )
      {
        v20 = 0;
        if ( v6 )
        {
          do
          {
            if ( v23 == *((HMONITOR *)v24[0] + v20) )
              break;
            ++v20;
          }
          while ( v20 < v6 );
          if ( v20 < v6 )
            goto LABEL_30;
        }
        v21 = v6 + 1;
        if ( v6 + 1 >= v6 )
        {
          if ( v21 > v25 )
          {
            v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v24, 8, 1, &v23);
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0xBEu, 0LL);
            v6 = v26;
          }
          else
          {
            *((_QWORD *)v24[0] + v6++) = v23;
            LODWORD(v26) = v21;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
        }
      }
    }
LABEL_25:
    v27[0] = Blink;
    *(_OWORD *)&v27[1] = 0LL;
    v28 = IsTrulyMaximized;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = v23;
    v15 = DynArray<LivePreviewVisual,0>::AddMultipleAndSet((__int64)this + 264, (__int64)v27);
    v2 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x152u, 0LL);
      break;
    }
LABEL_26:
    Blink = Blink->Blink;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(v24);
  return v2;
}
