/*
 * XREFs of ExpProfileCreate @ 0x14084B100
 * Callers:
 *     NtCreateProfile @ 0x14084B650 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x14084B730 (NtCreateProfileEx.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     KeVerifyGroupAffinity @ 0x14047D244 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     ExIsRestrictedCaller @ 0x1409DDEE0 (ExIsRestrictedCaller.c)
 */

__int64 __fastcall ExpProfileCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int Length,
        int a8)
{
  unsigned __int64 v11; // rcx
  int v12; // [rsp+54h] [rbp-1F4h]
  int v13; // [rsp+58h] [rbp-1F0h]
  PVOID Object; // [rsp+60h] [rbp-1E8h]
  __int64 v15; // [rsp+70h] [rbp-1D8h]
  __int64 v16; // [rsp+78h] [rbp-1D0h]
  volatile void *Address; // [rsp+80h] [rbp-1C8h]
  __int64 v18; // [rsp+88h] [rbp-1C0h]
  __int128 v19; // [rsp+A8h] [rbp-1A0h]
  __int128 v20; // [rsp+B8h] [rbp-190h]
  __int64 v21; // [rsp+C8h] [rbp-180h]
  int v22; // [rsp+D0h] [rbp-178h]
  __int128 v23; // [rsp+D8h] [rbp-170h]
  __int64 v24; // [rsp+E8h] [rbp-160h]
  struct _KAFFINITY_EX v25; // [rsp+F0h] [rbp-158h] BYREF

  v15 = a1;
  Address = a6;
  memset_0(&v25.8, 0, sizeof(v25.8));
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  Object = 0LL;
  v16 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v12 = 0;
  if ( !Length )
    return 3221225717LL;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return 3221225485LL;
  v11 = (a4 >> a5) + 1;
  if ( !(a4 % (1LL << a5)) )
    v11 = a4 >> a5;
  if ( v11 > (unsigned __int64)Length >> 2 )
    return 3221225507LL;
  if ( a4 + a3 < a4 )
    return 2147483653LL;
  LODWORD(v23) = a8;
  v13 = 0;
  guard_dispatch_icall_no_overrides(1LL, 24LL);
  return 3221225659LL;
}
