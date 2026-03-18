/*
 * XREFs of BmlUnPinSourceMode @ 0x1402E0A6C
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1402DFF2C (_BmlGetPathModeListForPath.c)
 *     BmlFunctionalizePath @ 0x140342374 (BmlFunctionalizePath.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1402E0BBC (BmlUnPinAllPathsPartialModalityFromSource.c)
 */

__int64 __fastcall BmlUnPinSourceMode(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct DMMVIDPNPRESENTPATH *v10; // rbp
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // esi

  v3 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3159;
  }
  result = BmlUnPinAllPathsPartialModalityFromSource(a1, a2, (unsigned __int16)v3);
  if ( (int)result >= 0 )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(
             (DMMVIDPNTOPOLOGY *)(a2 + 96),
             *(_DWORD *)(*(_QWORD *)(120 * v3 + a1 + 16) + 24LL),
             *(_DWORD *)(*(_QWORD *)(120 * v3 + a1 + 16) + 28LL));
    v10 = Path;
    if ( Path )
    {
      v12 = (unsigned __int64)DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
      if ( *(_QWORD *)(v12 + 144)
        && (LOBYTE(v11) = 1,
            v14 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v13 + 496) + 48LL))(
                    v12 & -(__int64)(v12 != -137LL),
                    v11),
            v14 < 0) )
      {
        WdLogSingleEntry4(
          3LL,
          v10,
          a2,
          *(unsigned int *)(*((_QWORD *)v10 + 11) + 24LL),
          *(unsigned int *)(*((_QWORD *)v10 + 12) + 24LL));
        WdLogGlobalForLineNumber = 3207;
      }
      else
      {
        v14 = 0;
      }
      ReferenceCounted::Release((ReferenceCounted *)(v12 + 88));
      return (unsigned int)v14;
    }
    else
    {
      WdLogSingleEntry4(3LL, v3, a2, v8, v9);
      result = 3223192345LL;
      WdLogGlobalForLineNumber = 3179;
    }
  }
  return result;
}
