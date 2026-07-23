/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x140A8C454
 * Callers:
 *     PiSwProcessRemove @ 0x1409AD484 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140A8C420 (PiSwDestroyDeviceObject.c)
 * Callees:
 *     PiSwFindPdoAssociation @ 0x140A8C4E8 (PiSwFindPdoAssociation.c)
 *     PiSwDeviceDereference @ 0x140A8C538 (PiSwDeviceDereference.c)
 *     PiSwPdoAssociationFree @ 0x140A8DD8C (PiSwPdoAssociationFree.c)
 */

void __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  _QWORD *v1; // rdi
  void *v2; // rbx
  _QWORD *PdoAssociation; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rcx

  v1 = *(_QWORD **)(a1 + 64);
  v2 = (void *)*v1;
  if ( *v1 )
  {
    PdoAssociation = (_QWORD *)PiSwFindPdoAssociation(*v1, a1, 0LL);
    if ( PdoAssociation )
    {
      v4 = *PdoAssociation;
      if ( *(_QWORD **)(*PdoAssociation + 8LL) != PdoAssociation
        || (v5 = (_QWORD *)PdoAssociation[1], (_QWORD *)*v5 != PdoAssociation)
        || (*v5 = v4, *(_QWORD *)(v4 + 8) = v5, v6 = PdoAssociation[2], *(_QWORD **)(v6 + 8) != PdoAssociation + 2)
        || (v7 = (_QWORD *)PdoAssociation[3], (_QWORD *)*v7 != PdoAssociation + 2) )
      {
        __fastfail(3u);
      }
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      PiSwPdoAssociationFree(PdoAssociation);
    }
    PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
}
