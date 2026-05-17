/*
 * XREFs of RtlpLoadPolicyLanguageSpec @ 0x18000CFC4
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800DB8B0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x1800EBF50 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x180002080 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180005A20 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpLoadPolicyLanguageSpec(__int64 a1, __int64 a2, _BYTE *a3, __int16 *a4)
{
  int v5; // r13d
  unsigned int v6; // r14d
  size_t v7; // rax
  __int64 Heap_0; // rbx
  int v9; // edi
  wchar_t *v10; // r15
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  int v13; // eax
  int InstalledLanguageIndex; // ebx
  int v15; // ebx
  size_t v16; // rax
  __int64 v17; // r8
  unsigned __int16 v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v20; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v21; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v22[3]; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v24; // [rsp+50h] [rbp-10h]

  v21 = 0;
  v19[0] = 0;
  v20 = -1;
  if ( !a2 || !a1 )
    return (unsigned int)-1073741811;
  HIDWORD(v23) = 0;
  v24 = L"PreferredUILanguages";
  v5 = 1;
  v6 = 0;
  v7 = 2 * wcslen(L"PreferredUILanguages");
  v22[0] = 0;
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  LOWORD(v23) = v7;
  WORD1(v23) = v7 + 2;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 12LL);
  if ( !Heap_0 )
    return (unsigned int)-1073741823;
  v9 = NtQueryValueKey(a1, &v23, 2LL, Heap_0, 12, v22);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    v6 = *(_DWORD *)(Heap_0 + 8);
    v5 = *(_DWORD *)(Heap_0 + 4);
  }
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, Heap_0);
  if ( !v6 || v9 == -1073741772 )
    return (unsigned int)-1073741823;
  v10 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v6);
  if ( v10 )
  {
    v22[0] = 0;
    v11 = v6 + 12;
    if ( v6 == -12 || (v12 = (_DWORD *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v11)) == 0LL )
    {
      InstalledLanguageIndex = -1073741670;
      goto LABEL_34;
    }
    v13 = NtQueryValueKey(a1, &v23, 2LL, v12, v6 + 12, v22);
    InstalledLanguageIndex = v13;
    if ( v13 >= 0 )
    {
      if ( v12[2] > v6 )
      {
        InstalledLanguageIndex = -2147483643;
      }
      else if ( v12[2] <= v11 )
      {
        memmove(v10, v12 + 3, (unsigned int)v12[2]);
      }
    }
    else if ( v13 != -2147483643 )
    {
LABEL_21:
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v12);
      if ( InstalledLanguageIndex >= 0 )
      {
        v15 = 1;
        if ( v5 != 1 )
          goto LABEL_41;
        v23 = 0LL;
        v24 = v10;
        v16 = 2 * wcslen(v10);
        if ( v16 >= 0xFFFE )
          LOWORD(v16) = -4;
        LOWORD(v23) = v16;
        WORD1(v23) = v16 + 2;
        if ( RtlCultureNameToLCID((unsigned __int16 *)&v23, (int *)&v21) )
        {
          v17 = v21;
          if ( ((v21 - 4096) & 0xFFFFFBFF) != 0 )
            goto LABEL_29;
          InstalledLanguageIndex = RtlpMuiRegGetOrAddString(a2, (__int64)v24, 0, (__int16 *)v19);
          if ( InstalledLanguageIndex >= 0 )
          {
            v17 = v19[0];
            v15 = 3;
LABEL_29:
            InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a2, v15, v17, &v20);
            if ( InstalledLanguageIndex >= 0 )
            {
              if ( a3 )
                *a3 = 2;
              if ( a4 )
                *a4 = v20;
            }
          }
        }
        else
        {
LABEL_41:
          InstalledLanguageIndex = -1073741823;
        }
      }
LABEL_34:
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v10);
      return (unsigned int)InstalledLanguageIndex;
    }
    v5 = v12[1];
    goto LABEL_21;
  }
  return (unsigned int)-1073741801;
}
