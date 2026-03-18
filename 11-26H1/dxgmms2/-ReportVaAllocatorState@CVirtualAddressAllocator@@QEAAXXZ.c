/*
 * XREFs of ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400D9844
 * Callers:
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400D97B4 (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x140031B5C (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003E87C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1400D7DF4 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::ReportVaAllocatorState(CVirtualAddressAllocator *this)
{
  _QWORD *k; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax
  unsigned __int64 v5; // rbx
  unsigned int i; // ebp
  unsigned __int64 v7; // rdi
  _QWORD *j; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  _QWORD *m; // rax
  unsigned __int64 v12; // rax
  VIDMM_PAGE_DIRECTORY **v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+50h] [rbp-48h]
  _BYTE v17[32]; // [rsp+70h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v17, (struct _KTHREAD **)this + 8);
  if ( byte_14008A202 < 0 )
  {
    v14 = *((_QWORD *)this + 13);
    if ( v14 )
    {
      k = *(_QWORD **)(*(_QWORD *)(v14 + 72) + 64LL);
      v14 = k[10];
    }
    McTemplateK0ppp_EtwWriteTransfer(
      (__int64)k,
      &ReportGpuVirtualAddressAllocator,
      v3,
      this,
      v14,
      *(_QWORD *)(*((_QWORD *)this + 12) + 24LL));
  }
  v4 = (_QWORD *)*((_QWORD *)this + 7);
  v5 = 0LL;
  while ( v4 )
  {
    v5 = (unsigned __int64)v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v5 )
  {
    if ( byte_14008A202 < 0 )
    {
      LODWORD(v15) = *(_DWORD *)(v5 + 72);
      McTemplateK0pqxx_EtwWriteTransfer(
        (__int64)k,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v15,
        *(_QWORD *)(v5 + 24),
        *(_QWORD *)(v5 + 32));
    }
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 12) + 6952LL); ++i )
    {
      v7 = 0LL;
      for ( j = *(_QWORD **)(v5 + 24 * (i + 4LL)); j; j = (_QWORD *)*j )
        v7 = (unsigned __int64)j;
      while ( v7 )
      {
        if ( byte_14008A202 < 0 )
        {
          LODWORD(v16) = *(_DWORD *)(v7 + 64);
          McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
            (__int64)j,
            &ReportGpuVirtualAddressRangeMapping,
            v3,
            this,
            *(_QWORD *)(v7 + 56),
            *(_QWORD *)(v7 + 72),
            *(_QWORD *)(v7 + 96),
            *(_QWORD *)(v7 + 104),
            *(_QWORD *)(v7 + 88),
            *(_QWORD *)(v7 + 80),
            v16,
            *(_QWORD *)(v7 + 112),
            *(_QWORD *)(v7 + 120));
        }
        j = *(_QWORD **)(v7 + 8);
        v10 = v7;
        if ( j )
        {
          v7 = *(_QWORD *)(v7 + 8);
          for ( j = (_QWORD *)*j; j; j = (_QWORD *)*j )
            v7 = (unsigned __int64)j;
        }
        else
        {
          while ( 1 )
          {
            v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v7 || *(_QWORD *)v7 == v10 )
              break;
            v10 = v7;
          }
        }
      }
    }
    k = *(_QWORD **)(v5 + 8);
    v9 = v5;
    if ( k )
    {
      v5 = *(_QWORD *)(v5 + 8);
      for ( k = (_QWORD *)*k; k; k = (_QWORD *)*k )
        v5 = (unsigned __int64)k;
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == v9 )
          break;
        v9 = v5;
      }
    }
  }
  for ( m = (_QWORD *)*((_QWORD *)this + 6); m; m = (_QWORD *)*m )
    v5 = (unsigned __int64)m;
  while ( v5 )
  {
    if ( byte_14008A202 < 0 )
    {
      LODWORD(v15) = *(_DWORD *)(v5 + 72);
      McTemplateK0pqxx_EtwWriteTransfer(
        (__int64)k,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v15,
        *(_QWORD *)(v5 + 24),
        *(_QWORD *)(v5 + 32));
    }
    k = *(_QWORD **)(v5 + 8);
    v12 = v5;
    if ( k )
    {
      v5 = *(_QWORD *)(v5 + 8);
      for ( k = (_QWORD *)*k; k; k = (_QWORD *)*k )
        v5 = (unsigned __int64)k;
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == v12 )
          break;
        v12 = v5;
      }
    }
  }
  v13 = (VIDMM_PAGE_DIRECTORY **)*((_QWORD *)this + 16);
  if ( v13 && *v13 )
    VIDMM_PAGE_DIRECTORY::ReportState(*v13, this);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
}
