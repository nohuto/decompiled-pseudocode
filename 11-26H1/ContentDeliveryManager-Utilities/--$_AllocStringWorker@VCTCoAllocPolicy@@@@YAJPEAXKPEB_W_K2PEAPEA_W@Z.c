/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEB_W_K2PEAPEA_W@Z @ 0x1800A32F8
 * Callers:
 *     ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x1800A3A60 (-GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x18003CA20 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004EA74 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800597C4 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        unsigned __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4,
        __int64 a5,
        void **a6)
{
  void **v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v10; // rdx
  void *v11; // rcx
  int v12; // ebx
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = a1;
  v6 = a6;
  v7 = a4 + 1;
  *a6 = 0LL;
  if ( a4 + 1 < a4 )
  {
    return (unsigned int)-2147024362;
  }
  else
  {
    v14 = 0LL;
    v12 = ULongLongMult(a4 + 1, 2uLL, &v14);
    if ( v12 >= 0 )
      v12 = CTCoAllocPolicy::Alloc(v11, v10, v14, v6);
    if ( v12 >= 0 )
      StringCchCopyNExW((char *)*v6, v7, a3, a4);
  }
  return (unsigned int)v12;
}
