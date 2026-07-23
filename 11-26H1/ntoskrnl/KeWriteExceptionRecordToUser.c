/*
 * XREFs of KeWriteExceptionRecordToUser @ 0x1404B1A90
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 * Callees:
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 */

__int64 __fastcall KeWriteExceptionRecordToUser(char *a1, char *Src)
{
  RtlSetUserMemory(a1);
  RtlCopyToUser(a1, Src, 0x1CuLL);
  return RtlCopyToUser(a1 + 32, Src + 32, 8LL * *((unsigned int *)Src + 6));
}
