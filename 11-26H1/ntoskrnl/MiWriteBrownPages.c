/*
 * XREFs of MiWriteBrownPages @ 0x1404A8640
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockMirrorWritePages @ 0x1404A872C (MiUnlockMirrorWritePages.c)
 *     MiLockMirrorWritePages @ 0x140525140 (MiLockMirrorWritePages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWriteBrownPages(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r12d
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  int v8; // ebp
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-38h]

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2 + a3;
  v5 = a2;
  v10 = 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v5 >= v4 )
      return 0LL;
    v7 = v4 - v5;
    if ( (v3 & 8) != 0 )
    {
      *(_QWORD *)&v10 = a1;
      *((_QWORD *)&v10 + 1) = -1LL;
      v11 = 0LL;
      MiLockMirrorWritePages(&v10, v5, v7);
      v7 = v11;
      if ( !v11 )
        return 0LL;
      v5 = *((_QWORD *)&v10 + 1);
    }
    *(_QWORD *)(a1 + 16) += v7;
    v8 = guard_dispatch_icall_no_overrides(v5 << 12, v7 << 12);
    if ( (v3 & 8) != 0 )
      MiUnlockMirrorWritePages(v5, v7);
    if ( v8 < 0 )
      break;
    v5 += v7;
  }
  return (unsigned int)v8;
}
