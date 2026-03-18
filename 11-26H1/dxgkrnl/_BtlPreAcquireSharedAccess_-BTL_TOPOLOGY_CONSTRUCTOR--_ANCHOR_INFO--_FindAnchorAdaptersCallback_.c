/*
 * XREFs of _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x140346C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x140087820 (DxgkIsMSBDDFallbackEnabled.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403451A4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_(
        DXGADAPTER *this,
        _DWORD *a2)
{
  unsigned int v3; // ebx
  int AnchorAdaptersCallback; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rcx
  _QWORD *v9; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-C8h] BYREF
  DXGADAPTER *v12; // [rsp+28h] [rbp-C0h]
  char v13; // [rsp+30h] [rbp-B8h]
  _BYTE v14[144]; // [rsp+40h] [rbp-A8h] BYREF

  v12 = this;
  v3 = 0;
  v13 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, this, 0LL);
  AnchorAdaptersCallback = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
  if ( AnchorAdaptersCallback < 0 )
  {
    if ( AnchorAdaptersCallback == -1073741130 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v9[3] = this;
      v9[4] = *((int *)this + 104);
      v9[5] = *((unsigned int *)this + 103);
      v9[6] = a2;
      WdLogGlobalForLineNumber = 60;
      goto LABEL_8;
    }
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 3057) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
  {
    AnchorAdaptersCallback = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(v8, a2);
LABEL_5:
    v3 = AnchorAdaptersCallback;
  }
LABEL_8:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  return v3;
}
