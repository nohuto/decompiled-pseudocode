/*
 * XREFs of RtlpLocateActivationContextSectionForQuery @ 0x1800E5618
 * Callers:
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1801133D4 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x18002B600 (RtlpLocateActivationContextSection.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpLocateActivationContextSectionForQuery(
        _DWORD *a1,
        int *a2,
        void *a3,
        size_t a4,
        size_t *a5,
        size_t Size,
        _DWORD *a7,
        __int64 a8,
        unsigned int a9,
        _QWORD *a10,
        _DWORD *a11)
{
  int ActivationContextSection; // eax

  if ( !a7
    || (ActivationContextSection = RtlpLocateActivationContextSection(a7, 0LL, a9, a10, a11),
        *a2 = ActivationContextSection,
        ActivationContextSection == -1072365567) )
  {
    *a1 = 2;
    if ( Size > a4 )
    {
      *a2 = -1073741789;
    }
    else
    {
      memset_thunk_772440563353939046(a3, 0, Size);
      if ( a5 )
        *a5 = Size;
      *a2 = 0;
    }
  }
  else
  {
    *a1 = ((ActivationContextSection >> 31) & 1) + 1;
  }
}
