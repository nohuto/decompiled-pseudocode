/*
 * XREFs of ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403A8330
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1403A76E4 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1401BA2BC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGPRESENT::DestroyStagingBuffer(DXGPRESENT *this, struct DXGDEVICE *a2)
{
  struct DXGPROCESS *Current; // rbx
  unsigned int v5; // r9d
  unsigned int v6; // eax
  int v7; // r8d
  __int64 v8; // rcx
  struct DXGALLOCATION **v9; // rbx
  __int64 v10; // [rsp+28h] [rbp-50h]
  _BYTE v11[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10135;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pDevice", 10135LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this);
    if ( !Current )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10145;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 10145LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v11, Current);
    v5 = *((_DWORD *)this + 105);
    v6 = (v5 >> 6) & 0xFFFFFF;
    if ( v6 < *((_DWORD *)Current + 74) )
    {
      v7 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v6 + 8);
      if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v6 + 8) & 0x60)
        && (v7 & 0x2000) == 0
        && (v7 & 0x1F) != 0 )
      {
        v8 = *((_QWORD *)Current + 35);
        if ( (*(_BYTE *)(v8 + 16LL * v6 + 8) & 0x1F) == 4 )
        {
          v9 = *(struct DXGALLOCATION ***)(v8 + 16LL * v6);
          if ( v9 )
            *(_DWORD *)(16 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF) + v8 + 8) |= 0x2000u;
          goto LABEL_13;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v9 = 0LL;
LABEL_13:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
    if ( v9 )
    {
      if ( *((_DWORD *)a2 + 152) == 4 )
        DXGDEVICE::DestroyClientResource(a2, v9);
      else
        DXGDEVICE::DestroyAllocationInternal(a2, 0, 0LL, (struct DXGRESOURCE *)v9, 0LL, DXGDEVICE::DestroyFlagsDefault);
    }
    else
    {
      WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 105));
      v10 = *((unsigned int *)this + 105);
      WdLogGlobalForLineNumber = 10161;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Invalid staging buffer resource handle (0x%I64x) specified",
        (__int64)a2,
        v10,
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)this + 52) = 0LL;
  }
}
