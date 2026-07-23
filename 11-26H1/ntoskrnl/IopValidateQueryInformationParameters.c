/*
 * XREFs of IopValidateQueryInformationParameters @ 0x14098667C
 * Callers:
 *     IoQueryInformationByName @ 0x1409857A0 (IoQueryInformationByName.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 * Callees:
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall IopValidateQueryInformationParameters(
        char a1,
        __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        signed int a7)
{
  unsigned int v10; // eax
  int ULongFromUser; // eax
  __int64 v12; // rax
  __int16 v13; // ax
  char v14; // al
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  char v19; // al
  unsigned __int64 v20; // rdi
  char UCharFromUser; // al

  if ( !a1 )
    return (a6 & 0xFFFFFEF7) != 0 ? 0xC000000D : 0;
  if ( (unsigned int)a7 >= 0x54 )
    return 3221225475LL;
  v10 = *((unsigned __int8 *)IopQueryOperationLength + a7);
  if ( !(_BYTE)v10 )
    return 3221225475LL;
  if ( a5 >= v10 )
  {
    ULongFromUser = RtlReadULongFromUser(a3);
    RtlWriteULongToUser(a3, ULongFromUser);
    v12 = *(_QWORD *)(a2 + 184);
    if ( *(_QWORD *)(v12 + 784)
      && ((v13 = *(_WORD *)(v12 + 1772), v13 == 332) || v13 == 452 ? (v14 = 1) : (v14 = 0), v14) )
    {
      if ( a5 )
      {
        if ( (a4 & 3) == 0 )
        {
          v16 = a5 + a4;
          if ( v16 <= a4 || v16 > 0x7FFFFFFF0000LL )
            goto LABEL_15;
          v20 = ((v16 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            UCharFromUser = RtlReadUCharFromUser((volatile void *)a4);
            RtlWriteUCharToUser((_BYTE *)a4, UCharFromUser);
            a4 = (a4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( a4 != v20 );
          return (a6 & 0xFFFFFEF7) != 0 ? 0xC000000D : 0;
        }
LABEL_30:
        ExRaiseDatatypeMisalignment();
      }
    }
    else if ( a5 )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + a7) - 1) & (unsigned int)a4) == 0 )
      {
        v17 = a5 + a4;
        if ( v17 <= a4 || v17 > 0x7FFFFFFF0000LL )
LABEL_15:
          ExRaiseAccessViolation();
        v18 = ((v17 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          v19 = RtlReadUCharFromUser((volatile void *)a4);
          RtlWriteUCharToUser((_BYTE *)a4, v19);
          a4 = (a4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( a4 != v18 );
        return (a6 & 0xFFFFFEF7) != 0 ? 0xC000000D : 0;
      }
      goto LABEL_30;
    }
    return (a6 & 0xFFFFFEF7) != 0 ? 0xC000000D : 0;
  }
  return 3221225476LL;
}
