/*
 * XREFs of ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x14005F4F0
 * Callers:
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009F348 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfDeleteStackEntries(struct _NDIS_IF_BLOCK *a1)
{
  PVOID *v2; // rbx
  PVOID *v3; // rax
  PVOID *v4; // r8
  PVOID *v5; // rcx
  struct _NDIS_IF_BLOCK *v6; // rdx
  PVOID *v7; // rdx
  PVOID **v8; // rax

  KeAcquireSpinLockAtDpcLevel(&qword_14011E960);
  v2 = (PVOID *)P;
  if ( P != &P )
  {
    do
    {
      v3 = v2;
      v4 = v2;
      v5 = v2;
      v2 = (PVOID *)*v2;
      v6 = (struct _NDIS_IF_BLOCK *)v3[3];
      if ( v6 == a1 || v3[4] == a1 )
      {
        --v6->LowerLayerIfCount;
        --*((_DWORD *)v3[4] + 325);
        v7 = (PVOID *)*v4;
        if ( *((PVOID **)*v4 + 1) != v5 || (v8 = (PVOID **)v5[1], *v8 != v5) )
          __fastfail(3u);
        *v8 = v7;
        v7[1] = v8;
        ExFreePoolWithTag(v5, 0);
      }
    }
    while ( v2 != &P );
  }
  *(_QWORD *)&a1->LowerLayerIfCount = 0LL;
  KeReleaseSpinLockFromDpcLevel(&qword_14011E960);
}
