/*
 * XREFs of ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140099BD4
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x14010BD68 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EFC60 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400F0AA8 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F4640 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  struct VIDMM_RECYCLE_MULTIRANGE *Multirange; // rbp
  int v5; // eax
  __int64 v6; // rdi
  struct VIDMM_RECYCLE_MULTIRANGE *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r14

  Multirange = (struct VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                                    *((_QWORD *)this + 1),
                                                    2LL,
                                                    *((_QWORD *)a2 + 9),
                                                    *((_QWORD *)a2 + 4),
                                                    *((_QWORD *)a2 + 5));
  if ( !Multirange )
    return 0LL;
  v5 = *(_DWORD *)this;
  v6 = 0LL;
  if ( *(_DWORD *)this != 3 && (unsigned int)(v5 - 4) > 2 && (unsigned int)(v5 - 9) > 1 )
  {
    v6 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
           *((_QWORD *)this + 1),
           1LL,
           *((_QWORD *)a2 + 9),
           *((_QWORD *)a2 + 4),
           *((_QWORD *)a2 + 5));
    if ( !v6 )
    {
      v7 = Multirange;
      goto LABEL_15;
    }
  }
  v8 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
         *((_QWORD *)this + 1),
         0LL,
         *((_QWORD *)a2 + 9),
         *((_QWORD *)a2 + 4),
         *((_QWORD *)a2 + 5));
  v9 = v8;
  if ( !v8 )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), Multirange);
    if ( !v6 )
      return 0LL;
    v7 = (struct VIDMM_RECYCLE_MULTIRANGE *)v6;
LABEL_15:
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), v7);
    return 0LL;
  }
  *((_QWORD *)Multirange + 8) = a2;
  *((_QWORD *)Multirange + 9) = a2;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 64) = a2;
    *(_QWORD *)(v6 + 72) = a2;
  }
  *(_QWORD *)(v8 + 64) = a2;
  *(_QWORD *)(v8 + 72) = a2;
  *((_QWORD *)a2 + 19) = Multirange;
  *((_QWORD *)a2 + 18) = v6;
  *((_QWORD *)a2 + 17) = v8;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 0LL, Multirange);
  if ( v6 )
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 1LL, v6);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, v9);
  return Multirange;
}
