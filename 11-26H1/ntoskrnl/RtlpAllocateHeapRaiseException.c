/*
 * XREFs of RtlpAllocateHeapRaiseException @ 0x14061AF94
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x140498638 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char __fastcall RtlpAllocateHeapRaiseException(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  ULONG_PTR v6; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+38h] [rbp-A0h]
  __int64 v8; // [rsp+48h] [rbp-90h]
  __int64 v9; // [rsp+50h] [rbp-88h]
  __int64 v10; // [rsp+58h] [rbp-80h]
  __int64 v11; // [rsp+60h] [rbp-78h]
  __int64 v12; // [rsp+68h] [rbp-70h]
  __int64 v13; // [rsp+70h] [rbp-68h]
  __int64 v14; // [rsp+78h] [rbp-60h]
  __int64 v15; // [rsp+80h] [rbp-58h]
  __int64 v16; // [rsp+88h] [rbp-50h]
  __int64 v17; // [rsp+90h] [rbp-48h]
  __int64 v18; // [rsp+98h] [rbp-40h]
  __int64 v19; // [rsp+A0h] [rbp-38h]
  __int64 v20; // [rsp+A8h] [rbp-30h]
  __int64 v21; // [rsp+B0h] [rbp-28h]
  unsigned __int64 v22; // [rsp+B8h] [rbp-20h]

  memset_0(&v6, 0, 0x98uLL);
  LODWORD(v7) = 1;
  return RtlRaiseException(
           (ULONG_PTR)&v6,
           v2,
           v3,
           v4,
           3221225495LL,
           0LL,
           (__int64)RtlRaiseException,
           v7,
           a1,
           v8,
           v9,
           v10,
           v11,
           v12,
           v13,
           v14,
           v15,
           v16,
           v17,
           v18,
           v19,
           v20,
           v21,
           v22);
}
