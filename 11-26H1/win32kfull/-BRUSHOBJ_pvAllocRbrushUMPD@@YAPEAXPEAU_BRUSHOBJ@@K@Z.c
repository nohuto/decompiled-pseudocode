/*
 * XREFs of ?BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z @ 0x14025FCF0
 * Callers:
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x14032C6E0 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 * Callees:
 *     ?bMultiBrush@RBRUSH@@QEAAHHH@Z @ 0x14030A8B4 (-bMultiBrush@RBRUSH@@QEAAHHH@Z.c)
 *     ?bUMPDRBrush@RBRUSH@@QEAAHHH@Z @ 0x14030A900 (-bUMPDRBrush@RBRUSH@@QEAAHHH@Z.c)
 *     ?ulSizeSet@RBRUSH@@QEAAKKH@Z @ 0x14030A98C (-ulSizeSet@RBRUSH@@QEAAKKH@Z.c)
 */

PVOID __fastcall BRUSHOBJ_pvAllocRbrushUMPD(struct _BRUSHOBJ *a1, unsigned int a2)
{
  PVOID *p_pvRbrush; // rbx
  unsigned int v3; // esi
  RBRUSH *v5; // rax
  RBRUSH *v6; // rdi
  int v7; // edx
  int v8; // r8d

  p_pvRbrush = &a1->pvRbrush;
  if ( !a1->pvRbrush )
  {
    v3 = a2 + 16;
    if ( a2 + 16 < a2 )
      return 0LL;
    v5 = (RBRUSH *)EngAllocUserMem(v3, 0x706D7547u);
    v6 = v5;
    if ( v5 )
    {
      RBRUSH::ulSizeSet(v5, v3, 1);
      RBRUSH::bMultiBrush(v6, 0, 1);
      RBRUSH::bUMPDRBrush(v6, v7, v8);
      *p_pvRbrush = (char *)v6 + 16;
    }
  }
  return *p_pvRbrush;
}
