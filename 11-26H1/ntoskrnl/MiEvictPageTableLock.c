/*
 * XREFs of MiEvictPageTableLock @ 0x14029DEE8
 * Callers:
 *     MiDeleteSystemPageTable @ 0x1402EBAE0 (MiDeleteSystemPageTable.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403653A0 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiCleanupLazyStampedPageTable @ 0x14029F55C (MiCleanupLazyStampedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140327678 (MiUnlockNestedPageTableWritePte.c)
 */

__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  int v6; // r14d
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v15; // rdx
  __int64 HasShadow; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax

  v4 = *(_QWORD *)a2;
  v6 = a3;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v15 = *(_QWORD *)a2;
    if ( (v4 & 1) != 0 && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(a1, v15, a3);
      if ( HasShadow )
      {
        v18 = *(_QWORD *)(HasShadow + 1288);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            v17 |= 0x20uLL;
          v4 = v17 | 0x42;
          if ( (v19 & 0x42) == 0 )
            v4 = v17;
        }
      }
    }
  }
  v9 = (v4 >> 12) & 0xFFFFFFFFFFLL;
  MiLockNestedPageTable(a1, a2);
  v12 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v11 = *(_QWORD *)a2;
    if ( (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v20 = MiPteHasShadow(v10, v12, v11);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 1288);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            v11 |= 0x20uLL;
          v12 = v11 | 0x42;
          if ( (v22 & 0x42) == 0 )
            v12 = v11;
        }
      }
    }
  }
  if ( (*(_DWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 36) & 0x4000000) != 0 )
    v13 = *(_QWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 36;
  else
    v13 = *(_QWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16) >> 17;
  if ( (v13 & 0x3FF) != 0 )
    goto LABEL_34;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
    goto LABEL_7;
  if ( v6 == 1 || (_UNKNOWN *)a1 == &unk_140E37340 )
    MiCleanupLazyStampedPageTable(a1, a2, v11);
  if ( (unsigned __int16)*(_QWORD *)(48 * v9 - 0x21FFFFFFFFE8LL) != 1 )
  {
LABEL_34:
    MiUnlockPageTableInternal(a1, a2);
    return 0LL;
  }
  else
  {
LABEL_7:
    MiUnlockNestedPageTableWritePte(a1, a2, a4, 0LL);
    return 1LL;
  }
}
