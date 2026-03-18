/*
 * XREFs of ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14019919C
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140199320 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     OpenDwmHandle @ 0x1400579D4 (OpenDwmHandle.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x140100A6C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     GreDxgkGetSharedAllocationObjectType @ 0x140153028 (GreDxgkGetSharedAllocationObjectType.c)
 *     Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline @ 0x14023B6DC (Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline.c)
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
  char *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  unsigned int v12; // r12d
  _QWORD *v13; // r13
  __int64 v14; // r15
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  __int64 v16; // r9
  int v18; // [rsp+20h] [rbp-48h]
  void *v19; // [rsp+70h] [rbp+8h] BYREF
  struct DirectComposition::CBatch **v20; // [rsp+78h] [rbp+10h]

  v20 = a2;
  v2 = (struct DirectComposition::CBatch ***)a2;
  v3 = (_QWORD *)((char *)this + 88);
  v5 = (_QWORD *)((char *)this + 80);
  while ( (*((_DWORD *)this + 4) & 0x100) != 0 || *v5 < *v3 )
  {
    v6 = (void *)(4096LL - *((_QWORD *)(*v2)[17] + 5));
    v19 = v6;
    if ( (unsigned __int64)v6 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(v2, (unsigned __int64 *)&v19) )
        return *v5 == *v3;
      v6 = v19;
    }
    v7 = *v3 - *v5;
    if ( v7 >= ((unsigned __int64)v6 - 16) >> 3 )
      v7 = ((unsigned __int64)v6 - 16) >> 3;
    v19 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(v2, 8 * v7 + 16, &v19);
    v8 = (char *)v19;
    *(_DWORD *)v19 = 8 * v7 + 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 26;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    v8[12] = *v5 != 0LL;
    if ( (unsigned int)Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline()
      && (v10 = *((_QWORD *)this + 16)) != 0 )
    {
      v11 = *(_QWORD *)(v10 + 40);
    }
    else
    {
      v11 = *((_QWORD *)this + 9);
    }
    v12 = 0;
    if ( v7 )
    {
      v13 = v19;
      v14 = 0LL;
      do
      {
        v19 = (void *)-1LL;
        SharedAllocationObjectType = (struct _OBJECT_TYPE *)GreDxgkGetSharedAllocationObjectType(v9);
        OpenDwmHandle(
          *(PVOID *)(v11 + 8 * (v14 + *((_QWORD *)this + 10))),
          SharedAllocationObjectType,
          0xF0001u,
          v16,
          v18,
          &v19);
        ++v12;
        v13[v14 + 2] = v19;
        v14 = v12;
      }
      while ( v12 < v7 );
      v2 = (struct DirectComposition::CBatch ***)v20;
    }
    *((_QWORD *)this + 10) += v7;
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  return *v5 == *v3;
}
