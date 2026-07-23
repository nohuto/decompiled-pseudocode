/*
 * XREFs of MiDeleteEmptyPageTableTail @ 0x140443810
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseWalkLocks @ 0x140364CA0 (MiReleaseWalkLocks.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiDeleteEmptyPageTableTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r14
  __int64 v6; // rcx
  bool v7; // zf
  void *v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v13; // [rsp+28h] [rbp-10h]

  v4 = *(__int64 **)(a1 + 184);
  v6 = *v4;
  *(_BYTE *)(v6 + 101) = 17;
  MiDecommitPagesTail(v6, (*(_DWORD *)a1 & 4) == 0, a3, a4);
  v7 = (v4[11] & 0xFFFFFFFFFFFFF000uLL) == 0;
  v8 = v4 + 2;
  v9 = 512LL;
  v13 = v4 + 2;
  v12 = 512LL;
  if ( !v7 )
  {
    MiReleaseWalkLocks(a1);
    v10 = 0LL;
    if ( v4[10] )
    {
      MiWalkAllBitmapRanges(&v12, MiDeleteEmptyPageTableCommit, a1);
      v8 = v13;
      v9 = v12;
    }
    v4[11] = 0LL;
    LOBYTE(v10) = (v9 & 0x1F) != 0;
    memset_0(v8, 0, 4 * ((v9 >> 5) + v10));
  }
  return 0LL;
}
