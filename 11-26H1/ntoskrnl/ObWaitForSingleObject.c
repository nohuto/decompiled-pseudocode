/*
 * XREFs of ObWaitForSingleObject @ 0x14092A290
 * Callers:
 *     NtWaitForSingleObject @ 0x14092A200 (NtWaitForSingleObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ObWaitForSingleObject(
        ULONG_PTR a1,
        __int64 a2,
        KPROCESSOR_MODE a3,
        BOOLEAN a4,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS v7; // ebx
  PVOID v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rcx
  PVOID Object[2]; // [rsp+48h] [rbp-10h] BYREF

  Object[0] = 0LL;
  v7 = ObpReferenceObjectByHandleWithTag(a1, 0x7457624Fu, (__int64)Object, 0LL, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = Object[0];
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
  v10 = *(_QWORD *)(v9 + 32);
  if ( (v10 & 1) == 0 )
  {
    if ( v10 < 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( (v10 & 2) != 0 )
  {
    if ( (*(_DWORD *)(v9 + 176) & *(_DWORD *)((_BYTE *)Object[0] + *(unsigned __int16 *)(v9 + 180))) != *(_DWORD *)(v9 + 176) )
    {
      v10 -= 3LL;
LABEL_4:
      v10 += (__int64)Object[0];
      goto LABEL_5;
    }
    v10 = *(_QWORD *)((char *)Object[0] + *(unsigned __int16 *)(v9 + 182));
  }
  else
  {
    v10 = *(_QWORD *)((char *)Object[0] + v10 - 1);
  }
LABEL_5:
  if ( *(_QWORD *)&WheapConfigTableLock.WaitBlockFill11[64] != v9 )
  {
    v7 = KeWaitForSingleObject((PVOID)v10, UserRequest, a3, a4, Timeout);
    ObfDereferenceObjectWithTag(v8, 0x7457624Fu);
    return (unsigned int)v7;
  }
  ObfDereferenceObjectWithTag(Object[0], 0x7457624Fu);
  return 3221225508LL;
}
