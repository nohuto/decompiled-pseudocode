/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x180052280
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18008F9D0 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180053F48 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpInitializeUserList @ 0x180056710 (RtlpInitializeUserList.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008FB80 (RtlpMuiRegDupLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, __int16 *a2, int *a3)
{
  unsigned __int64 v3; // rsi
  int v5; // edi
  PVOID v6; // r13
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
  PVOID v17; // rbx
  char *Heap_0; // rax
  void *v19; // rcx
  int v20; // eax
  char v21; // bl
  _BYTE *MergedPrefLanguages; // rcx
  __int64 v23; // rax
  __int64 *UserPrefLanguages; // rcx
  __int64 v25; // rbx
  int v26; // eax
  PVOID *v27; // rax
  PVOID *v28; // rsi
  int v29; // eax
  PVOID *v30; // rax
  PVOID *v31; // rsi
  PVOID BaseAddress[9]; // [rsp+40h] [rbp-48h] BYREF
  ULONG ReturnLength; // [rsp+90h] [rbp+8h] BYREF
  int *v34; // [rsp+A0h] [rbp+18h]
  ULONG NumberOfLanguages; // [rsp+A8h] [rbp+20h] BYREF

  v34 = a3;
  v3 = 0LL;
  NumberOfLanguages = 0;
  v5 = a1;
  ReturnLength = 0;
  v6 = 0LL;
  BaseAddress[0] = 0LL;
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
  result = RtlpCreateProcessRegistryInfo(BaseAddress);
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
          v17 = BaseAddress[0];
          if ( !BaseAddress[0] )
            return (unsigned int)-1073741801;
          Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x5EuLL);
          v19 = Heap_0;
          if ( Heap_0 )
          {
            *(_DWORD *)Heap_0 = 94;
            *((_DWORD *)Heap_0 + 1) = 327680;
            Heap_0[8] = 0;
            *((_QWORD *)Heap_0 + 3) = Heap_0 + 64;
            *((_DWORD *)Heap_0 + 10) = 0;
            *((_QWORD *)Heap_0 + 2) = v17;
          }
          else
          {
            v19 = 0LL;
          }
          BaseAddress[0] = v19;
          if ( !v19 )
            return (unsigned int)-1073741801;
          v8 = RtlpMuiRegAddMultiSzToLangFallbackList(
                 (__int64)g_RegInfo,
                 a2,
                 v16,
                 v5 | 2u,
                 26,
                 5u,
                 (__int64 *)BaseAddress);
          if ( (v8 & 0x80000000) != 0 )
          {
            RtlpMuiRegFreeLanguageList(BaseAddress[0]);
            return v8;
          }
          v6 = BaseAddress[0];
          v20 = *((unsigned __int16 *)BaseAddress[0] + 2);
          if ( !(_WORD)v20 )
          {
            RtlpMuiRegFreeLanguageList(BaseAddress[0]);
            return (unsigned int)-1073741823;
          }
          if ( v34 )
            *v34 = v20;
        }
      }
      if ( NtCurrentTeb()->PreferredLanguages )
      {
        RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
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
                  v31 = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
                }
                else
                {
                  v30 = (PVOID *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
                  v31 = v30;
                  if ( !v30 )
                    return 3221225473LL;
                  *v30 = 0LL;
                  v30[1] = 0LL;
                  NtCurrentTeb()->UserPrefLanguages = v30;
                }
                if ( *v31 )
                {
                  *(_DWORD *)(v25 + 40) = *((_DWORD *)*v31 + 10);
                  RtlpMuiRegFreeLanguageList(*v31);
                }
                *v31 = (PVOID)v25;
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
                  v28 = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
                }
                else
                {
                  v27 = (PVOID *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
                  v28 = v27;
                  if ( !v27 )
                    return 3221225473LL;
                  *v27 = 0LL;
                  v27[1] = 0LL;
                  NtCurrentTeb()->UserPrefLanguages = v27;
                }
                if ( *v28 )
                {
                  *(_DWORD *)(v25 + 40) = *((_DWORD *)*v28 + 10);
                  RtlpMuiRegFreeLanguageList(*v28);
                }
                *v28 = (PVOID)v25;
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
      RtlGetThreadPreferredUILanguages(v5 | 0x30, &NumberOfLanguages, 0LL, &ReturnLength);
      return v8;
    }
    if ( !a2 )
    {
      v21 = 1;
      RtlpInitializeUserList(BaseAddress[0]);
      goto LABEL_40;
    }
    return 3221225485LL;
  }
  return result;
}
