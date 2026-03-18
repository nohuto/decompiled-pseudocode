/*
 * XREFs of LinkNodepAddLinkNodeWorker @ 0x1400D3A90
 * Callers:
 *     <none>
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     IrqLibAcquireArbiterLock @ 0x14004E6E8 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x140055C20 (IrqLibReleaseArbiterLock.c)
 */

void __fastcall LinkNodepAddLinkNodeWorker(PDEVICE_OBJECT DeviceObject, char *Context)
{
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  *((_QWORD *)Context + 30) = Context + 232;
  *((_QWORD *)Context + 29) = Context + 232;
  *((_QWORD *)Context + 23) = 0LL;
  v3 = (__int64 *)*((_QWORD *)Context + 95);
  *((_QWORD *)Context + 24) = 0LL;
  *((_DWORD *)Context + 50) = -1;
  *((_QWORD *)Context + 26) = 0LL;
  v4 = AMLIGetNamedChild(v3, 1397310559);
  v5 = (__int64)v4;
  if ( v4 )
  {
    AMLIEvalNameSpaceObject(v4, 0LL, 0, 0LL);
    AMLIDereferenceHandleEx(v5);
  }
  IrqLibAcquireArbiterLock(0);
  v6 = (_QWORD *)qword_14008F4B8;
  v7 = Context + 216;
  if ( *(__int64 **)qword_14008F4B8 != &LinkNodeListHead )
    __fastfail(3u);
  *v7 = &LinkNodeListHead;
  *((_QWORD *)Context + 28) = v6;
  *v6 = v7;
  qword_14008F4B8 = (__int64)(Context + 216);
  IrqLibReleaseArbiterLock();
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 31));
  *((_QWORD *)Context + 31) = 0LL;
}
