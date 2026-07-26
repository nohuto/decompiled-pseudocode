/*
 * XREFs of ?ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1400911E8
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x140046240 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcCleanup(struct _NDIS_MINIPORT_AOAC *a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rax
  __int64 v3; // r8

  v1 = (_QWORD *)((char *)a1 + 8);
  while ( 1 )
  {
    v2 = (_QWORD *)*v1;
    if ( (_QWORD *)*v1 == v1 )
      break;
    if ( (_QWORD *)v2[1] != v1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *v1 = v3;
    *(_QWORD *)(v3 + 8) = v1;
    --*((_DWORD *)a1 + 6);
    v2[3] = 0LL;
    *((_BYTE *)v2 + 32) = 1;
  }
}
