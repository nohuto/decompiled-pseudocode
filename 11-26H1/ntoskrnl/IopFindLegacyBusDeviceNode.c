/*
 * XREFs of IopFindLegacyBusDeviceNode @ 0x140AFBA64
 * Callers:
 *     IoTranslateBusAddress @ 0x1405DBFD0 (IoTranslateBusAddress.c)
 *     IopDuplicateDetection @ 0x1407A88D0 (IopDuplicateDetection.c)
 *     IopChildToRootTranslation @ 0x140AFB894 (IopChildToRootTranslation.c)
 *     IopSetupArbiterAndTranslators @ 0x140B09784 (IopSetupArbiterAndTranslators.c)
 *     PnpReleaseResourcesInternal @ 0x140B35C90 (PnpReleaseResourcesInternal.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IopFindLegacyBusDeviceNode(int a1, unsigned int a2)
{
  PVOID v2; // r8
  int v3; // eax
  _QWORD **v4; // r10
  _QWORD *i; // rax

  v2 = IopRootDeviceNode;
  if ( a1 < 18 && a1 != 15 && a1 > -1 )
  {
    v3 = 1;
    if ( a1 != 2 )
      v3 = a1;
    v4 = (_QWORD **)((char *)&IopLegacyBusInformationTable + 16 * v3);
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i - 43) == a2 )
        return i - 78;
      if ( *((_DWORD *)i - 43) > a2 )
        return v2;
    }
  }
  return v2;
}
