/*
 * XREFs of KeWriteExceptionRecordToUser @ 0x1404B8260
 * Callers:
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 * Callees:
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 */

__int64 __fastcall KeWriteExceptionRecordToUser(char *a1, char *Src)
{
  RtlSetUserMemory(a1);
  RtlCopyToUser(a1, Src, 0x1CuLL);
  return RtlCopyToUser(a1 + 32, Src + 32, 8LL * *((unsigned int *)Src + 6));
}
