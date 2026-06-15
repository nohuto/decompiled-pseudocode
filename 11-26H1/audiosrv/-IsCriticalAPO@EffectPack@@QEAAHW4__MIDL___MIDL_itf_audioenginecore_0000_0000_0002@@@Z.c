/*
 * XREFs of ?IsCriticalAPO@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@@Z @ 0x18013A55C
 * Callers:
 *     ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x18013E1A8 (-UpdateAPOEnableStatus@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18013A288 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 */

__int64 __fastcall EffectPack::IsCriticalAPO(EffectPack *a1, int a2)
{
  __int64 v3; // rdi

  v3 = a2;
  if ( *((_DWORD *)a1 + 377) )
    return 0LL;
  if ( !*((_DWORD *)a1 + 376) )
    EffectPack::InitializeCriticalAPOMetadata(a1);
  return *((unsigned int *)a1 + v3 + 372);
}
