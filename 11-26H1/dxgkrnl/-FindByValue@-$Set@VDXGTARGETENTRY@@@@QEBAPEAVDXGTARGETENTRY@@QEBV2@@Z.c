/*
 * XREFs of ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x140059C40
 * Callers:
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x140059B7C (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?Remove@?$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x140067CFC (-Remove@-$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401D0EB8 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ??9DXGTARGETENTRY@@QEBA_NAEBV0@@Z @ 0x1403E448C (--9DXGTARGETENTRY@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DXGTARGETENTRY>::FindByValue(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v7; // rcx

  v1 = a1 + 24;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  if ( v2 != v1 )
    v3 = v2 - 8;
  while ( v3 && (unsigned __int8)DXGTARGETENTRY::operator!=(v3) )
  {
    v7 = *(_QWORD *)(v3 + 8);
    v3 = v7 - 8;
    if ( v7 == v4 )
      v3 = v5;
  }
  return v3;
}
