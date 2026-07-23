/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x18004CB84
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050260 (RtlpAddNeutralsToMergedList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180055E80 (RtlpGetSystemDefaultUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180122270 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E1C4 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     _MuiRegAllocArray @ 0x18004E1E0 (_MuiRegAllocArray.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  wchar_t *v5; // rsi
  wchar_t *v6; // rax
  int v7; // r12d
  size_t v8; // rax
  NTSTATUS v9; // ebx
  HANDLE v10; // rbx
  size_t v11; // rax
  _DWORD *Heap_0; // rdi
  NTSTATUS v13; // eax
  wchar_t *v14; // rdi
  wchar_t *v15; // rcx
  wchar_t i; // ax
  size_t v18; // rax
  size_t v19; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  DWORD Lcid; // [rsp+C0h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+D8h] [rbp+58h] BYREF

  KeyHandle = 0LL;
  Lcid = 0;
  v5 = 0LL;
  ValueName = 0LL;
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
  ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language";
  v7 = 0;
  *a3 = 0;
  v8 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  ValueName.Length = v8;
  ValueName.MaximumLength = v8 + 2;
  ObjectAttributes.ObjectName = &ValueName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = (wchar_t *)L"InstallLanguageFallback";
    v10 = KeyHandle;
    v11 = 2 * wcslen(L"InstallLanguageFallback");
    ResultLength = 0;
    if ( v11 >= 0xFFFE )
      LOWORD(v11) = -4;
    ValueName.Length = v11;
    ValueName.MaximumLength = v11 + 2;
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x164uLL);
    if ( !Heap_0 )
    {
      v9 = -1073741670;
      goto LABEL_26;
    }
    v13 = NtQueryValueKey(v10, &ValueName, KeyValuePartialInformation, Heap_0, 0x164u, &ResultLength);
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
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
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
        *(_QWORD *)&ValueName.Length = 0LL;
        ValueName.Buffer = v5;
        v18 = 2 * wcslen(v5);
        if ( v18 >= 0xFFFE )
          LOWORD(v18) = -4;
        ValueName.Length = v18;
        ValueName.MaximumLength = v18 + 2;
        if ( RtlCultureNameToLCID(&ValueName, &Lcid) )
        {
          *a2 = Lcid;
          if ( *v14 )
          {
            *(_QWORD *)&ValueName.Length = 0LL;
            ValueName.Buffer = v14;
            v19 = 2 * wcslen(v14);
            if ( v19 >= 0xFFFE )
              LOWORD(v19) = -4;
            ValueName.Length = v19;
            ValueName.MaximumLength = v19 + 2;
            if ( RtlCultureNameToLCID(&ValueName, &Lcid) )
            {
              *a3 = Lcid;
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
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( v5 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
  return (unsigned int)v9;
}
