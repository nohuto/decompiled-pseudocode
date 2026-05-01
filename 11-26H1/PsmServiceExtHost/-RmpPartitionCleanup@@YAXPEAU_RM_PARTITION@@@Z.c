/*
 * XREFs of ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800886EC
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800800A0 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 */

void __fastcall RmpPartitionCleanup(struct _RM_PARTITION *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edi
  void **v5; // rsi
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  v2 = (void *)*((_QWORD *)a1 + 7);
  if ( v2 )
    CloseHandle(v2);
  v3 = *((_QWORD *)a1 + 8);
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = 0;
  v5 = (void **)((char *)a1 + 8);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( v4 )
        CloseHandle(v6);
      else
        NtClose(v6);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 6 );
  v7 = (void *)*((_QWORD *)a1 + 15);
  if ( v7 )
  {
    HampFreeHeap(v7);
    *((_QWORD *)a1 + 15) = 0LL;
  }
  v8 = (void *)*((_QWORD *)a1 + 16);
  if ( v8 )
  {
    HampFreeHeap(v8);
    *((_QWORD *)a1 + 16) = 0LL;
  }
  v9 = (void *)*((_QWORD *)a1 + 18);
  if ( v9 )
    HampFreeHeap(v9);
  *((_DWORD *)a1 + 38) = 0;
}
