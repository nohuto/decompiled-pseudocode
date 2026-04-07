/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B3E70
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800023CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180079DBC (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::StartImpl(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this)
{
  LONG v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  int v7; // r11d
  struct CAnimatedTransitionVisual **v8; // rdi
  struct CAnimatedTransitionVisual *v9; // rdx
  int v10; // eax
  unsigned int v11; // esi
  int updated; // ebx
  __int64 v14; // rdx
  LONG v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+44h] [rbp-2Ch] BYREF
  int v17; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+4Ch] [rbp-24h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v20; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v19 = 0LL;
  v20 = 0LL;
  GetDesktopID(1LL, &v19);
  v20.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
  v20.right = v20.left + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v20.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
  v2 = v20.top + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v20.bottom = v2;
  if ( (unsigned int)dword_1801140F8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1801140F8, 2LL) )
    {
      v15 = v2;
      v16 = v7;
      v17 = v6;
      v18 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v3,
        (int)&unk_180100A40,
        v4,
        v5,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  v8 = (struct CAnimatedTransitionVisual **)((char *)this + 360);
  v9 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 45);
  if ( !v9 )
  {
    *v8 = 0LL;
    v10 = CDisplayAnimatedVisual::CaptureAndAddVisual(
            this,
            v19,
            &v20,
            (const struct tagRECT *)((char *)this + 216),
            (struct CAnimatedTransitionVisual **)this + 45);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    v9 = *v8;
  }
  updated = CDisplayAnimatedVisual::ScheduleAnimation(
              (CDisplaySecondaryOnlyToDuplicateAnimatedVisual *)((char *)this + 208),
              v9,
              (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
              *((_DWORD *)this + 68),
              *((_DWORD *)this + 70),
              (unsigned int *)this + 94);
  if ( updated < 0 )
  {
    v14 = 71LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
  if ( updated < 0 )
  {
    v14 = 78LL;
    goto LABEL_10;
  }
  return 0LL;
}
