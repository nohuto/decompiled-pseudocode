/*
 * XREFs of ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x180084C60
 * Callers:
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180084674 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x180084970 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180084AC8 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall SHCoGetApartmentId(unsigned int *a1)
{
  HRESULT result; // eax
  HRESULT v3; // ebx
  APTTYPE pAptType; // [rsp+30h] [rbp+8h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0;
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  result = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = result;
  if ( result >= 0 )
  {
    switch ( pAptType )
    {
      case APTTYPE_MAINSTA:
      case APTTYPE_STA:
        *a1 = GetCurrentThreadId();
        return v3;
      case APTTYPE_MTA:
        *a1 = 0;
        break;
      case APTTYPE_NA:
        *a1 = -1;
        break;
    }
  }
  return result;
}
