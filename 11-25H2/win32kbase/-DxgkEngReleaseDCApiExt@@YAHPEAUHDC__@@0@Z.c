/*
 * XREFs of ?DxgkEngReleaseDCApiExt@@YAHPEAUHDC__@@0@Z @ 0x1400F1D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngReleaseDCApiExt(HDC a1, HDC a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int (__fastcall *v8)(HDC, HDC); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 176LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v8 = *(unsigned int (__fastcall **)(HDC, HDC))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 24) + 184LL);
      if ( v8 )
        return v8(a1, a2);
    }
  }
  return v4;
}
