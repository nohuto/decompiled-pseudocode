/*
 * XREFs of AlpcpCaptureDirectAttribute32 @ 0x1407C5094
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpCaptureDirectAttribute32(
        unsigned int *a1,
        void *a2,
        __int64 a3,
        int a4,
        int a5,
        KPROCESSOR_MODE AccessMode)
{
  NTSTATUS v7; // edx
  unsigned int ULongFromUser; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = a2;
  if ( (a4 & 0x10010) != 0 || (a5 & 0x20000000) == 0 )
    v7 = -1073741811;
  else
    v7 = 0;
  if ( v7 >= 0 )
  {
    if ( AccessMode )
      ULongFromUser = RtlReadULongFromUser(a1);
    else
      ULongFromUser = *a1;
    Object = 0LL;
    v7 = ObReferenceObjectByHandle((HANDLE)ULongFromUser, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    if ( v7 >= 0 )
      *(_QWORD *)(a3 + 56) = (unsigned __int64)Object | 3;
  }
  return (unsigned int)v7;
}
