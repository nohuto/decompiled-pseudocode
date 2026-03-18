/*
 * XREFs of ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x180116AF4
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180116000 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?HasBufferedOutput@CInteractionContextWrapper@@UEBA_NI@Z @ 0x1801D7F30 (-HasBufferedOutput@CInteractionContextWrapper@@UEBA_NI@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionContextWrapper@@UEAA_NI@Z @ 0x1801DD880 (-DepartBufferedOutputPointer@CInteractionContextWrapper@@UEAA_NI@Z.c)
 * Callees:
 *     <none>
 */

struct CBufferedOutputPointer *__fastcall CInteractionContextWrapper::FindBufferedOutputPointer(
        CInteractionContextWrapper *this,
        int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  int v4; // r10d
  __int64 i; // r9
  __int64 v7; // rcx

  v2 = *((int *)this + 152);
  v3 = 0LL;
  v4 = 0;
  for ( i = 0LL; i < v2; ++i )
  {
    v7 = *((_QWORD *)this + 75);
    if ( a2 == **(_DWORD **)(v7 + 8 * i) )
      return *(struct CBufferedOutputPointer **)(v7 + 8LL * v4);
    ++v4;
  }
  return (struct CBufferedOutputPointer *)v3;
}
