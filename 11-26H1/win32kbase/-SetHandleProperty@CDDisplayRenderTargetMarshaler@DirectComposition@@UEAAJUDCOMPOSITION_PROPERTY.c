/*
 * XREFs of ?SetHandleProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x140243480
 * Callers:
 *     <none>
 * Callees:
 *     GreDxgkGetDisplayManagerObjectType @ 0x1401F9DD4 (GreDxgkGetDisplayManagerObjectType.c)
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetHandleProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        _BYTE *a4)
{
  unsigned int v4; // edi
  PVOID v8; // rsi
  struct _OBJECT_TYPE *DisplayManagerObjectType; // rax
  NTSTATUS v10; // eax
  void *v11; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( (_DWORD)a2 == 2 )
  {
    v8 = 0LL;
    if ( !a3
      || (DisplayManagerObjectType = (struct _OBJECT_TYPE *)GreDxgkGetDisplayManagerObjectType(a1, a2),
          Object = 0LL,
          v10 = ObReferenceObjectByHandle(a3, 0x1F0000u, DisplayManagerObjectType, 1, &Object, 0LL),
          v8 = Object,
          v4 = v10,
          v10 >= 0) )
    {
      v11 = *(void **)(a1 + 80);
      if ( v11 )
        DxgkReleaseCompositionObjectReference(v11);
      *(_QWORD *)(a1 + 80) = v8;
    }
    *(_DWORD *)(a1 + 16) |= 0x40u;
    *a4 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
