/*
 * XREFs of ?DmmGetNumPathsFromClientVidPn@@YAIPEAVDXGADAPTER@@E@Z @ 0x1403D42AC
 * Callers:
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403D4240 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DmmGetNumPathsFromClientVidPn(struct DXGADAPTER *a1, char a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  VIDPN_MGR *v5; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_QWORD *)a1 + 395);
  v3 = 0;
  if ( !v2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15860;
    return 0LL;
  }
  v5 = *(VIDPN_MGR **)(v2 + 104);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15868;
    return 0LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, (__int64)v5);
  v13 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v5);
  auto_rc<DMMVIDPN const>::reset(&v13, (__int64)ClientCommittedVidPnRef);
  if ( v13 )
  {
    if ( a2 )
    {
      v7 = 0LL;
      v8 = *(_QWORD *)(v13 + 120);
      v9 = 0;
      if ( v8 != v13 + 120 )
        v7 = v8 - 8;
      while ( v7 )
      {
        v10 = *(_QWORD *)(v7 + 8);
        v11 = v9 + 1;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 96) + 96LL) + 92LL) )
          v11 = v9;
        v9 = v11;
        v7 = v10 - 8;
        if ( v10 == v13 + 120 )
          v7 = 0LL;
      }
      v3 = v9;
    }
    else
    {
      v3 = *(_DWORD *)(v13 + 136);
    }
  }
  auto_rc<DMMVIDPN const>::reset(&v13, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
  return v3;
}
