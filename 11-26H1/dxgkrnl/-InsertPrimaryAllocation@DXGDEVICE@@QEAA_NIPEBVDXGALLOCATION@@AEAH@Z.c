/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x140007830
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1403E4958 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        const void **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v6; // r15
  __int64 v8; // r14
  unsigned int v9; // ecx
  char v10; // bp
  __int64 v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rax
  unsigned int v15; // ebp
  unsigned __int64 v16; // rax
  void *v17; // rax
  const void *v18; // r12
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // r8d
  _BYTE v26[32]; // [rsp+60h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v26,
    (struct DXGPUSHLOCK *const)(this + 42));
  v8 = *((unsigned int *)this + v4 + 246);
  if ( (_DWORD)v8 == (unsigned __int8)*((_DWORD *)this + v4 + 310) )
  {
    v15 = 2 * v8;
    if ( (unsigned int)(2 * v8) >= 0xFF )
    {
      v15 = 255;
    }
    else if ( v15 < 4 )
    {
      v15 = 4;
    }
    if ( v15 == (_DWORD)v8 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 807;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          807,
          v24,
          v25,
          0,
          0,
          -1,
          (__int64)L"Reached maximum number of primary allocation, rejecting this request",
          807LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_22;
    }
    v16 = 8LL * v15;
    if ( !is_mul_ok(v15, 8uLL) )
      v16 = -1LL;
    v17 = (void *)operator new[](v16, 0x4B677844u, 256LL);
    v18 = v17;
    if ( !v17 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 814;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v22,
          v21,
          v23,
          0,
          1,
          -1,
          (__int64)L"Failed to grow device primary allocation array to %d entries",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_22;
    }
    if ( (_DWORD)v8 )
    {
      memmove(v17, this[(unsigned int)v4 + 107], 8 * v8);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)this[(unsigned int)v4 + 107]);
    }
    v6 = a4;
    this[(unsigned int)v4 + 107] = v18;
    *((_DWORD *)this + (unsigned int)v4 + 246) = v15;
  }
  v9 = 0;
  v10 = 1;
  while ( v9 < *((_DWORD *)this + (unsigned int)v4 + 246) )
  {
    v11 = v9;
    if ( !*((_QWORD *)this[(unsigned int)v4 + 107] + v9) )
    {
      v12 = WdLogNewEntry5_WdTrace();
      *(_QWORD *)(v12 + 24) = a3;
      *(_QWORD *)(v12 + 32) = (unsigned int)v4;
      v13 = this[(unsigned int)v4 + 107];
      WdLogGlobalForLineNumber = 845;
      v13[v11] = a3;
      ++*((_BYTE *)this + 4 * (unsigned int)v4 + 1240);
      *v6 = (*((_DWORD *)this + (unsigned int)v4 + 310) >> 8) & 1;
      goto LABEL_7;
    }
    ++v9;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 859;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      859,
      v19,
      v20,
      0,
      2,
      -1,
      (__int64)L"Can't find room in device primary allocation array",
      859LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_22:
  v10 = 0;
LABEL_7:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  return v10;
}
