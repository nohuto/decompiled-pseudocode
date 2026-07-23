/*
 * XREFs of RtlpLoadPolicyLanguageSpec @ 0x1800586F4
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800D8790 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x1800EB120 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegGetOrAddString @ 0x18004D7B0 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180051150 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpLoadPolicyLanguageSpec(HANDLE KeyHandle, __int64 a2, _BYTE *a3, __int16 *a4)
{
  int v5; // r13d
  unsigned int v6; // r14d
  size_t v7; // rax
  _DWORD *Heap_0; // rbx
  NTSTATUS v9; // edi
  PVOID v10; // r15
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  NTSTATUS v13; // eax
  int InstalledLanguageIndex; // ebx
  int v15; // ebx
  size_t v16; // rax
  __int64 v17; // r8
  unsigned __int16 v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v20; // [rsp+34h] [rbp-2Ch] BYREF
  DWORD Lcid; // [rsp+38h] [rbp-28h] BYREF
  ULONG ResultLength[3]; // [rsp+3Ch] [rbp-24h] BYREF
  _UNICODE_STRING ValueName; // [rsp+48h] [rbp-18h] BYREF

  Lcid = 0;
  v19[0] = 0;
  v20 = -1;
  if ( !a2 || !KeyHandle )
    return (unsigned int)-1073741811;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ValueName.Buffer = (wchar_t *)L"PreferredUILanguages";
  v5 = 1;
  v6 = 0;
  v7 = 2 * wcslen(L"PreferredUILanguages");
  ResultLength[0] = 0;
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  ValueName.Length = v7;
  ValueName.MaximumLength = v7 + 2;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
  if ( !Heap_0 )
    return (unsigned int)-1073741823;
  v9 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap_0, 0xCu, ResultLength);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    v6 = Heap_0[2];
    v5 = Heap_0[1];
  }
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  if ( !v6 || v9 == -1073741772 )
    return (unsigned int)-1073741823;
  v10 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v6);
  if ( v10 )
  {
    ResultLength[0] = 0;
    v11 = v6 + 12;
    if ( v6 == -12 || (v12 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v11)) == 0LL )
    {
      InstalledLanguageIndex = -1073741670;
      goto LABEL_34;
    }
    v13 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v12, v6 + 12, ResultLength);
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
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v12);
      if ( InstalledLanguageIndex >= 0 )
      {
        v15 = 1;
        if ( v5 != 1 )
          goto LABEL_41;
        *(_QWORD *)&ValueName.Length = 0LL;
        ValueName.Buffer = (wchar_t *)v10;
        v16 = 2 * wcslen((const wchar_t *)v10);
        if ( v16 >= 0xFFFE )
          LOWORD(v16) = -4;
        ValueName.Length = v16;
        ValueName.MaximumLength = v16 + 2;
        if ( RtlCultureNameToLCID(&ValueName, &Lcid) )
        {
          v17 = Lcid;
          if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
            goto LABEL_29;
          InstalledLanguageIndex = RtlpMuiRegGetOrAddString(a2, ValueName.Buffer, 0, (__int16 *)v19);
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
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v10);
      return (unsigned int)InstalledLanguageIndex;
    }
    v5 = v12[1];
    goto LABEL_21;
  }
  return (unsigned int)-1073741801;
}
