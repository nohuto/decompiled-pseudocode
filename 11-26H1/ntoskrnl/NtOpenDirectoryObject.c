/*
 * XREFs of NtOpenDirectoryObject @ 0x140A99DC0
 * Callers:
 *     DifNtOpenDirectoryObjectWrapper @ 0x14067CB70 (DifNtOpenDirectoryObjectWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall NtOpenDirectoryObject(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  POBJECT_TYPE v8; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned int v10; // ebx
  __int64 v12[4]; // [rsp+48h] [rbp-20h] BYREF

  v12[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  v8 = ObpDirectoryObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v10 = ObOpenObjectByNameEx(a3, (__int64)v8, PreviousMode, 0LL, a2, 0LL, (__int64)CurrentSilo, v12);
  if ( PreviousMode )
    RtlWriteULong64ToUser(a1, v12[0]);
  else
    *a1 = v12[0];
  return v10;
}
