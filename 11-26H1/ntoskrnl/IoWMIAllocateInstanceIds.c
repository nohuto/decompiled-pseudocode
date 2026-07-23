/*
 * XREFs of IoWMIAllocateInstanceIds @ 0x140827FD0
 * Callers:
 *     DifIoWMIAllocateInstanceIdsWrapper @ 0x140662CE0 (DifIoWMIAllocateInstanceIdsWrapper.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoWMIAllocateInstanceIds(LPCGUID Guid, ULONG InstanceCount, ULONG *FirstInstanceId)
{
  _QWORD *v3; // rdi
  _QWORD *v8; // r8
  __int64 i; // r9
  _QWORD *v10; // rdx
  ULONG v11; // r10d
  __int64 v12; // rcx
  __int64 Pool2; // rax
  _QWORD *v14; // rbx
  GUID v15; // xmm0

  v3 = 0LL;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v8 = (_QWORD *)WmipInstIdChunkHead;
LABEL_4:
  if ( v8 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 8 )
      {
        v3 = v8;
        v8 = (_QWORD *)*v8;
        goto LABEL_4;
      }
      v10 = (_QWORD *)((char *)&v8[2 * i + 1] + 4 * (unsigned int)i);
      v11 = *((_DWORD *)v10 + 4);
      if ( v11 == -1 )
        goto LABEL_20;
      v12 = *(_QWORD *)&Guid->Data1 - *v10;
      if ( *(_QWORD *)&Guid->Data1 == *v10 )
        v12 = *(_QWORD *)Guid->Data4 - v10[1];
      if ( !v12 )
        break;
    }
    *FirstInstanceId = v11;
    *((_DWORD *)v10 + 4) += InstanceCount;
    KeReleaseMutex(&WmipSMMutex, 0);
    return 0;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v14 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    memset_0((void *)(Pool2 + 8), 255, 0xA0uLL);
    *v14 = 0LL;
    if ( v3 )
      *v3 = v14;
    else
      WmipInstIdChunkHead = (__int64)v14;
    v10 = v14 + 1;
LABEL_20:
    v15 = *Guid;
    *((_DWORD *)v10 + 4) = InstanceCount;
    *(GUID *)v10 = v15;
    KeReleaseMutex(&WmipSMMutex, 0);
    *FirstInstanceId = 0;
    return 0;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return -1073741670;
}
