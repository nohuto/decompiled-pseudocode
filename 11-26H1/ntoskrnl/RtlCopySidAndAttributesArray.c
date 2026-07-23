/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x140A4EE60
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x140A4E3E8 (SepCopyTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x140A4E958 (CmpBuildAdminInformation.c)
 *     SepCopyTokenLoggingInformation @ 0x140A4ECB4 (SepCopyTokenLoggingInformation.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySidAndAttributesArray(
        ULONG Count,
        PSID_AND_ATTRIBUTES Src,
        ULONG SidAreaSize,
        PSID_AND_ATTRIBUTES Dest,
        PSID SidArea,
        PSID *RemainingSidArea,
        PULONG RemainingSidAreaSize)
{
  ULONG i; // ebx
  ULONG v13; // edi
  unsigned __int8 *Sid; // rdx
  unsigned int v15; // eax

  for ( i = 0; ; ++i )
  {
    if ( i >= Count )
    {
      *RemainingSidArea = SidArea;
      *RemainingSidAreaSize = SidAreaSize;
      return 0;
    }
    v13 = 4 * *((unsigned __int8 *)Src[i].Sid + 1) + 8;
    if ( v13 > SidAreaSize )
      break;
    Dest[i].Sid = SidArea;
    SidAreaSize -= v13;
    Dest[i].Attributes = Src[i].Attributes;
    Sid = (unsigned __int8 *)Src[i].Sid;
    v15 = 4 * Sid[1] + 8;
    if ( v15 <= v13 )
      memmove(SidArea, Sid, v15);
    SidArea = (char *)SidArea + v13;
  }
  return -1073741789;
}
