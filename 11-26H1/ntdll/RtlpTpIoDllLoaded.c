/*
 * XREFs of RtlpTpIoDllLoaded @ 0x1800B7648
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800B7630 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     TpDereferenceGlobalPool @ 0x180067320 (TpDereferenceGlobalPool.c)
 *     RtlDelete @ 0x1800B7940 (RtlDelete.c)
 */

__int64 __fastcall RtlpTpIoDllLoaded(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  UNICODE_STRING *v11; // rbx

  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock, a2);
  v4 = RtlpTpIoTree;
  while ( 1 )
  {
    v5 = (_QWORD *)v4;
    if ( !v4 )
      break;
    v6 = (unsigned __int64 *)(v4 - 96);
    v7 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v4 - 96) < v7 )
      goto LABEL_4;
    if ( *v6 >= v7 + *(unsigned int *)(a1 + 32) )
    {
      if ( *v6 < v7 )
LABEL_4:
        v4 = *(_QWORD *)(v4 + 16);
      else
        v4 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v4 = RtlDelete(v4);
      RtlpTpIoTree = v4;
      *v5 = v3;
      v3 = (UNICODE_STRING *)v6;
    }
  }
  result = (__int64)RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v3 )
  {
    v11 = v3;
    v3 = *(UNICODE_STRING **)&v3[6].Length;
    TpDereferenceGlobalPool(*(_QWORD *)&v11[5].Length, v9, v10);
    RtlFreeAnsiString(v11 + 8);
    result = RtlFreeHeap_0();
  }
  return result;
}
