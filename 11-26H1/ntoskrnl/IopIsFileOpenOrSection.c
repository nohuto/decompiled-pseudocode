/*
 * XREFs of IopIsFileOpenOrSection @ 0x140A74320
 * Callers:
 *     <none>
 * Callees:
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     MmSectionToSectionObjectPointers @ 0x140A74410 (MmSectionToSectionObjectPointers.c)
 */

_BOOL8 __fastcall IopIsFileOpenOrSection(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 HandlePointer; // rax
  __int64 v8; // rcx
  bool v9; // di
  unsigned __int64 v10; // rdx
  struct _OBJECT_TYPE *v11; // rax
  __int64 v13; // rbp
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  HandlePointer = ExGetHandlePointer(a2);
  v8 = *a4;
  v9 = 0;
  v10 = HandlePointer + 48;
  v11 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
  if ( v11 == (struct _OBJECT_TYPE *)IoFileObjectType )
  {
    if ( v8 == v10 )
      v9 = *((_BYTE *)a4 + 8) == 0;
    else
      v9 = *(_QWORD *)(v8 + 24) == *(_QWORD *)(v10 + 24);
  }
  else if ( v11 == MmSectionObjectType )
  {
    v13 = *(_QWORD *)(v8 + 40);
    if ( v13 )
      v9 = MmSectionToSectionObjectPointers(v10) == v13;
  }
  _InterlockedIncrement64(a2);
  _InterlockedOr(v14, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v9;
}
