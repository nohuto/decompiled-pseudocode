/*
 * XREFs of SmProcessProcessStoreInfoRequest @ 0x14081FEC4
 * Callers:
 *     SmQueryStoreInformation @ 0x140B28564 (SmQueryStoreInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     SmStoreExistsForProcess @ 0x14050D5B8 (SmStoreExistsForProcess.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SmProcessProcessStoreInfoRequest(void *a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  PVOID v6; // rdi
  NTSTATUS v7; // ebx
  HANDLE Handle[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  *(_OWORD *)Handle = 0LL;
  v10 = 0LL;
  v6 = 0LL;
  Object = 0LL;
  if ( a2 >= 0x18 )
  {
    if ( a3 )
    {
      ProbeForWrite(a1, 0x18uLL, 8u);
      RtlCopyFromUser(Handle, a1, 0x18uLL);
    }
    else
    {
      RtlCopyVolatileMemory(Handle, a1, 0x18uLL);
    }
    if ( LOBYTE(Handle[0]) == 1 )
    {
      if ( a2 == 24 )
      {
        if ( ((__int64)Handle[0] & 0xFFFFFF00) != 0 )
        {
          v7 = -1073741811;
        }
        else
        {
          Object = 0LL;
          v7 = ObReferenceObjectByHandle(Handle[1], 0x1000u, (POBJECT_TYPE)PsProcessType, a3, &Object, 0LL);
          v6 = Object;
          if ( v7 >= 0 )
          {
            LODWORD(v10) = 0;
            if ( SmStoreExistsForProcess((unsigned __int64)Object) )
              LODWORD(v10) = v10 | 1;
            if ( a3 )
              RtlCopyToUser(a1, Handle, 0x18uLL);
            else
              RtlCopyVolatileMemory(a1, Handle, 0x18uLL);
            v7 = 0;
          }
        }
      }
      else
      {
        v7 = -1073741820;
      }
    }
    else
    {
      v7 = -1073741735;
    }
  }
  else
  {
    v7 = -1073741306;
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
