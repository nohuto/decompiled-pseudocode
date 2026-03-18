/*
 * XREFs of ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x140340108
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1401BC480 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1401F344C (DxgkRedrawCursorForPostCompositon.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x140338A90 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x14033EAD0 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x14033F860 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x140386FCC (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 *     DxgkDisplayOnOff @ 0x1403EBC10 (DxgkDisplayOnOff.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

DXGSESSIONDATA **__fastcall DXGSESSIONDATA::GetSessionViewFromSource(
        DXGSESSIONDATA *this,
        const struct _LUID *a2,
        unsigned int a3)
{
  DXGSESSIONDATA *i; // r9
  char *v4; // r10
  _QWORD **v5; // r10
  _QWORD *j; // rax
  _QWORD *v7; // rbx
  DXGSESSIONDATA **v8; // rbx
  DXGSESSIONDATA **result; // rax

  for ( i = (DXGSESSIONDATA *)*((_QWORD *)this + 2323); ; i = *(DXGSESSIONDATA **)i )
  {
    if ( i == (DXGSESSIONDATA *)((char *)this + 18584) )
      goto LABEL_16;
    v4 = (char *)i - 32;
    if ( *((_DWORD *)i - 6) == a2->LowPart && *((_DWORD *)v4 + 3) == a2->HighPart )
      break;
  }
  if ( i == (DXGSESSIONDATA *)32 )
    goto LABEL_16;
  v5 = (_QWORD **)(v4 + 112);
  for ( j = *v5; j != v5; j = (_QWORD *)*j )
  {
    v7 = j - 4;
    if ( *((_DWORD *)j - 4) == a3 )
      goto LABEL_9;
  }
  v7 = 0LL;
LABEL_9:
  if ( !v7 )
  {
LABEL_16:
    WdLogSingleEntry4(3LL, a3, a2->HighPart, a2->LowPart, this);
    result = 0LL;
    WdLogGlobalForLineNumber = 4346;
    return result;
  }
  v8 = (DXGSESSIONDATA **)v7[6];
  if ( v8 )
  {
    if ( *v8 != this )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4356;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pSessionView == NULL) || (&pSessionView->GetOwnedSession() == this)",
        4356LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  return v8;
}
