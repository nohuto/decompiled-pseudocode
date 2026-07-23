/*
 * XREFs of WerEscalationLazyInit @ 0x1800D3120
 * Callers:
 *     WerReportSQMEvent @ 0x1800D2DE0 (WerReportSQMEvent.c)
 *     ShipAssert @ 0x1800D2E30 (ShipAssert.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     RtlLengthSidAsUnicodeString @ 0x180026B40 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1800272E0 (RtlConvertSidToUnicodeString.c)
 *     StringCchCopyW @ 0x1800D34E4 (StringCchCopyW.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800D376C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D3C8C (WerpEscalationIsWMRSendStringSet.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x180120844 (HashStringToDwordCaseInsensitiveLen.c)
 *     WerpEscalationIsDisabled @ 0x18013AC5C (WerpEscalationIsDisabled.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801614B0 (NtOpenProcessToken.c)
 */

__int64 WerEscalationLazyInit()
{
  __int64 v0; // rax
  NTSTATUS appended; // ebx
  signed __int64 v2; // rdi
  char *v3; // r14
  char *v4; // rsi
  unsigned int v5; // r15d
  HRESULT v6; // eax
  unsigned __int64 v7; // r11
  _WORD *i; // rcx
  char *v9; // r15
  unsigned __int16 v10; // bx
  _WORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v17; // eax
  HANDLE TokenHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-30h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-28h] BYREF
  __int128 v21; // [rsp+50h] [rbp-18h]
  ULONG ReturnLength; // [rsp+B0h] [rbp+48h] BYREF
  int TokenInformation; // [rsp+B8h] [rbp+50h] BYREF
  ULONG StringLength; // [rsp+C0h] [rbp+58h] BYREF
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+60h] BYREF

  v0 = g_werEscalationData;
  TokenHandle = 0LL;
  ReturnLength = 0;
  TokenInformation = 0;
  RegionSize = 0LL;
  appended = -1073741823;
  BaseAddress = 0LL;
  v2 = 0LL;
  StringLength = 0;
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
  RegionSize = 568LL;
  appended = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( appended >= 0 )
  {
    v2 = (signed __int64)BaseAddress;
    v3 = (char *)BaseAddress + RegionSize;
    v4 = (char *)BaseAddress + 568;
    if ( (char *)BaseAddress + 568 > (char *)BaseAddress + RegionSize )
      goto LABEL_30;
    v5 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    v6 = StringCchCopyW((STRSAFE_LPWSTR)BaseAddress, 0x104uLL, NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
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
    WerEscalationReadImageVersionInfoForModuleBaseSafe(NtCurrentPeb()->ImageBaseAddress);
    *(_DWORD *)(v2 + 532) = v21;
    *(_QWORD *)(v2 + 524) = *((_QWORD *)&v21 + 1);
    appended = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
    if ( appended < 0 )
      goto LABEL_21;
    ReturnLength = (_DWORD)v3 - (_DWORD)v4;
    appended = NtQueryInformationToken(TokenHandle, 1u, v4, (_DWORD)v3 - (_DWORD)v4, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_21;
    v9 = &v4[8 * (((unsigned __int64)ReturnLength + 7) >> 3)];
    if ( v9 > v3 )
      goto LABEL_30;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v4;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( NtQueryInformationToken(TokenHandle, 0x12u, &TokenInformation, 4u, &ReturnLength) >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( TokenInformation == 1 )
      {
        v17 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v4 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v4 + 1LL) - 1) + 8) == 500 )
          v17 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v17;
      }
    }
    appended = RtlLengthSidAsUnicodeString(*(PSID *)(v2 + 536), &StringLength);
    if ( appended < 0 )
      goto LABEL_21;
    v10 = StringLength;
    v11 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v9;
    v12 = (unsigned __int16)(v10 + 90);
    *(_WORD *)(v2 + 546) = v12;
    if ( &v9[v12] > v3 )
    {
LABEL_30:
      appended = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\REGISTRY\\USER\\");
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
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\Software\\Microsoft\\Windows");
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
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)appended;
}
