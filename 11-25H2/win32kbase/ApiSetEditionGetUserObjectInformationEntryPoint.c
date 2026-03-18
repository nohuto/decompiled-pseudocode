/*
 * XREFs of ApiSetEditionGetUserObjectInformationEntryPoint @ 0x1401082D4
 * Callers:
 *     NtUserGetObjectInformation @ 0x1401082B0 (NtUserGetObjectInformation.c)
 * Callees:
 *     EditionGetUserObjectInformationEntryPoint @ 0x140100264 (EditionGetUserObjectInformationEntryPoint.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionGetUserObjectInformationEntryPoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v7; // ebp
  unsigned int v9; // ebx
  int (*v10)(void); // rax

  v7 = a2;
  v9 = 0;
  v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 944LL);
  if ( v10 && v10() >= 0 )
    return (unsigned int)EditionGetUserObjectInformationEntryPoint(a1, v7, a3, a4, a5);
  return v9;
}
