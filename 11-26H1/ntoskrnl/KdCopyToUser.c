/*
 * XREFs of KdCopyToUser @ 0x140533EA0
 * Callers:
 *     KdpQuickMoveMemory @ 0x140C1216C (KdpQuickMoveMemory.c)
 *     KdpPrint @ 0x140C15D30 (KdpPrint.c)
 *     KdpPrompt @ 0x140C15EBC (KdpPrompt.c)
 * Callees:
 *     KdCopyToUserInternal @ 0x140533F48 (KdCopyToUserInternal.c)
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall KdCopyToUser(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 result; // rax
  char v8; // r9
  ULONG_PTR v9[20]; // [rsp+30h] [rbp-B8h] BYREF

  if ( !byte_140E0F2C0 )
    return ((__int64 (*)(void))KdCopyToUserInternal)();
  memset_0(v9, 0, 0x98uLL);
  LOBYTE(v6) = 0;
  __asm { stac }
  result = KdCopyToUserInternal(a1, a2, a3, v6);
  __asm { clac }
  if ( v8 )
    return RtlRaiseException((ULONG_PTR)v9);
  return result;
}
