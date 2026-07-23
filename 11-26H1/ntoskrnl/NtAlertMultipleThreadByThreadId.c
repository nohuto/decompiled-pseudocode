/*
 * XREFs of NtAlertMultipleThreadByThreadId @ 0x140804F30
 * Callers:
 *     DifNtAlertMultipleThreadByThreadIdWrapper @ 0x14066E830 (DifNtAlertMultipleThreadByThreadIdWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405EE81C (KeAlertMultipleThreadByThreadId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtAlertMultipleThreadByThreadId(volatile void *Address, ULONGLONG ullMultiplicand, char *a3, int a4)
{
  unsigned int v6; // esi
  struct _KTHREAD *v8; // r12
  _BYTE *Pool2; // rbx
  NTSTATUS v10; // edi
  char PreviousMode; // di
  unsigned int v12; // r9d
  __int64 i; // r14
  PETHREAD v14; // rax
  PVOID *v15; // rsi
  __int64 v16; // r14
  ULONGLONG pullResult; // [rsp+30h] [rbp-288h] BYREF
  PETHREAD Thread[2]; // [rsp+38h] [rbp-280h] BYREF
  _KPROCESS *CurrentThreadProcess; // [rsp+48h] [rbp-270h]
  __int64 v21; // [rsp+50h] [rbp-268h]
  __int128 v22; // [rsp+58h] [rbp-260h]
  HANDLE v23; // [rsp+68h] [rbp-250h]
  _BYTE v24[512]; // [rsp+70h] [rbp-248h] BYREF

  v6 = ullMultiplicand;
  v8 = 0LL;
  pullResult = 0LL;
  memset_0(v24, 0, sizeof(v24));
  Pool2 = 0LL;
  Thread[0] = 0LL;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v21 = v6;
  v10 = RtlULongLongMult(v6, 8uLL, &pullResult);
  if ( v10 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
      ProbeForRead(Address, pullResult, 8u);
    while ( a4 )
    {
      if ( PreviousMode )
      {
        Thread[1] = (PETHREAD)1;
        ProbeForRead(a3, 1uLL, 8u);
      }
      v22 = *(_OWORD *)a3;
      if ( (_BYTE)v22 )
      {
        v10 = -1073741811;
        goto LABEL_21;
      }
      v8 = (struct _KTHREAD *)*((_QWORD *)&v22 + 1);
      --a4;
      a3 += 16;
    }
    if ( v6 <= 0x40 )
    {
      Pool2 = v24;
    }
    else
    {
      Pool2 = (_BYTE *)ExAllocatePool2(0x43uLL);
      if ( !Pool2 )
      {
        v10 = -1073741801;
        goto LABEL_21;
      }
    }
    memset_0(Pool2, 0, pullResult);
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      v23 = (HANDLE)*((_QWORD *)Address + i);
      v10 = PsLookupThreadByThreadId(v23, Thread);
      if ( v10 < 0 )
        goto LABEL_21;
      v14 = Thread[0];
      *(PETHREAD *)&Pool2[8 * i] = Thread[0];
      if ( CurrentThreadProcess != v14->Process )
      {
        v10 = -1073741790;
        goto LABEL_21;
      }
    }
    KeAlertMultipleThreadByThreadId((__int64)Pool2, v6, v8, v12);
    v10 = 0;
  }
LABEL_21:
  if ( Pool2 )
  {
    if ( v6 )
    {
      v15 = (PVOID *)Pool2;
      v16 = v21;
      do
      {
        if ( *v15 )
          ObfDereferenceObject(*v15);
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    if ( Pool2 != v24 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v10;
}
