/*
 * XREFs of NtAlpcCancelMessage @ 0x140ACEE70
 * Callers:
 *     DifNtAlpcCancelMessageWrapper @ 0x14066F9A0 (DifNtAlpcCancelMessageWrapper.c)
 *     SepRmCommandServerThread @ 0x140AF3750 (SepRmCommandServerThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 */

NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS v7; // ebx
  __int64 v8; // r9
  _DWORD *v9; // rdi
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rdx
  __int64 v14; // rax
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-68h] BYREF
  __int128 v17; // [rsp+48h] [rbp-60h] BYREF
  __int128 v18; // [rsp+58h] [rbp-50h]
  _DWORD v19[6]; // [rsp+68h] [rbp-40h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFF0) != 0 )
  {
    v7 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( (Flags & 4) != 0 )
    {
      memset(v19, 0, 20);
      if ( PreviousMode )
        RtlCopyFromUser(v19, MessageContext, 0x14uLL);
      else
        RtlCopyVolatileMemory(v19, MessageContext, 0x14uLL);
      *(_QWORD *)((char *)&v18 + 4) = *(_QWORD *)&v19[3];
      *((_QWORD *)&v17 + 1) = v19[1];
    }
    else if ( PreviousMode )
    {
      RtlCopyFromUser(&v17, MessageContext, 0x20uLL);
    }
    else
    {
      RtlCopyVolatileMemory(&v17, MessageContext, 0x20uLL);
    }
    if ( DWORD1(v18) )
    {
      Object = 0LL;
      v7 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
      if ( v7 >= 0 )
      {
        v9 = Object;
        v7 = AlpcpLookupMessage((__int64)Object, DWORD1(v18), SDWORD2(v18), v8, &BugCheckParameter2);
        if ( v7 >= 0 )
        {
          v12 = *(_QWORD *)(BugCheckParameter2 + 16);
          v7 = v12 == 0 ? 0xC0000702 : 0;
          if ( v12 )
          {
            if ( (Flags & 8) == 0
              || ((v9[104] & 6) != 4
                ? (v14 = *(_QWORD *)(BugCheckParameter2 + 112))
                : (v14 = *(_QWORD *)(BugCheckParameter2 + 104)),
                  *((_QWORD *)&v17 + 1) == v14) )
            {
              if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
              {
                AlpcpUnlockMessage(BugCheckParameter2, v12, v10, v11);
                v7 = -1073740029;
              }
              else
              {
                v7 = AlpcpCancelMessage(v9, BugCheckParameter2, Flags);
              }
            }
            else
            {
              AlpcpUnlockMessage(BugCheckParameter2, v12, v10, v11);
              v7 = -1073740007;
            }
          }
          else
          {
            AlpcpUnlockMessage(BugCheckParameter2, 0LL, v10, v11);
          }
        }
        ObfDereferenceObject(v9);
      }
    }
    else
    {
      v7 = -1073741559;
    }
  }
  KeLeaveCriticalRegion();
  return v7;
}
