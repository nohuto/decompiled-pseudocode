/*
 * XREFs of MiUpdateDriverLoadInProgress @ 0x1404294E0
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140AEE86C (MiObtainSectionForDriver.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403ED4E0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     RtlInsertInvertedFunctionTable @ 0x140429FF4 (RtlInsertInvertedFunctionTable.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14042A1AC (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14052F5A4 (MmLockLoadedModuleListExclusive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUpdateDriverLoadInProgress(__int64 a1, struct _LIST_ENTRY ***a2, int a3, int a4)
{
  struct _LIST_ENTRY ***v8; // rdi
  char v9; // si
  struct _LIST_ENTRY **p_Blink; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 result; // rax
  struct _LIST_ENTRY *v13; // rax
  struct _LIST_ENTRY **v14; // r9
  struct _LIST_ENTRY *v15; // r8
  char v16; // dl
  __int64 *v17; // rax
  bool v18; // r8
  struct _LIST_ENTRY *v19; // rdx
  unsigned __int64 v20; // r9
  struct _LIST_ENTRY *v21; // r8
  struct _LIST_ENTRY *Blink; // rax
  __int64 v23; // rcx
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rax
  unsigned int v25; // eax
  int v26; // [rsp+68h] [rbp+20h] BYREF

  v8 = (struct _LIST_ENTRY ***)a1;
  if ( a4 != 2 || (v8 = a2, (a3 & 0x10000000) == 0) )
  {
    v9 = MmLockLoadedModuleListExclusive();
    switch ( a4 )
    {
      case 0:
        Flink = stru_140E2D2D0.ThreadListEntry.Flink;
        p_Blink = &stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Blink;
        if ( stru_140E2D2D0.ThreadListEntry.Flink->Flink != (struct _LIST_ENTRY *)&stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Blink )
          break;
        *(_QWORD *)a1 = &stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Blink;
        *(_QWORD *)(a1 + 8) = Flink;
        Flink->Flink = (struct _LIST_ENTRY *)a1;
        stru_140E2D2D0.ThreadListEntry.Flink = (struct _LIST_ENTRY *)a1;
        goto LABEL_7;
      case 3:
        p_Blink = *v8;
        if ( (*v8)[1] == (struct _LIST_ENTRY *)v8 )
        {
          v13 = (struct _LIST_ENTRY *)v8[1];
          if ( (struct _LIST_ENTRY ***)v13->Flink == v8 )
          {
            v13->Flink = (struct _LIST_ENTRY *)p_Blink;
            p_Blink[1] = v13;
LABEL_7:
            LOBYTE(p_Blink) = v9;
            return MmUnlockLoadedModuleListExclusive(p_Blink);
          }
        }
        break;
      case 1:
        *(_QWORD *)(a1 + 48) = a2;
        *(_DWORD *)(a1 + 64) = a3;
        goto LABEL_7;
      case 2:
        v14 = *v8;
        if ( (*v8)[1] == (struct _LIST_ENTRY *)v8 )
        {
          v15 = (struct _LIST_ENTRY *)v8[1];
          if ( (struct _LIST_ENTRY ***)v15->Flink == v8 )
          {
            v16 = v9;
            v15->Flink = (struct _LIST_ENTRY *)v14;
            v14[1] = v15;
            if ( v15 != (struct _LIST_ENTRY *)v14 )
              v16 = v9;
            v9 = v16;
            goto LABEL_20;
          }
        }
        break;
      default:
        goto LABEL_20;
    }
LABEL_21:
    __fastfail(3u);
  }
  v9 = MmLockLoadedModuleListExclusive();
LABEL_20:
  v17 = (__int64 *)*(&PsLoadedModuleList + 1);
  if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
    goto LABEL_21;
  *(_QWORD *)a1 = &PsLoadedModuleList;
  v18 = 0;
  *(_QWORD *)(a1 + 8) = v17;
  *v17 = a1;
  v19 = stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Flink;
  *(&PsLoadedModuleList + 1) = (PVOID)a1;
  v20 = *(_QWORD *)(a1 + 48);
  if ( stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Flink )
  {
    while ( 1 )
    {
      v21 = v19[-10].Flink;
      if ( v20 <= (unsigned __int64)v21 + (unsigned int)(LODWORD(v19[-9].Flink) - 1) )
      {
        if ( v20 >= (unsigned __int64)v21 )
          KeBugCheckEx(0x1Au, 0x1016uLL, *(_QWORD *)(a1 + 48), (ULONG_PTR)v19, 0LL);
        Blink = v19->Flink;
        if ( !v19->Flink )
        {
          v18 = 0;
          break;
        }
      }
      else
      {
        Blink = v19->Blink;
        if ( !Blink )
        {
          v18 = 1;
          break;
        }
      }
      v19 = Blink;
    }
  }
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&stru_140E2D2D0.SuspendEvent.Header.WaitListHead,
    (unsigned __int64)v19,
    v18,
    (_QWORD *)(a1 + 208));
  LOBYTE(v23) = v9;
  *(_DWORD *)(a1 + 184) |= 0x400u;
  result = MmUnlockLoadedModuleListExclusive(v23);
  if ( (MiFlags & 0x100000) == 0 )
  {
    v26 = 0;
    LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(a1, &v26);
    if ( LoadedModuleImageAdditionalTablesAddress )
      v25 = v26 + LoadedModuleImageAdditionalTablesAddress - *(_DWORD *)(a1 + 48);
    else
      v25 = *(_DWORD *)(a1 + 64);
    return RtlInsertInvertedFunctionTable(*(_QWORD *)(a1 + 48), v25);
  }
  return result;
}
