/*
 * XREFs of ?RegisterBeginEndListener@SwitchItemFilteredCollection@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x1804B3C90
 * Callers:
 *     ?RegisterBeginEndListener@SwitchItemFilteredCollection@@WKI@EAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x1804B3CA0 (-RegisterBeginEndListener@SwitchItemFilteredCollection@@WKI@EAAJPEAUIObservableObjectArrayChange.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall SwitchItemFilteredCollection::RegisterBeginEndListener(
        SwitchItemFilteredCollection *this,
        struct IObservableObjectArrayChangedBeginEnd *a2,
        unsigned int *a3)
{
  return ObservableObjectArray::RegisterBeginEndListener(this, a2, a3);
}
