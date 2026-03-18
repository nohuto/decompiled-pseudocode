/*
 * XREFs of VidSchiCloseProcessAdapterInfo @ 0x1400FD6A4
 * Callers:
 *     VidSchTerminateDevice @ 0x1400FD230 (VidSchTerminateDevice.c)
 * Callees:
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x140042CF8 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall VidSchiCloseProcessAdapterInfo(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v6; // rsi
  _DWORD *v7; // rcx
  __int64 i; // rbp
  __int64 j; // rbx
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  PVOID *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax

  v2 = a2[1];
  v3 = a1 + 2664;
  ExAcquirePushLockExclusiveEx(a1 + 2664, 0LL);
  v6 = (unsigned int)v2;
  v7 = *(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2);
  --*v7;
  if ( !**(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2) )
  {
    for ( i = 0LL; (unsigned int)i < a2[12]; i = (unsigned int)(i + 1) )
    {
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8 * i + 88), 0);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8 * i + 88) = 0LL;
    }
    for ( j = 0LL; (unsigned int)j < a2[22]; *v18 = 0LL )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6);
      v12 = *(_DWORD *)(v11 + 80);
      v13 = *(_QWORD *)(v11 + 8);
      v14 = v13 + 8 * j;
      if ( (unsigned int)j >= v12 )
        v14 = v13;
      if ( *(_QWORD *)(*(_QWORD *)v14 + 216LL) )
      {
        if ( (unsigned int)j < v12 )
          v13 += 8 * j;
        PcwCloseInstance(*(PPCW_INSTANCE *)(*(_QWORD *)v13 + 216LL));
      }
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6);
      v16 = *(PVOID **)(v15 + 8);
      if ( (unsigned int)j < *(_DWORD *)(v15 + 80) )
        v16 += j;
      ExFreePoolWithTag(*v16, 0);
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6);
      v18 = *(_QWORD **)(v17 + 8);
      if ( (unsigned int)j < *(_DWORD *)(v17 + 80) )
        v18 += j;
      j = (unsigned int)(j + 1);
    }
    VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(*(VIDSCH_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(a1 + 32)
                                                                                              + 8 * v6));
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 32) + 8 * v6), 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6) = 0LL;
  }
  return ExReleasePushLockExclusiveEx(v3, 0LL);
}
