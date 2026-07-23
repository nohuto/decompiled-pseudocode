/*
 * XREFs of PopReadLegacySimulatedArchitecturalClasses @ 0x140CD9A24
 * Callers:
 *     PopReadSimulatedArchitecturalClasses @ 0x140CD9B7C (PopReadSimulatedArchitecturalClasses.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PopReadLegacySimulatedArchitecturalClasses(bool *a1, unsigned __int16 a2, void *a3, unsigned int a4)
{
  char v8; // r14
  __int64 v9; // rcx
  unsigned int i; // ebx
  int v11; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-C8h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[33]; // [rsp+68h] [rbp-98h] BYREF

  ResultLength = 0;
  *(_QWORD *)&ValueName.Length = 2490404LL;
  ValueName.Buffer = L"SmallProcessorMask";
  memset_0(v17, 0, 0x100uLL);
  v16 = 2097153LL;
  v8 = 0;
  KeyValueInformation = 0LL;
  memset_0(v17, 0, 0x100uLL);
  if ( ZwQueryValueKey(a3, &ValueName, KeyValuePartialInformationAlign64, &KeyValueInformation, 0x10u, &ResultLength) < 0
    || (_DWORD)KeyValueInformation != 4 && (_DWORD)KeyValueInformation != 11 )
  {
    return v8;
  }
  if ( DWORD1(KeyValueInformation) == 4 )
  {
    v9 = DWORD2(KeyValueInformation);
    *((_QWORD *)&KeyValueInformation + 1) = DWORD2(KeyValueInformation);
  }
  else
  {
    if ( DWORD1(KeyValueInformation) != 8 )
      return v8;
    v9 = *((_QWORD *)&KeyValueInformation + 1);
  }
  v8 = 1;
  if ( !a1 )
    return v8;
  if ( (unsigned __int16)v16 <= a2 )
  {
    if ( WORD1(v16) <= a2 )
      goto LABEL_13;
    LOWORD(v16) = a2 + 1;
  }
  v17[a2] |= v9;
LABEL_13:
  for ( i = 0; i < a4; ++a1 )
  {
    v11 = KeCheckProcessorAffinityEx((unsigned __int16 *)&v16, i++);
    *a1 = v11 == 0;
  }
  return v8;
}
