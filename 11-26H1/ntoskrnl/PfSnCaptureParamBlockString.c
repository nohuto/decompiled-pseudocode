/*
 * XREFs of PfSnCaptureParamBlockString @ 0x140AFFA24
 * Callers:
 *     PfSnScanCommandLine @ 0x1409D320C (PfSnScanCommandLine.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnCaptureParamBlockString(__int64 a1, unsigned int *a2, _OWORD *a3)
{
  __int64 ULong64FromUser; // rsi
  unsigned int v7; // ebx
  void *Pool2; // rax
  PVOID P[2]; // [rsp+28h] [rbp-40h]
  int ULongFromUser; // [rsp+40h] [rbp-28h]
  void *Src_8; // [rsp+58h] [rbp-10h]

  HIDWORD(P[0]) = 0;
  ULongFromUser = RtlReadULongFromUser(a2);
  ULong64FromUser = RtlReadULong64FromUser(a2 + 2);
  Src_8 = (void *)ULong64FromUser;
  if ( ULong64FromUser && (_WORD)ULongFromUser )
  {
    if ( (unsigned __int16)ULongFromUser > HIWORD(ULongFromUser) )
    {
      v7 = -1073741789;
      Pool2 = 0LL;
    }
    else
    {
      if ( (RtlReadULongFromUser((unsigned int *)(a1 + 8)) & 1) == 0 )
        Src_8 = (void *)(ULong64FromUser + a1);
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      P[1] = Pool2;
      if ( Pool2 )
      {
        LODWORD(P[0]) = ULongFromUser;
        if ( ((unsigned __int8)Src_8 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        RtlCopyFromUser(Pool2, Src_8, (unsigned __int16)ULongFromUser);
        *a3 = *(_OWORD *)P;
        Pool2 = 0LL;
        v7 = 0;
      }
      else
      {
        v7 = -1073741801;
      }
    }
  }
  else
  {
    v7 = -1073741275;
    Pool2 = 0LL;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v7;
}
