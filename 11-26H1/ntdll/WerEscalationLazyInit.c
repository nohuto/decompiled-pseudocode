/*
 * XREFs of WerEscalationLazyInit @ 0x1800D6160
 * Callers:
 *     WerReportSQMEvent @ 0x1800D5E20 (WerReportSQMEvent.c)
 *     ShipAssert @ 0x1800D5E70 (ShipAssert.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     RtlLengthSidAsUnicodeString @ 0x18003C5D0 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x18003CD70 (RtlConvertSidToUnicodeString.c)
 *     StringCchCopyW @ 0x1800D6524 (StringCchCopyW.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800D67AC (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D6CCC (WerpEscalationIsWMRSendStringSet.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x180120A94 (HashStringToDwordCaseInsensitiveLen.c)
 *     WerpEscalationIsDisabled @ 0x18013AEEC (WerpEscalationIsDisabled.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801615B0 (NtOpenProcessToken.c)
 */

__int64 WerEscalationLazyInit()
{
  __int64 v0; // rax
  int appended; // ebx
  signed __int64 v2; // rdi
  wchar_t *v3; // r14
  STRSAFE_LPWSTR v4; // rsi
  unsigned int v5; // r15d
  HRESULT v6; // eax
  unsigned __int64 v7; // r11
  _WORD *i; // rcx
  wchar_t *v9; // r15
  unsigned __int16 v10; // bx
  _WORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v17; // eax
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+38h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-28h] BYREF
  __int128 v21; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+48h] BYREF
  int v23; // [rsp+B8h] [rbp+50h] BYREF
  int v24; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+60h] BYREF

  v0 = g_werEscalationData;
  Handle = 0LL;
  v22 = 0;
  v23 = 0;
  v25 = 0LL;
  appended = -1073741823;
  pszDest = 0LL;
  v2 = 0LL;
  v24 = 0;
  UnicodeString = 0LL;
  v21 = 0LL;
  if ( g_werEscalationData && g_sqmSessionHandle != -1 )
    return 0LL;
  if ( !g_disableEscalation )
  {
    g_disableEscalation = WerpEscalationIsDisabled();
    v0 = g_werEscalationData;
  }
  if ( v0 )
    goto LABEL_19;
  v25 = 568LL;
  appended = ZwAllocateVirtualMemory(-1LL, &pszDest, 0LL, &v25, 4096, 4);
  if ( appended >= 0 )
  {
    v2 = (signed __int64)pszDest;
    v3 = (STRSAFE_LPWSTR)((char *)pszDest + v25);
    v4 = pszDest + 284;
    if ( pszDest + 284 > (STRSAFE_LPWSTR)((char *)pszDest + v25) )
      goto LABEL_30;
    v5 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    v6 = StringCchCopyW(pszDest, 0x104uLL, NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147024774 )
      goto LABEL_21;
    for ( i = (_WORD *)(v7 + 2 * (v5 - 1LL)); (unsigned __int64)i > v7; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    *(_DWORD *)(v2 + 520) = HashStringToDwordCaseInsensitiveLen(i, v5 - (unsigned int)((__int64)((__int64)i - v7) >> 1));
    WerEscalationReadImageVersionInfoForModuleBaseSafe(NtCurrentPeb()->ImageBaseAddress, 0LL, &v21);
    *(_DWORD *)(v2 + 532) = v21;
    *(_QWORD *)(v2 + 524) = *((_QWORD *)&v21 + 1);
    appended = NtOpenProcessToken(-1LL, 8LL, &Handle);
    if ( appended < 0 )
      goto LABEL_21;
    v22 = (_DWORD)v3 - (_DWORD)v4;
    appended = NtQueryInformationToken(Handle, 1LL, v4, (unsigned int)((_DWORD)v3 - (_DWORD)v4), &v22);
    if ( appended < 0 )
      goto LABEL_21;
    v9 = &v4[4 * (((unsigned __int64)v22 + 7) >> 3)];
    if ( v9 > v3 )
      goto LABEL_30;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v4;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( (int)NtQueryInformationToken(Handle, 18LL, &v23, 4LL, &v22) >= 0 )
    {
      if ( v23 == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( v23 == 1 )
      {
        v17 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v4 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v4 + 1LL) - 1) + 8) == 500 )
          v17 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v17;
      }
    }
    appended = RtlLengthSidAsUnicodeString(*(unsigned __int8 **)(v2 + 536), &v24);
    if ( appended < 0 )
      goto LABEL_21;
    v10 = v24;
    v11 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v9;
    v12 = (unsigned __int16)(v10 + 90);
    *(_WORD *)(v2 + 546) = v12;
    if ( (wchar_t *)((char *)v9 + v12) > v3 )
    {
LABEL_30:
      appended = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((unsigned __int16 *)(v2 + 544), L"\\REGISTRY\\USER\\");
      v13 = *(_QWORD *)(v2 + 552);
      v14 = *(void **)(v2 + 536);
      v15 = (unsigned __int64)(unsigned __int16)*v11 >> 1;
      UnicodeString.MaximumLength = v10;
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)(v13 + 2 * v15);
      appended = RtlConvertSidToUnicodeString(&UnicodeString, v14, 0);
      if ( appended >= 0 )
      {
        *v11 += UnicodeString.Length;
        appended = RtlAppendUnicodeToString((unsigned __int16 *)(v2 + 544), L"\\Software\\Microsoft\\Windows");
        if ( appended >= 0 )
        {
          *(_DWORD *)(v2 + 564) = WerpEscalationIsWMRSendStringSet();
          v2 &= -(__int64)(_InterlockedCompareExchange64(&g_werEscalationData, v2, 0LL) != 0);
LABEL_19:
          if ( g_sqmSessionHandle != -1 )
            appended = 0;
        }
      }
    }
LABEL_21:
    if ( v2 )
      ZwFreeVirtualMemory(-1LL, &pszDest, &v25, 0x8000LL);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)appended;
}
