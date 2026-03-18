/*
 * XREFs of NtGetContextThread @ 0x1409EBBC0
 * Callers:
 *     DifNtGetContextThreadWrapper @ 0x140678CF0 (DifNtGetContextThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall NtGetContextThread(void *a1, int a2)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS ContextThreadInternal; // edi
  int v5; // r8d
  int v6; // r9d
  PVOID v7; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ContextThreadInternal = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( ContextThreadInternal >= 0 )
  {
    v7 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ContextThreadInternal = -1073741816;
    }
    else
    {
      LOBYTE(v6) = PreviousMode;
      LOBYTE(v5) = PreviousMode;
      ContextThreadInternal = PspGetContextThreadInternal((_DWORD)Object, a2, v5, v6, 1);
    }
    ObfDereferenceObject(v7);
  }
  return (unsigned int)ContextThreadInternal;
}
