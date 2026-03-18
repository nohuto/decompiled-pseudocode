/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x140A7B310
 * Callers:
 *     PiSwProcessRemove @ 0x14090B360 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140A7B2DC (PiSwDestroyDeviceObject.c)
 * Callees:
 *     PiSwFindPdoAssociation @ 0x140A7B3A4 (PiSwFindPdoAssociation.c)
 *     PiSwDeviceDereference @ 0x140A7B3F4 (PiSwDeviceDereference.c)
 *     PiSwPdoAssociationFree @ 0x140A7CB74 (PiSwPdoAssociationFree.c)
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
