/*
 * XREFs of PiSwFreePdoAssociationsList @ 0x140A8C918
 * Callers:
 *     PiSwDeviceFree @ 0x140A8C768 (PiSwDeviceFree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwPdoAssociationFree @ 0x140A8DD8C (PiSwPdoAssociationFree.c)
 */

void __fastcall PiSwFreePdoAssociationsList(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1
      || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2)
      || (*a1 = v3, v3[1] = a1, PiSwLock(), v4 = v2[2], *(_QWORD **)(v4 + 8) != v2 + 2)
      || (v5 = (_QWORD *)v2[3], (_QWORD *)*v5 != v2 + 2) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
    PiSwPdoAssociationFree(v2);
  }
}
