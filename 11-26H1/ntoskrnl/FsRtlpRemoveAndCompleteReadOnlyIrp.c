/*
 * XREFs of FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F47AC
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140509BE4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakToNone @ 0x1405297A0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlCheckUpperOplock @ 0x140791080 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpFillOutputBuffer @ 0x140ADA4D4 (FsRtlpFillOutputBuffer.c)
 */

void __fastcall FsRtlpRemoveAndCompleteReadOnlyIrp(_QWORD *a1, int a2, unsigned int a3, __int64 a4)
{
  int v6; // edi
  _QWORD *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  _QWORD *v11; // rax
  char v12; // cl
  int v13; // eax
  int v14; // [rsp+38h] [rbp-59h] BYREF
  int v15; // [rsp+3Ch] [rbp-55h] BYREF
  int v16; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18[2]; // [rsp+58h] [rbp-39h] BYREF
  int *v19; // [rsp+78h] [rbp-19h]
  __int64 v20; // [rsp+80h] [rbp-11h]
  _QWORD *v21; // [rsp+88h] [rbp-9h]
  __int64 v22; // [rsp+90h] [rbp-1h]
  int *v23; // [rsp+98h] [rbp+7h]
  __int64 v24; // [rsp+A0h] [rbp+Fh]
  int *v25; // [rsp+A8h] [rbp+17h]
  __int64 v26; // [rsp+B0h] [rbp+1Fh]

  v6 = a2;
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v16 = a2;
    v19 = &v16;
    v17[0] = a4;
    v21 = v17;
    v14 = *(_DWORD *)(a4 + 144);
    v23 = &v14;
    v25 = &v15;
    v15 = a3;
    v20 = 4LL;
    v22 = 8LL;
    v24 = 4LL;
    v26 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_140045FFD, 0LL, 0LL, 6u, v18);
  }
  v8 = a1 - 21;
  v9 = a1[2];
  ObfDereferenceObjectWithTag(*(PVOID *)(v9 + 48), 0x746C6644u);
  *((_BYTE *)a1 - 99) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64(a1 - 8, 0LL);
  KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)a1 - 99));
  v10 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v11 = (_QWORD *)a1[1], (_QWORD *)*v11 != a1) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  v12 = *((_BYTE *)v8 + 68);
  if ( *(_DWORD *)(v9 + 24) == 590400 )
  {
    if ( v12 )
    {
      v6 = -1073741536;
      v8[7] = 0LL;
    }
    else
    {
      FsRtlpFillOutputBuffer((_DWORD)a1 - 168, 1, (a3 >> 12) & 7, 0, 0, 0);
    }
  }
  else
  {
    v8[7] = 8LL;
    v13 = -1073741536;
    if ( !v12 )
      v13 = v6;
    v6 = v13;
  }
  *((_DWORD *)v8 + 12) = v6;
  IofCompleteRequest((PIRP)(a1 - 21), 1);
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v15 = v6;
    v19 = &v15;
    v20 = 4LL;
    v21 = v17;
    v14 = *(_DWORD *)(a4 + 144);
    v17[0] = a4;
    v23 = &v14;
    v22 = 8LL;
    v24 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_1400462F9, 0LL, 0LL, 5u, v18);
  }
}
