/*
 * XREFs of RtlpHpOptIntoSegmentHeap @ 0x1800D424C
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800D3DD4 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x180063C60 (RtlGetSuiteMask.c)
 *     RtlQueryPackageClaims @ 0x1800C24B0 (RtlQueryPackageClaims.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800D5700 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpHpFindImageNameInList @ 0x1800E7BD4 (RtlpHpFindImageNameInList.c)
 *     _wcsnicmp @ 0x180129080 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpOptIntoSegmentHeap(__int64 a1, unsigned int *a2)
{
  char v2; // r14
  unsigned int *v3; // r8
  __int64 v4; // rsi
  struct _PEB *v5; // rdi
  _BYTE *pShimData; // rax
  unsigned int v7; // edi
  __int64 v9; // rcx
  char *v10; // rdx
  char v11; // r9
  char v12; // r10
  char *v13; // r11
  char v14; // di
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  bool v19; // al
  bool v20; // r10
  int v21; // eax
  char v22; // r10
  int v23; // eax
  char v24; // al
  char v25; // r10
  int v26; // eax
  char v27; // r10
  char v28; // al
  __int64 v30; // [rsp+88h] [rbp-31h] BYREF
  struct _PEB *v31; // [rsp+90h] [rbp-29h]
  __int64 v32; // [rsp+98h] [rbp-21h]
  wchar_t String1[8]; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-9h]
  int v35; // [rsp+C0h] [rbp+7h]
  __int16 v36; // [rsp+C4h] [rbp+Bh]
  char v37; // [rsp+C6h] [rbp+Dh]
  __int64 v38; // [rsp+C7h] [rbp+Eh]
  char v39; // [rsp+CFh] [rbp+16h]
  __int64 v40; // [rsp+D0h] [rbp+17h]

  v2 = 8;
  v3 = a2;
  v32 = a1;
  v4 = a1;
  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    return 0LL;
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) == 0 )
  {
    v30 = 0LL;
    v5 = NtCurrentPeb();
    *a2 = 0;
    v31 = v5;
    pShimData = v5->pShimData;
    if ( !pShimData )
      goto LABEL_6;
    if ( *((_DWORD *)pShimData + 130) < 0x11C0u
      || !*((_DWORD *)pShimData + 1136)
      || (v9 = *((unsigned int *)pShimData + 1137), !(_DWORD)v9) )
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
      goto LABEL_6;
    }
    v10 = &pShimData[v9];
    v39 = 0;
    *(_DWORD *)String1 = 1114168;
    wmemcpy(&String1[2], L"«0", 2);
    v35 = -65536;
    v36 = 0;
    v37 = 0;
    *(_DWORD *)((char *)&String1[4] + 1) = 0;
    *(wchar_t *)((char *)&String1[6] + 1) = 0;
    HIBYTE(String1[7]) = 0;
    LOBYTE(String1[4]) = 21;
    v38 = 436273155LL;
    v11 = 26;
    v40 = 0LL;
    v34 = 0uLL;
    if ( (unsigned __int8)v10[2] >> 4 == 1 )
    {
      if ( v10[3] )
      {
        if ( v10[8] != 21 )
        {
LABEL_30:
          v13 = &v10[*((unsigned __int16 *)v10 + 3) - 48];
          v14 = 2;
          if ( (unsigned __int8)v10[8] < 0xEu || (v15 = 1, (v13[49] & 0x20) == 0) )
            v15 = 0;
          if ( v15 )
            v11 = v10[42] & 3 | 0x18;
          if ( (unsigned __int8)v10[8] < 0xFu || (v16 = 1, (v13[49] & 0x40) == 0) )
            v16 = 0;
          if ( v16 )
            v11 = v11 & 0xFB | (4 * ((v10[42] & 4) != 0));
          if ( (unsigned __int8)v10[8] < 0x10u || (v17 = 1, v13[49] >= 0) )
            v17 = 0;
          if ( v17 )
            v11 = v11 & 0xF7 | (8 * ((v10[42] & 8) != 0));
          if ( (unsigned __int8)v10[8] < 0x11u || (v18 = 1, (v13[50] & 1) == 0) )
            v18 = 0;
          if ( v18 )
            v11 = v11 & 0xEF | (16 * ((v10[42] & 0x10) != 0));
          v19 = (unsigned __int8)v10[8] >= 0x11u && (v13[50] & 1) != 0;
          v20 = v19;
          if ( (unsigned __int8)v10[8] < 0x12u || (v21 = 1, (v13[50] & 2) == 0) )
            v21 = 0;
          if ( v21 )
            v11 = v11 & 0xDF | (32 * ((v10[42] & 0x20) != 0));
          if ( (unsigned __int8)v10[8] < 0x12u || (v13[50] & 2) == 0 )
            v14 = 0;
          v22 = v14 | v20 & 0xFD;
          if ( (unsigned __int8)v10[8] < 0x13u || (v23 = 1, (v13[50] & 4) == 0) )
            v23 = 0;
          if ( v23 )
            v11 = v11 & 0xBF | (((v10[42] & 0x40) != 0) << 6);
          if ( (unsigned __int8)v10[8] >= 0x13u && (v13[50] & 4) != 0 )
            v24 = 4;
          else
            v24 = 0;
          v25 = v24 | v22 & 0xFB;
          if ( (unsigned __int8)v10[8] < 0x14u || (v26 = 1, (v13[50] & 8) == 0) )
            v26 = 0;
          if ( v26 )
            v11 = v11 & 0x7F | ((unsigned __int8)v10[42] >> 7 << 7);
          if ( (unsigned __int8)v10[8] < 0x14u || (v13[50] & 8) == 0 )
            v2 = 0;
          v27 = v2 | v25 & 0xF7;
          if ( (unsigned __int8)v10[8] >= 0x15u && (v13[50] & 0x10) != 0 )
            v28 = 16;
          else
            v28 = 0;
          v3 = a2;
          v5 = v31;
          v12 = v28 | v27 & 0xEF;
          goto LABEL_19;
        }
      }
      else if ( v10[8] == 21 && *(_WORD *)v10 == 56 && v10[4] == -85 )
      {
        goto LABEL_30;
      }
    }
    v12 = 0;
LABEL_19:
    if ( (v12 & 4) != 0 )
    {
      if ( (v11 & 0x40) != 0 )
      {
        *v3 = 1;
        return 1;
      }
      return 0;
    }
    v4 = v32;
LABEL_6:
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      return 1;
    if ( (int)RtlQueryActivationContextApplicationSettings(
                0LL,
                0LL,
                L"http://schemas.microsoft.com/SMI/2020/WindowsSettings",
                L"heapType",
                String1,
                15LL,
                0LL) >= 0
      && !wcsnicmp(String1, L"SegmentHeap", 0xFuLL) )
    {
      v7 = 1;
      *a2 = 1;
      return v7;
    }
    if ( (v5->BitField & 0x10) != 0 )
    {
      v7 = 1;
      if ( (int)RtlQueryPackageClaims(-4LL, 0LL, 0LL, 0LL, 0LL, 0LL, &v30, 0LL) < 0 || (v30 & 0x88000) == 0 )
        return v7;
    }
    else if ( v5->ProcessParameters->HeapPartitionName.Buffer || v4 && (unsigned int)RtlpHpFindImageNameInList(v4) )
    {
      return 1;
    }
    return 0;
  }
  *a2 = ((unsigned int)RtlpLowFragHeapGlobalFlags >> 5) & 1;
  return 1LL;
}
