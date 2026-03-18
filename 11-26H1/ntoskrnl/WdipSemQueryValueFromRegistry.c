/*
 * XREFs of WdipSemQueryValueFromRegistry @ 0x1408216A0
 * Callers:
 *     WdipSemLoadConfigInfo @ 0x14081F660 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextContextProvider @ 0x14081F78C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x14081FA3C (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x14081FD4C (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140820244 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadGroupPolicy @ 0x140820F00 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140820FAC (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall WdipSemQueryValueFromRegistry(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  size_t v7; // rbp
  NTSTATUS v9; // ebx
  unsigned int v10; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  char KeyValueInformation[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh]
  unsigned int Src; // [rsp+50h] [rbp-B8h]
  int Src_4; // [rsp+54h] [rbp-B4h] BYREF

  v7 = a4;
  ResultLength = 0;
  DestinationString = 0LL;
  if ( KeyHandle && a2 && a5 && a6 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v9 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x90u,
           &ResultLength);
    if ( v9 >= 0 )
    {
      v10 = Src;
      if ( Src <= (unsigned int)v7 && v15 == a3 )
      {
        memset_0(a5, 0, v7);
        memmove(a5, &Src_4, v10);
        *a6 = v10;
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
