/*
 * XREFs of AlpcpCaptureDirectAttribute @ 0x1407C4FE0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpCaptureDirectAttribute(
        unsigned __int64 *a1,
        void *a2,
        __int64 a3,
        int a4,
        int a5,
        KPROCESSOR_MODE AccessMode)
{
  NTSTATUS v7; // ebx
  unsigned __int64 ULong64FromUser; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = a2;
  if ( (a4 & 0x10010) != 0 || (a5 & 0x20000000) == 0 )
    v7 = -1073741811;
  else
    v7 = 0;
  if ( v7 >= 0 )
  {
    if ( AccessMode )
      ULong64FromUser = RtlReadULong64FromUser(a1);
    else
      ULong64FromUser = *a1;
    if ( !AccessMode )
      goto LABEL_12;
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(
           (HANDLE)ULong64FromUser,
           2u,
           (POBJECT_TYPE)ExEventObjectType,
           AccessMode,
           &Object,
           0LL);
    if ( v7 >= 0 )
    {
      ULong64FromUser = (unsigned __int64)Object | 2;
LABEL_12:
      *(_QWORD *)(a3 + 56) = ULong64FromUser | 1;
    }
  }
  return (unsigned int)v7;
}
