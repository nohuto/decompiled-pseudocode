/*
 * XREFs of NtFlipObjectAddContent @ 0x140044810
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001B668 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x14001BE90 (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x140044948 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtFlipObjectAddContent(void *a1, void *a2, unsigned int a3, void *a4)
{
  struct FlipManagerObject *v7; // rsi
  unsigned __int64 v8; // r15
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // r8
  struct CFlipPropertySet *v12; // rdi
  struct CFlipPropertySet *v14; // [rsp+20h] [rbp-58h] BYREF
  struct FlipManagerObject *v15; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  if ( a1 && a2 )
  {
    v14 = 0LL;
    v7 = 0LL;
    v15 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    RtlCopyFromUser(&v16, a2, 8uLL);
    v8 = v16;
    v17 = v16;
    KeEnterCriticalRegion();
    v10 = CreateFlipPropertySetWorker<CFlipPropertySet>(a3, a4, v9, &v14);
    v12 = v14;
    if ( v10 >= 0 )
    {
      v10 = FlipManagerObject::ResolveHandle(a1, 2u, v11, &v15);
      v7 = v15;
      if ( v10 >= 0 )
        v10 = FlipManagerObject::AddContent(v15, v8, v12);
    }
    if ( v7 )
      ObfDereferenceObject(v7);
    if ( v12 )
      CFlipPropertySetBase::Release(v12);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
