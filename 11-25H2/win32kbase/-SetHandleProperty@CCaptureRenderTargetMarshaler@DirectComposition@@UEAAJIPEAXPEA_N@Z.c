/*
 * XREFs of ?SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1401995F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x140152AD8 (-ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x14022808C (-ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline @ 0x14023B6DC (Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetHandleProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  int v4; // esi
  bool *v5; // r14
  int v8; // edx
  struct DirectComposition::BufferCollectionObject *v9; // rbx
  __int64 v10; // rax
  struct DirectComposition::BufferCollectionObject *v11; // rcx
  struct DirectComposition::BufferCollectionObject *v12; // rax
  struct DirectComposition::BufferCollectionObject *v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a4;
  *a4 = 0;
  v8 = a2 - 1;
  if ( v8 )
  {
    if ( v8 == 8 && (unsigned int)Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline() )
    {
      v9 = 0LL;
      v14 = 0LL;
      if ( a3 )
      {
        v4 = DirectComposition::BufferCollectionObject::ResolveHandle(a3, 1u, 1, &v14);
        if ( v4 < 0 )
          return (unsigned int)v4;
        v9 = v14;
      }
      if ( v9 != *((struct DirectComposition::BufferCollectionObject **)this + 16) || *((_QWORD *)this + 9) )
      {
        DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(this);
        if ( v9 )
        {
          *((_QWORD *)this + 16) = v9;
          *((_QWORD *)this + 11) = *((_QWORD *)v9 + 6);
          v10 = *((_QWORD *)v9 + 7);
          *((_DWORD *)this + 4) |= 0x80u;
          v9 = 0LL;
          *(_QWORD *)((char *)this + 60) = v10;
        }
        *v5 = 1;
      }
      if ( v9 )
        ObfDereferenceObject(v9);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v11 = 0LL;
    v14 = 0LL;
    if ( a3 )
    {
      LOBYTE(a4) = 1;
      v4 = DxgkReferenceCompositionObject(a3, 0LL, 4LL, a4, &v14);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v11 = v14;
    }
    v12 = (struct DirectComposition::BufferCollectionObject *)*((_QWORD *)this + 12);
    if ( v11 == v12 )
    {
      if ( v11 )
        DxgkReleaseCompositionObjectReference(v11);
    }
    else
    {
      if ( v12 )
      {
        DxgkReleaseCompositionObjectReference(*((void **)this + 12));
        v11 = v14;
      }
      *((_DWORD *)this + 4) |= 0x40u;
      *((_QWORD *)this + 12) = v11;
      *v5 = 1;
    }
  }
  return (unsigned int)v4;
}
