/*
 * XREFs of SeSecureBootRegisterPolicy @ 0x140CDDE10
 * Callers:
 *     SeCodeIntegrityInitializePolicy @ 0x140CDCFD4 (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     SepSecureBootCheckForUpdates @ 0x140CDE0A4 (SepSecureBootCheckForUpdates.c)
 *     SepSecureBootSetRegistryKey @ 0x140CDE1B0 (SepSecureBootSetRegistryKey.c)
 */

__int64 __fastcall SeSecureBootRegisterPolicy(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rbp
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  _WORD *v6; // rsi
  _WORD *Pool2; // rax
  _WORD *v8; // rbx
  int v9; // ebx
  unsigned int v10; // ecx
  __int64 v11; // r8
  char *v12; // rdx
  int v13; // ecx
  char v14; // al
  ULONG_PTR v15; // rdx
  unsigned int v16; // r9d
  unsigned int *v17; // rax
  unsigned int *v18; // rbx
  unsigned int v19; // edx
  unsigned __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned __int64 v23; // rax

  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)BugCheckParameter3 < 0x10 )
    goto LABEL_36;
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  v5 = *(_DWORD *)(BugCheckParameter2 + 12);
  if ( (v4 == 0) != (v5 == 0)
    || v4 >= (unsigned int)BugCheckParameter3
    || v5 >= (unsigned int)BugCheckParameter3
    || v5 - 1 <= 0x3E
    || v4 + v5 > (unsigned int)BugCheckParameter3 )
  {
    goto LABEL_36;
  }
  v6 = 0LL;
  *(_OWORD *)&RtlpBootStatHandleLock.SchedulerApc.Type = *(_OWORD *)BugCheckParameter2;
  RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Flink = *(struct _LIST_ENTRY **)(BugCheckParameter2 + 16);
  if ( *(_DWORD *)(BugCheckParameter2 + 12) )
    v6 = (_WORD *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 8));
  SepSecureBootSetRegistryKey(v6);
  if ( (RtlpBootStatHandleLock.SchedulerApcFill3[4] & 8) != 0 )
    SepSecureBootCheckForUpdates();
  if ( v6 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(64LL, *(unsigned int *)(BugCheckParameter2 + 12), 0x62536553u);
    v8 = Pool2;
    if ( !Pool2 )
    {
LABEL_14:
      v9 = -1073741670;
      goto LABEL_37;
    }
    memmove(Pool2, v6, *(unsigned int *)(BugCheckParameter2 + 12));
    *(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] = v8;
    if ( !v6[18] && !v6[19] )
      return 0LL;
    RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)((char *)v8
                                                                                  + *((unsigned int *)v8 + 13)
                                                                                  + 60);
    v10 = (unsigned __int16)v8[18];
    if ( (_WORD)v10 )
    {
      RtlpBootStatHandleLock.SchedulerApc.Reserved[2] = (char *)v8 + *((unsigned int *)v8 + 10) + 60;
      v11 = v10;
      v12 = (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + 4;
      v13 = *(_DWORD *)&RtlpBootStatHandleLock.SchedulerApcFill5[56];
      do
      {
        v14 = v12[3];
        v12 += 12;
        v13 |= 1 << (v14 & 0xF);
        --v11;
      }
      while ( v11 );
      *(_DWORD *)&RtlpBootStatHandleLock.SchedulerApcFill5[56] = v13;
    }
    if ( v8[19] )
      RtlpBootStatHandleLock.SchedulerApc.Reserved[0] = (char *)v8 + *((unsigned int *)v8 + 11) + 60;
    if ( *(_DWORD *)BugCheckParameter2 < 2u )
      return 0LL;
    v15 = *(unsigned int *)(BugCheckParameter2 + 20);
    if ( !(_DWORD)v15 )
      return 0LL;
    if ( (unsigned int)v15 < (unsigned int)v2 )
    {
      v16 = *(_DWORD *)(BugCheckParameter2 + 16);
      if ( v16 < (unsigned int)v2 && v16 <= (int)v2 - (int)v15 )
      {
        v17 = (unsigned int *)ExAllocatePool2(64LL, v15, 0x62536553u);
        v18 = v17;
        if ( !v17 )
          goto LABEL_14;
        memmove(
          v17,
          (const void *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 16)),
          *(unsigned int *)(BugCheckParameter2 + 20));
        v19 = *(_DWORD *)(BugCheckParameter2 + 20);
        if ( v19 >= 0x18 )
        {
          v20 = 276LL * *v18;
          v21 = v19 - 24;
          *((_QWORD *)v18 + 1) = v18 + 6;
          if ( v20 <= 0xFFFFFFFF && v21 >= (unsigned int)v20 )
          {
            v22 = v21 - v20;
            v23 = 32LL * v18[1];
            if ( v23 <= 0xFFFFFFFF && v22 >= (unsigned int)v23 )
            {
              *((_QWORD *)v18 + 2) = (char *)v18 + (unsigned int)v20 + 24;
              LODWORD(SepRmCapTableLock.IoSelfBoostsEntry.Next) = *(_DWORD *)(BugCheckParameter2 + 20);
              *(_QWORD *)SepRmCapTableLock.PriorityFloorCounts = v18;
              return 0LL;
            }
          }
        }
      }
    }
LABEL_36:
    v9 = -1069350909;
LABEL_37:
    if ( *(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] )
    {
      ExFreePoolWithTag(*(PVOID *)&RtlpBootStatHandleLock.SavedApcStateFill[40], 0);
      *(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] = 0LL;
    }
    KeBugCheckEx(0x145u, v9, BugCheckParameter2, v2, 0LL);
  }
  return 0LL;
}
