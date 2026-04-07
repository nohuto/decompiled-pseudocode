/*
 * XREFs of ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180035064
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x180034E64 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18001F784 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18003518C (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ @ 0x1800354D0 (-InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::CreateCoordinateSpaceVisual(CBaseObject **this)
{
  struct CContainerVisual **v1; // r14
  int inserted; // ebx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 12;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(this + 12);
  inserted = CContainerVisual::Create(v1);
  if ( inserted < 0 )
  {
    v5 = 174LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(this + 13);
    inserted = CContainerVisual::Create(this + 13);
    if ( inserted < 0 )
    {
      v5 = 177LL;
    }
    else
    {
      inserted = CContainerVisual::AddChild(*v1, this[13]);
      if ( inserted < 0 )
      {
        v5 = 180LL;
      }
      else
      {
        inserted = CGlobalLightSet::PositionCoordinateSpaceVisual((CGlobalLightSet *)this);
        if ( inserted < 0 )
        {
          v5 = 183LL;
        }
        else
        {
          inserted = CGlobalLightSet::InsertInteropVisualIntoTree((CGlobalLightSet *)this);
          if ( inserted >= 0 )
            return 0LL;
          v5 = 186LL;
        }
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)inserted,
    v6);
  return (unsigned int)inserted;
}
