/*
 * XREFs of Field @ 0x1400102A0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ParseFieldList @ 0x140010940 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall Field(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r15
  size_t v6; // rbx
  _BYTE *v7; // rdi
  _BYTE *Pool2; // r14
  KIRQL v9; // bl
  unsigned int NameSpaceObjectNoLock; // edi
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 *v13; // rax
  __int64 v14; // r9
  const void *v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE P[128]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)(a2 + 80);
  v4 = a1[10];
  v18 = 0LL;
  v6 = -1LL;
  v7 = *(_BYTE **)(v2 + 32);
  do
    ++v6;
  while ( v7[v6] );
  if ( v6 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v6 + 1, 1768973121LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, v7, v6);
  Pool2[v6] = 0;
  v9 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, v4, &v18, 0x80000000);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v9);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v11 = v18;
  if ( !NameSpaceObjectNoLock )
  {
    if ( *(_WORD *)(v18 + 66) == 10 )
    {
      v12 = a2 + 64;
      NameSpaceObjectNoLock = CreateNameSpaceObject(a1[40], 0LL, a1[10], a1[11], a2 + 64, 0);
      if ( NameSpaceObjectNoLock )
        goto LABEL_12;
      *(_WORD *)(*(_QWORD *)v12 + 66LL) = 131;
      *(_DWORD *)(*(_QWORD *)v12 + 88LL) = 8;
      v13 = HeapAlloc((_QWORD *)a1[40], 1329874504, *(_DWORD *)(*(_QWORD *)v12 + 88LL));
      *(_QWORD *)(*(_QWORD *)v12 + 96LL) = v13;
      if ( v13 )
      {
        memset(*(void **)(*(_QWORD *)v12 + 96LL), 0, *(unsigned int *)(*(_QWORD *)v12 + 88LL));
        v14 = v11;
        **(_QWORD **)(*(_QWORD *)v12 + 96LL) = v11;
        v11 = 0LL;
        NameSpaceObjectNoLock = ParseFieldList(
                                  (_DWORD)a1,
                                  *(_QWORD *)(a2 + 40),
                                  *(_QWORD *)v12,
                                  *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL),
                                  *(_DWORD *)(*(_QWORD *)(v14 + 96) + 8LL));
        goto LABEL_12;
      }
      NameSpaceObjectNoLock = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      v16 = 0LL;
      v17 = 51;
    }
    else
    {
      NameSpaceObjectNoLock = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError((__int64)a1, -1072431095);
      v16 = *(const void **)(*(_QWORD *)(a2 + 80) + 32LL);
      v17 = 52;
    }
    PrintDebugMessage(v17, v16, 0LL, 0LL, 0LL);
  }
LABEL_12:
  if ( v11 )
    DereferenceObjectEx(v11);
  return NameSpaceObjectNoLock;
}
