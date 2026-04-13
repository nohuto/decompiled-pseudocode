/*
 * XREFs of ?Release@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAKXZ @ 0x1800AB050
 * Callers:
 *     ?Release@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@W7EAAKXZ @ 0x1800AB060 (-Release@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@W7E.c)
 *     ?Release@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@WBA@EAAKXZ @ 0x1800AB070 (-Release@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@WBA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::Release(
        __int64 this,
        volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::Release(
           this,
           a2);
}
