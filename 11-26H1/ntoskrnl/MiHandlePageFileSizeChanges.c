/*
 * XREFs of MiHandlePageFileSizeChanges @ 0x14052751C
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x14049CE30 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MiProcessingPageExtendComplete @ 0x140530EA0 (MiProcessingPageExtendComplete.c)
 *     MiAttemptPageFileReduction @ 0x1406FD3DC (MiAttemptPageFileReduction.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiExtendPagingFiles @ 0x140B316B4 (MiExtendPagingFiles.c)
 */

void __fastcall MiHandlePageFileSizeChanges(__int64 a1)
{
  _QWORD **v2; // r14
  KIRQL v3; // si
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  volatile LONG *v7; // rcx
  _BYTE *v8; // rax
  struct _KEVENT *v9; // rcx
  volatile LONG *v10; // rcx
  KIRQL v11; // al
  volatile LONG *v12; // rcx
  _OWORD v13[5]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v14; // [rsp+70h] [rbp-38h]
  _QWORD *v15; // [rsp+78h] [rbp-30h]

  memset_0(v13, 0, 0x60uLL);
  v2 = (_QWORD **)(a1 + 2336);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v4[1] != v2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v2 = v5;
    v6 = v4 - 1;
    v5[1] = v2;
    if ( v4[3] == -1LL )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1080)) )
      {
        v7 = (volatile LONG *)(a1 + 2112);
        if ( v3 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v7);
        else
          ExReleaseSpinLockExclusive(v7, v3);
        MiAttemptPageFileReduction(v6);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1080));
        v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
        v8 = (char *)v6 + 87;
      }
      else
      {
        v8 = (char *)v6 + 87;
        if ( *((char *)v6 + 87) < 0 )
          *((_DWORD *)v6 + 12) = -1073740640;
      }
      if ( (*v8 & 0x10) == 0 )
      {
        v9 = (struct _KEVENT *)(v6 + 7);
        goto LABEL_23;
      }
    }
    else
    {
      v10 = (volatile LONG *)(a1 + 2112);
      v13[0] = *(_OWORD *)v6;
      v13[1] = *((_OWORD *)v6 + 1);
      v13[2] = *((_OWORD *)v6 + 2);
      v13[3] = *((_OWORD *)v6 + 3);
      v13[4] = *((_OWORD *)v6 + 4);
      v14 = v6[10];
      v15 = v4 - 1;
      v6[11] = v13;
      if ( v3 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      else
        ExReleaseSpinLockExclusive(v10, v3);
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1080)) )
      {
        MiExtendPagingFiles(v13);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1080));
      }
      v11 = MiProcessingPageExtendComplete(v13, v6, a1);
      --*(_DWORD *)(a1 + 2804);
      v3 = v11;
      if ( *(_DWORD *)(a1 + 2800) )
      {
        v9 = (struct _KEVENT *)(a1 + 2808);
LABEL_23:
        KeSetEvent(v9, 0, 0);
      }
    }
  }
  v12 = (volatile LONG *)(a1 + 2112);
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  else
    ExReleaseSpinLockExclusive(v12, v3);
}
