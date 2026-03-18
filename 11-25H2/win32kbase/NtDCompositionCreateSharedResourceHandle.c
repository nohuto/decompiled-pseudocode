/*
 * XREFs of NtDCompositionCreateSharedResourceHandle @ 0x14004E6C0
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x14004E81C (CreateSharedResourceObject.c)
 */

__int64 __fastcall NtDCompositionCreateSharedResourceHandle(void *a1, _QWORD *a2)
{
  NTSTATUS SharedResourceObject; // ebx
  PVOID v4; // rsi
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  SharedResourceObject = 0;
  Object = 0LL;
  if ( (_DWORD)a1 != 19 && (_DWORD)a1 != 129 && (_DWORD)a1 != 182 )
    SharedResourceObject = -1073741811;
  if ( SharedResourceObject >= 0 )
  {
    SharedResourceObject = CreateSharedResourceObject(a1, (struct DirectComposition::ResourceObject **)&Object);
    v4 = Object;
    if ( SharedResourceObject >= 0 )
    {
      Handle = (HANDLE)-1LL;
      SharedResourceObject = ObOpenObjectByPointer(Object, 0x40u, 0LL, 3u, ExCompositionObjectType, 0, &Handle);
      ObfDereferenceObject(v4);
      if ( SharedResourceObject >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = Handle;
      }
    }
  }
  return (unsigned int)SharedResourceObject;
}
