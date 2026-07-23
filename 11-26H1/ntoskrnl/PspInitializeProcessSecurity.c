/*
 * XREFs of PspInitializeProcessSecurity @ 0x140B80FF8
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     ObInitializeFastReference @ 0x140A7BD9C (ObInitializeFastReference.c)
 *     SeAssignPrimaryToken @ 0x140A7BF34 (SeAssignPrimaryToken.c)
 *     PspIdentityBasedJobBreakaway @ 0x140B11760 (PspIdentityBasedJobBreakaway.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
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
        __int64 a14,
        _WORD *a15)
{
  _BYTE *v15; // rsi
  int v16; // ebx
  int v18; // r12d
  void *v21; // r15
  unsigned int v22; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v24; // rcx
  int SessionId; // eax
  __int64 v26; // r8
  struct _KLOCK_ENTRIES *v27; // r9
  signed __int64 v28; // rax
  void *v30; // [rsp+68h] [rbp-29h] BYREF
  _DWORD v31[4]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v32; // [rsp+80h] [rbp-11h]
  __int64 v33; // [rsp+88h] [rbp-9h]
  __int64 v34; // [rsp+90h] [rbp-1h]
  __int16 v35; // [rsp+C8h] [rbp+37h] BYREF
  char v36; // [rsp+CAh] [rbp+39h]

  v15 = a15;
  v16 = 0;
  v30 = 0LL;
  v35 = 0;
  v36 = 0;
  v18 = (int)a3;
  *a15 = 0;
  v34 = 0LL;
  v21 = 0LL;
  if ( a1 )
  {
    v32 = a1;
    v31[0] = a5;
    v22 = a4 != 0 ? 0xFFFFFFFE : 0;
    v31[1] = a12;
    v31[2] = a6;
    v31[3] = a7;
    v33 = a13;
    IsEnabledDeviceUsageNoInline = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline();
    v24 = v34;
    if ( IsEnabledDeviceUsageNoInline )
      v24 = a14;
    v34 = v24;
    SessionId = PsGetSessionId(a2);
    v16 = SeSubProcessToken(
            a2,
            v18,
            (unsigned int)&v30,
            v22 + 3,
            SessionId,
            (__int64)v31,
            a8,
            a9,
            a10,
            a11,
            (__int64)&v35);
    if ( v16 >= 0 )
    {
      ObInitializeFastReference((__int64 *)(a2 + 584), (__int64)v30);
      if ( a4 || (_BYTE)v35 )
        *v15 = 1;
      if ( HIBYTE(v35) )
        v15[1] = 1;
      if ( !v15[1] && v36 )
      {
        v21 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v26, v27);
        v16 = PspIdentityBasedJobBreakaway(v21, v30, v15 + 1);
      }
    }
    if ( *v15 || *(int *)(a1 + 1872) < 0 || (*(_DWORD *)(a2 + 1532) & 0x800000) != 0 && !*(_QWORD *)(a1 + 1888) )
      v28 = _InterlockedIncrement64(&PsNextSecurityDomain);
    else
      v28 = *(_QWORD *)(a1 + 1888);
    *(_QWORD *)(a2 + 1888) = v28;
    *(_QWORD *)(a2 + 1896) = v28;
    if ( v21 )
      ObFastDereferenceObject((signed __int64 *)(a1 + 584), (ULONG_PTR)v21, 0x746C6644u);
  }
  else
  {
    *(_QWORD *)(a2 + 584) = 0LL;
    SeAssignPrimaryToken(a2, a3);
  }
  return (unsigned int)v16;
}
