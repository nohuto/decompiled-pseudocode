/*
 * XREFs of PspCreatePicoProcess @ 0x1408022F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspCreatePicoProcess(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v5; // r15
  int v6; // ebx
  int v7; // edi
  ULONG_PTR v8; // rcx
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  HANDLE v14; // rsi
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  struct _KTHREAD *v17; // r13
  volatile signed __int32 *v18; // r14
  int v19; // ebx
  __int64 v21; // [rsp+60h] [rbp-20h] BYREF
  PVOID Object; // [rsp+68h] [rbp-18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-10h]
  PVOID v24; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v25; // [rsp+D0h] [rbp+50h]
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  v25 = a3;
  CurrentThread = KeGetCurrentThread();
  v21 = 0LL;
  v5 = 0LL;
  v24 = 0LL;
  v6 = *(_DWORD *)(a1 + 24);
  Handle = 0LL;
  Object = 0LL;
  if ( (v6 & 0xFFFFFFF0) != 0 || (v6 & 6) != 0 && (v6 & 1) == 0 || !*(_QWORD *)(a1 + 16) )
    return (unsigned int)-1073741811;
  v7 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 0x72437350u, (__int64)&v24, 0LL, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 )
    goto LABEL_10;
  v7 = ObpReferenceObjectByHandleWithTag(v8, 0x72437350u, (__int64)&v21, 0LL, 0LL);
  if ( v7 >= 0 )
  {
    v5 = (void *)v21;
LABEL_10:
    v9 = 0;
    if ( (v6 & 1) != 0 )
    {
      v9 = 2 * (v6 & 2 | 0x1000);
      if ( (v6 & 4) != 0 )
        v9 |= 0x4000u;
    }
    v10 = v9 | 1;
    if ( (v6 & 8) == 0 )
      v10 = v9;
    v11 = 0LL;
    v12 = 0LL;
    if ( a2 )
    {
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *(_QWORD *)(a2 + 16);
    }
    v13 = PsCreateMinimalProcess((__int64)v24, v11, v12, 0, v5, v10, 2, *(_QWORD *)(a1 + 16), 0LL, 0LL, 0LL, &Handle);
    v14 = Handle;
    v7 = v13;
    if ( v13 >= 0 )
    {
      v7 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x72437350u, (__int64)&Object, 0LL, 0LL);
      if ( v7 >= 0 )
      {
        v17 = CurrentThread;
        v18 = (volatile signed __int32 *)Object;
        PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread, v15, v16);
        if ( (v18[125] & 8) != 0 )
        {
          v7 = -1073741558;
        }
        else
        {
          _interlockedbittestandset(v18 + 124, 0xAu);
          *v25 = v14;
          v14 = 0LL;
        }
        v19 = v7;
        PspUnlockProcessExclusive((__int64)v18, (__int64)v17);
        ObfDereferenceObjectWithTag((PVOID)v18, 0x72437350u);
        v7 = 0;
        if ( v19 < 0 )
          v7 = v19;
      }
    }
    if ( v14 )
      ZwClose(v14);
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x72437350u);
  }
  if ( v24 )
    ObfDereferenceObjectWithTag(v24, 0x72437350u);
  return (unsigned int)v7;
}
