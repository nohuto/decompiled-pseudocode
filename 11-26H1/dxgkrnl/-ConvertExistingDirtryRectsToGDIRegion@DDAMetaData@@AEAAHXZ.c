/*
 * XREFs of ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1402B5B50
 * Callers:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402B4E74 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402B54F4 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1402B5448 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(DDAMetaData *this)
{
  __int64 v2; // rax
  bool v3; // zf
  unsigned int v4; // esi
  LONG *i; // rdi
  unsigned int v6; // ebp

  *((_QWORD *)this + 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 80LL))(
                            0LL,
                            0LL,
                            0LL,
                            0LL);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 80LL))(0LL, 0LL, 0LL, 0LL);
  v3 = *((_QWORD *)this + 8) == 0LL;
  *((_QWORD *)this + 9) = v2;
  if ( !v3 && v2 )
  {
    v4 = 0;
    for ( i = &DDAMetaData::GetDirtyRectData(this, *((_DWORD *)this + 6))->right; ; i += 4 )
    {
      if ( v4 >= *((_DWORD *)this + 6) )
        return 1LL;
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
             *((_QWORD *)this + 9),
             (unsigned int)*(i - 2),
             (unsigned int)*(i - 1),
             (unsigned int)*i,
             i[1]);
      if ( !v6 )
        break;
      if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 9),
              2LL) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 639;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to combine current dirty rect with dirty region",
          639LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return v6;
      }
      ++v4;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 633;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to set tmp region to current dirty rect",
      633LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
