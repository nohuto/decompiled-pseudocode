/*
 * XREFs of ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140145D40
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140145BF0 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1400B0798 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?NeedsSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEBA_NXZ @ 0x140145ECC (-NeedsSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEBA_NXZ.c)
 *     ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x140145F08 (-GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  DirectComposition::CGenericInkMarshaler *v4; // rcx
  unsigned int SegmentCount; // r14d
  unsigned __int64 v6; // rcx
  void *v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  char *v11; // r9
  int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  void *v17; // [rsp+50h] [rbp+18h] BYREF

  if ( !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this) )
    return 1;
  SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(v4);
  while ( 1 )
  {
    v6 = *((_QWORD *)this + 17) + 28LL;
    v7 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v17 = v7;
    if ( (unsigned __int64)v7 < v6 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v17) )
        return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
      v7 = v17;
    }
    v17 = 0LL;
    v8 = ((unsigned __int64)v7 - 28) / *((_QWORD *)this + 17);
    v9 = SegmentCount - *((_DWORD *)this + 37);
    if ( v9 >= (unsigned int)v8 )
      v9 = v8;
    v10 = *((_DWORD *)this + 34) * v9 + 28;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, v10, &v17) )
      break;
    v11 = (char *)v17;
    *(_DWORD *)v17 = v10;
    v12 = *((_DWORD *)this + 37);
    *(_OWORD *)(v11 + 4) = 0LL;
    *(_QWORD *)(v11 + 20) = 0LL;
    v13 = v9 + v12;
    *((_DWORD *)v11 + 1) = 92;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v11 + 3) = *((_DWORD *)this + 37);
    *((_DWORD *)v11 + 4) = v9;
    *((_DWORD *)v11 + 6) = *((_DWORD *)this + 39);
    v14 = *((_DWORD *)this + 36);
    v15 = v14;
    if ( v14 <= v13 )
      v15 = v13;
    *((_DWORD *)v11 + 5) = v15 - v14;
    memmove(
      v11 + 28,
      (const void *)(*((_QWORD *)this + 12)
                   + *((_QWORD *)this + 17) * *((_QWORD *)this + 16) * *((unsigned int *)this + 37)),
      *((_QWORD *)this + 17) * *((_QWORD *)this + 16) * v9);
    *((_BYTE *)this + 152) = 0;
    *((_DWORD *)this + 37) = v13;
    if ( v13 == SegmentCount )
    {
      *((_DWORD *)this + 4) |= 0x80u;
      return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
    }
  }
  return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
}
