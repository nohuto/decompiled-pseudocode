/*
 * XREFs of ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x1800364AC
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003628C (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x1800355CC (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ @ 0x1800357E0 (-InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::CreateCoordinateSpaceVisual(CBaseObject **this)
{
  struct CContainerVisual **v1; // r14
  int inserted; // ebx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 12;
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(this + 12);
  inserted = CContainerVisual::Create(v1);
  if ( inserted < 0 )
  {
    v5 = 174LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(this + 13);
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
        inserted = CGlobalLightSet::PositionCoordinateSpaceVisual((struct tagPOINT **)this);
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
