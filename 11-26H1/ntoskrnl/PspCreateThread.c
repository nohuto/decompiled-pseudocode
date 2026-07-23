/*
 * XREFs of PspCreateThread @ 0x140A7A214
 * Callers:
 *     NtCreateThread @ 0x1407F57E0 (NtCreateThread.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     NtCreateThreadEx @ 0x140A79100 (NtCreateThreadEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1404AD3B0 (PspIsProcessReadyForRemoteThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        volatile void *a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  _KPROCESS *v14; // rdi
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rsi
  int Thread; // ebx
  char v18; // bl
  char PreviousMode; // r13
  __int64 v20; // rdx
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v27; // rdx
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+64h] [rbp-9Ch]
  __int64 v30; // [rsp+68h] [rbp-98h]
  PVOID v31; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  volatile void *Address; // [rsp+A0h] [rbp-60h]
  void *v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42[50]; // [rsp+D0h] [rbp-30h] BYREF

  v14 = a5;
  v33 = a6;
  v38 = a7;
  v36 = a9;
  v30 = a11;
  v34 = a12;
  Address = a3;
  v29 = a2;
  v39 = a1;
  v35 = a13;
  memset_0(v42, 0, sizeof(v42));
  Object = 0LL;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v31 = 0LL;
  if ( a4 )
  {
    Thread = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v14 = (_KPROCESS *)Object;
  }
  else
  {
    if ( a8 )
      return (unsigned int)-1073741816;
    ObfReferenceObjectWithTag(a5, 0x72437350u);
  }
  v18 = v14->SecureState.EntireField & 1;
  if ( a8 || v18 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  if ( v14 != Process && !PspIsProcessReadyForRemoteThread((__int64)v14) )
    return 3221225473LL;
  v20 = v30;
  if ( v30 && a8 )
  {
    v20 = v30 & -(__int64)(v18 != 0);
    v30 = v20;
  }
  if ( v33
    || v20
    || ((__int64)v14[4].ThreadListHead.Flink & 1) == 0
    && ((__int64)Process[4].ThreadListHead.Flink & 1) == 0
    && !_bittest((const signed __int32 *)&v14[4].ThreadListHead.Flink + 1, 0xEu)
    && !_bittest((const signed __int32 *)&Process[4].ThreadListHead.Flink + 1, 0xEu) )
  {
    if ( PreviousMode )
    {
      if ( (v14[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
      {
        ObfDereferenceObjectWithTag(v14, 0x72437350u);
        return 3221225480LL;
      }
      if ( (v14[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) != 0 )
      {
        Thread = -1073741816;
        goto LABEL_35;
      }
    }
    if ( (v14[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) != 0 && !v14[3].Padding[5] && a8 )
      goto LABEL_44;
    v21 = 0;
    v22 = 0;
    v28 = 0;
    if ( (a10 & 1) != 0 )
    {
      v21 = 1;
      v22 = 1;
      v28 = 1;
    }
    if ( (a10 & 2) != 0 )
    {
      v21 = v22 | 2;
      v28 = v22 | 2;
      v22 |= 2u;
    }
    if ( (a10 & 4) != 0 )
    {
      v21 = v22 | 4;
      v28 = v22 | 4;
      v22 |= 4u;
    }
    if ( (a10 & 0x10) != 0 )
    {
      v21 = v22 | 0x80;
      v28 = v22 | 0x80;
      v22 |= 0x80u;
    }
    if ( (a10 & 0x20) != 0 )
    {
      v21 = v22 | 0x100;
      v28 = v22 | 0x100;
    }
    if ( (a10 & 0x40) != 0 )
    {
      v21 |= 0x200u;
      v28 = v21;
    }
    if ( v18 )
    {
      if ( a8 )
      {
LABEL_44:
        Thread = -1073741790;
        goto LABEL_35;
      }
      v28 = v21 | 0x400;
    }
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink) )
    {
      ObfReferenceObjectWithTag(v14, 0x72437350u);
      v40 = v36;
      v24 = v33;
      Thread = PspAllocateThread(
                 (ULONG_PTR)v14,
                 Address,
                 a8,
                 (__int64)&v40,
                 v30,
                 v34,
                 (__int64)&v28,
                 (__int64)&v31,
                 v35,
                 (__int64)v42);
      if ( Thread >= 0 )
      {
        ObfDereferenceObjectWithTag(v14, 0x72437350u);
        Thread = PspInsertThread((ULONG_PTR)v31, (ULONG_PTR)v14, v29, v35, v24, v34, (__int64)v42, v39, v38);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v25);
        ObfDereferenceObject(v31);
        return (unsigned int)Thread;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v27);
    }
    else
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v23);
      Thread = -1073741558;
    }
LABEL_35:
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
    return (unsigned int)Thread;
  }
  return 3221225506LL;
}
