/*
 * XREFs of ?InsertDirectFlipAllocationToRequestedPinnedList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1403D2D94
 * Callers:
 *     ?InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1404347BC (-InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

char __fastcall DXGDEVICE::InsertDirectFlipAllocationToRequestedPinnedList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rsi
  char v6; // bl
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned int v9; // r14d
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // rax
  struct _KTHREAD *v14; // r12
  _BYTE v15[32]; // [rsp+50h] [rbp-48h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, this + 46);
  v6 = 0;
  if ( (*((_DWORD *)a3 + 18) & 0x7FE) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9584;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"0 == pAllocation->m_DirectFlipIndex",
      9584LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = v3;
  v8 = *((unsigned int *)this + v3 + 362);
  if ( (_DWORD)v8 != *((_DWORD *)this + v7 + 378) )
    goto LABEL_4;
  v11 = v8;
  if ( !(_DWORD)v8 )
  {
    LODWORD(v8) = 4;
LABEL_16:
    v12 = 8LL * (unsigned int)v8;
    if ( !is_mul_ok((unsigned int)v8, 8uLL) )
      v12 = -1LL;
    v13 = (struct _KTHREAD *)operator new[](v12, 0x4B677844u, 256LL);
    v14 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 9607;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to grow device primary allocation array to %d entries",
        (unsigned int)v8,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_13;
    }
    if ( (_DWORD)v11 )
    {
      memmove(v13, this[v7 + 165], 8 * v11);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[v7 + 165]);
    }
    this[v7 + 165] = v14;
    *((_DWORD *)this + v7 + 362) = v8;
LABEL_4:
    v9 = 0;
    if ( (_DWORD)v8 )
    {
      while ( *((_QWORD *)this[v7 + 165] + v9) )
      {
        if ( ++v9 >= (unsigned int)v8 )
          goto LABEL_7;
      }
      goto LABEL_8;
    }
LABEL_7:
    if ( v9 != (_DWORD)v8 )
    {
LABEL_8:
      if ( *((_QWORD *)this[v7 + 165] + v9) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9644;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_DirectFlipAllocation[VidPnSourceId][PinIndex] == NULL",
          9644LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)this + v7 + 362) < *((_DWORD *)this + v7 + 378) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9645;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_DirectFlipAllocationArraySize[VidPnSourceId] >= m_DirectFlipAllocationCount[VidPnSourceId]",
          9645LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v6 = 1;
      *((_QWORD *)this[v7 + 165] + v9) = a3;
      ++*((_DWORD *)this + v7 + 378);
      *((_DWORD *)a3 + 18) ^= ((unsigned __int16)*((_DWORD *)a3 + 18) ^ (unsigned __int16)(2 * v9)) & 0x7FE;
    }
LABEL_13:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    return v6;
  }
  LODWORD(v8) = 2 * v8;
  if ( (unsigned int)v8 <= 0x300 )
    goto LABEL_16;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 9600;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Reached maximum number of primary allocation, rejecting this request",
    9600LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  return 0;
}
