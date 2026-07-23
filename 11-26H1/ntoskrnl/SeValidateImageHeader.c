/*
 * XREFs of SeValidateImageHeader @ 0x14099E0EC
 * Callers:
 *     MiValidateImageHeader @ 0x14099CC04 (MiValidateImageHeader.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140B1633C (SepScheduleImageVerificationCallbacks.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeValidateImageHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        char a12,
        char a13,
        __int64 a14,
        __int64 a15)
{
  int v15; // eax
  PVOID v16; // rcx
  int v17; // ebx
  int v19; // eax
  unsigned __int64 v20; // [rsp+78h] [rbp-30h]
  unsigned int v21; // [rsp+90h] [rbp-18h] BYREF
  PVOID P; // [rsp+98h] [rbp-10h] BYREF

  P = 0LL;
  v21 = 0;
  if ( SepRmCapTableLock.ReadTransferCount )
  {
    v20 = (unsigned __int64)&P & -(__int64)(*(_DWORD *)&RtlpBootStatHandleLock.AffinityPrimaryGroup != 0);
    v15 = guard_dispatch_icall_no_overrides(a1, a2);
    v16 = P;
    v17 = v15;
    if ( P )
    {
      if ( v15 < 0 || (a10 & 1) != 0 )
      {
        v19 = SepScheduleImageVerificationCallbacks(
                P,
                v21,
                (unsigned int)v15,
                a10,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                a15,
                v20,
                &v21);
        if ( v19 >= 0 )
          return (unsigned int)v17;
        v16 = P;
        if ( v17 >= 0 )
          v17 = v19;
      }
      if ( v16 )
        ExFreePoolWithTag(v16, 0x63734943u);
    }
  }
  else
  {
    return (unsigned int)-1073740760;
  }
  return (unsigned int)v17;
}
