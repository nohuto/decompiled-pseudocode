/*
 * XREFs of NtQueryIoCompletion @ 0x140796F10
 * Callers:
 *     DifNtQueryIoCompletionWrapper @ 0x140683FC0 (DifNtQueryIoCompletionWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtQueryIoCompletion(HANDLE Handle, int a2, int *a3, int a4, unsigned int *a5)
{
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int *v9; // rbx
  int ULongFromUser; // eax
  NTSTATUS v11; // esi
  int v12; // r14d
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF

  if ( a2 )
    return 3221225475LL;
  if ( a4 != 4 )
    return 3221225476LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, 4uLL, 4u);
    v9 = a5;
    if ( a5 )
    {
      ULongFromUser = RtlReadULongFromUser(a5);
      RtlWriteULongToUser(a5, ULongFromUser);
    }
  }
  else
  {
    v9 = a5;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 1u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = *((_DWORD *)Object + 1);
    ObfDereferenceObject(Object);
    if ( PreviousMode )
      RtlWriteULongToUser(a3, v12);
    else
      *a3 = v12;
    if ( v9 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(v9, 4);
      else
        *v9 = 4;
    }
  }
  return (unsigned int)v11;
}
