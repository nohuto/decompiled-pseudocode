/*
 * XREFs of ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140202DF8
 * Callers:
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x140200F50 (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     KeSetIdealProcessorThreadEx @ 0x140204930 (KeSetIdealProcessorThreadEx.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402044D0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiQueueTebUpdateApc @ 0x1402094C4 (KiQueueTebUpdateApc.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiCheckPrcbAffinityEx @ 0x140308C80 (KiCheckPrcbAffinityEx.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 */

__int64 __fastcall KiSetIdealProcessorThread(
        struct _KTHREAD *a1,
        volatile unsigned int a2,
        char a3,
        unsigned int *a4,
        char a5)
{
  unsigned int v6; // edi
  char v9; // r15
  volatile unsigned int UserIdealProcessor; // eax
  _KAFFINITY_EX *UserAffinity; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rcx
  _OWORD v18[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]

  v6 = 0;
  v9 = 0;
  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  if ( !a3 && (a1->MiscFlags & 8) != 0 )
  {
    UserAffinity = a1->UserAffinity;
    UserIdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    UserIdealProcessor = a1->IdealProcessor;
    UserAffinity = a1->Affinity;
  }
  if ( a4 )
    *a4 = UserIdealProcessor;
  v12 = KiProcessorBlock[a2];
  if ( !(unsigned __int8)KiCheckPrcbAffinityEx(UserAffinity, v12, 116LL) )
    return (unsigned int)-1073741823;
  if ( (*(_DWORD *)(v15 + v14) & 8) != 0 && !a3 )
  {
    a1->UserIdealProcessor = a2;
    a1->UserAffinityPrimaryGroup = *(unsigned __int8 *)(v12 + 208);
LABEL_11:
    LOBYTE(v13) = a5;
    KiQueueTebUpdateApc(a1, v13);
    return v6;
  }
  KiAcquireThreadStateLockForWrite(a1, v18);
  a1->IdealProcessor = a2;
  a1->AffinityPrimaryGroup = *(unsigned __int8 *)(v12 + 208);
  if ( !a3 )
  {
    a1->UserIdealProcessor = a2;
    v9 = 1;
    a1->UserAffinityPrimaryGroup = *(unsigned __int8 *)(v12 + 208);
  }
  KiUpdateSharedReadyQueueAffinityThread(v12, a1);
  KiReleaseThreadStateLock(v16, v18);
  if ( v9 )
    goto LABEL_11;
  return v6;
}
