/*
 * XREFs of ??0?$ObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@IEAA@XZ @ 0x180096BA8
 * Callers:
 *     ??0?$RefCountedObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@IEAA@XZ @ 0x180096B68 (--0-$RefCountedObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ObjectBase<IGameInputServer,IAgileObject,INoMarshal>::ObjectBase<IGameInputServer,IAgileObject,INoMarshal>(
        _QWORD *a1)
{
  *a1 = &ObjectBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IGameInputServer'};
  a1[1] = &ObjectBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IAgileObject'};
  a1[2] = &ObjectBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `INoMarshal'};
  return a1;
}
