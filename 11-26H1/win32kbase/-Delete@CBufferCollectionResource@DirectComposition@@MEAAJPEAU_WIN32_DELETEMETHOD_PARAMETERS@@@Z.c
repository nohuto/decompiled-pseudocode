/*
 * XREFs of ?Delete@CBufferCollectionResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x14022B240
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CBufferCollectionResource::Delete(
        DirectComposition::CBufferCollectionResource *this,
        struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  (*(void (__fastcall **)(DirectComposition::CBufferCollectionResource *, struct _WIN32_DELETEMETHOD_PARAMETERS *))(*(_QWORD *)this + 8LL))(
    this,
    a2);
  if ( *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    v3 = 0;
    v4 = 0LL;
    do
    {
      ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 2) + 8 * v4));
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < *((_QWORD *)this + 3) );
    GreDeleteFastMutex(*((char **)this + 2), v5, v6, v7);
    *((_QWORD *)this + 2) = 0LL;
  }
  return 0LL;
}
