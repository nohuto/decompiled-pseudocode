/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x1800D1480
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x18007FCE4 (WerpGlobalFlagsForProcess.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800CF680 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800CF8A4 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800CFA78 (RtlpQueryEafPlusModuleList.c)
 *     RtlpHpQueryGCTimerInterval @ 0x1800CFCD4 (RtlpHpQueryGCTimerInterval.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D11EC (LdrpQueryIllegalCWDDevices.c)
 *     RtlQueryApplicationKeyOption @ 0x1800D12EC (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1800D13E0 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpMinimalMapModule @ 0x1800D21E4 (LdrpMinimalMapModule.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180111D40 (LdrpInitializeApplicationVerifierPackage.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlUnicodeStringToInteger @ 0x180052020 (RtlUnicodeStringToInteger.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        wchar_t *String,
        int a3,
        ULONG *a4,
        unsigned int a5,
        ULONG *a6)
{
  size_t v10; // rax
  unsigned int v11; // esi
  _BYTE *Heap_0; // rdi
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  void *v15; // r12
  ULONG *v16; // rcx
  int v17; // eax
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  NTSTATUS v20; // eax
  ULONG v21; // eax
  size_t v22; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-C8h] BYREF
  ULONG *v25; // [rsp+48h] [rbp-B8h]
  _BYTE KeyValueInformation[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v25 = a6;
  memset_thunk_772440563353939046(KeyValueInformation, 0, 0x400uLL);
  ResultLength = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = String;
  if ( String )
  {
    v10 = wcslen(String);
    if ( v10 > 0x7FFE )
      return -1073741562;
    ValueName.Length = 2 * v10;
    ValueName.MaximumLength = 2 * v10 + 2;
  }
  v11 = a5;
  if ( a5 >= 0x3F4 )
  {
    Length = a5 + 12;
    goto LABEL_32;
  }
  Heap_0 = KeyValueInformation;
  result = NtQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength);
  v14 = result;
  if ( result >= 0 )
  {
    v15 = 0LL;
LABEL_9:
    v16 = (ULONG *)(Heap_0 + 8);
    if ( !a3 )
    {
      if ( *v16 > a5 )
      {
        ResultLength = *v16;
        goto LABEL_41;
      }
      a3 = *((_DWORD *)Heap_0 + 1);
      v11 = *v16;
    }
    v17 = *((_DWORD *)Heap_0 + 1);
    switch ( v17 )
    {
      case 3:
      case 7:
        if ( a3 == v17 )
        {
          ResultLength = *v16;
          if ( !a4 || *v16 > v11 )
            goto LABEL_41;
          v22 = *v16;
          goto LABEL_38;
        }
        break;
      case 4:
        if ( a3 == 4 )
        {
          if ( v11 == 4 && *((_DWORD *)Heap_0 + 2) == 4 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              *a4 = *((_DWORD *)Heap_0 + 3);
              goto LABEL_25;
            }
LABEL_41:
            v14 = -2147483643;
            goto LABEL_25;
          }
          goto LABEL_58;
        }
        break;
      case 11:
        if ( a3 == 11 )
        {
          if ( v11 == 8 && *((_DWORD *)Heap_0 + 2) == 8 )
          {
            ResultLength = 8;
            if ( a4 )
            {
              *(_QWORD *)a4 = *(_QWORD *)(Heap_0 + 12);
              goto LABEL_25;
            }
            goto LABEL_41;
          }
          goto LABEL_58;
        }
        break;
      case 1:
        if ( a3 == 4 )
        {
          if ( v11 == 4 )
          {
            if ( ((unsigned __int8)a4 & 3) == 0 )
            {
              ResultLength = 4;
              if ( a4 )
              {
                ValueName.Buffer = (wchar_t *)(Heap_0 + 12);
                ValueName.Length = *((_WORD *)Heap_0 + 4);
                ValueName.MaximumLength = *((_WORD *)Heap_0 + 4);
                v14 = RtlUnicodeStringToInteger(&ValueName, 0, a4);
LABEL_25:
                if ( v25 && ((int)(v14 + 0x80000000) < 0 || v14 == -2147483643) )
                  *v25 = ResultLength;
                goto LABEL_26;
              }
              goto LABEL_41;
            }
            v14 = -2147483646;
LABEL_26:
            if ( v15 )
LABEL_27:
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v15);
            return v14;
          }
LABEL_58:
          v14 = -1073741820;
          goto LABEL_26;
        }
        v21 = *((_DWORD *)Heap_0 + 2);
        ResultLength = v21;
        if ( v21 > v11 )
          goto LABEL_41;
        v22 = v21;
LABEL_38:
        memmove(a4, Heap_0 + 12, v22);
        goto LABEL_25;
      default:
        v14 = -1073741788;
        goto LABEL_25;
    }
    v14 = -1073741788;
    goto LABEL_26;
  }
  if ( result == -2147483643 )
  {
    while ( 1 )
    {
      Length = ResultLength;
LABEL_32:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return -1073741801;
      Heap_0 = RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1572864, Length);
      v15 = Heap_0;
      if ( !Heap_0 )
        return -1073741801;
      v20 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap_0, Length, &ResultLength);
      v14 = v20;
      if ( v20 >= 0 )
        goto LABEL_9;
      if ( v20 != -2147483643 )
        goto LABEL_27;
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
    }
  }
  return result;
}
