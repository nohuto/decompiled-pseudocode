/*
 * XREFs of RtlpGetStackLimitsEx @ 0x1403D9530
 * Callers:
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x1403D8F00 (RtlDispatchException.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall RtlpGetStackLimitsEx(
        ULONG_PTR BugCheckParameter1,
        char **a2,
        unsigned __int64 *a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4)
{
  char result; // al
  ULONG_PTR BugCheckParameter2[3]; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(BugCheckParameter2[0]) = 0;
  result = KeQueryCurrentStackInformationEx(BugCheckParameter1, BugCheckParameter2, a2, a3);
  if ( !result )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x1AAu, BugCheckParameter1, LODWORD(BugCheckParameter2[0]), a4, BugCheckParameter4);
    KeBugCheckEx(0x1ABu, BugCheckParameter1, LODWORD(BugCheckParameter2[0]), a4, 0LL);
  }
  return result;
}
