/*
 * XREFs of ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1801355B0
 * Callers:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x18013557C (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x18006A4D0 (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z @ 0x180135634 (-DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall CD3DResourceManager::DestroyDeviceResources(union _SLIST_HEADER *this)
{
  struct _LIST_ENTRY *v1; // rdx
  unsigned int v3; // edi

  v1 = (struct _LIST_ENTRY *)&this[2];
  if ( v1->Flink != v1 )
  {
    v3 = CD3DResourceManager::DestroyListOfResources((CD3DResourceManager *)this, v1);
    while ( QueryDepthSList(this + 1) != v3 )
      Sleep(1u);
    CD3DResourceManager::DestroyReleasedResources(this);
  }
}
