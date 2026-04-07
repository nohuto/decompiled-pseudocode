/*
 * XREFs of ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x18006A740
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180001B28 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?GetGlobalTime@CDesktopManager@@SANXZ @ 0x18001E1EC (-GetGlobalTime@CDesktopManager@@SANXZ.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A7030 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::OnGlobalTimeUpdated(CDisplayAnimatedVisual *this)
{
  __int64 v2; // rcx
  double v3; // xmm0_8
  int v4; // eax
  double GlobalTime; // xmm0_8
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 352) )
  {
    GlobalTime = CDesktopManager::GetGlobalTime();
    *(double *)(v7 + 344) = GlobalTime;
    *(_BYTE *)(v7 + 352) = 1;
  }
  v3 = CDesktopManager::GetGlobalTime();
  if ( v3 - *(double *)(v2 + 344) >= 4.0 )
  {
    if ( (unsigned int)dword_1801140F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801140F8, 2LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v8,
        (int)&unk_18010056A,
        0);
    v9 = CDisplayAnimatedVisual::Stop(this, 0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2FB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v9,
        v10);
  }
  else if ( *(_BYTE *)(v2 + 354) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    if ( v4 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2F2,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v4,
        v10);
  }
  return 0LL;
}
