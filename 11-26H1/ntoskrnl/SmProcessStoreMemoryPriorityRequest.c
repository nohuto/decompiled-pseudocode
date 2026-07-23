/*
 * XREFs of SmProcessStoreMemoryPriorityRequest @ 0x140B54B44
 * Callers:
 *     SmSetStoreInformation @ 0x140B307BC (SmSetStoreInformation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     SmKmStoreGet @ 0x140356910 (SmKmStoreGet.c)
 *     SmpKeyedStoreEntryGet @ 0x140402EE0 (SmpKeyedStoreEntryGet.c)
 *     SmpGetProcessPartition @ 0x1404D03DC (SmpGetProcessPartition.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SmProcessStoreMemoryPriorityRequest(void *Src, unsigned int a2, KPROCESSOR_MODE a3)
{
  _KPROCESS *v6; // rdi
  int v7; // r14d
  NTSTATUS v8; // ebx
  __int64 ProcessPartition; // rsi
  unsigned __int64 *v10; // rax
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  _KPROCESS *v13; // [rsp+40h] [rbp-88h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v15; // [rsp+58h] [rbp-70h]
  _OWORD v16[3]; // [rsp+60h] [rbp-68h] BYREF

  memset(v16, 0, sizeof(v16));
  v13 = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  v7 = 0;
  *(_OWORD *)Handle = 0LL;
  if ( a2 >= 0x10 )
  {
    if ( a3 )
    {
      ProbeForWrite(Src, 0x10uLL, 8u);
      RtlCopyFromUser(Handle, Src, 0x10uLL);
    }
    else
    {
      RtlCopyVolatileMemory(Handle, Src, 0x10uLL);
    }
    if ( LOBYTE(Handle[0]) == 1 )
    {
      if ( a2 == 16 )
      {
        if ( ((__int64)Handle[0] & 0xFFFFFC00) != 0 )
        {
          v8 = -1073741811;
        }
        else if ( ((__int64)Handle[0] & 0x100) != 0 )
        {
          Object = 0LL;
          v8 = ObReferenceObjectByHandle(Handle[1], 0x2000u, (POBJECT_TYPE)PsProcessType, a3, &Object, 0LL);
          v6 = (_KPROCESS *)Object;
          if ( v8 >= 0 )
          {
            _InterlockedOr((volatile signed __int32 *)Object + 383, 0x40000u);
            if ( ((__int64)Handle[0] & 0x200) != 0 )
            {
              if ( KeGetCurrentThread()->ApcState.Process != v6 )
              {
                v7 = 1;
                KiStackAttachProcess(v6, 0, (__int64)v16);
              }
              ProcessPartition = SmpGetProcessPartition((__int64)v6);
              v13 = v6;
              v10 = SmpKeyedStoreEntryGet(
                      (struct _KTHREAD *)(ProcessPartition + 2344),
                      (unsigned __int64 *)&v13,
                      0,
                      0LL);
              if ( v10 )
                *(_BYTE *)(SmKmStoreGet(ProcessPartition, *((_WORD *)v10 + 8)) + 2471) = 1;
              else
                v8 = -1073741632;
            }
            else
            {
              v8 = 0;
            }
          }
        }
        else
        {
          v8 = -1073741637;
        }
      }
      else
      {
        v8 = -1073741820;
      }
    }
    else
    {
      v8 = -1073741735;
    }
  }
  else
  {
    v8 = -1073741306;
  }
  if ( v7 )
    KiUnstackDetachProcess((__int64)v16, 0);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v8;
}
