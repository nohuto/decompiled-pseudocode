/*
 * XREFs of DbgkpOpenHandles @ 0x140AEC2B4
 * Callers:
 *     NtWaitForDebugEvent @ 0x140AEBFD0 (NtWaitForDebugEvent.c)
 * Callees:
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 */

void __fastcall DbgkpOpenHandles(__int64 a1, void *a2, void *a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  void *v7; // rsi
  struct _KPROCESS *v8; // r8
  struct _KPROCESS *Process; // r8

  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v5 = (_QWORD *)(a1 + 24);
      if ( ObOpenObjectByPointer(a3, 0, 0LL, 0x12007Bu, (POBJECT_TYPE)PsThreadType, 0, (PHANDLE)(a1 + 24)) < 0 )
        *v5 = 0LL;
      break;
    case 3:
      v6 = (_QWORD *)(a1 + 32);
      if ( ObOpenObjectByPointer(a3, 0, 0LL, 0x12007Bu, (POBJECT_TYPE)PsThreadType, 0, (PHANDLE)(a1 + 32)) < 0 )
        *v6 = 0LL;
      if ( ObOpenObjectByPointer(a2, 0, 0LL, 0x12067Bu, (POBJECT_TYPE)PsProcessType, 0, (PHANDLE)(a1 + 24)) < 0 )
        *(_QWORD *)(a1 + 24) = 0LL;
      v7 = *(void **)(a1 + 48);
      if ( v7 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (int)ObDuplicateObject((__int64)Process, v7, Process, (__int64 *)(a1 + 48), 0, 0, 2, 0) < 0 )
          *(_QWORD *)(a1 + 48) = 0LL;
        goto LABEL_17;
      }
      break;
    case 9:
      v7 = *(void **)(a1 + 24);
      if ( v7 )
      {
        v8 = KeGetCurrentThread()->ApcState.Process;
        if ( (int)ObDuplicateObject((__int64)v8, v7, v8, (__int64 *)(a1 + 24), 0, 0, 2, 0) < 0 )
          *(_QWORD *)(a1 + 24) = 0LL;
LABEL_17:
        ObCloseHandle(v7, 0);
      }
      break;
  }
}
