/*
 * XREFs of ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x14004F700
 * Callers:
 *     CreateSharedResourceObject @ 0x14004E81C (CreateSharedResourceObject.c)
 * Callees:
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x14004F748 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
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
    *((_QWORD *)a1 + 5) = 0LL;
    *((_QWORD *)a1 + 6) = 0LL;
    *((_QWORD *)a1 + 7) = 0LL;
    *(_QWORD *)v3 = &DirectComposition::CSharedSystemResource::`vftable';
    *((_DWORD *)a1 + 10) = 0;
  }
  *a3 = v3;
  return DirectComposition::CSharedSystemResource::Initialize(v3, (unsigned int)a2);
}
