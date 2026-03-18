/*
 * XREFs of ?DxgkEngLockVisRgnApiExt@@YAPEAUHDEV__@@PEAUHDC__@@@Z @ 0x1401405A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngLockVisRgnApiExt(HDC a1)
{
  __int64 v2; // rbx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(HDC); // rax

  v2 = 0LL;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 96LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v5 = *(__int64 (__fastcall **)(HDC))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 24) + 104LL);
      if ( v5 )
        return v5(a1);
    }
  }
  return v2;
}
