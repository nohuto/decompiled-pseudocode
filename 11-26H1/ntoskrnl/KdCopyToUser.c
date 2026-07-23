/*
 * XREFs of KdCopyToUser @ 0x140536320
 * Callers:
 *     KdpQuickMoveMemory @ 0x140C1816C (KdpQuickMoveMemory.c)
 *     KdpPrint @ 0x140C1BD30 (KdpPrint.c)
 *     KdpPrompt @ 0x140C1BEBC (KdpPrompt.c)
 * Callees:
 *     KdCopyToUserInternal @ 0x1405363C8 (KdCopyToUserInternal.c)
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KdCopyToUser(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  char v7; // r9
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  if ( byte_140E0F340 )
  {
    memset_0(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    LOBYTE(v6) = 0;
    __asm { stac }
    KdCopyToUserInternal(a1, a2, a3, v6);
    __asm { clac }
    if ( v7 )
      RtlRaiseException(&ExceptionRecord);
  }
  else
  {
    ((void (*)(void))KdCopyToUserInternal)();
  }
}
