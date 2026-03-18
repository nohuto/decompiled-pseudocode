/*
 * XREFs of SmProcessProcessStoreInfoRequest @ 0x140819CB4
 * Callers:
 *     SmQueryStoreInformation @ 0x140B26304 (SmQueryStoreInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     SmStoreExistsForProcess @ 0x140513B48 (SmStoreExistsForProcess.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
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
