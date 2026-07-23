/*
 * XREFs of MiFinishDeleteNonPagedPtes @ 0x1403650CC
 * Callers:
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 *     MiClearNonPagedPtesSlow @ 0x140365970 (MiClearNonPagedPtesSlow.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiFreeNonPagedPoolPages @ 0x140365080 (MiFreeNonPagedPoolPages.c)
 */

__int64 __fastcall MiFinishDeleteNonPagedPtes(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int64 *MmInternal; // r8
  __int64 *v8; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a2 + 32);
  LOBYTE(a2) = *(_BYTE *)(a2 + 9);
  v11 = 0LL;
  *(_QWORD *)&v11 = *(_QWORD *)(v3 + 24);
  v6 = *(_OWORD *)(v3 + 8);
  DWORD2(v11) = *(_DWORD *)(v3 + 44);
  v10 = v6;
  if ( a3 )
  {
    MmInternal = (__int64 *)KeGetCurrentPrcb()->MmInternal;
    v8 = MxTempPrcb;
    if ( MmInternal )
      v8 = MmInternal;
    v8[48] = 0LL;
  }
  MiUnlockWorkingSetShared(v5, a2);
  MiFreeNonPagedPoolPages(*a1, (__int64)&v10);
  return DWORD2(v11);
}
