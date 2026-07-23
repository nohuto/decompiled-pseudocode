/*
 * XREFs of PnpProcessAssignResources @ 0x1409AD81C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PnpProcessAssignResourcesWorker @ 0x1409AD768 (PnpProcessAssignResourcesWorker.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1409B1158 (PipClearDevNodeUserFlags.c)
 *     PnpAssignResourcesToDevices @ 0x140AA03DC (PnpAssignResourcesToDevices.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall PnpProcessAssignResources(__int64 a1, unsigned __int8 a2, __int64 a3)
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
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // edx
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
          v22 = *((_DWORD *)v19 + 4);
          if ( v22 >= 0 )
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
          if ( v22 == -1073741686 )
            break;
          if ( v22 != -1073741267 )
          {
            switch ( v22 )
            {
              case -1073741438:
                v24 = 34;
                break;
              case -1073739512:
              case -1073479627:
                v24 = 35;
                break;
              case -1073479626:
                v24 = 33;
                break;
              default:
                v23 = v21;
                if ( v22 == -1073479625 )
                  v24 = 36;
                else
                  v24 = 12;
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
        v22 = -1073741686;
        v24 = 17;
        goto LABEL_32;
      }
    }
LABEL_3:
    ExFreePoolWithTag(v10, 0x35706E50u);
  }
  return v6;
}
