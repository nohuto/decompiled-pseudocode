/*
 * XREFs of ?DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z @ 0x180135634
 * Callers:
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1801355B0 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18013569C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 */

__int64 __fastcall CD3DResourceManager::DestroyListOfResources(CD3DResourceManager *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v3; // ebx
  struct _LIST_ENTRY *i; // rsi

  Flink = a2->Flink;
  v3 = 0;
  for ( i = a2; i->Flink != a2; Flink = i->Flink )
  {
    if ( Flink[-4].Blink )
    {
      CD3DResourceManager::DestroyResource(this, (struct CD3DResource *)&Flink[-6]);
    }
    else
    {
      ++v3;
      i = Flink;
    }
  }
  return v3;
}
