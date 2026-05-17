/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x18000144C
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x180004B30 (RtlpAddNeutralsToMergedList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18000A750 (RtlpGetSystemDefaultUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1801224D0 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E314 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x180002AB0 (_MuiRegAllocArray.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  wchar_t *v5; // rsi
  wchar_t *v6; // rax
  int v7; // r12d
  size_t v8; // rax
  int v9; // ebx
  HANDLE v10; // rbx
  size_t v11; // rax
  _DWORD *Heap_0; // rdi
  int v13; // eax
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rcx
  wchar_t i; // ax
  size_t v18; // rax
  size_t v19; // rax
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+C0h] [rbp+40h] BYREF
  int v25; // [rsp+D8h] [rbp+58h] BYREF

  Handle = 0LL;
  v24 = 0;
  v5 = 0LL;
  v21 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_26;
  }
  v6 = (wchar_t *)MuiRegAllocArray(a1, 172LL);
  v5 = v6;
  if ( !v6 )
  {
    v9 = -1073741801;
    goto LABEL_26;
  }
  memset_thunk_772440563353939046(v6, 0, 0x158uLL);
  *a2 = 0;
  *((_QWORD *)&v21 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language";
  v7 = 0;
  *a3 = 0;
  v8 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
  v22[0] = 48LL;
  v22[3] = 64LL;
  v22[1] = 0LL;
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  LOWORD(v21) = v8;
  WORD1(v21) = v8 + 2;
  v22[2] = &v21;
  v23 = 0LL;
  v9 = NtOpenKey(&Handle, 131097LL, v22);
  if ( v9 >= 0 )
  {
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = L"InstallLanguageFallback";
    v10 = Handle;
    v11 = 2 * wcslen(L"InstallLanguageFallback");
    v25 = 0;
    if ( v11 >= 0xFFFE )
      LOWORD(v11) = -4;
    LOWORD(v21) = v11;
    WORD1(v21) = v11 + 2;
    Heap_0 = (_DWORD *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 356LL);
    if ( !Heap_0 )
    {
      v9 = -1073741670;
      goto LABEL_26;
    }
    v13 = NtQueryValueKey(v10, &v21, 2LL, Heap_0, 356, &v25);
    v9 = v13;
    if ( v13 >= 0 )
    {
      if ( Heap_0[2] > 0x158u )
        v9 = -2147483643;
      else
        memmove(v5, Heap_0 + 3, (unsigned int)Heap_0[2]);
    }
    else if ( v13 != -2147483643 )
    {
LABEL_17:
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, Heap_0);
      if ( v9 >= 0 )
      {
        if ( v7 != 1 )
          goto LABEL_44;
        v14 = v5;
        v15 = v5 + 1;
        while ( *v14 )
        {
          if ( *v14 == 44 )
          {
            *v14 = 0;
            v14 = v15;
            for ( i = *v15; i == 32; i = *v14 )
              ++v14;
            break;
          }
          ++v14;
          ++v15;
        }
        *(_QWORD *)&v21 = 0LL;
        *((_QWORD *)&v21 + 1) = v5;
        v18 = 2 * wcslen(v5);
        if ( v18 >= 0xFFFE )
          LOWORD(v18) = -4;
        LOWORD(v21) = v18;
        WORD1(v21) = v18 + 2;
        if ( (unsigned __int8)RtlCultureNameToLCID(&v21, &v24) )
        {
          *a2 = v24;
          if ( *v14 )
          {
            *(_QWORD *)&v21 = 0LL;
            *((_QWORD *)&v21 + 1) = v14;
            v19 = 2 * wcslen(v14);
            if ( v19 >= 0xFFFE )
              LOWORD(v19) = -4;
            LOWORD(v21) = v19;
            WORD1(v21) = v19 + 2;
            if ( (unsigned __int8)RtlCultureNameToLCID(&v21, &v24) )
            {
              *a3 = v24;
            }
            else
            {
              v9 = -1073741823;
              *a2 = 0;
            }
          }
        }
        else
        {
LABEL_44:
          v9 = -1073741823;
        }
      }
      goto LABEL_26;
    }
    v7 = Heap_0[1];
    goto LABEL_17;
  }
LABEL_26:
  if ( Handle )
    NtClose(Handle);
  if ( v5 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v5);
  return (unsigned int)v9;
}
