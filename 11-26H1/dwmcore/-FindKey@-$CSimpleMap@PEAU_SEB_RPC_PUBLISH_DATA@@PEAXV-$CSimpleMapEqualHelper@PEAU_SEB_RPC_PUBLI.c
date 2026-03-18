/*
 * XREFs of ?FindKey@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEBAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1801C8EB8
 * Callers:
 *     PubSebUnregisterRpc @ 0x1801C8A64 (PubSebUnregisterRpc.c)
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1801C8E2C (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::FindKey(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  int i; // ecx

  v2 = Block;
  for ( i = 0; i < dword_1803DE628; ++i )
  {
    if ( *v2 == *a2 )
      return (unsigned int)i;
    ++v2;
  }
  return 0xFFFFFFFFLL;
}
