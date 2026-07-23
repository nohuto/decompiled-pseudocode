/*
 * XREFs of MmFreeVirtualMemory @ 0x140A04CB0
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     PspSetupUserShadowStack @ 0x1409EE454 (PspSetupUserShadowStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409EE630 (PspReserveAndCommitUserShadowStack.c)
 *     PspFreeUserFiberShadowStack @ 0x140A045EC (PspFreeUserFiberShadowStack.c)
 *     PspDeleteUserStack @ 0x140A04714 (PspDeleteUserStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x140A0481C (PspFreeCurrentThreadUserShadowStack.c)
 *     NtFreeVirtualMemory @ 0x140A04B90 (NtFreeVirtualMemory.c)
 *     PspSetupUserFiberShadowStack @ 0x140B33888 (PspSetupUserFiberShadowStack.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiDereferenceEnclaveModule @ 0x14087C944 (MiDereferenceEnclaveModule.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkUnMapViewOfSection @ 0x140995428 (DbgkUnMapViewOfSection.c)
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 */

__int64 __fastcall MmFreeVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned __int8 a5,
        int a6)
{
  unsigned int v6; // edi
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  _KPROCESS *v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  int v14; // r15d
  unsigned __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // r14
  PRKPROCESS v18; // r12
  ULONG_PTR v19; // rax
  unsigned __int64 v20; // rax
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rcx
  volatile signed __int32 **v23; // rax
  unsigned int v24; // [rsp+60h] [rbp-79h] BYREF
  PRKPROCESS PROCESS; // [rsp+68h] [rbp-71h] BYREF
  __int64 v26; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-61h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-59h] BYREF
  struct _KPROCESS *v29; // [rsp+90h] [rbp-49h]
  __int64 v30; // [rsp+98h] [rbp-41h]
  _QWORD *v31; // [rsp+A0h] [rbp-39h]
  ULONG_PTR v32; // [rsp+A8h] [rbp-31h]
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-29h] BYREF

  v6 = a4;
  v31 = a3;
  v32 = BugCheckParameter1;
  memset(&ApcState, 0, 32);
  *(_QWORD *)&ApcState.InProgressFlags = 0LL;
  PROCESS = 0LL;
  v24 = 0;
  v28[1] = 0LL;
  v28[0] = 0LL;
  if ( (a4 & 0xC000) == 0 || (a4 & 0xC000) == 0xC000 )
    return 3221225714LL;
  v9 = *a2;
  v10 = *a3;
  v30 = v10;
  v11 = KeGetCurrentThread()->ApcState.Process;
  v29 = v11;
  v12 = v10 + v9;
  if ( v10 + v9 <= v9 )
  {
    if ( v10 || v12 >= 0x7FFFFFFF0000LL )
      return 3221225485LL;
  }
  else if ( v12 > 0x7FFFFFFF0000LL )
  {
    return 3221225485LL;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) != 0 )
      return 3221225485LL;
    v14 = a6 | 0x4000000;
    v6 = a4 & 0xFFFFFFFD;
  }
  else
  {
    v14 = a6;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_16;
  if ( (v6 & 2) != 0 )
    return 3221225485LL;
  v14 |= 0xC000000u;
  v6 &= ~1u;
LABEL_16:
  if ( (v14 & 0x4000000) == 0 )
    goto LABEL_17;
  if ( v6 != 0x8000 )
    return 3221225714LL;
  if ( !v10 || v10 != (v10 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225713LL;
  if ( v9 != (v9 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
LABEL_17:
  v15 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v16 = 0;
  v17 = (v12 - 1) | 0xFFF;
  v27 = v15;
  v26 = v17;
  ApcState.Process = 0LL;
  if ( BugCheckParameter1 == -1LL )
  {
    v18 = v11;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               8,
               (__int64)PsProcessType,
               a5,
               0x6D566D4Du,
               &PROCESS,
               0LL,
               0LL);
    v24 = result;
    if ( (int)result < 0 )
      return result;
    v18 = PROCESS;
    if ( v29 != PROCESS )
    {
      v16 = 1;
      KeStackAttachProcess(PROCESS, &ApcState);
    }
  }
  if ( (v6 & 0xFFFF3FFF) == 0 || v18[3].Padding[5] && (v6 & 0x10000) != 0 && (v6 & 0x4000) == 0 )
  {
    if ( (v14 & 0xC000000) == 0xC000000 )
    {
      v24 = MiCoalescePlaceholderAllocations(v18, v15, v17, a5);
    }
    else
    {
      v19 = MiObtainReferencedVadEx(v15, (v6 >> 15) & 1, (int *)&v24);
      if ( v19 )
      {
        v24 = MiFreeVirtualMemory(v18, v19, &v27, &v26, v30, v6, v14, (v6 >> 15) & 1, a5, v28, 0LL);
        if ( (v24 & 0x80000000) == 0 )
        {
          v20 = v27;
          *v31 = v26 - v27 + 1;
          *a2 = v20;
        }
      }
    }
  }
  else
  {
    v24 = -1073741582;
  }
  if ( v16 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  v21 = (volatile signed __int32 *)v28[0];
  if ( v28[0] )
  {
    while ( v21 != (volatile signed __int32 *)v28 )
    {
      if ( v18 )
        DbgkUnMapViewOfSection(v18);
      v22 = *(_QWORD *)v21;
      if ( *(volatile signed __int32 **)(*(_QWORD *)v21 + 8LL) != v21
        || (v23 = (volatile signed __int32 **)*((_QWORD *)v21 + 1), *v23 != v21) )
      {
        __fastfail(3u);
      }
      *v23 = (volatile signed __int32 *)v22;
      *(_QWORD *)(v22 + 8) = v23;
      MiDereferenceEnclaveModule(v21);
      v21 = (volatile signed __int32 *)v28[0];
    }
  }
  if ( v32 != -1LL )
    ObfDereferenceObjectWithTag(v18, 0x6D566D4Du);
  return v24;
}
