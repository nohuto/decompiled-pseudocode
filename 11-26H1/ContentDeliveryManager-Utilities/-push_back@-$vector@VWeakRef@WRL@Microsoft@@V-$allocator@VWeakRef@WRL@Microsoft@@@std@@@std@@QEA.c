/*
 * XREFs of ?push_back@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVWeakRef@WRL@Microsoft@@@Z @ 0x18006592C
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180063840 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180065330 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

char __fastcall std::vector<Microsoft::WRL::WeakRef>::push_back(_QWORD *a1, __int64 *a2)
{
  __int64 **v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rdi
  __int64 *v10; // r8
  __int64 *v11; // rdx
  __int64 *v12; // rdx

  v3 = (__int64 **)(a1 + 1);
  v4 = a1[1];
  LOBYTE(v6) = (unsigned __int64)a2 < v4 && *a1 <= (unsigned __int64)a2;
  if ( (_BYTE)v6 )
  {
    v7 = (__int64)a2 - *a1;
    v8 = a1 + 1;
    v9 = v7 >> 3;
    if ( v4 == a1[2] )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
      v8 = a1 + 1;
    }
    v6 = *a1;
    v10 = *v3;
    v11 = (__int64 *)(*a1 + 8 * v9);
    *v10 = 0LL;
    if ( v10 != v11 )
    {
      v6 = *v11;
      *v10 = *v11;
      *v11 = 0LL;
    }
  }
  else
  {
    v8 = a1 + 1;
    if ( v4 == a1[2] )
    {
      LOBYTE(v6) = std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
      v8 = a1 + 1;
    }
    v12 = *v3;
    *v12 = 0LL;
    if ( v12 != a2 )
    {
      v6 = *a2;
      *v12 = *a2;
      *a2 = 0LL;
    }
  }
  *v8 += 8LL;
  return v6;
}
