/*
 * XREFs of ?AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ @ 0x1800258DC
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18007EA04 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::AdjustNonClientBackgroundTreePosition(CTopLevelWindow *this)
{
  struct CVisual *v1; // rdx
  CContainerVisual *v3; // rcx
  int v4; // edi
  struct CVisual **i; // rax
  struct CVisual *v6; // r8
  int inserted; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  _QWORD v11[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (struct CVisual *)*((_QWORD *)this + 32);
  v3 = (CContainerVisual *)*((_QWORD *)this + 29);
  if ( **((struct CVisual ***)v3 + 18) != v1 )
  {
    if ( *((_DWORD *)this + 190) == 4 )
    {
      v4 = CContainerVisual::RemoveChild(v3, v1);
      if ( v4 < 0 )
      {
        v10 = 6737LL;
        goto LABEL_17;
      }
      inserted = CContainerVisual::InsertChildAfter(
                   *((CContainerVisual **)this + 29),
                   *((struct CVisual **)this + 32),
                   0LL);
      if ( inserted < 0 )
      {
        v9 = 6738LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted,
          v11[0]);
        return (unsigned int)inserted;
      }
    }
    return 0LL;
  }
  if ( *((_DWORD *)this + 190) == 4 )
    return 0LL;
  v4 = CContainerVisual::RemoveChild(v3, v1);
  if ( v4 >= 0 )
  {
    v11[0] = *((_QWORD *)this + 34);
    v11[1] = *((_QWORD *)this + 30);
    v11[2] = *((_QWORD *)this + 33);
    for ( i = (struct CVisual **)v11; i != (struct CVisual **)&v12; ++i )
    {
      v6 = *i;
      if ( *i )
        goto LABEL_9;
    }
    v6 = 0LL;
LABEL_9:
    inserted = CContainerVisual::InsertChildAfter(
                 *((CContainerVisual **)this + 29),
                 *((struct CVisual **)this + 32),
                 v6);
    if ( inserted >= 0 )
      return 0LL;
    v9 = 6732LL;
    goto LABEL_15;
  }
  v10 = 6730LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v4,
    v11[0]);
  return (unsigned int)v4;
}
