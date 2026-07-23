/*
 * XREFs of MiModifiedPageWriter @ 0x1403FF5C0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     MiModifiedWriterInitialize @ 0x1403FD9B8 (MiModifiedWriterInitialize.c)
 *     MiModifiedWriterShouldWrite @ 0x1403FF7EC (MiModifiedWriterShouldWrite.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1403FF93C (MiStoreCheckCompleteWriteBatch.c)
 *     MiCheckFreeModifiedReservations @ 0x1403FFC58 (MiCheckFreeModifiedReservations.c)
 *     MiGatherPagefilePages @ 0x1403FFDF8 (MiGatherPagefilePages.c)
 *     MiModifiedPageWriterExit @ 0x14052AA78 (MiModifiedPageWriterExit.c)
 */

__int64 __fastcall MiModifiedPageWriter(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r14d
  _QWORD *v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // eax
  int v15; // ecx
  bool v16; // zf
  struct _KTHREAD *v17; // rdi
  __int64 v18; // r8
  NTSTATUS v19; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-49h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v22; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+100h] [rbp+77h] BYREF

  v4 = *a1;
  v22 = 0;
  v23 = 0LL;
  result = MiModifiedWriterInitialize(a1, &v22, a3, a4);
  if ( (_DWORD)result )
  {
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(v4 + 968) = 0LL;
    *(_DWORD *)(v4 + 976) = 0;
    Object[0] = (PVOID)(v4 + 88);
    *(_BYTE *)(v4 + 802) = 0;
    Object[1] = (PVOID)(v4 + 864);
    MiStoreCheckCompleteWriteBatch(v4);
    v7 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
    *(_BYTE *)(v4 + 802) = 1;
    if ( v7 )
    {
      do
      {
        while ( 1 )
        {
          --CurrentThread->SpecialApcDisable;
          v10 = MiModifiedWriterShouldWrite(v4, &v23);
          if ( v10 )
          {
            v12 = 0LL;
          }
          else
          {
            v11 = (_QWORD *)(v4 + 1032);
            v12 = *(__int64 **)(v4 + 1032);
            if ( v12[1] != v4 + 1032 || (v13 = *v12, *(__int64 **)(*v12 + 8) != v12) )
              __fastfail(3u);
            *v11 = v13;
            *(_QWORD *)(v13 + 8) = v11;
            v14 = v12[5] & 0xFFFFFFE3;
            v15 = BYTE4(v23) & 7;
            *v12 = 97LL;
            v9 = v14 | (4 * v15);
            *((_DWORD *)v12 + 10) = v9;
          }
          v16 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v16
            && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v9, v8);
          }
          if ( v10 == 1 )
            break;
          if ( v10 != 2 )
          {
            v12[12] = (__int64)(v12 + 13);
            MiGatherPagefilePages(v12);
            if ( (_DWORD)v23 != -1 )
            {
              v17 = KeGetCurrentThread();
              if ( KeQueryPriorityThread(v17) != 20 )
                KeSetActualBasePriorityThread((__int64)v17, (unsigned int)v23, v18);
              *(_DWORD *)(v4 + 848) = 20;
            }
            MiCheckFreeModifiedReservations(v4);
          }
        }
        *(_QWORD *)(v4 + 968) = 0LL;
        *(_DWORD *)(v4 + 976) = 0;
        *(_BYTE *)(v4 + 802) = 0;
        MiStoreCheckCompleteWriteBatch(v4);
        v19 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
        *(_BYTE *)(v4 + 802) = 1;
      }
      while ( v19 );
    }
    return MiModifiedPageWriterExit(v4, v22);
  }
  return result;
}
