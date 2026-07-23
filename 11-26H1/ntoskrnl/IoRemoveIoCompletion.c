/*
 * XREFs of IoRemoveIoCompletion @ 0x140222160
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletion @ 0x140A684B0 (NtRemoveIoCompletion.c)
 *     NtRemoveIoCompletionEx @ 0x140A6AAB0 (NtRemoveIoCompletionEx.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140268D80 (IopFreeWaitCompletionPacket.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     IopFreeMiniCompletionPacket @ 0x140A82540 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoRemoveIoCompletion(
        struct _KQUEUE *a1,
        unsigned __int64 a2,
        PLIST_ENTRY *EntryArray,
        ULONG Count,
        ULONG *a5,
        KPROCESSOR_MODE a6,
        LARGE_INTEGER *Timeout,
        BOOLEAN a8)
{
  PLIST_ENTRY *v8; // r15
  unsigned __int64 v9; // r12
  bool v10; // r14
  ULONG v11; // esi
  __int64 result; // rax
  ULONG i; // ebx
  ULONG_PTR v14; // rcx
  char v15; // al
  ULONG_PTR v16; // r14
  int v17; // eax
  ULONG_PTR v18; // r15
  void *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // [rsp+34h] [rbp-E4h]
  __int128 Src; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+60h] [rbp-B8h]
  ULONG v28; // [rsp+74h] [rbp-A4h]
  ULONG_PTR v29; // [rsp+78h] [rbp-A0h]
  struct _KQUEUE *v30; // [rsp+80h] [rbp-98h]
  unsigned __int64 v31; // [rsp+88h] [rbp-90h]
  PLIST_ENTRY *v32; // [rsp+90h] [rbp-88h]
  ULONG *v33; // [rsp+98h] [rbp-80h]
  _OWORD v34[3]; // [rsp+A0h] [rbp-78h] BYREF

  v8 = EntryArray;
  v9 = a2;
  v29 = (ULONG_PTR)a1;
  v30 = a1;
  v31 = a2;
  v32 = EntryArray;
  v33 = a5;
  Src = 0LL;
  v27 = 0LL;
  v10 = a2 < 0xFFFF800000000000uLL;
  v23 = a2 < 0xFFFF800000000000uLL;
  v11 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v28 = v11;
  result = 0LL;
  for ( i = 0; i < v11; ++i )
  {
    v14 = (ULONG_PTR)v8[i];
    if ( v14 == 128 || v14 == 192 || v14 - 257 <= 1 )
    {
      v11 = 0;
      result = (unsigned int)v14;
      break;
    }
    v15 = *(_BYTE *)(v14 + 16);
    if ( v15 )
    {
      if ( v15 == 2 )
      {
        Src = *(_OWORD *)(v14 + 48);
        LODWORD(v27) = *(_DWORD *)(v14 + 72);
        *((_QWORD *)&v27 + 1) = *(_QWORD *)(v14 + 64);
        IopFreeWaitCompletionPacket(v14, v29);
      }
      else
      {
        Src = *(_OWORD *)(v14 + 24);
        LODWORD(v27) = *(_DWORD *)(v14 + 40);
        *((_QWORD *)&v27 + 1) = *(_QWORD *)(v14 + 48);
        IopFreeMiniCompletionPacket(v14);
      }
    }
    else
    {
      v16 = v14 - 168;
      *((_QWORD *)&Src + 1) = *(_QWORD *)(v14 - 168 + 96);
      *(_QWORD *)&Src = *(_QWORD *)(v14 - 168 + 120);
      v27 = *(_OWORD *)(v14 - 168 + 48);
      v17 = *(_DWORD *)(v14 - 168 + 16);
      if ( (v17 & 0x2000) != 0 )
      {
        v18 = *(_QWORD *)(v16 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
        memset(v34, 0, sizeof(v34));
        *(_QWORD *)(v16 + 96) = 0LL;
        if ( (_KPROCESS *)v18 == KeGetCurrentThread()->ApcState.Process )
        {
          IopCompleteRequest(v16 + 120, 0, 0, v16 + 192, 0LL);
        }
        else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v18 + 488)) )
        {
          KiStackAttachProcess(v18);
          IopCompleteRequest(v16 + 120, 0, 0, v16 + 192, 0LL);
          KiUnstackDetachProcess(v34, 0LL);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v18 + 488));
        }
        else
        {
          IopDropIrp((PIRP)v16, *(_QWORD *)(v16 + 192));
          LODWORD(v27) = -1073741536;
          *((_QWORD *)&v27 + 1) = 0LL;
        }
        v8 = EntryArray;
      }
      else
      {
        if ( (v17 & 0x8000) == 0 )
          goto LABEL_24;
        v20 = *(_QWORD *)(v16 + 88);
        do
        {
          v21 = v20;
          v22 = ((v20 >> 1) & 3) - 1;
          v20 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v16 + 88),
                  v20 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v22),
                  v20);
        }
        while ( v21 != v20 );
        if ( !(_DWORD)v22 )
LABEL_24:
          IoFreeIrp((PIRP)v16);
      }
      v10 = v23;
      v9 = a2;
    }
    v19 = (void *)(v9 + 32LL * i);
    if ( v10 )
      RtlCopyToUser(v19, &Src, 0x20uLL);
    else
      RtlCopyVolatileMemory(v19, &Src, 0x20uLL);
    result = 0LL;
  }
  *v33 = v11;
  return result;
}
