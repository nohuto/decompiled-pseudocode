/*
 * XREFs of ?EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401720C4
 * Callers:
 *     ?EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140171F30 (-EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     GreDxgkGetDisplayManagerObjectType @ 0x1401F9DD4 (GreDxgkGetDisplayManagerObjectType.c)
 */

char __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::EmitCreate(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  bool v4; // zf
  struct _OBJECT_TYPE *DisplayManagerObjectType; // rax
  __int64 v6; // r9
  char *v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v4 = *((_QWORD *)this + 10) == 0LL;
  v11 = (void *)-1LL;
  if ( !v4 )
  {
    DisplayManagerObjectType = (struct _OBJECT_TYPE *)GreDxgkGetDisplayManagerObjectType();
    OpenDwmHandle(*((PVOID *)this + 10), DisplayManagerObjectType, 0x1F0000u, v6, v9, &v11);
  }
  v10 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v10) )
  {
    v7 = (char *)v10;
    *(_DWORD *)v10 = 60;
    *((_DWORD *)v7 + 1) = 74;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v7 + 5) = *((_DWORD *)this + 16);
    *(_QWORD *)(v7 + 12) = *((_QWORD *)this + 7);
    *((_DWORD *)v7 + 6) = *((_DWORD *)this + 17);
    *(_QWORD *)(v7 + 28) = v11;
    *((_DWORD *)v7 + 9) = *((_DWORD *)this + 22);
    *((_DWORD *)v7 + 10) = *((_DWORD *)this + 23);
    *(_QWORD *)(v7 + 44) = *((_QWORD *)this + 17);
    *((_DWORD *)v7 + 13) = *((_DWORD *)this + 38);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
