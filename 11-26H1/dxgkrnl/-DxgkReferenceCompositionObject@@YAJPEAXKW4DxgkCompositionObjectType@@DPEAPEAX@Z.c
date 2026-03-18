/*
 * XREFs of ?DxgkReferenceCompositionObject@@YAJPEAXKW4DxgkCompositionObjectType@@DPEAPEAX@Z @ 0x140051540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkReferenceCompositionObject(void *a1, ACCESS_MASK a2, int a3, KPROCESSOR_MODE a4, _QWORD *a5)
{
  NTSTATUS v6; // ebx
  PVOID v7; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, g_pDxgkCompositionObjectType, a4, &Object, 0LL);
  if ( v6 >= 0 )
  {
    v7 = Object;
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == a3 )
    {
      *a5 = v7;
    }
    else
    {
      ObfDereferenceObject(v7);
      return (unsigned int)-1073741788;
    }
  }
  return (unsigned int)v6;
}
