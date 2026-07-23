/*
 * XREFs of MiPageHasRelocations @ 0x1409A0720
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140500CE0 (MiCreateFileOnlyImageFixupExtents.c)
 *     MiRevertRelocatedImagePfn @ 0x1409A0624 (MiRevertRelocatedImagePfn.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x140B61CD0 (MiWalkEntireImagePageNeedsProcessing.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiPageHasRelocations(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // r11
  char v4; // r10
  __int64 *v5; // r9
  __int64 i; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  unsigned __int64 v14; // rax

  v3 = *a1;
  v4 = a3;
  v5 = a1;
  if ( (a3 & 1) != 0 && (unsigned int)a2 < *((_DWORD *)a1 + 14) )
  {
    for ( i = (unsigned int)a2; (_DWORD)i == (_DWORD)a2; i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(v3 + 8LL * (unsigned int)i) )
        return 1LL;
      v8 = v5[11];
      if ( v8 )
      {
        if ( *(_QWORD *)(v8 + 8LL * (unsigned int)i + 64) )
          return 1LL;
      }
      v9 = v5[12];
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 + 32);
        if ( (unsigned int)i >= v10 )
        {
          v11 = *(_DWORD *)(v9 + 36);
          if ( (unsigned int)i <= v11 )
          {
            v12 = v11 - v10 + 1;
            v13 = *(_QWORD *)(v9 + 24);
            if ( !v13 && v12 || (v14 = (unsigned int)i - v10, v14 >= v12) )
            {
              guard_dispatch_icall_no_overrides(i, a2);
              __debugbreak();
            }
            if ( *(_QWORD *)(v13 + 8 * v14) )
              return 1LL;
          }
        }
      }
      if ( (v4 & 2) != 0 && (unsigned int)HalSystemVectorDispatchEntry() )
        return 1LL;
    }
  }
  return 0LL;
}
