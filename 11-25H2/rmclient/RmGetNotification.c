/*
 * XREFs of RmGetNotification @ 0x18000FB10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FC70 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z @ 0x180012D6C (-RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z.c)
 */

__int64 __fastcall RmGetNotification(unsigned __int64 a1, struct RmExternalResourceNotification *a2)
{
  __int64 result; // rax
  ResourceManagerProxy *v5; // rcx
  struct ResourceManagerProxy *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  result = GetResourceManagerProxy(&v6);
  if ( (int)result >= 0 )
  {
    result = ResourceManagerProxy::RmGetNotification(v5, a1, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
