/*
 * XREFs of ?SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x140245A70
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline @ 0x1401B8EF0 (Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1401BFF14 (-ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x14022A33C (-ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetHandleProperty(
        __int64 a1,
        int a2,
        void *a3,
        _BYTE *a4)
{
  int v4; // edi
  _BYTE *v5; // r14
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DirectComposition::BufferCollectionObject *v12; // rbx
  __int64 v13; // rax
  struct DirectComposition::BufferCollectionObject *v14; // rcx
  struct DirectComposition::BufferCollectionObject *v15; // rax
  struct DirectComposition::BufferCollectionObject *v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a4;
  *a4 = 0;
  v8 = a2 - 1;
  if ( v8 )
  {
    if ( v8 == 8 && (unsigned int)Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline() )
    {
      v12 = 0LL;
      v17 = 0LL;
      if ( a3 )
      {
        v4 = DirectComposition::BufferCollectionObject::ResolveHandle(a3, 1u, 1, &v17);
        if ( v4 < 0 )
          return (unsigned int)v4;
        v12 = v17;
      }
      if ( v12 != *(struct DirectComposition::BufferCollectionObject **)(a1 + 128) || *(_QWORD *)(a1 + 72) )
      {
        DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(
          (DirectComposition::CCaptureRenderTargetMarshaler *)a1,
          v9,
          v10,
          v11);
        if ( v12 )
        {
          *(_QWORD *)(a1 + 128) = v12;
          *(_QWORD *)(a1 + 88) = *((_QWORD *)v12 + 6);
          v13 = *((_QWORD *)v12 + 7);
          *(_DWORD *)(a1 + 16) |= 0x100u;
          v12 = 0LL;
          *(_QWORD *)(a1 + 60) = v13;
        }
        *v5 = 1;
      }
      if ( v12 )
        ObfDereferenceObject(v12);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v14 = 0LL;
    v17 = 0LL;
    if ( a3 )
    {
      LOBYTE(a4) = 1;
      v4 = DxgkReferenceCompositionObject(a3, 0LL, 4LL, a4, &v17);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v14 = v17;
    }
    v15 = *(struct DirectComposition::BufferCollectionObject **)(a1 + 96);
    if ( v14 == v15 )
    {
      if ( v14 )
        DxgkReleaseCompositionObjectReference(v14);
    }
    else
    {
      if ( v15 )
      {
        DxgkReleaseCompositionObjectReference(*(void **)(a1 + 96));
        v14 = v17;
      }
      *(_DWORD *)(a1 + 16) |= 0x80u;
      *(_QWORD *)(a1 + 96) = v14;
      *v5 = 1;
    }
  }
  return (unsigned int)v4;
}
