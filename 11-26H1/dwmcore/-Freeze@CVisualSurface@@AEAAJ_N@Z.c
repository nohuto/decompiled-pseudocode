/*
 * XREFs of ?Freeze@CVisualSurface@@AEAAJ_N@Z @ 0x180263440
 * Callers:
 *     ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x1802635D4 (-ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1800D410C (-UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     ?RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x1801CC5A0 (-RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 */

__int64 __fastcall CVisualSurface::Freeze(CVisualSurface *this, char a2)
{
  _DWORD **v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // edi
  struct CCachedVisualImage **v9; // rax
  struct CCachedVisualImage *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 204) )
  {
    if ( !*((_BYTE *)this + 205) )
    {
      v4 = (_DWORD **)*((_QWORD *)this + 11);
      if ( *((_QWORD *)this + 12) - (_QWORD)v4 == 16LL )
      {
        v13 = *((_DWORD *)this + 50);
        v5 = *((_QWORD *)this + 10);
        *((_BYTE *)this + 205) = 1;
        v6 = CCachedVisualImage::UpdateFromVisualSurface(
               *v4,
               v5,
               (float *)this + 44,
               (float *)this + 46,
               (float *)this + 48,
               v13);
        v7 = v6;
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x135,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
            (const char *)(unsigned int)v6);
          return v7;
        }
        v9 = (struct CCachedVisualImage **)*((_QWORD *)this + 11);
        v10 = *v9;
        if ( a2 )
        {
          v11 = CComposition::RegisterRenderSnapshotToPerform(*((CComposition **)v10 + 3), *v9);
          v12 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x156u, 0LL);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x137,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
              (const char *)v12);
            return v12;
          }
        }
        else
        {
          *((_BYTE *)v10 + 1600) = 1;
        }
      }
    }
  }
  return 0LL;
}
