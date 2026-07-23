/*
 * XREFs of EtwpProcessThreadImageRundown @ 0x1409BBF74
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     EtwpProcessEnumCallback @ 0x1409BC0E0 (EtwpProcessEnumCallback.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     EtwpIsStackWalkingEnabled @ 0x1409BCA58 (EtwpIsStackWalkingEnabled.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpProcessThreadImageRundown(__int64 a1, __int64 a2, char a3, unsigned int **a4, unsigned int a5)
{
  NTSTATUS v8; // r15d
  __int64 v10; // rdx
  struct _KPROCESS *v11; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v13; // rbx
  int v14; // eax
  unsigned int i; // ecx
  _QWORD v17[2]; // [rsp+20h] [rbp-50h] BYREF
  PVOID P; // [rsp+30h] [rbp-40h]
  __int16 v19; // [rsp+38h] [rbp-38h]
  __int64 v20; // [rsp+40h] [rbp-30h]
  PVOID v21; // [rsp+50h] [rbp-20h]
  char v22; // [rsp+60h] [rbp-10h]
  char IsStackWalkingEnabled; // [rsp+62h] [rbp-Eh]
  PEPROCESS Process; // [rsp+90h] [rbp+20h] BYREF

  Process = 0LL;
  v8 = 0;
  memset_0(v17, 0, 0x50uLL);
  v17[0] = a1;
  v20 = a2;
  v10 = 1283LL;
  v22 = a3;
  if ( !a3 )
    v10 = 1284LL;
  IsStackWalkingEnabled = EtwpIsStackWalkingEnabled(a2, v10);
  if ( a1 && (*(_DWORD *)(a1 + 16) & 0x40) != 0 && (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
    v17[1] = (char *)&stru_140F03830.WaitBlock[1] + 20 * *(unsigned __int8 *)(a2 + 818);
  P = (PVOID)ExAllocatePool2(0x40uLL);
  if ( P )
    v19 = 0x2000;
  if ( a5 && a4 )
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( HIDWORD(a4[2 * i + 1]) == -2147483644 )
      {
        v8 = PsLookupProcessByProcessId((HANDLE)**a4, &Process);
        if ( v8 >= 0 )
          EtwpProcessEnumCallback(Process);
        goto LABEL_11;
      }
    }
  }
  EtwpProcessEnumCallback((PEPROCESS)PsIdleProcess);
  v11 = 0LL;
  while ( 1 )
  {
    NextProcess = (struct _KPROCESS *)PsGetNextProcess(v11);
    v13 = NextProcess;
    if ( !NextProcess )
      break;
    v14 = EtwpProcessEnumCallback(NextProcess);
    v11 = v13;
    if ( v14 < 0 )
    {
      ObfDereferenceObjectWithTag(v13, 0x6E457350u);
      break;
    }
  }
LABEL_11:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  return (unsigned int)v8;
}
