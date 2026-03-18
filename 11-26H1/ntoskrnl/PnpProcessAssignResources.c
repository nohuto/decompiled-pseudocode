/*
 * XREFs of PnpProcessAssignResources @ 0x14090B6F8
 * Callers:
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PnpProcessAssignResourcesWorker @ 0x14090B644 (PnpProcessAssignResourcesWorker.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x14090F028 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     PnpAssignResourcesToDevices @ 0x140AA51E4 (PnpAssignResourcesToDevices.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall PnpProcessAssignResources(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  int v4; // edi
  char v6; // r14
  __int64 *Pool2; // rax
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rbp
  __int64 v12; // rax
  char *v13; // r13
  __int64 v14; // rsi
  char *v15; // rbp
  __int64 *v16; // r14
  __int64 v17; // r15
  __int64 v18; // rbx
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 *v25; // [rsp+20h] [rbp-38h]

  v4 = a2;
  v6 = 0;
  Pool2 = (__int64 *)ExAllocatePool2(0x100uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = v4;
    PnpProcessAssignResourcesWorker(a1, Pool2);
    v9 = *((unsigned int *)v8 + 1);
    v10 = v8;
    if ( (_DWORD)v9 )
    {
      v12 = ExAllocatePool2(0x100uLL);
      v13 = (char *)v12;
      if ( v12 )
      {
        v14 = v12 + 12;
        v25 = v8;
        v15 = (char *)v12;
        v16 = v8 + 1;
        v17 = v9;
        do
        {
          v18 = *v16;
          memset_0(v15, 0, 0x40uLL);
          v15 += 64;
          *(_QWORD *)(v14 - 12) = v18;
          *(_QWORD *)(v14 + 12) = 0LL;
          ++v16;
          *(_DWORD *)v14 = 4;
          v14 += 64LL;
          --v17;
        }
        while ( v17 );
        v10 = v25;
        v6 = 0;
        PnpAssignResourcesToDevices((unsigned int)v9, v13, a3);
        v19 = v13 + 40;
        while ( 1 )
        {
          v20 = *((_QWORD *)v19 - 5);
          if ( v20 )
            v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
          else
            v21 = 0LL;
          v22 = *((unsigned int *)v19 + 4);
          if ( (int)v22 >= 0 )
          {
            v6 = 1;
            if ( *(_QWORD *)v19 )
            {
              ExAcquireFastMutex(&PiResourceListLock);
              *(_QWORD *)(v21 + 416) = *(_QWORD *)v19;
              *(_QWORD *)(v21 + 424) = *((_QWORD *)v19 + 1);
              KeReleaseGuardedMutex(&PiResourceListLock);
            }
            else
            {
              PipSetDevNodeFlags(v21, 256LL);
            }
            PipSetDevNodeState(v21, 774);
            PipClearDevNodeUserFlags(v21, 4LL);
            goto LABEL_15;
          }
          if ( (_DWORD)v22 == -1073741686 )
            break;
          if ( (_DWORD)v22 != -1073741267 )
          {
            switch ( (_DWORD)v22 )
            {
              case 0xC0000182:
                v24 = 34LL;
                break;
              case 0xC0000908:
              case 0xC0040035:
                v24 = 35LL;
                break;
              case 0xC0040036:
                v24 = 33LL;
                break;
              default:
                v23 = v21;
                if ( (_DWORD)v22 == -1073479625 )
                  v24 = 36LL;
                else
                  v24 = 12LL;
                goto LABEL_33;
            }
LABEL_32:
            v23 = v21;
LABEL_33:
            PipSetDevNodeProblem(v23, v24, v22);
          }
LABEL_15:
          v19 += 64;
          if ( !--v9 )
          {
            ExFreePoolWithTag(v13, 0x36706E50u);
            goto LABEL_3;
          }
        }
        v22 = 3221225610LL;
        v24 = 17LL;
        goto LABEL_32;
      }
    }
LABEL_3:
    ExFreePoolWithTag(v10, 0x35706E50u);
  }
  return v6;
}
