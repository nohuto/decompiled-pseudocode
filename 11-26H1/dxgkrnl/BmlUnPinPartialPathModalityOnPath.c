/*
 * XREFs of BmlUnPinPartialPathModalityOnPath @ 0x1402E0800
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1402D9F44 (BmlPinNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402E029C (_BmlGetPathModeListForPathTargetModes.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1402E0BBC (BmlUnPinAllPathsPartialModalityFromSource.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BmlUnPinPartialPathModalityOnPath(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // r15
  __int64 v7; // rbp
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct DMMVIDPNPRESENTPATH *v11; // rbx
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64, __int64, __int64, __int64); // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  int v19; // r14d
  __int64 result; // rax
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, __int64); // rax
  __int64 v22; // [rsp+70h] [rbp+8h]
  int v23; // [rsp+80h] [rbp+18h]

  v3 = a3;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3011;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3012;
  }
  v6 = 120 * v3;
  v7 = v3;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(120 * v3 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(120 * v3 + a1 + 16) + 28LL));
  v11 = Path;
  if ( Path )
  {
    v12 = a2 + 289;
    v13 = *(_QWORD *)(a2 + 48);
    v14 = a2 + 96;
    v15 = *(_QWORD *)(v13 + 488);
    v22 = v15;
    if ( *((_DWORD *)Path + 29) != 254 )
    {
      v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v15 + 88);
      LOBYTE(v15) = 1;
      v23 = v16(v14 & -(__int64)(v12 != 0), v9, v10, v15);
      if ( v23 < 0 )
      {
        WdLogSingleEntry4(
          3LL,
          v7,
          a2,
          *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
          *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL));
        result = (unsigned int)v23;
        WdLogGlobalForLineNumber = 3058;
        return result;
      }
      v15 = v22;
    }
    if ( *((_DWORD *)v11 + 28) == 254
      || (v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v15 + 72),
          LOBYTE(v15) = 1,
          v19 = v21(
                  v14 & -(__int64)(v12 != 0),
                  *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
                  *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL),
                  v15),
          v19 >= 0) )
    {
      v18 = (unsigned __int64)DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v11 + 12));
      if ( *(_QWORD *)(v18 + 144)
        && (LOBYTE(v17) = 1,
            v19 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v13 + 504) + 56LL))(
                    v18 & -(__int64)(v18 != -137LL),
                    v17),
            v19 < 0) )
      {
        WdLogSingleEntry4(
          3LL,
          v7,
          a2,
          *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
          *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL));
        WdLogGlobalForLineNumber = 3102;
      }
      else
      {
        v19 = 0;
      }
      ReferenceCounted::Release((ReferenceCounted *)(v18 + 88));
    }
    else
    {
      WdLogSingleEntry4(
        3LL,
        v7,
        a2,
        *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
        *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL));
      WdLogGlobalForLineNumber = 3079;
    }
    return (unsigned int)v19;
  }
  else
  {
    WdLogSingleEntry4(3LL, v7, a2, v9, v10);
    result = 3223192345LL;
    WdLogGlobalForLineNumber = 3025;
  }
  return result;
}
