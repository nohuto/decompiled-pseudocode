/*
 * XREFs of ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x1401994F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x140152AD8 (-ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ.c)
 *     GreDxgkGetSharedAllocationObjectType @ 0x140153028 (GreDxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetHandleArrayProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        int a2,
        void **a3,
        unsigned __int64 a4,
        DirectComposition::CCaptureRenderTargetMarshaler *Object)
{
  DirectComposition::CCaptureRenderTargetMarshaler *v5; // r12
  NTSTATUS v6; // edi
  DirectComposition::CCaptureRenderTargetMarshaler *v9; // r14
  __int64 i; // rbp
  __int64 v11; // rsi
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  void *v13; // rcx

  v5 = Object;
  v6 = 0;
  v9 = this;
  *(_BYTE *)Object = 0;
  if ( a2 == 3 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v11 = (unsigned int)i;
      if ( (unsigned int)i >= a4 )
      {
        DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(v9);
        *((_QWORD *)v9 + 11) = a4;
        *((_QWORD *)v9 + 9) = a3;
        *(_BYTE *)v5 = 1;
        return (unsigned int)v6;
      }
      SharedAllocationObjectType = (struct _OBJECT_TYPE *)GreDxgkGetSharedAllocationObjectType((__int64)this);
      v13 = a3[i];
      Object = 0LL;
      v6 = ObReferenceObjectByHandle(v13, 0xF0001u, SharedAllocationObjectType, 1, (PVOID *)&Object, 0LL);
      if ( v6 < 0 )
        break;
      this = Object;
      a3[i] = Object;
    }
    if ( a3 && (_DWORD)i )
    {
      do
      {
        ObfDereferenceObject(*a3++);
        --v11;
      }
      while ( v11 );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
