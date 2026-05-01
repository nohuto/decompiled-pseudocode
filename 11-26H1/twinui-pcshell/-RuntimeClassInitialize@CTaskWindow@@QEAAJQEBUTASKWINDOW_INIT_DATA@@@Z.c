/*
 * XREFs of ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x180301FEC
 * Callers:
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18029DB94 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x1801E5830 (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x1802BB794 (-s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTaskWindow::RuntimeClassInitialize(CTaskWindow *this, const struct TASKWINDOW_INIT_DATA *const a2)
{
  int v4; // ecx
  __int64 result; // rax
  bool v6; // zf
  char *v7; // rdi
  char *v8; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 5) = *(_QWORD *)a2;
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 23);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 7, *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 17, *((_QWORD *)a2 + 10));
  v4 = *((_DWORD *)a2 + 5);
  v9 = 0;
  if ( !CTaskWindow::s_ValidateCreationZbidAndConvert(v4, &v9) )
    return 2147947423LL;
  v6 = (*((_BYTE *)this + 68) & 8) == 0;
  v7 = (char *)this + 8;
  v8 = (char *)this + 8;
  *((_DWORD *)this + 13) = v9;
  if ( !v6
    || (result = (*(__int64 (__fastcall **)(char *, char *, char *))(*(_QWORD *)v7 + 64LL))(
                   v8,
                   (char *)a2 + 24,
                   (char *)a2 + 40),
        v8 = (char *)this + 8,
        (int)result >= 0) )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 152LL))(v8);
    return CTaskWindow::_RegisterForViewReadinessChanges(this);
  }
  return result;
}
