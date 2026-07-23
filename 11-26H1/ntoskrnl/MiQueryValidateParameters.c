/*
 * XREFs of MiQueryValidateParameters @ 0x1409247B0
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall MiQueryValidateParameters(int *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rsi
  int v4; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  char UCharFromUser; // al
  volatile void *v9; // rcx
  __int64 ULong64FromUser; // rax

  v2 = 0LL;
  v3 = *((_QWORD *)a1 + 2);
  v4 = *a1;
  if ( *a1 == 3 )
  {
LABEL_2:
    v2 = 24LL;
  }
  else
  {
    if ( v4 != 8 )
    {
      switch ( v4 )
      {
        case 0:
          break;
        case 1:
          v2 = 8LL;
          a1[18] |= 0x100u;
          goto LABEL_23;
        case 2:
          goto LABEL_23;
        case 4:
          v2 = 16LL;
          a1[18] |= 0x100u;
          goto LABEL_23;
        case 5:
          v2 = 8LL;
          goto LABEL_3;
        case 6:
          goto LABEL_2;
        case 7:
          v2 = 32LL;
          goto LABEL_3;
        case 11:
          v2 = 40LL;
          a1[18] |= 0x100u;
          goto LABEL_23;
        case 12:
          if ( *((_QWORD *)a1 + 5) )
            return 3221225485LL;
          goto LABEL_23;
        case 13:
          return 3221225659LL;
        case 14:
          v2 = 24LL;
          if ( !*((_QWORD *)a1 + 5) )
            return 3221225485LL;
LABEL_23:
          if ( v2 )
            goto LABEL_3;
          goto LABEL_4;
        default:
          return 3221225475LL;
      }
    }
    v2 = 48LL;
  }
LABEL_3:
  if ( v3 < v2 )
    return 3221225476LL;
LABEL_4:
  if ( !MmIsUserAddress(*((_QWORD *)a1 + 5)) )
    return 3221225485LL;
  if ( *((_BYTE *)a1 + 32) )
  {
    v5 = *((_QWORD *)a1 + 1);
    if ( v3 )
    {
      if ( (v5 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = v5 + v3;
      if ( v6 <= v5 || v6 > 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v7 = ((v6 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        UCharFromUser = RtlReadUCharFromUser((volatile void *)v5);
        RtlWriteUCharToUser((_BYTE *)v5, UCharFromUser);
        v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v5 != v7 );
    }
    v9 = (volatile void *)*((_QWORD *)a1 + 3);
    if ( v9 )
    {
      ULong64FromUser = RtlReadULong64FromUser(v9);
      RtlWriteULong64ToUser(*((_QWORD **)a1 + 3), ULong64FromUser);
    }
  }
  return 0LL;
}
