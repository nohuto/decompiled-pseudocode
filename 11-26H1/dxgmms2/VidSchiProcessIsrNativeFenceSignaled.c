/*
 * XREFs of VidSchiProcessIsrNativeFenceSignaled @ 0x14005861C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1400297B0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 */

PSLIST_ENTRY __fastcall VidSchiProcessIsrNativeFenceSignaled(__int64 a1, union _SLIST_HEADER *a2)
{
  union _SLIST_HEADER *Region; // rbp
  PSLIST_ENTRY v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  PSLIST_ENTRY v8; // rbx
  __int64 v9; // rax
  unsigned __int16 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-38h]

  Region = (union _SLIST_HEADER *)a2[1].Region;
  v5 = ExpInterlockedPopEntrySList(a2 + 193);
  v8 = v5;
  if ( v5 )
  {
    v5[2].Next = (struct _SLIST_ENTRY *)a2;
    LODWORD(v5->Next) = 19;
    v5[7].Next = *(struct _SLIST_ENTRY **)(a1 + 32);
    v9 = *(unsigned int *)(a1 + 16);
    *((_DWORD *)&v8[2].Next + 2) = v9;
    if ( (_DWORD)v9 )
    {
      if ( (unsigned int)v9 <= 8 )
        memmove(&v8[3], *(const void **)(a1 + 24), 8 * v9);
      else
        *((_DWORD *)&v8[2].Next + 2) = 0;
    }
    return ExpInterlockedPushEntrySList(Region + 129, v8 + 1);
  }
  else
  {
    v11 = (unsigned __int16 *)&a2->HeaderX64 + 2;
    if ( (byte_14008A202 & 1) != 0 )
    {
      LODWORD(v13) = 19;
      McTemplateK0dq_EtwWriteTransfer(v6, &FenceInterruptListFull, v7, *v11, v13);
    }
    WdLogSingleEntry1(1LL, *v11);
    WdLogGlobalForLineNumber = 326;
    return (PSLIST_ENTRY)DxgkLogInternalTriageEvent(v12, 0x40000LL);
  }
}
