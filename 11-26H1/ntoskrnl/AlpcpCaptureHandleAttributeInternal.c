/*
 * XREFs of AlpcpCaptureHandleAttributeInternal @ 0x1409BADB4
 * Callers:
 *     AlpcpCaptureHandleAttribute32 @ 0x1409B924C (AlpcpCaptureHandleAttribute32.c)
 *     AlpcpCaptureHandleAttribute @ 0x1409BAD54 (AlpcpCaptureHandleAttribute.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpAllocateBlob @ 0x1408F1B80 (AlpcpAllocateBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     ObCaptureObjectStateForDuplication @ 0x1409BB2E4 (ObCaptureObjectStateForDuplication.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttributeInternal(__int64 a1, __int64 a2, char a3)
{
  char PreviousMode; // r12
  ULONG_PTR v6; // rdi
  unsigned int v7; // r14d
  _DWORD *Pool2; // rsi
  void *Blob; // rax
  _KPROCESS *Process; // r13
  int v11; // ebx
  __int64 j; // r12
  int v13; // ecx
  __int64 v15; // r12
  __int64 i; // rbx
  void *v17; // rdx
  __int64 v18; // rdx
  int v19; // ecx
  char v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+40h] [rbp-68h]
  __int128 v23; // [rsp+60h] [rbp-48h] BYREF

  v23 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  if ( (*(_DWORD *)a1 & 0xFFF0FFFF) != 0 )
    return 3221225485LL;
  v6 = 0LL;
  v7 = 1;
  Pool2 = 0LL;
  if ( (*(_DWORD *)a1 & 0x40000) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 16);
    if ( v7 > 0x200 )
      return 3221227298LL;
    if ( v7 > 1 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return 3221225495LL;
      v15 = *(_QWORD *)(a1 + 8);
      for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
      {
        v17 = (void *)(v15 + 16LL * (unsigned int)i);
        if ( a3 )
          RtlCopyFromUser(&v23, v17, 0x10uLL);
        else
          RtlCopyVolatileMemory(&v23, v17, 0x10uLL);
        v18 = 3 * i;
        Pool2[2 * v18] = v23;
        v19 = v23;
        *(_QWORD *)&Pool2[2 * v18 + 2] = DWORD1(v23);
        *(_QWORD *)&Pool2[2 * v18 + 4] = *((_QWORD *)&v23 + 1);
        if ( (v19 & 0xFFF4FFFF) != 0 )
        {
          v11 = -1073741811;
          goto LABEL_12;
        }
      }
      PreviousMode = v20;
      goto LABEL_3;
    }
    return 3221225485LL;
  }
LABEL_3:
  Blob = (void *)AlpcpAllocateBlob((__int64)AlpcHandleDataType, 48LL * v7, 0);
  v6 = (ULONG_PTR)Blob;
  if ( Blob )
  {
    memset_0(Blob, 0, 48LL * v7);
    *(_DWORD *)(v6 + 4) = v7;
    if ( PreviousMode )
      Process = KeGetCurrentThread()->ApcState.Process;
    else
      Process = PsInitialSystemProcess;
    v11 = 0;
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= v7 )
      {
        *(_QWORD *)(a2 + 48) = v6;
        v6 = 0LL;
        goto LABEL_12;
      }
      v21 = 48 * j;
      v11 = ObCaptureObjectStateForDuplication(Process, v20, v6 + 48 * j + 8);
      if ( v11 >= 0 )
      {
        v13 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(*(_QWORD *)(v21 + v6 + 24)
                                                                                                - 24LL) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(*(_QWORD *)(v21 + v6 + 24) - 48) >> 8)]
                        + 68);
        *(_DWORD *)(v21 + v6) = v13;
        if ( (v13 & 0xFFD) == 0 )
          break;
      }
    }
    v11 = -1073741790;
  }
  else
  {
    v11 = -1073741670;
  }
LABEL_12:
  if ( v6 )
    AlpcpDereferenceBlobEx(v6, 1);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4863704Cu);
  return (unsigned int)v11;
}
