/*
 * XREFs of ?ResultFromKnownLastError@@YAJXZ @ 0x180064140
 * Callers:
 *     ?CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z @ 0x18006209C (-CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z.c)
 *     ?OpenSubscriptionHandle@Details@SubscribedContentStore@CreativeFramework@@YAJPEBGPEAPEAX@Z @ 0x180063628 (-OpenSubscriptionHandle@Details@SubscribedContentStore@CreativeFramework@@YAJPEBGPEAPEAX@Z.c)
 *     ?GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z @ 0x180072D10 (-GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180072F3C (-GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?ResultFromWin32Bool@@YAJH@Z @ 0x180073378 (-ResultFromWin32Bool@@YAJH@Z.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1800B4EE4 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

signed int ResultFromKnownLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    result = (unsigned __int16)result | 0x80070000;
  if ( result >= 0 )
    return -2147467259;
  return result;
}
