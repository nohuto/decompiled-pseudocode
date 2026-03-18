/*
 * XREFs of NtFlipObjectSetContent @ 0x14001B470
 * Callers:
 *     <none>
 * Callees:
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x14001B5F4 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x14001BE90 (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtFlipObjectSetContent(void *a1, void *a2, void *a3, unsigned int a4)
{
  int FlipPropertySet; // ebx
  struct FlipManagerObject *v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  char v11; // r8
  struct FlipManagerObject *v13; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-38h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  FlipPropertySet = 0;
  if ( a1 && a2 )
  {
    v8 = 0LL;
    v13 = 0LL;
    v16 = 0LL;
    v9 = 0LL;
    v17 = 0LL;
    v14 = 0LL;
    RtlCopyFromUser(&v14, a2, 8uLL);
    v16 = v14;
    if ( a3 )
    {
      v15 = 0LL;
      RtlCopyFromUser(&v15, a3, 8uLL);
      v9 = v15;
      v17 = v15;
    }
    v10 = v14;
    KeEnterCriticalRegion();
    if ( a4 )
      FlipPropertySet = CreateFlipPropertySetWorker<CFlipPropertySet>(a4);
    if ( FlipPropertySet >= 0 )
    {
      FlipPropertySet = FlipManagerObject::ResolveHandle(a1, 2u, v11, &v13);
      v8 = v13;
      if ( FlipPropertySet >= 0 )
        FlipPropertySet = FlipManagerObject::SetContent(v13, v10, v9, 0LL);
    }
    if ( v8 )
      ObfDereferenceObject(v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)FlipPropertySet;
}
