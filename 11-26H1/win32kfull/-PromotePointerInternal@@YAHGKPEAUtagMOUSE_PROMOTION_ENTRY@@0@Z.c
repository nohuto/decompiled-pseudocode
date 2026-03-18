/*
 * XREFs of ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x140135DBC
 * Callers:
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140134C48 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402CBEA4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401364A0 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1401368A4 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x140136D34 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x14028FAE0 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1402CBFAC (-ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z.c)
 */

__int64 __fastcall PromotePointerInternal(
        __int64 a1,
        __int64 a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  unsigned int v6; // r13d
  unsigned __int16 v7; // bx
  __int64 v8; // rdi
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  BOOL v14; // r12d
  int v15; // r15d
  int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // r13d
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // ecx
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UserSessionState; // rax
  int v29; // [rsp+30h] [rbp-58h]
  BOOL v30; // [rsp+34h] [rbp-54h]
  int v31; // [rsp+38h] [rbp-50h]
  int v32; // [rsp+3Ch] [rbp-4Ch]
  int v33; // [rsp+40h] [rbp-48h]
  __int16 v34; // [rsp+90h] [rbp+8h]
  unsigned int v35; // [rsp+98h] [rbp+10h]
  unsigned int v36; // [rsp+A0h] [rbp+18h] BYREF

  v35 = a2;
  v34 = a1;
  v36 = 0;
  v6 = a2;
  v7 = a1;
  v8 = W32GetUserSessionState(a1, a2) + 16408;
  CacheById = FindCacheById(v7, &v36);
  v13 = *(unsigned int *)(W32GetUserSessionState(v11, v10) + 16672);
  if ( (v13 & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_CACHE *)(W32GetUserSessionState(v13, v12) + 16416)
    && (!a4 || a4 == *((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 2)) )
  {
    UserSessionState = W32GetUserSessionState(v27, v26);
    *(_DWORD *)(UserSessionState + 16672) &= ~8u;
  }
  v31 = v6 & 2;
  v14 = v31 != 0;
  v29 = v6 & 0x80000;
  v32 = v6 & 0x20000;
  v30 = (v6 & 0x20000) != 0;
  v15 = (v6 >> 25) & 1;
  v16 = (v6 & 0x40000) != 0;
  if ( (v6 & 0x40000) != 0 )
    v16 = ValidateDoubleClick((const struct tagTAP_INFO *)(v8 + 192), v36, *((_DWORD *)a3 + 4), (v6 & 2) != 0);
  if ( v16 )
    *((_QWORD *)a3 + 1) = *(_QWORD *)(v8 + 204);
  v17 = *((_QWORD *)a3 + 1);
  v33 = *((_DWORD *)a3 + 4);
  v18 = v36 + 1;
  if ( (unsigned int)v18 < 5 )
  {
    v19 = v36 + 1;
    do
    {
      EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v8 + 8 * (v18 + 2 * (v18 + 1))));
      v18 = v19 + 1;
      v19 = v18;
    }
    while ( (unsigned int)v18 < 5 );
    v6 = v35;
  }
  if ( v29 )
  {
    ProcessDownOnly(CacheById, a3, v14, v15);
  }
  else
  {
    ProcessRangeInCache(CacheById, a3, a4, v30, v14, v15);
    if ( !a4 )
    {
      v23 = W32GetUserSessionState(v20, v22);
      v24 = *(_DWORD *)(v23 + 16672);
      v25 = v24 | 4;
      v20 = v24 & 0xFFFFFFFB;
      if ( !v31 )
        v25 = v20;
      *(_DWORD *)(v23 + 16672) = (16 * v15) | v25 & 0xFFFFFFEF | 2;
    }
  }
  if ( v32 )
  {
    *(_QWORD *)(v8 + 192) = PtiCurrent(v20);
    *(_WORD *)(v8 + 200) = v34;
    *(_DWORD *)(v8 + 212) = v33;
    *(_QWORD *)(v8 + 204) = v17;
    *(_DWORD *)(v8 + 216) = v14;
  }
  else if ( v6 )
  {
    *(_OWORD *)(v8 + 192) = 0LL;
    *(_OWORD *)(v8 + 208) = 0LL;
  }
  return 1LL;
}
