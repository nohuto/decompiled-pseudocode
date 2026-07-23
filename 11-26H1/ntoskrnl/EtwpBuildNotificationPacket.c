/*
 * XREFs of EtwpBuildNotificationPacket @ 0x1409159B8
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x140833730 (SendCaptureStateNotificationsWorker.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x14091555C (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpCopySchematizedFilters @ 0x140912C88 (EtwpCopySchematizedFilters.c)
 *     EtwpGetSchematizedFilterSize @ 0x140915E60 (EtwpGetSchematizedFilterSize.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpBuildNotificationPacket(__int64 a1, _OWORD *a2, unsigned __int16 a3, __int64 *a4)
{
  int SchematizedFilterSize; // eax
  unsigned int v9; // ebx
  int v10; // esi
  unsigned int v11; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v13; // rsi
  int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rax

  SchematizedFilterSize = EtwpGetSchematizedFilterSize(a1, a3);
  v9 = 0;
  v10 = SchematizedFilterSize;
  if ( !SchematizedFilterSize )
  {
    if ( a2 )
    {
      v11 = *((_DWORD *)a2 + 1);
      *a4 = 0LL;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v13 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, a2, v11);
        v13[2] = 1;
        *a4 = (__int64)v13;
        return v9;
      }
    }
    else
    {
      v17 = ExAllocatePool2(0x100uLL);
      if ( v17 )
      {
        *(_DWORD *)(v17 + 8) = 1;
        *(_DWORD *)(v17 + 4) = 120;
        *a4 = v17;
        return v9;
      }
    }
    return (unsigned int)-1073741801;
  }
  v15 = SchematizedFilterSize + 136;
  v16 = ExAllocatePool2(0x100uLL);
  if ( !v16 )
    return (unsigned int)-1073741801;
  *(_DWORD *)(v16 + 8) = 1;
  if ( a2 )
  {
    *(_OWORD *)v16 = *a2;
    *(_OWORD *)(v16 + 16) = a2[1];
    *(_OWORD *)(v16 + 32) = a2[2];
    *(_OWORD *)(v16 + 48) = a2[3];
    *(_OWORD *)(v16 + 64) = a2[4];
    *(_OWORD *)(v16 + 80) = a2[5];
    *(_OWORD *)(v16 + 96) = a2[6];
    *(_QWORD *)(v16 + 112) = *((_QWORD *)a2 + 14);
  }
  *(_DWORD *)(v16 + 116) = 1;
  *(_DWORD *)(v16 + 8) = 1;
  *(_DWORD *)(v16 + 4) = v15;
  *(_DWORD *)(v16 + 132) = 0x80000000;
  *(_DWORD *)(v16 + 128) = v10;
  *(_QWORD *)(v16 + 120) = 136LL;
  *a4 = v16;
  EtwpCopySchematizedFilters((char *)(v16 + 136), a1, a3);
  return v9;
}
