/*
 * XREFs of PopReadSimulatedProcessorDetail @ 0x140CDA288
 * Callers:
 *     PopReadSimulatedArchitecturalClasses @ 0x140CD9B7C (PopReadSimulatedArchitecturalClasses.c)
 *     PopReadSimulatedHGSClasses @ 0x140CD9D70 (PopReadSimulatedHGSClasses.c)
 *     PopReadSimulatedWpsContainment @ 0x140CDA41C (PopReadSimulatedWpsContainment.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 */

char __fastcall PopReadSimulatedProcessorDetail(__int64 a1, unsigned __int16 a2, void *a3, ULONG a4, int a5)
{
  char v6; // si
  ULONG v7; // r14d
  ULONG i; // edx
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  unsigned __int16 *v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v18; // rbx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Dh] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-39h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-29h] BYREF
  _OWORD v24[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v25; // [rsp+78h] [rbp+7h]
  int v26; // [rsp+80h] [rbp+Fh]

  v25 = 0LL;
  v26 = 0;
  KeyValueInformation = 0LL;
  ResultLength = 0;
  v6 = 0;
  memset(v24, 0, sizeof(v24));
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v7 = 0;
  ProcNumber = 0;
  for ( i = 0; ZwEnumerateValueKey(a3, i, KeyValueBasicInformation, v24, 0x2Cu, &ResultLength) >= 0; i = v7 )
  {
    ++v7;
    ValueName.Buffer = (wchar_t *)v24 + 6;
    v12 = 0;
    ValueName.Length = WORD4(v24[0]);
    ValueName.MaximumLength = 32;
    v13 = 64;
    if ( DWORD2(v24[0]) >> 1 )
    {
      v14 = (unsigned __int16 *)v24 + 6;
      v15 = DWORD2(v24[0]) >> 1;
      do
      {
        v16 = *v14;
        if ( (unsigned __int16)(v16 - 48) <= 9u )
        {
          v13 = v16 + 2 * (v12 + 4 * (v12 - 6));
          v12 = v13;
        }
        ++v14;
        --v15;
      }
      while ( v15 );
      if ( v13 < 0x40 )
      {
        ProcNumber.Number = v13;
        ProcNumber.Group = a2;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
        v18 = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber < a4
          && ZwQueryValueKey(a3, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          v6 = 1;
          if ( !a1 )
            return v6;
          if ( a5 == 1 )
          {
            *(_BYTE *)(v18 + a1) = BYTE12(KeyValueInformation);
          }
          else if ( a5 == 4 )
          {
            *(_DWORD *)(a1 + 4 * v18) = HIDWORD(KeyValueInformation);
          }
        }
      }
    }
  }
  return v6;
}
