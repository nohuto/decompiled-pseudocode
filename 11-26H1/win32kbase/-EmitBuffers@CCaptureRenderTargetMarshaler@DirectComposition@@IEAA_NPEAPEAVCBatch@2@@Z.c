/*
 * XREFs of ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140182C40
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401B30F0 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1400B0798 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     GreDxgkGetSharedAllocationObjectType @ 0x140182DCC (GreDxgkGetSharedAllocationObjectType.c)
 *     Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline @ 0x1401B8EF0 (Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitBuffers(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  struct DirectComposition::CBatch ***v2; // r13
  _QWORD *v3; // rsi
  _QWORD *v5; // rbp
  void *v6; // rax
  unsigned __int64 v7; // r14
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned int v11; // r12d
  _QWORD *v12; // r13
  __int64 v13; // r15
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  __int64 v15; // r9
  int v17; // [rsp+20h] [rbp-48h]
  void *v18; // [rsp+70h] [rbp+8h] BYREF
  struct DirectComposition::CBatch **v19; // [rsp+78h] [rbp+10h]

  v19 = a2;
  v2 = (struct DirectComposition::CBatch ***)a2;
  v3 = (_QWORD *)((char *)this + 88);
  v5 = (_QWORD *)((char *)this + 80);
  while ( (*((_DWORD *)this + 4) & 0x200) != 0 || *v5 < *v3 )
  {
    v6 = (void *)(4096LL - *((_QWORD *)(*v2)[17] + 5));
    v18 = v6;
    if ( (unsigned __int64)v6 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(v2, (unsigned __int64 *)&v18) )
        return *v5 == *v3;
      v6 = v18;
    }
    v7 = *v3 - *v5;
    v18 = 0LL;
    if ( v7 >= ((unsigned __int64)v6 - 16) >> 3 )
      v7 = ((unsigned __int64)v6 - 16) >> 3;
    DirectComposition::CBatch::EnsureBatchBuffer(v2, 8 * v7 + 16, &v18);
    v8 = v18;
    *(_DWORD *)v18 = 8 * v7 + 16;
    v8[1] = 0LL;
    *((_DWORD *)v8 + 1) = 23;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    *((_BYTE *)v8 + 12) = *v5 != 0LL;
    if ( (unsigned int)Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline()
      && (v9 = *((_QWORD *)this + 16)) != 0 )
    {
      v10 = *(_QWORD *)(v9 + 40);
    }
    else
    {
      v10 = *((_QWORD *)this + 9);
    }
    v11 = 0;
    if ( v7 )
    {
      v12 = v18;
      v13 = 0LL;
      do
      {
        v18 = (void *)-1LL;
        SharedAllocationObjectType = (struct _OBJECT_TYPE *)GreDxgkGetSharedAllocationObjectType();
        OpenDwmHandle(
          *(PVOID *)(v10 + 8 * (v13 + *((_QWORD *)this + 10))),
          SharedAllocationObjectType,
          0xF0001u,
          v15,
          v17,
          &v18);
        ++v11;
        v12[v13 + 2] = v18;
        v13 = v11;
      }
      while ( v11 < v7 );
      v2 = (struct DirectComposition::CBatch ***)v19;
    }
    *((_QWORD *)this + 10) += v7;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  return *v5 == *v3;
}
