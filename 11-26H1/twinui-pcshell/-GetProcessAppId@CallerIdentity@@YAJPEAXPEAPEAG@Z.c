/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C1E58
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x1800C1700 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C1C60 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18027C6DC (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1802B6B50 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetAppID@RecentAppsCache@Discover@PenWorkspace@@AEAAJKPEAPEAG@Z @ 0x1803EBED4 (-GetAppID@RecentAppsCache@Discover@PenWorkspace@@AEAAJKPEAPEAG@Z.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x180576FE4 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x1800C24F4 (-Free@ARI@@YAXPEAX@Z.c)
 *     ??1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ @ 0x1800C2678 (--1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802B01C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  void *v4; // rdx
  signed int LastError; // ebx
  void *v6; // rbx
  NTSTATUS v7; // eax
  unsigned __int128 v8; // rax
  PVOID v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  const UNICODE_STRING *v12; // rdi
  void *v13; // rdx
  _QWORD *v15; // r15
  unsigned __int16 *v16; // rdi
  __int64 v17; // rax
  int v18; // r14d
  const wchar_t *v19; // rcx
  wchar_t *v20; // rax
  _BYTE *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // r12d
  __int64 v25; // r14
  unsigned __int64 v26; // rdi
  unsigned int v27; // edi
  void *v28; // rdx
  _WORD *v29; // rbx
  __int64 v30; // rcx
  _WORD *v31; // rdx
  __int64 v32; // r8
  __int16 v33; // ax
  _WORD *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  _WORD *v37; // r12
  unsigned __int16 *v38; // r13
  __int64 v39; // r15
  const wchar_t *v40; // rcx
  wchar_t *v41; // rax
  __int64 v42; // rax
  __int64 v43; // r13
  _WORD *v44; // rbx
  __int64 v45; // rax
  char *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  size_t v50; // rdi
  _WORD *v51; // rcx
  __int64 v52; // rax
  _QWORD *v53; // rax
  _WORD *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  void *v57; // rdx
  __int64 v58; // rbx
  void *v59; // rdx
  unsigned int ReturnLength; // [rsp+20h] [rbp-60h]
  ULONG TokenInformationLength; // [rsp+30h] [rbp-50h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-48h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-40h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v65; // [rsp+60h] [rbp-20h]
  __int128 v66; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v65 = a2;
  *a2 = 0LL;
  *(_OWORD *)P = 0LL;
  TokenHandle = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
    LastError = GetLastError();
    if ( LastError )
    {
      v9 = P[0];
      goto LABEL_17;
    }
  }
  v6 = TokenHandle;
  TokenInformationLength = 0;
  v7 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, &TokenInformationLength);
  if ( v7 == -1073741789 )
  {
    v8 = TokenInformationLength * (unsigned __int128)0x10u;
    *(_QWORD *)&DestinationString.Length = 0LL;
    if ( is_mul_ok(TokenInformationLength, 0x10uLL) )
    {
      *(_QWORD *)&v8 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, DWORD2(v8), 16LL * TokenInformationLength);
      v9 = (PVOID)v8;
      if ( (_QWORD)v8 )
      {
        memset_0((void *)v8, 0, TokenInformationLength);
        v10 = NtQueryInformationToken(v6, TokenSecurityAttributes, v9, TokenInformationLength, &TokenInformationLength);
        if ( v10 < 0 )
        {
          LastError = RtlNtStatusToDosErrorNoTeb(v10);
          ARI::Free(v9, v59);
        }
        else
        {
          if ( *((_DWORD *)v9 + 1) )
          {
            DestinationString = 0LL;
            RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
            v11 = 0;
            v66 = 0LL;
            while ( v11 < *((_DWORD *)v9 + 1) )
            {
              v12 = (const UNICODE_STRING *)(*((_QWORD *)v9 + 1) + 40LL * v11);
              if ( !RtlCompareUnicodeString(&DestinationString, v12, 1u) )
              {
                P[1] = (PVOID)v12;
                P[0] = v9;
                ARI::Free(0LL, v13);
                LastError = 0;
                goto LABEL_15;
              }
              ++v11;
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
          LastError = 1168;
        }
        goto LABEL_14;
      }
    }
    else
    {
      v9 = 0LL;
    }
    ARI::Free(v9, *((void **)&v8 + 1));
    LastError = 8;
  }
  else if ( v7 )
  {
    LastError = RtlNtStatusToDosErrorNoTeb(v7);
  }
  else
  {
    LastError = 1359;
  }
LABEL_14:
  v9 = P[0];
LABEL_15:
  if ( TokenHandle != (void *)-4LL )
    CloseHandle(TokenHandle);
LABEL_17:
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError == -2147023728 || LastError == -2147024891 )
    goto LABEL_20;
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)LastError);
LABEL_20:
    if ( v9 )
      ARI::Free(v9, v4);
    return (unsigned int)LastError;
  }
  v15 = P[1];
  v16 = (unsigned __int16 *)*((_QWORD *)P[1] + 4);
  v17 = v16[8] >> 1;
  v18 = v17 + 1;
  if ( (_DWORD)v17 == -1 )
  {
    v44 = (_WORD *)(2 * v17);
    memcpy_0(0LL, *((const void **)v16 + 3), 2 * v17);
    *v44 = 0;
LABEL_51:
    v27 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_52;
  }
  v19 = (const wchar_t *)*((_QWORD *)v16 + 1);
  TokenInformationLength = *v16 >> 1;
  v20 = wcschr(v19, 0x5Fu);
  v21 = (_BYTE *)*((_QWORD *)v16 + 1);
  v22 = ((char *)(v20 + 1) - v21) >> 1;
  v23 = (unsigned int)(v22 + 13);
  v24 = v22 + 14;
  if ( (_DWORD)v22 == -14 )
  {
    memcpy_0(0LL, v21, 0x1FFFFFFE4uLL);
    v45 = TokenInformationLength - 13;
    MEMORY[0x1FFFFFFE4] = *(_OWORD *)&v21[2 * v45];
    MEMORY[0x1FFFFFFF4] = *(_QWORD *)&v21[2 * v45 + 16];
    MEMORY[0x1FFFFFFFC] = *(_WORD *)&v21[2 * v45 + 24];
    *(_WORD *)(2 * v23) = 0;
    if ( !(v24 + v18) )
    {
      *(_WORD *)(2 * v23) = 33;
      v46 = (char *)(2 * v23 + 2);
      v47 = v15[4];
      v48 = *(unsigned __int16 *)(v47 + 16) >> 1;
      if ( ~(_DWORD)v23 >= (unsigned int)(v48 + 1) )
      {
        v49 = 2 * v48;
        memcpy_0(v46, *(const void **)(v47 + 24), 2 * v48);
        *(_WORD *)&v46[v49] = 0;
      }
      goto LABEL_51;
    }
  }
  v25 = (unsigned int)(v24 + v18);
  CoTaskMemFree(0LL);
  v26 = v25 + 1;
  if ( v25 + 1 < (unsigned __int64)(unsigned int)v25 || !is_mul_ok(v26, 2uLL) )
  {
    v27 = -2147024362;
    goto LABEL_32;
  }
  v29 = CoTaskMemAlloc(2 * v26);
  if ( !v29 )
  {
    v27 = -2147024882;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)v27);
    CoTaskMemFree(0LL);
    if ( v9 )
      ARI::Free(v9, v28);
    return v27;
  }
  if ( v26 > 0x7FFFFFFF || (unsigned int)v25 >= 0x7FFFFFFFuLL )
  {
    *v29 = 0;
  }
  else
  {
    v30 = v25 + 1;
    v31 = v29;
    v32 = 0LL;
    do
    {
      if ( v30 == v26 )
        break;
      v33 = *(_WORD *)((char *)v31 + (char *)&pvData - (char *)v29);
      if ( !v33 )
        break;
      *v31 = v33;
      ++v32;
      ++v31;
      --v30;
    }
    while ( v30 );
    v34 = v31 - 1;
    if ( v30 )
      v34 = v31;
    *v34 = 0;
    v35 = v32 - 1;
    if ( v30 )
      v35 = v32;
    v36 = v26 - v35;
    if ( v30 && v36 > 1 && 2 * v36 > 2 )
      memset_0(&v29[v35 + 1], 0, 2 * v36 - 2);
  }
  v37 = v29;
  v38 = (unsigned __int16 *)*((_QWORD *)P[1] + 4);
  v39 = v38[8] >> 1;
  if ( (_DWORD)v39 == -1 )
  {
    memcpy_0(0LL, *((const void **)v38 + 3), 2 * v39);
    *(_WORD *)(2 * v39) = 0;
  }
  else
  {
    v40 = (const wchar_t *)*((_QWORD *)v38 + 1);
    TokenInformationLength = *v38 >> 1;
    v41 = wcschr(v40, 0x5Fu);
    TokenHandle = (void *)*((_QWORD *)v38 + 1);
    v42 = ((char *)(v41 + 1) - (_BYTE *)TokenHandle) >> 1;
    v43 = (unsigned int)(v42 + 13);
    if ( (unsigned int)v25 < (int)v42 + 14 )
      goto LABEL_49;
    v50 = (unsigned int)v42;
    memcpy_0(v29, TokenHandle, v50 * 2);
    v51 = TokenHandle;
    v52 = TokenInformationLength - 13;
    *(_OWORD *)&v29[v50] = *(_OWORD *)((char *)TokenHandle + 2 * v52);
    *(_QWORD *)&v29[v50 + 8] = *(_QWORD *)&v51[v52 + 8];
    v29[v50 + 12] = v51[v52 + 12];
    v29[v43] = 0;
    if ( (unsigned int)v25 < (int)v43 + (int)v39 + 2 )
    {
LABEL_49:
      v27 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0xAC,
              (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
              (const char *)0x7A,
              ReturnLength);
      CoTaskMemFree(v29);
LABEL_52:
      ARI::ProcessToken::AutoSysAppId::~AutoSysAppId((ARI::ProcessToken::AutoSysAppId *)P);
      return v27;
    }
    v53 = P[1];
    v54 = &v29[v43];
    *v54 = 33;
    v55 = v53[4];
    v56 = *(unsigned __int16 *)(v55 + 16) >> 1;
    if ( (int)v25 - (int)v43 - 1 >= (unsigned int)(v56 + 1) )
    {
      v58 = v56;
      memcpy_0(v54 + 1, *(const void **)(v55 + 24), 2 * v56);
      v54[v58 + 1] = 0;
    }
    v29 = v37;
  }
  *v65 = v29;
  CoTaskMemFree(0LL);
  if ( v9 )
    ARI::Free(v9, v57);
  return 0LL;
}
