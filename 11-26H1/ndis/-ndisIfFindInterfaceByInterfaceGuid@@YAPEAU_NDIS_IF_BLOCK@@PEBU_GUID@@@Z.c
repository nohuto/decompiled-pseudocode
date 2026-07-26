/*
 * XREFs of ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1400658D0
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x140074670 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x14008E860 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1400971CC (ndisConvertIdentifierForNetworkInterface.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D1ADC (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_BLOCK *__fastcall ndisIfFindInterfaceByInterfaceGuid(const struct _GUID *a1)
{
  _DEVICE_OBJECT *i; // rdx
  unsigned __int64 v2; // rax

  for ( i = *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize;
        i != (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize;
        i = *(_DEVICE_OBJECT **)&i->Type )
  {
    v2 = *(_QWORD *)&a1->Data1 - *(unsigned __int64 *)((char *)&i[-3].DeviceObjectExtension + 4);
    if ( *(_DEVOBJ_EXTENSION **)&a1->Data1 == *(_DEVOBJ_EXTENSION **)((char *)&i[-3].DeviceObjectExtension + 4) )
      v2 = *(_QWORD *)a1->Data4 - *(unsigned __int64 *)((char *)&i[-3].Reserved + 4);
    if ( !v2 )
      return (struct _NDIS_IF_BLOCK *)&i[-4].Queue.Wcb.DeviceContext;
  }
  return 0LL;
}
