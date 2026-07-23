/*
 * XREFs of PfpRpLogDeprioEvent @ 0x1404B4484
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1409954E4 (PfCheckDeprioritizeFile.c)
 * Callees:
 *     PfLogEvent @ 0x140384750 (PfLogEvent.c)
 */

__int64 __fastcall PfpRpLogDeprioEvent(__int64 a1, __int64 a2, int a3, int a4)
{
  size_t Size; // [rsp+20h] [rbp-38h]
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  int v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+44h] [rbp-14h]

  if ( !a1 )
    return 3221225865LL;
  v10 = 0;
  v6 = a2;
  v7 = xmmword_140F13528;
  v8 = a3;
  v9 = a4;
  LODWORD(Size) = 24;
  return PfLogEvent(
           a1,
           30,
           HIDWORD(stru_140E66D40.WriteOperationCount)
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v6,
           Size);
}
