/*
 * XREFs of CheckGivenTargetIsPartOfCloneGroup @ 0x1402AC654
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402AD220 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

__int64 __fastcall CheckGivenTargetIsPartOfCloneGroup(ADAPTER_DISPLAY **a1, unsigned int a2, _BYTE *a3)
{
  ADAPTER_DISPLAY *v5; // rax
  unsigned int v6; // esi
  int v7; // ebx
  struct SESSION_VIEW *SessionViewOwner; // rax
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0;
  v10 = 0;
  if ( (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, &v10) < 0 )
    return (unsigned int)-1073741275;
  v5 = a1[395];
  v6 = v10;
  v11 = 0;
  if ( v10 >= *((_DWORD *)v5 + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4852;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < i_pAdapter->GetDisplayCore()->GetNumVidPnSources()",
      4852LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = DmmEnumClientVidPnPathTargetsFromSource(a1, v6, 1uLL, &v11);
  if ( v7 < 0 || v11 == -1 )
  {
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[395], v6);
    if ( !SessionViewOwner || *((_DWORD *)SessionViewOwner + 10) <= 1u )
      return (unsigned int)v7;
  }
  *a3 = 1;
  return 0LL;
}
