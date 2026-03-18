/*
 * XREFs of NtQueryMutant @ 0x140B1D3A0
 * Callers:
 *     DifNtQueryMutantWrapper @ 0x1406847F0 (DifNtQueryMutantWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeQueryOwnerMutant @ 0x1404D1618 (KeQueryOwnerMutant.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtQueryMutant(HANDLE Handle, int a2, _BYTE *a3, unsigned int a4, unsigned int *a5)
{
  KPROCESSOR_MODE PreviousMode; // si
  unsigned int *v9; // rbx
  int ULongFromUser; // eax
  NTSTATUS v11; // r12d
  bool v12; // zf
  PVOID v13; // rdi
  int v15; // eax
  char v16; // r14
  char v17; // r13
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  CLIENT_ID ClientId; // [rsp+48h] [rbp-40h] BYREF

  ClientId = 0LL;
  if ( !a2 )
  {
    if ( a4 == 8 )
      goto LABEL_3;
    return 3221225476LL;
  }
  if ( a2 != 1 )
    return 3221225475LL;
  if ( a4 != 16 )
    return 3221225476LL;
LABEL_3:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
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
  v11 = ObReferenceObjectByHandle(Handle, 1u, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = a2 == 0;
    v13 = Object;
    if ( v12 )
    {
      v15 = *((_DWORD *)Object + 1);
      v16 = *((_BYTE *)Object + 48) & 1;
      v17 = *((_QWORD *)Object + 5) == (_QWORD)KeGetCurrentThread();
      if ( PreviousMode )
        RtlWriteULongToUser(a3, v15);
      else
        *(_DWORD *)a3 = v15;
      if ( PreviousMode )
        RtlWriteUCharToUser(a3 + 4, v17);
      else
        a3[4] = v17;
      if ( PreviousMode )
        RtlWriteUCharToUser(a3 + 5, v16);
      else
        a3[5] = v16;
      if ( v9 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(v9, 8);
        else
          *v9 = 8;
      }
    }
    else
    {
      KeQueryOwnerMutant((PKMUTANT)Object, &ClientId);
      if ( PreviousMode )
        RtlCopyToUser(a3, &ClientId, 0x10uLL);
      else
        RtlCopyVolatileMemory(a3, &ClientId, 0x10uLL);
      if ( v9 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(v9, 16);
        else
          *v9 = 16;
      }
    }
    ObfDereferenceObject(v13);
  }
  return (unsigned int)v11;
}
