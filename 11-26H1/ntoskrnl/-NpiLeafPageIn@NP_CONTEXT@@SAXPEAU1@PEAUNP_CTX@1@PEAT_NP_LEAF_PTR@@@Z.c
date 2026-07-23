/*
 * XREFs of ?NpiLeafPageIn@NP_CONTEXT@@SAXPEAU1@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x14063FFE8
 * Callers:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 * Callees:
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x1403EB618 (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x1403EC6E8 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall NP_CONTEXT::NpiLeafPageIn(struct NP_CONTEXT *a1, struct NP_CONTEXT::NP_CTX *a2, union _NP_LEAF_PTR *a3)
{
  _QWORD *v6; // rsi

  v6 = NP_CONTEXT::NpNodeAllocate(a2, (__int64)a2, 3);
  if ( v6 )
  {
    if ( (int)guard_dispatch_icall_no_overrides(a2, v6) >= 0 )
    {
      ++*((_DWORD *)a1 + 21);
      --*((_DWORD *)a1 + 11);
      ++*((_DWORD *)a1 + 12);
      *(_QWORD *)(((unsigned __int64)v6 + 11) & 0xFFFFFFFFFFFFFFF8uLL) = *(_QWORD *)a3;
      *(_QWORD *)a3 = v6;
      *(_DWORD *)a3 |= 1u;
    }
    else
    {
      ++*((_DWORD *)a1 + 23);
      NP_CONTEXT::NpNodeFree(a2, v6, 1);
    }
  }
  else
  {
    ++*((_DWORD *)a1 + 23);
  }
}
