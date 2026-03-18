/*
 * XREFs of ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x140025A00
 * Callers:
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x14001862C (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1400245EC (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 *v2; // rdx
  __int64 *v3; // rax
  __int64 **v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rdx

  v1 = (*a1 - 24LL) & -(__int64)(*a1 != 0LL);
  v2 = (__int64 *)((v1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64));
  v3 = (__int64 *)*v2;
  if ( *(__int64 **)(*v2 + 8) != v2
    || (v4 = *(__int64 ***)(((v1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64)) + 8), *v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  v3[1] = (__int64)v4;
  result = v1;
  v6 = (_QWORD *)((v1 + 24) & -(__int64)(v1 != 0));
  v6[1] = v6;
  *v6 = v6;
  return result;
}
