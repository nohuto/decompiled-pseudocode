/*
 * XREFs of AlpcpCreateConnectionPort @ 0x140AE7730
 * Callers:
 *     NtCreatePort @ 0x1407BFB50 (NtCreatePort.c)
 *     NtCreateWaitablePort @ 0x1407BFB90 (NtCreateWaitablePort.c)
 *     NtAlpcCreatePort @ 0x140AE76F0 (NtAlpcCreatePort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     AlpcpCreatePort @ 0x1408E75E8 (AlpcpCreatePort.c)
 *     AlpcpInitializePort @ 0x1408EA310 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x1408EA4F4 (AlpcInitializeHandleTable.c)
 *     AlpcpAllocateBlob @ 0x1408EB5C0 (AlpcpAllocateBlob.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1408EB68C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x1408EBD74 (AlpcpSetOwnerProcessPort.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall AlpcpCreateConnectionPort(HANDLE *a1, int a2, void *a3, unsigned int a4, char a5, char a6)
{
  int v9; // ecx
  char PreviousMode; // r15
  __int64 ULong64FromUser; // rax
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  char v14; // al
  PVOID v15; // rbx
  int v16; // r14d
  __int128 *v17; // r13
  int v18; // edi
  __int64 Blob; // rax
  _QWORD *v20; // rax
  int v21; // eax
  int inserted; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-B8h]
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v26[20]; // [rsp+70h] [rbp-98h] BYREF

  v24 = a4;
  memset_0(v26, 0, 0x48uLL);
  Object = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  if ( a3 )
  {
    if ( PreviousMode )
      RtlCopyFromUser(v26, a3, 0x48uLL);
    else
      RtlCopyVolatileMemory(v26, a3, 0x48uLL);
  }
  LOBYTE(v9) = PreviousMode;
  result = AlpcpCreatePort(v9, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v14 = a5;
      if ( (v26[0] & 0x40000) != 0 )
        v14 = 1;
      a5 = v14;
    }
    v15 = Object;
    v16 = AlpcpInitializePort((_KSCHEDULING_GROUP_POLICY)Object, 1, a5, v13);
    if ( v16 < 0 )
    {
      ObfDereferenceObject(v15);
      return (unsigned int)v16;
    }
    v17 = (__int128 *)((unsigned __int64)v26 & -(__int64)(a3 != 0LL));
    v18 = AlpcpValidateAndSetPortAttributes((__int64)v15, v17, (__int64)v15, 0LL, v24, a5, a6);
    if ( v18 >= 0 )
    {
      if ( a6 )
        *((_DWORD *)v15 + 104) |= 0x3000u;
      AlpcpSetOwnerProcessPort((__int64)v15, v17);
      Blob = AlpcpAllocateBlob((__int64)AlpcConnectionType, 80LL, 1);
      *((_QWORD *)v15 + 2) = Blob;
      if ( Blob )
      {
        *(_QWORD *)(Blob + 16) = 0LL;
        **((_QWORD **)v15 + 2) = v15;
        *(_QWORD *)(*((_QWORD *)v15 + 2) + 8LL) = 0LL;
        *(_QWORD *)(*((_QWORD *)v15 + 2) + 72LL) = 0LL;
        v20 = (_QWORD *)(*((_QWORD *)v15 + 2) + 24LL);
        v20[1] = v20;
        *v20 = v20;
        v21 = AlpcInitializeHandleTable(*((_QWORD *)v15 + 2) + 40LL);
        if ( v21 >= 0 )
        {
          inserted = ObInsertObjectEx((char *)v15, 0LL, 0x1F0001u, 0, 0, 0LL, &Handle);
          if ( inserted >= 0 )
          {
            if ( PreviousMode )
              RtlWriteULong64ToUser(a1, (__int64)Handle);
            else
              *a1 = Handle;
          }
          return (unsigned int)inserted;
        }
        v18 = v21;
      }
      else
      {
        v18 = -1073741801;
      }
    }
    ObfDereferenceObject(v15);
    return (unsigned int)v18;
  }
  return result;
}
