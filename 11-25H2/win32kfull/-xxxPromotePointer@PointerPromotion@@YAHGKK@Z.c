/*
 * XREFs of ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140139508
 * Callers:
 *     EditionPromotePointer @ 0x1401394F0 (EditionPromotePointer.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1401398E8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?HasPendingPromotion@@YAHXZ @ 0x140139330 (-HasPendingPromotion@@YAHXZ.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x14013968C (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x140139BF0 (-PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140139D58 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x14013A028 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402B0494 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

__int64 __fastcall PointerPromotion::xxxPromotePointer(PointerPromotion *this, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v4; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v13; // rbx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  int v17; // r14d
  __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v22[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+40h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v24; // [rsp+88h] [rbp+48h] BYREF

  v24 = 0LL;
  v22[0] = 0LL;
  v4 = (unsigned __int16)this;
  v23 = a3;
  InputTraceLogging::Pointer::PromoteToMouse(a2, (unsigned __int16)this, a3, 0);
  if ( !ValidatePointerPromotion(v4, a2, &v23, &v24, v22) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v7, v6);
  if ( !HasPendingPromotion(v10, v9) )
  {
LABEL_3:
    v13 = v24;
    v14 = v23;
    goto LABEL_4;
  }
  v13 = v24;
  v17 = *((_DWORD *)v24 + 8);
  v18 = W32GetUserSessionState(v12, v11);
  if ( *(_WORD *)(v18 + 16640) != v4 || *(_DWORD *)(v18 + 16644) != v17 )
  {
    ForceCompletePendingPromotion();
    v23 = a3;
    if ( ValidatePointerPromotion(v4, a2, &v23, &v24, v22) )
      goto LABEL_3;
    return 0LL;
  }
  LOBYTE(v19) = v23;
  v20 = *(_DWORD *)(UserSessionState + 16656);
  if ( (v23 & 0x80000) == 0 )
  {
    v12 = v23 & 0xFFFF00;
    v14 = (unsigned int)v12 | ((v20 != 0) + 1) | (*(_DWORD *)(UserSessionState + 16660) != 0 ? 50331648 : 0x1000000);
LABEL_4:
    if ( (_DWORD)v14 == 0x10000000 )
    {
      v21 = W32GetUserSessionState(v12, v14);
      *(_DWORD *)(v21 + 16680) |= 8u;
      return 1LL;
    }
    else
    {
      v15 = PromotePointerInternal(v4, v14, v13, v22[0]);
      xxxProcessMousePromotionQueue();
      return v15;
    }
  }
  if ( v20 )
    v19 = v23 >> 1;
  return v19 & 1;
}
