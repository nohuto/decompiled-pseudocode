/*
 * XREFs of ApiSetEditionCheckDesktopPolicy @ 0x1401C1764
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionCheckDesktopPolicy(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (__fastcall *v4)(_QWORD, __int64); // rax

  v1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6896LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v4 = *(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 6904LL);
      if ( v4 )
        return v4(0LL, 14LL);
    }
  }
  return v1;
}
