/*
 * XREFs of FsRtlpWaitOnIrp @ 0x1404E5834
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x14050E330 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1405297A0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakNotify @ 0x14079186C (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404E5E38 (FsRtlpCancelWaitingIrp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A91340 (FsRtlCancellableWaitForSingleObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpWaitOnIrp(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, void *a5, char a6, char *a7)
{
  char v10; // r12
  char *v11; // r13
  __int64 Pool2; // r14
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rax
  char *v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  bool v20; // si
  __int64 v21; // r13
  __int64 v22; // r12
  _QWORD *i; // rcx
  char v25; // [rsp+31h] [rbp-1D7h] BYREF
  char v26; // [rsp+32h] [rbp-1D6h] BYREF
  bool v27; // [rsp+33h] [rbp-1D5h]
  char v28; // [rsp+34h] [rbp-1D4h]
  char v29; // [rsp+35h] [rbp-1D3h] BYREF
  int v30; // [rsp+38h] [rbp-1D0h]
  unsigned int v31; // [rsp+3Ch] [rbp-1CCh] BYREF
  int v32; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-1C4h] BYREF
  char *v34; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-1B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-1B0h]
  _QWORD v37[2]; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v38; // [rsp+70h] [rbp-198h] BYREF
  __int128 v39; // [rsp+78h] [rbp-190h] BYREF
  __int64 v40; // [rsp+88h] [rbp-180h]
  __int64 v41; // [rsp+90h] [rbp-178h]
  __int64 v42; // [rsp+98h] [rbp-170h] BYREF
  __int64 *v43; // [rsp+A0h] [rbp-168h]
  __int64 v44; // [rsp+A8h] [rbp-160h]
  __int64 v45; // [rsp+B0h] [rbp-158h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+C0h] [rbp-148h] BYREF
  unsigned int *v47; // [rsp+E0h] [rbp-128h]
  __int64 v48; // [rsp+E8h] [rbp-120h]
  char *v49; // [rsp+F0h] [rbp-118h]
  __int64 v50; // [rsp+F8h] [rbp-110h]
  _QWORD *v51; // [rsp+100h] [rbp-108h]
  __int64 v52; // [rsp+108h] [rbp-100h]
  int *v53; // [rsp+110h] [rbp-F8h]
  __int64 v54; // [rsp+118h] [rbp-F0h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+120h] [rbp-E8h] BYREF
  unsigned int *v56; // [rsp+140h] [rbp-C8h]
  __int64 v57; // [rsp+148h] [rbp-C0h]
  char *v58; // [rsp+150h] [rbp-B8h]
  __int64 v59; // [rsp+158h] [rbp-B0h]
  __int64 *v60; // [rsp+160h] [rbp-A8h]
  __int64 v61; // [rsp+168h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+170h] [rbp-98h] BYREF
  __int64 *v63; // [rsp+190h] [rbp-78h]
  __int64 v64; // [rsp+198h] [rbp-70h]
  __int64 *v65; // [rsp+1A0h] [rbp-68h]
  __int64 v66; // [rsp+1A8h] [rbp-60h]
  char **v67; // [rsp+1B0h] [rbp-58h]
  __int64 v68; // [rsp+1B8h] [rbp-50h]

  v43 = a4;
  Object = a5;
  v37[1] = a1;
  v30 = -1073741670;
  v29 = 0;
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v35 = a2;
    v63 = &v35;
    v64 = 8LL;
    v42 = a1;
    v65 = &v42;
    v66 = 8LL;
    LODWORD(v34) = *(_DWORD *)(a1 + 144);
    v67 = &v34;
    v68 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)word_1400461C2, 0LL, 0LL, 5u, &v62);
  }
  v10 = 1;
  v11 = &v29;
  if ( a7 )
    v11 = a7;
  v34 = v11;
  *v11 = 0;
  Pool2 = ExAllocatePool2(0x120uLL);
  if ( a2 )
  {
    v13 = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(Pool2 + 16) = a2;
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a2 + 56);
    if ( *(_BYTE *)v13 != 13 || (v14 = 1, *(_DWORD *)(v13 + 24) != 589844) )
      v14 = 0;
    *(_BYTE *)(Pool2 + 53) = v14;
    *(_QWORD *)(Pool2 + 56) = *(_QWORD *)(v13 + 48);
  }
  *(_BYTE *)(Pool2 + 52) = a6;
  if ( a3 && (v15 = a3[1]) != 0 )
  {
    *(_QWORD *)(Pool2 + 24) = v15;
    *(_QWORD *)(Pool2 + 32) = *a3;
  }
  else
  {
    *(_QWORD *)(Pool2 + 24) = FsRtlpOplockWaitCompleteRoutine;
    v16 = (char *)Object;
    *(_QWORD *)(Pool2 + 32) = Object;
    *(_WORD *)v16 = 0;
    v16[2] = 6;
    *((_DWORD *)v16 + 1) = 0;
    v16 += 8;
    *((_QWORD *)v16 + 1) = v16;
    *(_QWORD *)v16 = v16;
  }
  if ( a3 && a3[2] )
    guard_dispatch_icall_no_overrides(*a3, a2);
  v17 = *(__int64 **)(a1 + 96);
  if ( *v17 != a1 + 88 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = a1 + 88;
  *(_QWORD *)(Pool2 + 8) = v17;
  *v17 = Pool2;
  *(_QWORD *)(a1 + 96) = Pool2;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 48) = 0;
    *(_BYTE *)(a2 + 69) = KeAcquireQueuedSpinLock(7uLL);
    *(_QWORD *)(a2 + 56) = a1;
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( a3 && a3[1] )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        v19 = 259;
      }
      else
      {
        v19 = -1073741536;
      }
      v30 = v19;
      LOBYTE(v18) = 1;
      FsRtlpCancelWaitingIrp(a2, v18);
      goto LABEL_55;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  }
  if ( a3 && a3[1] )
  {
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v19 = 259;
    v30 = 259;
  }
  else
  {
    v20 = 0;
    v27 = 0;
    v28 = 0;
    v39 = 0LL;
    v40 = 0LL;
    LODWORD(v41) = 0;
    v35 = 0LL;
    v44 = 0LL;
    v21 = 0LL;
    v45 = 0LL;
    if ( v43 )
    {
      v35 = *v43;
      v22 = v43[2];
      v44 = v22;
      v21 = v43[1];
      v45 = v21;
      if ( v35 )
      {
        v20 = v22 != 0;
        v27 = v22 != 0;
      }
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    while ( 1 )
    {
      v19 = FsRtlCancellableWaitForSingleObject(
              Object,
              (PLARGE_INTEGER)((unsigned __int64)&v35 & -(__int64)v20),
              (PIRP)a2);
      v30 = v19;
      if ( !v20 || v19 != 258 )
        break;
      v20 = 0;
      v27 = 0;
      *(_QWORD *)&v39 = 0LL;
      *((_QWORD *)&v39 + 1) = v21;
      v40 = a2;
      v41 = 258LL;
      guard_dispatch_icall_no_overrides(&v39, 0LL);
      v28 = 1;
    }
    if ( v28 )
    {
      LODWORD(v39) = 1;
      LODWORD(v41) = v19;
      guard_dispatch_icall_no_overrides(&v39, 0LL);
    }
    if ( v19 == -1073741749 || v19 == -1073741536 )
    {
      if ( a2 )
      {
        IoCancelIrp((PIRP)a2);
        v10 = 0;
      }
      else
      {
        ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(a1 + 152));
        for ( i = *(_QWORD **)(a1 + 88); i != (_QWORD *)(a1 + 88); i = (_QWORD *)*i )
        {
          if ( (_QWORD *)Pool2 == i )
          {
            FsRtlpRemoveAndCompleteWaitingIrp(i);
            break;
          }
        }
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 152));
        v10 = 0;
      }
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      v11 = v34;
      *v34 = 0;
    }
    else
    {
      if ( a2 )
      {
        v19 = *(_DWORD *)(a2 + 48);
        v30 = v19;
      }
      v11 = v34;
      *v34 = 1;
      v10 = 0;
    }
  }
LABEL_55:
  if ( v10 )
  {
    if ( (unsigned int)dword_140E06B30 > 5 )
    {
      v31 = v19;
      v47 = &v31;
      v48 = 4LL;
      v25 = *v11;
      v49 = &v25;
      v50 = 1LL;
      v37[0] = a1;
      v51 = v37;
      v52 = 8LL;
      v32 = *(_DWORD *)(a1 + 144);
      v53 = &v32;
      v54 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06B30,
        (unsigned __int8 *)byte_140045955,
        0LL,
        0LL,
        6u,
        &v46);
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  }
  else if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v33 = v19;
    v56 = &v33;
    v57 = 4LL;
    v26 = *v11;
    v58 = &v26;
    v59 = 1LL;
    v38 = a1;
    v60 = &v38;
    v61 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_140045903, 0LL, 0LL, 5u, &v55);
  }
  return v19;
}
