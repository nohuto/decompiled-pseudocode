/*
 * XREFs of ??0CAppLayoutItemFinderByItem@AppLayoutFinders@@QEAA@PEAUIAppLayoutItem@@@Z @ 0x1806C5B30
 * Callers:
 *     ?FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z @ 0x1806C6220 (-FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z @ 0x1806C71D0 (-RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z.c)
 *     ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x1806C778C (-_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z @ 0x1806C5B58 (--4-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z.c)
 */

AppLayoutFinders::CAppLayoutItemFinderByItem *__fastcall AppLayoutFinders::CAppLayoutItemFinderByItem::CAppLayoutItemFinderByItem(
        AppLayoutFinders::CAppLayoutItemFinderByItem *this,
        struct IAppLayoutItem *a2)
{
  *(_QWORD *)this = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutItem>::operator=(this, a2);
  return this;
}
