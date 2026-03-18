/*
 * XREFs of NtUserSetClipboardData @ 0x14024D260
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140001940 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x14002BA2C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserGetLastError @ 0x1400C90C4 (UserGetLastError.c)
 *     _SetClipboardData @ 0x140111EF0 (_SetClipboardData.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1401DE440 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x140275B0C (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402832A8 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, char *a2, ULONG64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  const wchar_t *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rdx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool HasUILimit; // al
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct tagTHREADINFO *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  const char *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edi
  __int64 v28; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct tagTHREADINFO *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // rcx
  __int64 v42; // r8
  int LastError; // eax
  int v44; // eax
  bool v45; // sf
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v51; // [rsp+40h] [rbp-78h] BYREF
  const char *v52; // [rsp+48h] [rbp-70h] BYREF
  __int64 v53; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v54[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v55[2]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v56; // [rsp+78h] [rbp-40h]
  const wchar_t *v58; // [rsp+D8h] [rbp+20h] BYREF

  v56 = 0LL;
  v5 = EnterCrit(0LL, 0LL);
  v8 = (const wchar_t *)(*((_QWORD *)PtiCurrent(v7, v6) + 58) + 976LL);
  v53 = (__int64)v8;
  v11 = *((_QWORD *)PtiCurrent(v10, v9) + 58);
  v12 = *(_DWORD *)(v11 + 56);
  v14 = PtiCurrent(v11, v13);
  v55[0] = PsGetProcessCreateTimeQuadPart(**((PEPROCESS **)v14 + 58));
  EtwTraceUiAuditWriteClipboard(v12, v55);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v5 + 464), 4u);
  }
  else
  {
    v20 = PtiCurrent(v16, v15);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v20 + 132, 0, 0) & 0x20000000) != 0 )
      v18 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v20, v19) + 58) + 752LL) + 24LL) & 4;
    else
      v18 = 0LL;
    HasUILimit = (_DWORD)v18 != 0;
  }
  if ( HasUILimit )
  {
    EtwTraceUiLimitWriteClipboard(v12, v55);
    if ( (unsigned int)dword_14039BB88 > 5 && tlgKeywordOn((__int64)&dword_14039BB88, 0x400000000000LL) )
    {
      v53 = (__int64)v8;
      LODWORD(v58) = -2147024891;
      v23 = "RestrictedThread";
      v52 = "RestrictedThread";
      v51 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v21,
        (int)&unk_140369083,
        v22,
        (__int64)&v51,
        (void **)&v52,
        (__int64)&v58,
        (const wchar_t **)&v53);
    }
    else
    {
      v23 = "RestrictedThread";
    }
    if ( (unsigned int)dword_14039BBC0 <= 5 || !tlgKeywordOn((__int64)&dword_14039BBC0, 1LL) )
      goto LABEL_15;
    goto LABEL_14;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
  if ( CurrentProcessWin32Process )
  {
    v31 = -*(_QWORD *)CurrentProcessWin32Process;
    v30 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v30;
  }
  if ( *(_DWORD *)(CurrentProcessWin32Process + 868) )
  {
    v32 = PtiCurrent(v31, v30);
    v33 = *((_QWORD *)v32 + 62);
    v34 = *(_QWORD *)(v33 + 40);
    if ( (!*(_QWORD *)(W32GetUserSessionState(v33, v35) + 18888) || !(unsigned int)ForegroundInputOwnerMatch(v32, 1LL))
      && v32 != *(struct tagTHREADINFO **)(v34 + 80) )
    {
      v36 = *(_QWORD *)(v34 + 112);
      if ( !v36 || *(struct tagTHREADINFO **)(v36 + 16) != v32 )
      {
        if ( (unsigned int)dword_14039BB88 > 5 && tlgKeywordOn((__int64)&dword_14039BB88, 0x400000000000LL) )
        {
          v51 = (__int64)v8;
          LODWORD(v58) = -2147024891;
          v23 = "NoForeground";
          v52 = "NoForeground";
          v53 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v37,
            (int)&unk_140369083,
            v38,
            (__int64)&v53,
            (void **)&v52,
            (__int64)&v58,
            (const wchar_t **)&v51);
        }
        else
        {
          v23 = "NoForeground";
        }
        if ( (unsigned int)dword_14039BBC0 <= 5 || !tlgKeywordOn((__int64)&dword_14039BBC0, 1LL) )
          goto LABEL_15;
        goto LABEL_14;
      }
    }
    if ( a1 != 1 && a1 != 13 )
    {
      if ( (unsigned int)dword_14039BB88 > 5 && tlgKeywordOn((__int64)&dword_14039BB88, 0x400000000000LL) )
      {
        v51 = (__int64)v8;
        LODWORD(v58) = -2147024891;
        v23 = "UnsupportedFormatForLowBoxApp";
        v52 = "UnsupportedFormatForLowBoxApp";
        v53 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v39,
          (int)&unk_140369083,
          v40,
          (__int64)&v53,
          (void **)&v52,
          (__int64)&v58,
          (const wchar_t **)&v51);
      }
      else
      {
        v23 = "UnsupportedFormatForLowBoxApp";
      }
      if ( (unsigned int)dword_14039BBC0 <= 5 || !tlgKeywordOn((__int64)&dword_14039BBC0, 1LL) )
        goto LABEL_15;
LABEL_14:
      LODWORD(v58) = -2147024891;
      v52 = v23;
      v51 = (__int64)v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v24,
        (__int64)&unk_140369043,
        v25,
        v26,
        &v52,
        (__int64)&v58,
        &v51);
LABEL_15:
      v27 = 0;
      UserSetLastError(5);
      goto LABEL_58;
    }
  }
  v41 = (__int64 *)MmUserProbeAddress;
  if ( a3 < MmUserProbeAddress )
    v41 = (__int64 *)a3;
  v56 = *v41;
  v27 = SetClipboardData(a1, a2, v56 != 0, HIDWORD(v56) != 0);
  if ( (unsigned int)dword_14039BB88 > 5 && tlgKeywordOn((__int64)&dword_14039BB88, 0x400000000000LL) )
  {
    v51 = (__int64)v8;
    if ( v27 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    LODWORD(v58) = LastError;
    v52 = "FunctionExit";
    v54[0] = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v28,
      (int)&unk_140369083,
      v42,
      (__int64)v54,
      (void **)&v52,
      (__int64)&v58,
      (const wchar_t **)&v51);
  }
  if ( !v27 )
  {
    v44 = UserGetLastError();
    v45 = v44 < 0;
    if ( v44 > 0 )
      v45 = 1;
    if ( v45 && (unsigned int)dword_14039BBC0 > 5 && tlgKeywordOn((__int64)&dword_14039BBC0, 1LL) )
    {
      v58 = v8;
      v46 = UserGetLastError();
      if ( v46 > 0 )
        v46 = (unsigned __int16)v46 | 0x80070000;
      LODWORD(v53) = v46;
      v54[0] = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v47,
        (__int64)&unk_140369043,
        v48,
        v49,
        v54,
        (__int64)&v53,
        &v58);
    }
  }
LABEL_58:
  UserSessionSwitchLeaveCrit(v28);
  return v27;
}
