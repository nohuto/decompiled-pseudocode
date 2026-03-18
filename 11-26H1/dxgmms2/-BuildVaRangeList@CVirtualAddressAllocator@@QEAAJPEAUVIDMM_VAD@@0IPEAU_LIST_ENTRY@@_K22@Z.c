/*
 * XREFs of ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x140111F40
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@222K@Z @ 0x1400A955C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400CC4C8 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     CompareVaRangeAddressWithin @ 0x1401122E4 (CompareVaRangeAddressWithin.c)
 */

__int64 __fastcall CVirtualAddressAllocator::BuildVaRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        struct VIDMM_VAD *a3,
        unsigned int a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // r12
  __int64 v11; // r15
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rbx
  int v14; // eax
  _QWORD *v15; // rcx
  _QWORD *v16; // rsi
  _QWORD *v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r14
  PVOID v21; // r11
  __int64 v22; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v24; // rax
  unsigned __int64 v25; // rax
  _QWORD **v26; // rcx
  _QWORD *i; // rcx
  __int64 v29; // [rsp+38h] [rbp-70h]
  _BYTE v30[32]; // [rsp+70h] [rbp-38h] BYREF

  v9 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v30, this + 8);
  v11 = a8 - a6;
  v12 = (_QWORD *)*((_QWORD *)a2 + 3 * v9 + 12);
  v13 = 0LL;
  while ( 1 )
  {
    if ( !v12 )
      goto LABEL_17;
    v14 = CompareVaRangeAddressWithin(&a6, v12);
    if ( !v14 )
      break;
    v15 = v12;
    if ( v14 >= 0 )
      v15 = (_QWORD *)v13;
    v13 = (unsigned __int64)v15;
    if ( v14 >= 0 )
      ++v12;
    v12 = (_QWORD *)*v12;
  }
  v13 = (unsigned __int64)v12;
  v16 = 0LL;
  v17 = (_QWORD *)*v12;
  if ( v17 )
  {
    do
    {
      v18 = CompareVaRangeAddressWithin(&a6, v17);
      if ( v18 >= 0 )
      {
        if ( v18 <= 0 )
          v16 = v17;
        else
          ++v17;
      }
      v17 = (_QWORD *)*v17;
    }
    while ( v17 );
    if ( v16 )
      v13 = (unsigned __int64)v16;
  }
LABEL_17:
  while ( v13 )
  {
    v19 = *(_QWORD *)(v13 + 96);
    if ( a7 <= v19 )
      break;
    v20 = *(_QWORD *)(v13 + 104);
    if ( a6 > v19 )
      v19 = a6;
    if ( a7 < v20 )
      v20 = a7;
    v21 = VIDMM_MAPPED_VA_RANGE::operator new();
    if ( !v21
      || (v29 = v19 + *(_QWORD *)(v13 + 72) - *(_QWORD *)(v13 + 96),
          (v22 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                   (__int64)v21,
                   v29,
                   (__int64)a3,
                   v19 + v11,
                   v20 + v11,
                   v9,
                   *(_QWORD *)(v13 + 56),
                   v29,
                   *(_DWORD *)(v13 + 64) & 0xF,
                   *(_QWORD *)(v13 + 88),
                   *(_QWORD *)(v13 + 80),
                   *(_QWORD *)(v13 + 120),
                   *(_QWORD *)(v13 + 112),
                   0)) == 0) )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
      return 3221225495LL;
    }
    Blink = a5->Blink;
    v24 = (struct _LIST_ENTRY *)(v22 + 8);
    if ( Blink->Flink != a5 )
      __fastfail(3u);
    v24->Flink = a5;
    v24->Blink = Blink;
    Blink->Flink = v24;
    a5->Blink = v24;
    v25 = v13;
    v26 = *(_QWORD ***)(v13 + 8);
    if ( v26 )
    {
      v13 = *(_QWORD *)(v13 + 8);
      for ( i = *v26; i; i = (_QWORD *)*i )
        v13 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v13 || *(_QWORD *)v13 == v25 )
          break;
        v25 = v13;
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
  return 0LL;
}
