/*
 * XREFs of ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402B4E74
 * Callers:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402B4D44 (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1402B50C0 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402B54F4 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1402B5B50 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 */

__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  struct tagRECT *v2; // rdi
  int DoesRectOverlapWithExistingDirty; // eax
  __int64 v6; // rax
  const wchar_t *v7; // r9
  unsigned int v8; // edi
  __int128 v9; // [rsp+50h] [rbp-38h] BYREF

  v2 = a2;
  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 741;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DWM is passing in a NULL rect, DWM needs to investigate!!",
      741LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 1LL;
  }
  v9 = 0LL;
  while ( !*((_QWORD *)this + 8) )
  {
    DoesRectOverlapWithExistingDirty = DDAMetaData::DoesRectOverlapWithExistingDirty(this, v2, &v9);
    switch ( DoesRectOverlapWithExistingDirty )
    {
      case 1:
        return 1LL;
      case 2:
        v2 = (struct tagRECT *)&v9;
        break;
      case 3:
        if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
        {
          WdLogSingleEntry0(2LL);
          v6 = 778LL;
          v7 = L"Failed to convert dirty rects to GDI region";
LABEL_11:
          WdLogGlobalForLineNumber = v6;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
          return 0LL;
        }
        break;
      default:
        if ( (unsigned int)DDAMetaData::AddToDirtyList(this, v2) )
          return 1LL;
        WdLogSingleEntry0(2LL);
        v6 = 793LL;
        v7 = L"Failed to process dirty against move list";
        goto LABEL_11;
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
         *((_QWORD *)this + 9),
         (unsigned int)v2->left,
         (unsigned int)v2->top,
         (unsigned int)v2->right,
         v2->bottom);
  if ( !v8 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 804LL;
    v7 = L"Failed to set tmp region to current dirty rect";
    goto LABEL_11;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 9),
         2LL) )
  {
    return 1LL;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 810;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to combine move rect with dirty region",
    810LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v8;
}
