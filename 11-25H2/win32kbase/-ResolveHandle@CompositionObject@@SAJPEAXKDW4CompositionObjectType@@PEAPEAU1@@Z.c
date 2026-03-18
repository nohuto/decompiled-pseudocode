/*
 * XREFs of ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1400D0AC0
 * Callers:
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1400D0A7C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x140226D40 (NtDCompositionDuplicateHandleToProcess.c)
 *     ?ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x14022808C (-ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionObject::ResolveHandle(void *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, int a4, _QWORD *a5)
{
  NTSTATUS v6; // ebx
  _QWORD **v7; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  Object = 0LL;
  *a5 = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, ExCompositionObjectType, a3, &Object, 0LL);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = (_QWORD **)Object;
  if ( !(***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
  {
    v6 = -1073741816;
LABEL_8:
    ObfDereferenceObject(v7);
    return (unsigned int)v6;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v7[1] + 16LL))(v7[1]) == a4 )
    *a5 = v7;
  else
    v6 = -1073741788;
  if ( v6 < 0 )
    goto LABEL_8;
  return (unsigned int)v6;
}
