/*
 * XREFs of ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1400A9938
 * Callers:
 *     CreateSharedResourceObject @ 0x140057834 (CreateSharedResourceObject.c)
 * Callees:
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1400A9980 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  struct ICompositionObject *v3; // rax

  v3 = (struct CompositionObject *)((char *)a1 + 24);
  if ( a1 != (struct CompositionObject *)-24LL )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    *(_QWORD *)((char *)a1 + 44) = 0LL;
    *(_QWORD *)((char *)a1 + 52) = 0LL;
    *((_DWORD *)a1 + 15) = 0;
    *(_QWORD *)v3 = &DirectComposition::CSharedSystemResource::`vftable';
    *((_DWORD *)a1 + 10) = 0;
  }
  *a3 = v3;
  return DirectComposition::CSharedSystemResource::Initialize(v3, (unsigned int)a2);
}
