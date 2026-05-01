/*
 * XREFs of ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180055E60
 * Callers:
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180055C28 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 *     HamRpcSrvCreateAutoRestartActivity @ 0x180098840 (HamRpcSrvCreateAutoRestartActivity.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall HampUtilValidateAndCapturePsmInformation(
        struct _RM_PSM_HOST_INFO *a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  unsigned int v11; // eax
  __int64 v12; // r8
  struct _RM_PSM_HOST_INFO *v13; // rcx
  signed __int64 v14; // rbx
  __int16 v15; // ax
  struct _RM_PSM_HOST_INFO *v16; // rdx
  __int64 result; // rax
  int v18; // eax

  if ( !(unsigned __int8)PsmIsValidKey(a2) )
  {
    v18 = -1073741585;
    return (unsigned int)(v18 + 1);
  }
  if ( a4 < 0xC || !RtlValidSid(a3) || RtlLengthSid(a3) != a4 )
  {
    v18 = -1073741584;
    return (unsigned int)(v18 + 1);
  }
  if ( !a6 || ((a6 - 1) & a6) != 0 || (_BitScanForward(&v11, a6), v11 >= 4) )
  {
    v18 = -1073741581;
    return (unsigned int)(v18 + 1);
  }
  if ( a7 == -1LL )
  {
    v18 = -1073741580;
    return (unsigned int)(v18 + 1);
  }
  memset_0(a1, 0, 0x228uLL);
  v12 = 232LL;
  v13 = a1;
  v14 = a2 - (char *)a1;
  do
  {
    if ( v12 == -2147483414 )
      break;
    v15 = *(_WORD *)((char *)v13 + v14);
    if ( !v15 )
      break;
    *(_WORD *)v13 = v15;
    v13 = (struct _RM_PSM_HOST_INFO *)((char *)v13 + 2);
    --v12;
  }
  while ( v12 );
  v16 = (struct _RM_PSM_HOST_INFO *)((char *)v13 - 2);
  if ( v12 )
    v16 = v13;
  *(_WORD *)v16 = 0;
  RtlCopySid(0x44u, (char *)a1 + 464, a3);
  result = 0LL;
  *((_DWORD *)a1 + 133) = a5;
  *((_DWORD *)a1 + 134) = a6;
  *((_QWORD *)a1 + 68) = a7;
  return result;
}
