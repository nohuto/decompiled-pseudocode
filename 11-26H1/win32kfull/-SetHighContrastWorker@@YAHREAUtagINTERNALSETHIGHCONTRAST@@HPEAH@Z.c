/*
 * XREFs of ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402ACF70
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1400CC710 (--1-$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1401D3650 (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __report_rangecheckfailure @ 0x140297D70 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall SetHighContrastWorker(struct tagINTERNALSETHIGHCONTRAST *volatile a1, __int64 a2, unsigned int *a3)
{
  int v4; // esi
  unsigned __int64 v6; // rcx
  __int64 ProfileUserName; // r14
  unsigned int v8; // edi
  __int64 UserSessionState; // rax
  __int64 v10; // r10
  int v11; // r14d
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BYTE v17[24]; // [rsp+38h] [rbp-190h] BYREF
  unsigned __int16 v18[40]; // [rsp+50h] [rbp-178h] BYREF
  char v19[256]; // [rsp+A0h] [rbp-128h] BYREF

  v4 = a2;
  if ( *((_WORD *)a1 + 4) >= 0x100u )
    return 0LL;
  if ( *((_QWORD *)a1 + 2) )
    memmove(v19, *((const void **)a1 + 2), *((unsigned __int16 *)a1 + 4));
  v6 = *((_WORD *)a1 + 4) & 0xFFFE;
  if ( v6 >= 0x100 )
    _report_rangecheckfailure();
  *(_WORD *)&v19[v6] = 0;
  if ( v4 )
  {
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)v17);
    ProfileUserName = CreateProfileUserName(v17);
    RtlStringCchPrintfW(v18, 40LL, L"%d", *((unsigned int *)a1 + 1));
    v8 = FastWriteProfileStringW(ProfileUserName, 29LL, L"Flags", v18);
    *a3 = v8;
    if ( *((_QWORD *)a1 + 2) )
      v8 &= FastWriteProfileStringW(ProfileUserName, 29LL, L"High Contrast Scheme", v19);
    Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)v17);
  }
  else
  {
    *a3 = 1;
    v8 = 0;
  }
  if ( *a3 )
  {
    UserSessionState = W32GetUserSessionState(v6, a2);
    v10 = UserSessionState;
    v11 = *(_DWORD *)(UserSessionState + 21076);
    v12 = v4 == 0 ? 4 : 0;
    if ( *((_QWORD *)a1 + 2) )
      RtlStringCchCopyW((char *)(UserSessionState + 21088), 128LL, v19);
    *(_DWORD *)(v10 + 21076) = *((_DWORD *)a1 + 1) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    if ( (*((_DWORD *)a1 + 1) & 0x1000) == 0 )
    {
      if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
        v15 = v12 | (2LL * (v11 & 1) + 8);
      else
        v15 = v12 | 9;
      PostWinlogonMessage(1026LL, v15);
    }
    DwmNotifyWindowsMarginsChangeByTheme(v14, v13);
  }
  return v8;
}
