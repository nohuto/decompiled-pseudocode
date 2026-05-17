/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x180006B50
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006F580 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180008818 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpInitializeUserList @ 0x18000AFE0 (RtlpInitializeUserList.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegDupLanguageList @ 0x18006F730 (RtlpMuiRegDupLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, __int16 *a2, int *a3)
{
  unsigned __int64 v3; // rsi
  int v5; // edi
  void *v6; // r13
  __int64 result; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int16 v10; // r9
  _WORD *v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  _WORD *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned int v16; // esi
  __int64 v17; // rbx
  __int64 Heap_0; // rax
  __int64 v19; // rcx
  int v20; // eax
  char v21; // bl
  _BYTE *MergedPrefLanguages; // rcx
  __int64 v23; // rax
  __int64 *UserPrefLanguages; // rcx
  __int64 v25; // rbx
  int v26; // eax
  __int64 *v27; // rax
  __int64 *v28; // rsi
  int v29; // eax
  __int64 *v30; // rax
  __int64 *v31; // rsi
  __int64 v32[9]; // [rsp+40h] [rbp-48h] BYREF
  int v33; // [rsp+90h] [rbp+8h] BYREF
  int *v34; // [rsp+A0h] [rbp+18h]
  int v35; // [rsp+A8h] [rbp+20h] BYREF

  v34 = a3;
  v3 = 0LL;
  v35 = 0;
  v5 = a1;
  v33 = 0;
  v6 = 0LL;
  v32[0] = 0LL;
  if ( (a1 & 0xFFFF7CF2) != 0 )
    return 3221225485LL;
  if ( (a1 & 8) != 0 )
  {
    if ( (a1 & 4) != 0 )
      return 3221225485LL;
  }
  else if ( (a1 & 4) == 0 )
  {
    v5 = a1 | 8;
  }
  if ( (v5 & 0x200) != 0 && (v5 & 0x100) != 0 || (v5 & 1) != 0 && ((v5 & 0x200) != 0 || (v5 & 0x100) != 0) )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(v32);
  v8 = result;
  if ( (int)result >= 0 )
  {
    if ( (v5 & 0x200) == 0 && (v5 & 0x100) == 0 && (v5 & 1) == 0 )
    {
      if ( a2 )
      {
        v9 = 4LL;
        if ( (v5 & 4) == 0 )
          v9 = 85LL;
        if ( (int)RtlpCheckMuiMultiStringSafe(a2, v9) < 0 )
          DbgPrint(
            "*** ASSERT FAILED: Input parameter: %s, for function: %s is not a valid multi-string!\n",
            (const char *)a2,
            "RtlSetThreadPreferredUILanguages");
        v10 = *a2;
        v11 = a2 + 1;
        if ( *a2 )
          v11 = a2;
        LOBYTE(v3) = v10 == 0;
        while ( *v11 )
        {
          if ( v3 > 0x7FFFFFFF )
            return (unsigned int)-1073741811;
          v12 = 0x7FFFFFFF - v3;
          if ( v3 > 0x7FFFFFFF && v3 != 0 )
            return (unsigned int)-1073741811;
          v13 = 0x7FFFFFFF - v3;
          v14 = v11;
          if ( v12 )
          {
            while ( *v14 )
            {
              ++v14;
              if ( !--v13 )
                goto LABEL_26;
            }
          }
          else
          {
LABEL_26:
            if ( !v13 )
              return (unsigned int)-1073741811;
          }
          v15 = v12 - v13;
          v3 += v15 + 1;
          v11 += v15 + 1;
        }
        v16 = v3 + 1;
        if ( v16 < 2 || v10 || a2[1] )
        {
          v17 = v32[0];
          if ( !v32[0] )
            return (unsigned int)-1073741801;
          Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 94LL);
          v19 = Heap_0;
          if ( Heap_0 )
          {
            *(_DWORD *)Heap_0 = 94;
            *(_DWORD *)(Heap_0 + 4) = 327680;
            *(_BYTE *)(Heap_0 + 8) = 0;
            *(_QWORD *)(Heap_0 + 24) = Heap_0 + 64;
            *(_DWORD *)(Heap_0 + 40) = 0;
            *(_QWORD *)(Heap_0 + 16) = v17;
          }
          else
          {
            v19 = 0LL;
          }
          v32[0] = v19;
          if ( !v19 )
            return (unsigned int)-1073741801;
          v8 = RtlpMuiRegAddMultiSzToLangFallbackList(g_RegInfo, a2, v16, v5 | 2u, 26, 5u, v32);
          if ( (v8 & 0x80000000) != 0 )
          {
            RtlpMuiRegFreeLanguageList(v32[0]);
            return v8;
          }
          v6 = (void *)v32[0];
          v20 = *(unsigned __int16 *)(v32[0] + 4);
          if ( !(_WORD)v20 )
          {
            RtlpMuiRegFreeLanguageList(v32[0]);
            return (unsigned int)-1073741823;
          }
          if ( v34 )
            *v34 = v20;
        }
      }
      if ( NtCurrentTeb()->PreferredLanguages )
      {
        RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->PreferredLanguages);
        NtCurrentTeb()->PreferredLanguages = 0LL;
      }
      v21 = 0;
      NtCurrentTeb()->PreferredLanguages = v6;
LABEL_40:
      if ( NtCurrentTeb()->MergedPrefLanguages )
      {
        MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
        if ( (MergedPrefLanguages[40] & 0x40) != 0 )
        {
          v23 = ((__int64 (*)(void))RtlpMuiRegDupLanguageList)();
          MergedPrefLanguages = (_BYTE *)v23;
          if ( !v23 )
            return (unsigned int)-1073741823;
          *(_DWORD *)(v23 + 40) &= ~0x40u;
        }
        *((_DWORD *)MergedPrefLanguages + 10) |= 0x80u;
        NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
      }
      if ( v8 || !v21 )
        return v8;
      if ( NtCurrentTeb()->UserPrefLanguages )
      {
        UserPrefLanguages = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
        v25 = *UserPrefLanguages;
        if ( *UserPrefLanguages )
        {
          if ( (v5 & 1) != 0 )
          {
            *(_DWORD *)(v25 + 40) &= 0xFFFFFFF9;
          }
          else
          {
            v26 = *(_DWORD *)(v25 + 40) & 0x40;
            if ( (v5 & 0x100) != 0 )
            {
              if ( v26 )
              {
                v25 = RtlpMuiRegDupLanguageList(*UserPrefLanguages);
                if ( !v25 )
                  return 3221225473LL;
                if ( NtCurrentTeb()->UserPrefLanguages )
                {
                  v31 = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
                }
                else
                {
                  v30 = (__int64 *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 16LL);
                  v31 = v30;
                  if ( !v30 )
                    return 3221225473LL;
                  *v30 = 0LL;
                  v30[1] = 0LL;
                  NtCurrentTeb()->UserPrefLanguages = v30;
                }
                if ( *v31 )
                {
                  *(_DWORD *)(v25 + 40) = *(_DWORD *)(*v31 + 40);
                  RtlpMuiRegFreeLanguageList(*v31);
                }
                *v31 = v25;
                *(_DWORD *)(v25 + 40) &= ~0x40u;
                v8 = 0;
              }
              *(_DWORD *)(v25 + 40) = *(_DWORD *)(v25 + 40) & 0xFFFFFFF9 | 2;
              if ( (v5 & 0x8000) == 0 )
                goto LABEL_61;
              if ( !v34 )
                goto LABEL_61;
              v29 = *v34;
              if ( !*v34 )
                goto LABEL_61;
            }
            else
            {
              if ( v26 )
              {
                v25 = RtlpMuiRegDupLanguageList(*UserPrefLanguages);
                if ( !v25 )
                  return 3221225473LL;
                if ( NtCurrentTeb()->UserPrefLanguages )
                {
                  v28 = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
                }
                else
                {
                  v27 = (__int64 *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 16LL);
                  v28 = v27;
                  if ( !v27 )
                    return 3221225473LL;
                  *v27 = 0LL;
                  v27[1] = 0LL;
                  NtCurrentTeb()->UserPrefLanguages = v27;
                }
                if ( *v28 )
                {
                  *(_DWORD *)(v25 + 40) = *(_DWORD *)(*v28 + 40);
                  RtlpMuiRegFreeLanguageList(*v28);
                }
                *v28 = v25;
                *(_DWORD *)(v25 + 40) &= ~0x40u;
                v8 = 0;
              }
              *(_DWORD *)(v25 + 40) = *(_DWORD *)(v25 + 40) & 0xFFFFFFF9 | 4;
              if ( (v5 & 0x8000) == 0 )
                goto LABEL_61;
              if ( !v34 )
                goto LABEL_61;
              v29 = *v34;
              if ( !*v34 )
                goto LABEL_61;
            }
            *(_WORD *)(v25 + 42) = 0;
            *(_DWORD *)(v25 + 40) |= v29 << 16;
          }
        }
      }
LABEL_61:
      RtlGetThreadPreferredUILanguages(v5 | 0x30u, &v35, 0LL, &v33);
      return v8;
    }
    if ( !a2 )
    {
      v21 = 1;
      RtlpInitializeUserList(v32[0]);
      goto LABEL_40;
    }
    return 3221225485LL;
  }
  return result;
}
