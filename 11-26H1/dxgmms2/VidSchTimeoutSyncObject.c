/*
 * XREFs of VidSchTimeoutSyncObject @ 0x14003CDFC
 * Callers:
 *     VidSchDestroySyncObject @ 0x1400E15C0 (VidSchDestroySyncObject.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x14003C62C (VidSchiUnblockUnorderedWaiter.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003CFE4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 */

__int64 __fastcall VidSchTimeoutSyncObject(_VIDSCH_SYNC_OBJECT *this)
{
  struct _KEVENT *v1; // rbx
  bool v3; // zf
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  struct _KEVENT *v8; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-48h] BYREF
  char v10; // [rsp+38h] [rbp-38h]
  int v11; // [rsp+3Ch] [rbp-34h]
  _QWORD v12[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v13; // [rsp+60h] [rbp-10h]

  v1 = (struct _KEVENT *)*((_QWORD *)this + 1);
  v13 = 0;
  v12[0] = v1 + 84;
  AcquireSpinLock::Acquire((Acquire *)v12);
  v3 = *((_DWORD *)this + 10) == 0;
  v4 = *((_DWORD *)this + 12);
  v9[1] = v9;
  v9[0] = v9;
  v8 = v1;
  v10 = 0;
  v11 = 2;
  if ( v3 )
  {
    if ( v4 == 4 || (unsigned int)(v4 - 5) <= 1 )
LABEL_3:
      _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(this, (struct HwQueueStagingList *)&v8, 1);
  }
  else
  {
    v6 = v4 - 2;
    if ( !v6 )
    {
      VidSchiUnblockUnorderedWaiter((HwQueueStagingList *)&v8, (__int64)this, 1);
      goto LABEL_4;
    }
    v7 = v6 - 2;
    if ( !v7 || (unsigned int)(v7 - 1) <= 1 )
      goto LABEL_3;
  }
LABEL_4:
  HwQueueStagingList::~HwQueueStagingList(&v8);
  AcquireSpinLock::Release((AcquireSpinLock *)v12);
  return 0LL;
}
