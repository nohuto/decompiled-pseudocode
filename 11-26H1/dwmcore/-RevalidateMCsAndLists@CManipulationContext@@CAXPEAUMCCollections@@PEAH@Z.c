/*
 * XREFs of ?RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z @ 0x1801A4CA8
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A4AF4 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180152D28 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::RevalidateMCsAndLists(struct MCCollections *a1, int *a2)
{
  int v2; // eax
  int v3; // ebp
  __int64 v6; // r14
  CManipulationContext *v7; // rbx
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 8);
  v3 = 0;
  *a2 = v2;
  v8 = -1;
  if ( v2 > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(CManipulationContext **)(v6 + *((_QWORD *)a1 + 3));
      if ( v7 )
      {
        (**(void (__fastcall ***)(_QWORD))v7)(*(_QWORD *)(v6 + *((_QWORD *)a1 + 3)));
        v2 = *a2;
      }
      if ( (*((_BYTE *)v7 + 28) & 4) != 0 )
        CManipulationContext::RevalidateMC(v7, a1, &v8, (unsigned int)v3, v2);
      (*(void (__fastcall **)(CManipulationContext *))(*(_QWORD *)v7 + 8LL))(v7);
      v2 = *a2;
      ++v3;
      v6 += 8LL;
    }
    while ( v3 < *a2 );
  }
}
