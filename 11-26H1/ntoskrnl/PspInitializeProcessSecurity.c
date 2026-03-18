/*
 * XREFs of PspInitializeProcessSecurity @ 0x140A2B070
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     PsGetSessionId @ 0x140447280 (PsGetSessionId.c)
 *     SeSubProcessToken @ 0x140A2B26C (SeSubProcessToken.c)
 *     ObInitializeFastReference @ 0x140A2BC10 (ObInitializeFastReference.c)
 *     PspIdentityBasedJobBreakaway @ 0x140A2BC58 (PspIdentityBasedJobBreakaway.c)
 *     SeAssignPrimaryToken @ 0x140A2C3D0 (SeAssignPrimaryToken.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        _WORD *a14)
{
  _BYTE *v14; // rdi
  ULONG_PTR v15; // r15
  int SessionId; // eax
  int v20; // r9d
  int v21; // r10d
  int v22; // r14d
  __int64 v23; // r8
  struct _KLOCK_ENTRIES *v24; // r9
  signed __int64 v25; // rax
  __int64 v27; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v28[4]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v29; // [rsp+78h] [rbp-11h]
  __int64 v30; // [rsp+80h] [rbp-9h]
  __int16 v31; // [rsp+C0h] [rbp+37h] BYREF
  char v32; // [rsp+C2h] [rbp+39h]

  v14 = a14;
  v15 = 0LL;
  v27 = 0LL;
  v31 = 0;
  v32 = 0;
  *a14 = 0;
  if ( a1 )
  {
    v28[0] = a5;
    v28[1] = a12;
    v28[2] = a6;
    v28[3] = a7;
    v30 = a13;
    v29 = a1;
    SessionId = PsGetSessionId(a2);
    v22 = SeSubProcessToken(
            a2,
            v21,
            (unsigned int)&v27,
            v20 != 0 ? 1 : 3,
            SessionId,
            (__int64)v28,
            a8,
            a9,
            a10,
            a11,
            (__int64)&v31);
    if ( v22 >= 0 )
    {
      ObInitializeFastReference(a2 + 584, v27);
      if ( a4 || (_BYTE)v31 )
        *v14 = 1;
      if ( HIBYTE(v31) )
        v14[1] = 1;
      if ( !v14[1] && v32 )
      {
        v15 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v23, v24);
        v22 = PspIdentityBasedJobBreakaway(v15, v27, v14 + 1);
      }
    }
    if ( *v14 || *(int *)(a1 + 1872) < 0 || (*(_DWORD *)(a2 + 1532) & 0x800000) != 0 && !*(_QWORD *)(a1 + 1888) )
      v25 = _InterlockedIncrement64(&PsNextSecurityDomain);
    else
      v25 = *(_QWORD *)(a1 + 1888);
    *(_QWORD *)(a2 + 1888) = v25;
    *(_QWORD *)(a2 + 1896) = v25;
    if ( v15 )
      ObFastDereferenceObject((signed __int64 *)(a1 + 584), v15, 0x746C6644u);
  }
  else
  {
    *(_QWORD *)(a2 + 584) = 0LL;
    SeAssignPrimaryToken(a2, a3);
    return 0;
  }
  return (unsigned int)v22;
}
