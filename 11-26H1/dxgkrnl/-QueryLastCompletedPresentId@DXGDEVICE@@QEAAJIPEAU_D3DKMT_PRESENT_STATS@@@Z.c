/*
 * XREFs of ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x14018F2F4
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x14036A470 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?QueryPresentStats@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x140283844 (-QueryPresentStats@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::QueryLastCompletedPresentId(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS *a3)
{
  __int64 v3; // rax
  struct DXGADAPTER *v5; // rdi
  __int64 v6; // rsi
  int v8; // ebx
  __int64 v9; // rdx
  int PresentStats; // eax
  _BYTE v11[144]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = (struct DXGADAPTER *)*((_QWORD *)this + 237);
  v6 = a2;
  if ( v5 == *(struct DXGADAPTER **)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 736) + 8LL) + 504LL))(
             *((_QWORD *)this + 100),
             a2);
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, v5, 0LL);
  v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL);
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)v5 + 395) + 464LL);
    if ( v9 )
      PresentStats = BLTQUEUE::QueryPresentStats((BLTQUEUE *)(*(_QWORD *)(v9 + 8) + 3040 * v6), a3);
    else
      PresentStats = -1073741811;
    v8 = PresentStats;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
  return (unsigned int)v8;
}
