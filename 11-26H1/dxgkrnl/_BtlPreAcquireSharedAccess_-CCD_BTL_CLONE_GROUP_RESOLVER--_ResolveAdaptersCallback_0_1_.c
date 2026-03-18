/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x140345A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x140087820 (DxgkIsMSBDDFallbackEnabled.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x140346D98 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_CLONE_GROUP_RESOLVER *this)
{
  unsigned int v3; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  VIDPN_MGR *v9; // rbx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v11; // esi
  _QWORD *v13; // rax
  struct DMMVIDPN *v14; // rbx
  int v15; // r13d
  unsigned int j; // r12d
  int v17; // eax
  ReferenceCounted *v18; // rcx
  int v19; // ebx
  unsigned int i; // r12d
  int v21; // eax
  struct DMMVIDPN *v22; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v23; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-99h] BYREF
  struct DXGADAPTER *v25; // [rsp+48h] [rbp-91h]
  char v26; // [rsp+50h] [rbp-89h]
  _BYTE v27[144]; // [rsp+60h] [rbp-79h] BYREF

  v25 = a1;
  v3 = 0;
  v26 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v13[3] = a1;
      v13[4] = *((int *)a1 + 104);
      v13[5] = *((unsigned int *)a1 + 103);
      v13[6] = this;
      WdLogGlobalForLineNumber = 60;
    }
    else
    {
      v3 = v5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
    return v3;
  }
  if ( *((_BYTE *)a1 + 3057) || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled() )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 395);
  if ( !v8 )
  {
    v11 = 0;
    goto LABEL_10;
  }
  if ( !*((_BYTE *)this + 16) && !*(_BYTE *)(v8 + 290) )
  {
LABEL_28:
    v19 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(*(_QWORD *)this + 32LL) )
      {
        v11 = v19 == 0 ? 0x8000001A : 0;
        goto LABEL_10;
      }
      if ( (*(_QWORD *)(296LL * i + *((_QWORD *)this + 1) + 56) & 0x200000000000LL) == 0 )
      {
        v21 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, i, 0LL);
        v11 = v21;
        if ( v21 == -1073741275 )
        {
          ++v19;
        }
        else if ( v21 < 0 )
        {
          WdLogSingleEntry5(2LL, v21, a1, *((_QWORD *)this + 1), *(_QWORD *)this, i);
          WdLogGlobalForLineNumber = 331;
          goto LABEL_10;
        }
      }
    }
  }
  v9 = *(VIDPN_MGR **)(v8 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, (__int64)v9);
  v22 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, (__int64 *)&v22);
  v11 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      ClientVidPnFromLastClientCommitedVidPn,
      v9,
      *((_QWORD *)this + 1),
      *((int *)a1 + 104),
      *((unsigned int *)a1 + 103));
    WdLogGlobalForLineNumber = 269;
    if ( v22 )
    {
      v18 = (struct DMMVIDPN *)((char *)v22 + 24);
LABEL_40:
      ReferenceCounted::Release(v18);
    }
    goto LABEL_9;
  }
  v14 = v22;
  v15 = 0;
  for ( j = 0; j < *(unsigned __int16 *)(*(_QWORD *)this + 32LL); ++j )
  {
    v22 = (struct DMMVIDPN *)j;
    if ( !_bittest64((const signed __int64 *)(296LL * j + *((_QWORD *)this + 1) + 56), 0x2Du) )
    {
      v17 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, j, v14);
      v11 = v17;
      if ( v17 == -1073741275 )
      {
        ++v15;
      }
      else if ( v17 < 0 )
      {
        WdLogSingleEntry5(2LL, v17, a1, *((_QWORD *)this + 1), *(_QWORD *)this, v22);
        WdLogGlobalForLineNumber = 295;
        if ( v14 )
        {
          v18 = (struct DMMVIDPN *)((char *)v14 + 24);
          goto LABEL_40;
        }
LABEL_9:
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
        goto LABEL_10;
      }
    }
  }
  if ( v15 )
  {
    if ( v14 )
      ReferenceCounted::Release((struct DMMVIDPN *)((char *)v14 + 24));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
    goto LABEL_28;
  }
  if ( v14 )
    ReferenceCounted::Release((struct DMMVIDPN *)((char *)v14 + 24));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
  v11 = -2147483622;
LABEL_10:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
  return v11;
}
