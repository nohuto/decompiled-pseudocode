/*
 * XREFs of ??$WriteMember@KUtagNAMELIST@@U1@@?$UserModePointer@UtagNAMELIST@@@@QEAAXPEQtagNAMELIST@@KAEBK@Z @ 0x140288CC0
 * Callers:
 *     _BuildNameList @ 0x140259840 (_BuildNameList.c)
 *     NtUserBuildNameList @ 0x140264610 (NtUserBuildNameList.c)
 * Callees:
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall UserModePointer<tagNAMELIST>::WriteMember<unsigned long,tagNAMELIST,tagNAMELIST>(
        _QWORD *a1,
        int a2,
        unsigned int *a3)
{
  return RtlWriteULongToUser(*a1 + a2, *a3);
}
