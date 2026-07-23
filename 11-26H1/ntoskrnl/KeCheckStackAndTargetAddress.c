/*
 * XREFs of KeCheckStackAndTargetAddress @ 0x140470910
 * Callers:
 *     __C_specific_handler @ 0x140535BE0 (__C_specific_handler.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 *     RtlRestoreContext @ 0x140537140 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x140537490 (RcFrameConsolidation.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     _guard_icall_bugcheck @ 0x140735D10 (_guard_icall_bugcheck.c)
 */

char __fastcall KeCheckStackAndTargetAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  char result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF
  char *v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  if ( a1 < 0xFFFF800000000000uLL
    || (result = KeQueryCurrentStackInformationEx(a2, &v5, &v6, &v7)) == 0
    || a2 < (unsigned __int64)v6
    || a2 >= v7 )
  {
    __debugbreak();
    guard_icall_bugcheck(a1);
  }
  return result;
}
