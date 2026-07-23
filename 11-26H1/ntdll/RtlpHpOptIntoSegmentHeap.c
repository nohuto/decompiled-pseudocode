/*
 * XREFs of RtlpHpOptIntoSegmentHeap @ 0x1800CFF64
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800CFAEC (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x1800840B0 (RtlGetSuiteMask.c)
 *     RtlQueryPackageClaims @ 0x1800BFB80 (RtlQueryPackageClaims.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800DD450 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpHpFindImageNameInList @ 0x1800E6634 (RtlpHpFindImageNameInList.c)
 *     _wcsnicmp @ 0x180128DF0 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpOptIntoSegmentHeap(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // r15
  __int64 v3; // r14
  struct _PEB *v5; // rdi
  _BYTE *pShimData; // rax
  __int64 v7; // rcx
  char *v8; // rdx
  char v9; // r12
  char *v10; // r11
  char v11; // r15
  bool v12; // al
  bool v13; // r9
  char v14; // al
  char v15; // r9
  char v16; // al
  char v17; // r9
  int v18; // eax
  char v19; // al
  char v20; // r9
  int v21; // eax
  char v22; // al
  char v23; // r9
  int v24; // eax
  char v25; // r9
  unsigned int v26; // edi
  _PS_PKG_CLAIM PkgClaim; // [rsp+80h] [rbp-39h] BYREF
  unsigned int *v28; // [rsp+88h] [rbp-31h]
  __int64 v29; // [rsp+90h] [rbp-29h]
  struct _PEB *v30; // [rsp+98h] [rbp-21h]
  WCHAR String1[8]; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-9h]
  int v33; // [rsp+C0h] [rbp+7h]
  __int16 v34; // [rsp+C4h] [rbp+Bh]
  char v35; // [rsp+C6h] [rbp+Dh]
  __int64 v36; // [rsp+C7h] [rbp+Eh]
  char v37; // [rsp+CFh] [rbp+16h]
  __int64 v38; // [rsp+D0h] [rbp+17h]

  v2 = a2;
  v28 = a2;
  v3 = a1;
  v29 = a1;
  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    return 0LL;
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) != 0 )
  {
    *a2 = ((unsigned int)RtlpLowFragHeapGlobalFlags >> 5) & 1;
    return 1LL;
  }
  PkgClaim = 0LL;
  v5 = NtCurrentPeb();
  *a2 = 0;
  v30 = v5;
  pShimData = v5->pShimData;
  if ( !pShimData )
    goto LABEL_63;
  if ( *((_DWORD *)pShimData + 130) < 0x11C0u
    || !*((_DWORD *)pShimData + 1136)
    || (v7 = *((unsigned int *)pShimData + 1137), !(_DWORD)v7) )
  {
    if ( (pShimData[4530] & 4) != 0 )
    {
      if ( (pShimData[4522] & 0x40) != 0 )
      {
        *a2 = 1;
        return 1;
      }
      return 0;
    }
LABEL_63:
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      return 1;
    if ( RtlQueryActivationContextApplicationSettings(
           0,
           0LL,
           (PWSTR)L"http://schemas.microsoft.com/SMI/2020/WindowsSettings",
           (PWSTR)L"heapType",
           String1,
           0xFuLL,
           0LL) >= 0
      && !wcsnicmp(String1, L"SegmentHeap", 0xFuLL) )
    {
      v26 = 1;
      *v2 = 1;
      return v26;
    }
    if ( (v5->BitField & 0x10) != 0 )
    {
      v26 = 1;
      if ( RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, &PkgClaim, 0LL) < 0
        || (PkgClaim.Flags & 0x88000) == 0 )
      {
        return v26;
      }
    }
    else if ( v5->ProcessParameters->HeapPartitionName.Buffer || v3 && (unsigned int)RtlpHpFindImageNameInList(v3) )
    {
      return 1;
    }
    return 0;
  }
  v8 = &pShimData[v7];
  v37 = 0;
  *(_DWORD *)String1 = 1114168;
  *(_DWORD *)((char *)&String1[4] + 1) = 0;
  *(WCHAR *)((char *)&String1[6] + 1) = 0;
  HIBYTE(String1[7]) = 0;
  v36 = 1745420291LL;
  v33 = -65536;
  wmemcpy(&String1[2], L"*0", 2);
  v38 = 0LL;
  v34 = 0;
  v9 = 0;
  LOBYTE(String1[4]) = 22;
  v32 = 0uLL;
  v35 = 0;
  if ( pShimData[v7 + 2] >> 4 != 1 )
    goto LABEL_55;
  if ( !v8[3] )
  {
    if ( v8[8] == 22 && *(_WORD *)v8 == 56 && v8[4] == 42 )
      goto LABEL_16;
LABEL_55:
    v25 = 0;
    goto LABEL_56;
  }
  if ( v8[8] == 22 )
    goto LABEL_55;
LABEL_16:
  v10 = &v8[*((unsigned __int16 *)v8 + 3) - 48];
  v11 = 32;
  v12 = (unsigned __int8)v8[8] >= 0x11u && (v10[50] & 1) != 0;
  v13 = v12;
  if ( (unsigned __int8)v8[8] >= 0x12u && (v10[50] & 2) != 0 )
    v14 = 2;
  else
    v14 = 0;
  v15 = v14 | v13 & 0xFD;
  if ( (unsigned __int8)v8[8] >= 0x13u && (v10[50] & 4) != 0 )
    v16 = 4;
  else
    v16 = 0;
  v17 = v16 | v15 & 0xFB;
  if ( (unsigned __int8)v8[8] < 0x14u || (v18 = 1, (v10[50] & 8) == 0) )
    v18 = 0;
  if ( v18 )
    v9 = v8[43] & 1;
  if ( (unsigned __int8)v8[8] >= 0x14u && (v10[50] & 8) != 0 )
    v19 = 8;
  else
    v19 = 0;
  v20 = v19 | v17 & 0xF7;
  if ( (unsigned __int8)v8[8] < 0x15u || (v21 = 1, (v10[50] & 0x10) == 0) )
    v21 = 0;
  if ( v21 )
    v9 = v9 & 0xFD | (2 * ((v8[43] & 2) != 0));
  if ( (unsigned __int8)v8[8] >= 0x15u && (v10[50] & 0x10) != 0 )
    v22 = 16;
  else
    v22 = 0;
  v23 = v22 | v20 & 0xEF;
  if ( (unsigned __int8)v8[8] < 0x16u || (v24 = 1, (v10[50] & 0x20) == 0) )
    v24 = 0;
  if ( v24 )
    v9 = v9 & 0xFB | (4 * ((v8[43] & 4) != 0));
  if ( (unsigned __int8)v8[8] < 0x16u || (v10[50] & 0x20) == 0 )
    v11 = 0;
  v3 = v29;
  v25 = v11 | v23 & 0xDF;
  v2 = v28;
LABEL_56:
  if ( (v25 & 8) == 0 )
  {
    v5 = v30;
    goto LABEL_63;
  }
  if ( (v9 & 1) == 0 )
    return 0;
  *v2 = 1;
  return 1;
}
