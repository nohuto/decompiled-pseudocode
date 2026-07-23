/*
 * XREFs of RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800E59E8
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x18002B600 (RtlpLocateActivationContextSection.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpQueryInformationActivationContextCompatibilityInformation(
        _DWORD *a1,
        void *a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  __int64 result; // rax
  void *Src; // [rsp+30h] [rbp-18h] BYREF
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  Src = 0LL;
  LODWORD(Size) = 0;
  if ( !a1 || (result = RtlpLocateActivationContextSection(a1, 0LL, 0xBu, &Src, &Size), (_DWORD)result == -1072365567) )
  {
    if ( a4 )
      *a4 = 0LL;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    if ( a4 )
      *a4 = (unsigned int)Size;
    if ( (unsigned int)Size > a3 )
      return 3221225507LL;
    if ( Src )
      memmove(a2, Src, (unsigned int)Size);
  }
  return 0LL;
}
