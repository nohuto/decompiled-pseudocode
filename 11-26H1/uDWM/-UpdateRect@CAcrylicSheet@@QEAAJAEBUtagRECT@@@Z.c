/*
 * XREFs of ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18005E048
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800DD78C (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18005E18C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x18005E3E8 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18005E508 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSheet::UpdateRect(CAcrylicSheet *this, const struct tagRECT *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rcx
  signed __int64 v6; // rdx
  __int64 v7; // r8
  int updated; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  CTimelineBase *v11; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 53);
  if ( v4 && !*(_BYTE *)(v4 + 72) )
  {
    v17 = this;
    if ( this )
      CBaseObject::AddRef(this);
    if ( *((_BYTE *)this + 417) )
    {
      if ( *((_BYTE *)this + 418) )
      {
        v5 = (_DWORD *)((char *)this + 384);
        v6 = (char *)a2 - (char *)this;
        v7 = 4LL;
        do
        {
          *v5 += *(_DWORD *)((char *)v5 + v6 - 384) - v5[4];
          ++v5;
          --v7;
        }
        while ( v7 );
      }
      *((struct tagRECT *)this + 25) = *a2;
      updated = CAcrylicSheet::UpdateTransition(this);
      v9 = updated;
      if ( updated < 0 )
      {
        v10 = 227LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
          (const char *)(unsigned int)updated,
          v15);
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
        return v9;
      }
    }
    else
    {
      if ( *((_QWORD *)this + 55) )
      {
        v11 = (CTimelineBase *)*((_QWORD *)this + 53);
        if ( v11 )
        {
          CTimelineBase::Release(v11);
          *((_QWORD *)this + 53) = 0LL;
        }
      }
      else
      {
        CAcrylicSheet::StopAnimations(this);
      }
      updated = CAcrylicSheet::UpdateRectInternal(this, a2);
      v9 = updated;
      if ( updated < 0 )
      {
        v10 = 242LL;
        goto LABEL_17;
      }
    }
    if ( this )
      CBaseObject::Release(this);
    return 0LL;
  }
  v13 = CAcrylicSheet::UpdateRectInternal(this, a2);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v13,
    v15);
  return v14;
}
