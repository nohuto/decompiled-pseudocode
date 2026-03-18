/*
 * XREFs of SmmClearPageManager @ 0x14009BBCC
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140284D58 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285654 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     SmmIoMmuDeleteTreeNode @ 0x14009BC7C (SmmIoMmuDeleteTreeNode.c)
 */

void __fastcall SmmClearPageManager(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  KIRQL v4; // bp
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8));
  v3 = *(_QWORD **)a1;
  v4 = v2;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = v3;
          if ( !*v3 )
            break;
          v3 = (_QWORD *)*v3;
          *v5 = 0LL;
        }
        v6 = v3 + 1;
        if ( !v3[1] )
          break;
        v3 = (_QWORD *)v3[1];
        *v6 = 0LL;
      }
      v7 = v3[2];
      SmmIoMmuDeleteTreeNode(v3);
      v8 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 )
        break;
      v3 = (_QWORD *)v8;
    }
  }
  *(_QWORD *)a1 = 0LL;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8), v4);
}
