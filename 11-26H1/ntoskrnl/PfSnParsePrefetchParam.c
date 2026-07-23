/*
 * XREFs of PfSnParsePrefetchParam @ 0x140AB05DC
 * Callers:
 *     PfSnScanCommandLine @ 0x1409D320C (PfSnScanCommandLine.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wtol @ 0x140538D70 (_wtol.c)
 *     iswdigit @ 0x140539180 (iswdigit.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall PfSnParsePrefetchParam(unsigned __int16 *a1, unsigned int *a2)
{
  size_t Length; // rbp
  char *v5; // rsi
  char *v6; // rdi
  unsigned int v7; // ebx
  wint_t *v9; // rdi
  unsigned __int64 v10; // rbp
  wchar_t *i; // rsi
  unsigned int v12; // eax
  wint_t v13; // ax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-68h] BYREF
  wchar_t Str[15]; // [rsp+30h] [rbp-58h] BYREF
  wchar_t v16; // [rsp+4Eh] [rbp-3Ah] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"/prefetch:");
  PsGetCurrentServerSiloGlobals();
  Length = DestinationString.Length;
  if ( *a1 >= DestinationString.Length )
  {
    v5 = (char *)*((_QWORD *)a1 + 1);
    v6 = &v5[*a1 - (unsigned __int64)DestinationString.Length];
    v7 = 0;
    while ( v5 <= v6 )
    {
      if ( !memcmp(v5, DestinationString.Buffer, Length) )
      {
        if ( !v5 )
          return (unsigned int)-1073741275;
        v9 = (wint_t *)&v5[Length];
        v10 = *((_QWORD *)a1 + 1) + *a1;
        for ( i = Str; (unsigned __int64)v9 < v10 && i < &v16 && *v9 != 32; ++i )
        {
          if ( !iswdigit(*v9) )
            return (unsigned int)-1073741811;
          v13 = *v9++;
          *i = v13;
        }
        *i = 0;
        v12 = wtol(Str);
        if ( v12 <= 0x10 )
        {
          *a2 = v12;
          return v7;
        }
        return (unsigned int)-1073741811;
      }
      v5 += 2;
    }
  }
  return (unsigned int)-1073741275;
}
