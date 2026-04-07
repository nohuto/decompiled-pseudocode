/*
 * XREFs of ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18004B728
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180014014 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0N@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E8C (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0N@$00@@YA-AVDirtyFlags@.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1800203B0 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x180037D70 (-Create@CDWriteText@@SAJPEAPEAV1@@Z.c)
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x18004BA50 (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB14 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x18004BD44 (-BlendColors@@YAKKKM@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18004BE00 (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::UpdateText(CTopLevelWindow *this, struct CTopLevelWindow::WindowFrame *a2)
{
  unsigned int v4; // edi
  struct CVisual *v5; // rdx
  __int64 CaptionColor; // rsi
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  struct CVisual *v15; // rdx
  int inserted; // eax
  int *v17; // rax
  unsigned int v18; // ecx
  int v19; // eax
  CBaseObject *v20; // rcx
  struct CVisual *v21; // [rsp+30h] [rbp-98h] BYREF
  int v22; // [rsp+38h] [rbp-90h] BYREF
  tagLOGFONTW v23; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0;
  v5 = (struct CVisual *)*((_QWORD *)this + 63);
  if ( (*((_BYTE *)this + 568) & 8) == 0 )
  {
    if ( v5 )
    {
      v19 = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 31), v5);
      v4 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x1A39u, 0LL);
      }
      else
      {
        v20 = (CBaseObject *)*((_QWORD *)this + 63);
        if ( v20 )
        {
          CBaseObject::Release(v20);
          *((_QWORD *)this + 63) = 0LL;
        }
        *((_QWORD *)this + 64) = 0LL;
      }
    }
    return v4;
  }
  if ( !v5 )
  {
    v21 = 0LL;
    v14 = CDWriteText::Create(&v21);
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1A05u, 0LL);
    }
    else
    {
      v15 = v21;
      *((_QWORD *)this + 64) = ((unsigned __int64)v21 + 184) & -(__int64)(v21 != 0LL);
      v21 = 0LL;
      *((_QWORD *)this + 63) = v15;
      inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 31), v15, 0LL);
      v4 = inserted;
      if ( inserted >= 0 )
      {
        v17 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0N__00__YA_AVDirtyFlags__XZ(&v22);
        CVisual::SetDirtyFlags(this, *v17);
        goto LABEL_5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x1A0Bu, 0LL);
    }
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v21);
    return v4;
  }
LABEL_5:
  CaptionColor = CTopLevelWindow::GetCaptionColor(this);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 64) + 32LL))(*((_QWORD *)this + 64), CaptionColor);
  if ( a2 )
  {
    v8 = *(unsigned int *)(*((_QWORD *)this + 87) + 196LL);
    if ( !(_DWORD)v8 )
    {
      v9 = BYTE2(CaptionColor) + 5 * BYTE1(CaptionColor) + 2 * (unsigned __int8)CaptionColor;
      if ( v9 > 0x400 == 5 * BYTE1(*((_DWORD *)a2 + 456))
                       + (unsigned __int8)BYTE2(*((_DWORD *)a2 + 456))
                       + 2 * (unsigned int)(unsigned __int8)*((_DWORD *)a2 + 456) > 0x400 )
      {
        v18 = 321;
        if ( v9 <= 0x400 )
          v18 = 292;
        ColorCache::GetColor(v18);
      }
      if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
        v8 = BlendColors(CaptionColor, v8, 0.40000001);
    }
    (***((void (__fastcall ****)(_QWORD, __int64))this + 64))(*((_QWORD *)this + 64), v8);
  }
  memset_0(&v23, 0, sizeof(v23));
  CWindowData::GetNonClientCaptionFont(*((CWindowData **)this + 87), &v23);
  (*(void (__fastcall **)(_QWORD, tagLOGFONTW *))(**((_QWORD **)this + 64) + 8LL))(*((_QWORD *)this + 64), &v23);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 16LL))(*((_QWORD *)this + 64));
  v10 = *((_DWORD *)this + 142) >> 17;
  LOBYTE(v10) = (*((_DWORD *)this + 142) & 0x20000) != 0;
  CVisual::SetRTLMirror(*((CVisual **)this + 63), v10, v11);
  v12 = *((_DWORD *)this + 142) >> 19;
  LOBYTE(v12) = (*((_DWORD *)this + 142) & 0x80000) != 0;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 64) + 24LL))(*((_QWORD *)this + 64), v12);
  v13 = *((_DWORD *)this + 142) >> 22;
  LOBYTE(v13) = (*((_DWORD *)this + 142) & 0x400000) != 0;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 64) + 40LL))(*((_QWORD *)this + 64), v13);
  return v4;
}
