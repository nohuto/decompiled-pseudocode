/*
 * XREFs of MiIssuePageExtendRequest @ 0x14049E560
 * Callers:
 *     MmResourcesAvailable @ 0x1404795B4 (MmResourcesAvailable.c)
 *     MiExtendPageFilesIfNecessary @ 0x14049E4D0 (MiExtendPageFilesIfNecessary.c)
 *     MiCreateCommit @ 0x1404C9260 (MiCreateCommit.c)
 *     MiPageFileNoFreeSpace @ 0x14050BDA8 (MiPageFileNoFreeSpace.c)
 *     MiUpdateExistingPageFile @ 0x140872760 (MiUpdateExistingPageFile.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x140B6F150 (MiExtendWorkingSetSwapPagefile.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiQueuePageFileExtension @ 0x1404DFC08 (MiQueuePageFileExtension.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiIssuePageExtendRequest(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r9
  int v11; // r11d
  int v12; // r13d
  volatile signed __int32 *v13; // rbx
  char v14; // al
  char v15; // cl
  char v16; // al
  LARGE_INTEGER *Timeout; // r15
  unsigned int v18; // edx
  unsigned __int8 v19; // cl
  __int64 v20; // rdx
  KIRQL v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  volatile signed __int32 **v24; // rax
  volatile LONG *v25; // rcx
  _BYTE v27[56]; // [rsp+38h] [rbp-29h] BYREF
  __int16 v28; // [rsp+70h] [rbp+Fh]
  char v29; // [rsp+72h] [rbp+11h]
  int v30; // [rsp+74h] [rbp+13h]
  _QWORD v31[2]; // [rsp+78h] [rbp+17h] BYREF
  int v32; // [rsp+88h] [rbp+27h]
  char v33; // [rsp+8Ch] [rbp+2Bh]
  char v34; // [rsp+8Fh] [rbp+2Eh]

  memset_0(v27, 0, 0x60uLL);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v11 = a3 & 8;
  if ( (a3 & 8) != 0 && !*(_BYTE *)(a1 + 2425) )
    return 0LL;
  v12 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    v13 = (volatile signed __int32 *)((v11 != 0 ? 0x678 : 0) + a1 + 544);
    if ( _InterlockedCompareExchange(v13 + 20, 1, 0) )
      return 0LL;
    v14 = *((_BYTE *)v13 + 87);
    a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v15 = v14 | 1;
    v16 = v14 & 0xFE;
    if ( (a3 & 4) == 0 )
      v15 = v16;
    *((_BYTE *)v13 + 87) = v15;
  }
  else
  {
    if ( (__int64 (__fastcall *)())CurrentThread[1].ApcState.ApcListHead[0].Blink == MiDereferenceSegmentThread
      || KeGetCurrentIrql() >= 2u
      || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      return 0LL;
    }
    if ( (a3 & 8) != 0 )
      a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v8 = *(unsigned int *)(a1 + 22296);
    v13 = (volatile signed __int32 *)v27;
    v33 = a4;
    v32 = 1;
    if ( (a3 & 1) != 0 )
      v34 |= 2u;
    v28 = 0;
    v31[1] = v31;
    v31[0] = v31;
    v29 = 6;
    v30 = 0;
    if ( (a3 & 8) != 0 )
    {
      Timeout = (LARGE_INTEGER *)&MiOneSecond;
      goto LABEL_25;
    }
    if ( a4 >= (unsigned int)v8 )
    {
      Timeout = (LARGE_INTEGER *)&MiOneSecond;
      v18 = 0;
      if ( (_DWORD)v8 )
      {
        v10 = a1 + 22304;
        while ( (*(_BYTE *)(*(_QWORD *)v10 + 172LL) & 0x50) != 0
             || **(_DWORD **)v10 >= *(_DWORD *)(*(_QWORD *)v10 + 4LL) )
        {
          ++v18;
          v10 += 8LL;
          if ( v18 >= (unsigned int)v8 )
            goto LABEL_24;
        }
      }
      else
      {
LABEL_24:
        if ( v18 == (_DWORD)v8 )
          return 0LL;
      }
      goto LABEL_25;
    }
  }
  Timeout = 0LL;
LABEL_25:
  v19 = *((_BYTE *)v13 + 87);
  *((_QWORD *)v13 + 4) = a2;
  *((_QWORD *)v13 + 5) = 0LL;
  v20 = v19 | 8u;
  *((_QWORD *)v13 + 3) = a1;
  if ( !v11 )
    v20 = v19 & 0xF7;
  *((_QWORD *)v13 + 11) = 0LL;
  *((_BYTE *)v13 + 87) = (&MiOneSecond != Timeout ? 0x20 : 0) | v20 & 0x9F;
  LOBYTE(v20) = 17;
  MiQueuePageFileExtension(v13, v20, v8, v10);
  if ( !v12 )
  {
    if ( KeWaitForSingleObject((PVOID)(v13 + 14), Executive, 0, 0, Timeout) == 258 )
    {
      v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
      if ( !*((_DWORD *)v13 + 15) )
      {
        v22 = *((_QWORD *)v13 + 11);
        if ( v22 )
        {
          *(_QWORD *)(v22 + 88) = 0LL;
        }
        else
        {
          v23 = *((_QWORD *)v13 + 1);
          if ( *(volatile signed __int32 **)(v23 + 8) != v13 + 2
            || (v24 = (volatile signed __int32 **)*((_QWORD *)v13 + 2), *v24 != v13 + 2) )
          {
            __fastfail(3u);
          }
          *v24 = (volatile signed __int32 *)v23;
          *(_QWORD *)(v23 + 8) = v24;
        }
        _InterlockedAdd((volatile signed __int32 *)(a1 + 23552), 1u);
        *((_QWORD *)v13 + 5) = 0LL;
      }
      v25 = (volatile LONG *)(a1 + 2112);
      if ( v21 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v25);
      else
        ExReleaseSpinLockExclusive(v25, v21);
    }
    if ( *((_QWORD *)v13 + 5) )
      return 1LL;
  }
  return 0LL;
}
