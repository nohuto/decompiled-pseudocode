/*
 * XREFs of MiModwriterFillMdl @ 0x140400130
 * Callers:
 *     MiGatherPagefilePages @ 0x1403FFDF8 (MiGatherPagefilePages.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiFillNoReservationCluster @ 0x1402D4A24 (MiFillNoReservationCluster.c)
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x1403FEDBC (MiFindPageFileWriteCluster.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1403FF560 (MiMakePagefileWriterEntryAvailable.c)
 *     MiPageFileNoFreeSpace @ 0x14050BDA8 (MiPageFileNoFreeSpace.c)
 */

__int64 __fastcall MiModwriterFillMdl(int *a1)
{
  _QWORD *v1; // rbp
  ULONG *v2; // rsi
  int v3; // eax
  __int64 v5; // rdi
  __int64 v6; // r15
  ULONG v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // eax
  ULONG v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)a1 + 3);
  v2 = (ULONG *)(a1 + 2);
  v3 = *a1;
  v17 = 0;
  v5 = v1[8];
  v6 = *(_QWORD *)(v5 + 224);
  if ( (v3 & 2) != 0 )
  {
    if ( (*(_BYTE *)(v5 + 172) & 0x40) != 0 )
    {
      v7 = *(_DWORD *)(v5 + 12);
      if ( v7 < *v2 )
        *v2 = v7;
    }
    else
    {
      MiFindPageFileWriteCluster(v1[8], (unsigned int *)a1 + 1, v2, 0);
    }
    if ( !*v2 )
    {
      MiPageFileNoFreeSpace(v5, v1);
      return 3221225473LL;
    }
    v8 = MiFillNoReservationCluster(v6, v5, v1 + 19, *v2);
    v9 = v8;
  }
  else
  {
    v16 = *v2;
    v15 = MiBuildReservationCluster(v1 + 19, v5, &v16, &v17);
    v9 = v17;
    a1[1] = v15;
    v8 = v16;
  }
  if ( v8 )
  {
    a1[3] = v8;
    *v2 = v8;
    result = 0LL;
    a1[4] = v9 - 1;
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  MiMakePagefileWriterEntryAvailable(v1);
  if ( (*(_WORD *)(v12 + 486))++ == 0xFFFF && *(_QWORD *)(v12 + 152) != v12 + 152 )
    KiCheckForKernelApcDelivery(v13, v12);
  return 3221225473LL;
}
