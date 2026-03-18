/*
 * XREFs of ?ResolveHandle@CompositionTokenObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400454AC
 * Callers:
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400A2AE4 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionTokenObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct CompositionTokenObject **a4)
{
  struct _OBJECT_TYPE *v4; // r8
  NTSTATUS v6; // ebx
  struct CompositionTokenObject *v7; // rdi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v4 = g_pDxgkCompositionObjectType;
  *a4 = 0LL;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, 2u, v4, 1, &Object, 0LL);
  if ( v6 >= 0 )
  {
    v7 = (struct CompositionTokenObject *)Object;
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 2 )
    {
      *a4 = v7;
    }
    else
    {
      ObfDereferenceObject(v7);
      return (unsigned int)-1073741788;
    }
  }
  return (unsigned int)v6;
}
