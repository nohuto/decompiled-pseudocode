/*
 * XREFs of HamRpcSrvCreateAutoRestartActivity @ 0x180098840
 * Callers:
 *     <none>
 * Callees:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180014468 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180055E60 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvCreateAutoRestartActivity(
        __int64 a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        union _HAM_RESTART_PROPERTIES *a9)
{
  __int64 result; // rax
  _BYTE v13[560]; // [rsp+40h] [rbp-258h] BYREF

  memset_0(v13, 0, 0x228uLL);
  result = HampUtilValidateAndCapturePsmInformation((struct _RM_PSM_HOST_INFO *)v13, a2, a3, a4, a5, a6, a7);
  if ( (int)result >= 0 )
  {
    result = ArSrvCheckCreateActivityForHost(0LL, (struct _RM_PSM_HOST_INFO *)v13, 0LL, a8, a9);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
