/*
 * XREFs of ?DestroyCallback@PINENTRY@@SAHPEAV1@PEAX@Z @ 0x18068E970
 * Callers:
 *     <none>
 * Callees:
 *     ?Destruct@PINENTRY@@QEAAXXZ @ 0x18068E98C (-Destruct@PINENTRY@@QEAAXXZ.c)
 */

__int64 __fastcall PINENTRY::DestroyCallback(PINENTRY *p, void *pData)
{
  PINENTRY::Destruct(p);
  return 1LL;
}
