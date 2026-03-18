/*
 * XREFs of ?CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401CA0E0
 * Callers:
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1401C9160 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?DdiGetDisplayStateNonIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE@@@Z @ 0x1401AFB48 (-DdiGetDisplayStateNonIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE@.c)
 */

__int64 __fastcall DRIVERWHITEBOXINFO::CollectNonIntrusiveDriverData(DRIVERWHITEBOXINFO *this, ADAPTER_DISPLAY **a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r8
  unsigned int v7; // edi
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  char *v10; // rax
  int DisplayStateNonIntrusive; // esi
  __int64 v12; // rcx
  __int64 v13; // r8
  DRIVERWHITEBOXINFO *v14; // rdx
  ADAPTER_DISPLAY *v15; // rcx
  _DWORD v17[2]; // [rsp+50h] [rbp-38h] BYREF
  char *v18; // [rsp+58h] [rbp-30h]
  void *v19; // [rsp+98h] [rbp+10h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+18h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1539;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != nullptr", 1539LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1540;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1540LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)a2[395] + 13);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, v4);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 120) + 72LL));
  v5 = *(_QWORD **)(v4 + 120);
  NextTarget = 0LL;
  v7 = 0;
  v8 = (_QWORD *)v5[3];
  if ( v8 != v5 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v8 - 1);
  for ( ; NextTarget; NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v5, NextTarget) )
  {
    if ( v7 >= 8 )
      break;
    if ( *((_QWORD *)NextTarget + 14) )
    {
      v9 = 28LL * v7++;
      *(_DWORD *)((char *)this + v9) = *((_DWORD *)NextTarget + 6);
    }
  }
  v10 = (char *)operator new[](8 * v7, 0x4B677844u, 256LL);
  v19 = v10;
  if ( v10 )
  {
    if ( v7 )
    {
      v12 = 0LL;
      v13 = v7;
      v14 = this;
      do
      {
        *(_QWORD *)&v10[v12] = v14;
        v14 = (DRIVERWHITEBOXINFO *)((char *)v14 + 28);
        v12 += 8LL;
        --v13;
      }
      while ( v13 );
    }
    v15 = a2[395];
    v17[0] = v7;
    v17[1] = 28;
    v18 = v10;
    DisplayStateNonIntrusive = ADAPTER_DISPLAY::DdiGetDisplayStateNonIntrusive(
                                 v15,
                                 (struct _DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE *)v17);
    if ( DisplayStateNonIntrusive >= 0 )
      *((_DWORD *)this + 56) = v7;
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v19);
    if ( v5 )
      ReferenceCounted::Release((ReferenceCounted *)(v5 + 8));
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1576;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating black screen non-intursive data (size 0x%I64x)",
      8 * v7,
      0LL,
      0LL,
      0LL,
      0LL);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v19);
    if ( v5 )
      ReferenceCounted::Release((ReferenceCounted *)(v5 + 8));
    DisplayStateNonIntrusive = -1073741801;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
  return (unsigned int)DisplayStateNonIntrusive;
}
