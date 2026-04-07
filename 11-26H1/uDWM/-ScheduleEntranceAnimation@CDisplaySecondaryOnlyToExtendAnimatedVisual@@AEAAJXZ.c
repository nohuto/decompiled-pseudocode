/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B4350
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x180077110 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004020C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::ScheduleEntranceAnimation(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  struct IAnimationListener *v2; // rsi
  CDisplayAnimatedVisual *v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  struct CAnimatedTransitionVisual *v7; // rdx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL));
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 47),
         v2,
         *((_DWORD *)this + 68),
         *((_DWORD *)this + 69),
         (unsigned int *)this + 100);
  if ( v4 < 0 )
  {
    v5 = 163LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 46);
  if ( v7 )
  {
    v4 = CDisplayAnimatedVisual::ScheduleAnimation(
           v3,
           v7,
           v2,
           *((_DWORD *)this + 68),
           *((_DWORD *)this + 69),
           (unsigned int *)this + 99);
    if ( v4 < 0 )
    {
      v5 = 172LL;
      goto LABEL_3;
    }
  }
  if ( (unsigned int)dword_1801140F8 > 5 && tlgKeywordOn((__int64)&dword_1801140F8, 2LL) )
  {
    v14 = *((_QWORD *)this + 46);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v8,
      (int)&unk_180100A9F,
      v9,
      v10,
      (__int64)&v14);
  }
  v11 = CContainerVisual::RemoveChild(
          this,
          (struct CVisual *)((*((_QWORD *)this + 45) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                             + 45) >> 64)));
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB4,
    (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
