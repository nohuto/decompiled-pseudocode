/*
 * XREFs of MiAssignBackgroundZeroThreadToProcessor @ 0x1402F5E34
 * Callers:
 *     MiSelectBestZeroingProcessor @ 0x1402F59A4 (MiSelectBestZeroingProcessor.c)
 *     MiAddZeroingThread @ 0x140521E94 (MiAddZeroingThread.c)
 * Callees:
 *     KeSetUserGroupAffinityThread @ 0x1402F56D4 (KeSetUserGroupAffinityThread.c)
 *     MiUpdateZeroingAvailableAffinity @ 0x1402F6500 (MiUpdateZeroingAvailableAffinity.c)
 */

void __fastcall MiAssignBackgroundZeroThreadToProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r8

  if ( *(_DWORD *)a2 )
  {
    v4 = *(_WORD *)(a3 + 32);
    v5 = *(_QWORD *)(a3 + 24);
    v6 = *(unsigned int *)(a3 + 44);
    *(_DWORD *)(a1 + 88) = v6;
    *(_QWORD *)(a1 + 96) = v5;
    *(_WORD *)(a1 + 104) = v4;
    *(_QWORD *)(a1 + 112) = v5;
    v7 = (_QWORD *)(a1 + 176);
    *(_WORD *)(a1 + 120) = v4;
    v8 = 48 * v6 + *(_QWORD *)(a2 + 88);
    ++*(_DWORD *)(v8 + 32);
    v9 = *(_QWORD **)(v8 + 24);
    if ( *v9 != v8 + 16 )
      __fastfail(3u);
    *v7 = v8 + 16;
    *(_QWORD *)(a1 + 184) = v9;
    *v9 = v7;
    *(_QWORD *)(v8 + 24) = v7;
    MiUpdateZeroingAvailableAffinity(a1, v8, *(_QWORD *)(v8 + 8));
    KeSetUserGroupAffinityThread(*(_QWORD *)(a1 + 72), (__int64 *)(a1 + 96));
  }
}
