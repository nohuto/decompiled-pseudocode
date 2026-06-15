/*
 * XREFs of ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x1800D834C
 * Callers:
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x1800D6F10 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ??1?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@UEAA@XZ @ 0x1800D72D8 (--1-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CAtlComModule::ExecuteObjectMain(ATL::CAtlComModule *this, char a2)
{
  char *v2; // rbx
  char *v4; // rax

  v2 = (char *)off_1801D3420;
  v4 = (char *)off_1801D3428;
  while ( v2 < v4 )
  {
    if ( *(_QWORD *)v2 )
    {
      LOBYTE(this) = a2;
      (*(void (__fastcall **)(ATL::CAtlComModule *))(*(_QWORD *)v2 + 64LL))(this);
      v4 = (char *)off_1801D3428;
    }
    v2 += 8;
  }
}
