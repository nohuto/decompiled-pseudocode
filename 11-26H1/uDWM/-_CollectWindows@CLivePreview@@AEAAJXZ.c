/*
 * XREFs of ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180039F1C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x18002C448 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18003A3B8 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18003AC60 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z @ 0x18003AD38 (-AddMultipleAndSet@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B008 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_CollectWindows(CLivePreview *this)
{
  unsigned int v2; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CLivePreview *v4; // rcx
  unsigned int v5; // r15d
  struct _LIST_ENTRY *Blink; // rbx
  _QWORD *v7; // r12
  bool IsTrulyMaximized; // r13
  HMONITOR v9; // rax
  char v10; // di
  bool v11; // zf
  char v12; // al
  unsigned int v13; // ecx
  unsigned int k; // edi
  __int64 v15; // r8
  int v16; // eax
  unsigned int m; // edx
  unsigned int v18; // edx
  unsigned int j; // edi
  unsigned int i; // edi
  CLivePreview *v22; // rcx
  int v23; // eax
  HMONITOR lpMem; // [rsp+38h] [rbp-D0h] BYREF
  void *lpMem_8[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h]
  __int64 v27; // [rsp+58h] [rbp-B0h]
  struct _LIST_ENTRY *v28; // [rsp+60h] [rbp-A8h]
  _QWORD v29[3]; // [rsp+68h] [rbp-A0h] BYREF
  bool v30; // [rsp+80h] [rbp-88h]
  int v31; // [rsp+81h] [rbp-87h]
  __int16 v32; // [rsp+85h] [rbp-83h]
  char v33; // [rsp+87h] [rbp-81h]
  HMONITOR v34; // [rsp+88h] [rbp-80h]
  struct tagRECT rcDst; // [rsp+90h] [rbp-78h] BYREF
  WCHAR ClassName[264]; // [rsp+A8h] [rbp-60h] BYREF

  v2 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           *((_QWORD *)this + 24));
  v28 = WindowListForDesktop;
  *((_QWORD *)this + 52) = 0LL;
  *(_OWORD *)lpMem_8 = 0LL;
  v26 = 0LL;
  v5 = 0;
  LODWORD(v27) = 0;
  Blink = WindowListForDesktop->Blink;
  v7 = 0LL;
  while ( Blink != WindowListForDesktop )
  {
    if ( !Blink )
      goto LABEL_27;
    if ( CLivePreview::_IsEligibleForLivePreview(v4, (const struct CWindowData *)Blink) )
    {
      BYTE3(Blink[46].Flink) &= ~1u;
      BYTE2(Blink[46].Flink) &= ~0x80u;
      IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v4, (const struct CWindowData *)Blink);
      v9 = MonitorFromWindow((HWND)Blink[2].Blink, 0);
      lpMem = v9;
      if ( *((_DWORD *)this + 104) >= 0x1Eu )
      {
        BYTE3(Blink[46].Flink) |= 1u;
      }
      else
      {
        if ( IsTrulyMaximized )
        {
          if ( v9 )
          {
            for ( i = 0; i < *((_DWORD *)this + 58); ++i )
            {
              v22 = (CLivePreview *)*((_QWORD *)this + 26);
              if ( *((HMONITOR *)v22 + 5 * i + 4) == lpMem
                && CLivePreview::_IsTrulyMaximized(v22, *((const struct CWindowData **)v22 + 5 * i)) )
              {
                goto LABEL_46;
              }
            }
          }
          else
          {
LABEL_46:
            BYTE3(Blink[46].Flink) |= 1u;
            BYTE2(Blink[46].Flink) |= 0x80u;
          }
        }
        else
        {
          if ( GetClassNameW((HWND)Blink[2].Blink, ClassName, 260) )
          {
            for ( j = 0; j < 3; ++j )
            {
              if ( !(unsigned int)_o__wcsicmp(off_1800EC878[j], ClassName) )
              {
                BYTE2(Blink[46].Flink) |= 0x80u;
                BYTE3(Blink[46].Flink) |= 1u;
                break;
              }
            }
          }
          if ( SBYTE2(Blink[46].Flink) >= 0 )
          {
            v10 = ((__int64)Blink[7].Blink & 0x80) != 0;
            if ( !CWindowData::IsImmersiveWindow((CWindowData *)Blink) )
            {
              if ( !Blink[26].Blink )
              {
                v11 = (HIDWORD(Blink[7].Flink) & 0xC00000) == 12582912;
                goto LABEL_12;
              }
              goto LABEL_13;
            }
            if ( Blink[37].Blink )
              goto LABEL_13;
            v11 = (HIDWORD(Blink[7].Flink) & 0x40000000) == 0;
LABEL_12:
            if ( !v11 )
LABEL_13:
              v10 = 1;
            BYTE2(Blink[46].Flink) = (v10 << 7) | BYTE2(Blink[46].Flink) & 0x7F;
          }
        }
        if ( (BYTE3(Blink[46].Flink) & 1) != 0 && SBYTE2(Blink[46].Flink) < 0 )
          goto LABEL_25;
        ++*((_DWORD *)this + 104);
        v12 = BYTE3(Blink[46].Flink);
        if ( (v12 & 1) == 0 )
        {
          v13 = *((_DWORD *)this + 105);
          if ( v13 >= 0xA )
          {
            BYTE3(Blink[46].Flink) = v12 | 1;
          }
          else
          {
            *((_DWORD *)this + 105) = v13 + 1;
            for ( k = 0; k < *((_DWORD *)this + 58); ++k )
            {
              v15 = *(_QWORD *)(*((_QWORD *)this + 26) + 40LL * k);
              if ( (*(_BYTE *)(v15 + 739) & 1) == 0 && *(_DWORD *)(v15 + 128) == 1 )
              {
                rcDst = 0LL;
                if ( IntersectRect(&rcDst, (const RECT *)&Blink[3], (const RECT *)(v15 + 48)) )
                {
                  if ( EqualRect(&rcDst, (const RECT *)&Blink[3]) )
                  {
                    --*((_DWORD *)this + 105);
                    BYTE3(Blink[46].Flink) |= 1u;
                    break;
                  }
                }
              }
            }
          }
        }
        if ( SBYTE2(Blink[46].Flink) < 0 || ((LODWORD(Blink[8].Flink) - 8) & 0xFFFFFFFD) != 0 )
        {
LABEL_25:
          v29[0] = Blink;
          *(_OWORD *)&v29[1] = 0LL;
          v30 = IsTrulyMaximized;
          v31 = 0;
          v32 = 0;
          v33 = 0;
          v34 = lpMem;
          v16 = DynArray<LivePreviewVisual,0>::AddMultipleAndSet((char *)this + 208, v29);
          v2 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x148u, 0LL);
            break;
          }
          goto LABEL_26;
        }
        for ( m = 0; m < v5; ++m )
        {
          if ( lpMem == (HMONITOR)v7[m] )
            break;
        }
        if ( m >= v5 )
        {
          v18 = v5 + 1;
          if ( v5 + 1 < v5 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
          }
          else if ( v18 > HIDWORD(v26) )
          {
            v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)lpMem_8, 8, 1, &lpMem);
            if ( v23 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0xC2u, 0LL);
            v5 = v27;
            v7 = lpMem_8[0];
          }
          else
          {
            v7[v5++] = lpMem;
            LODWORD(v27) = v18;
          }
          goto LABEL_25;
        }
      }
      BYTE2(Blink[46].Flink) |= 0x80u;
      goto LABEL_25;
    }
LABEL_26:
    WindowListForDesktop = v28;
LABEL_27:
    Blink = Blink->Blink;
  }
  if ( v7 != lpMem_8[1] )
    DefaultHeap::Free(v7);
  return v2;
}
