/*
 * XREFs of ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAPEAX_KPEA_N@Z @ 0x140245970
 * Callers:
 *     <none>
 * Callees:
 *     GreDxgkGetSharedAllocationObjectType @ 0x140182DCC (GreDxgkGetSharedAllocationObjectType.c)
 *     ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1401BFF14 (-ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetHandleArrayProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        PVOID Object)
{
  _BYTE *v5; // r12
  NTSTATUS v6; // edi
  PVOID *v8; // rbx
  DirectComposition::CCaptureRenderTargetMarshaler *v9; // r14
  __int64 i; // rbp
  __int64 v11; // rsi
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  PVOID v13; // rcx

  v5 = Object;
  v6 = 0;
  v8 = (PVOID *)a3;
  v9 = a1;
  *(_BYTE *)Object = 0;
  if ( (_DWORD)a2 == 3 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v11 = (unsigned int)i;
      if ( (unsigned int)i >= a4 )
      {
        DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(v9, a2, a3, a4);
        *((_QWORD *)v9 + 11) = a4;
        *((_QWORD *)v9 + 9) = v8;
        *v5 = 1;
        return (unsigned int)v6;
      }
      SharedAllocationObjectType = (struct _OBJECT_TYPE *)GreDxgkGetSharedAllocationObjectType((__int64)a1, a2);
      v13 = v8[i];
      Object = 0LL;
      v6 = ObReferenceObjectByHandle(v13, 0xF0001u, SharedAllocationObjectType, 1, &Object, 0LL);
      if ( v6 < 0 )
        break;
      a1 = (DirectComposition::CCaptureRenderTargetMarshaler *)Object;
      v8[i] = Object;
    }
    if ( v8 && (_DWORD)i )
    {
      do
      {
        ObfDereferenceObject(*v8++);
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
