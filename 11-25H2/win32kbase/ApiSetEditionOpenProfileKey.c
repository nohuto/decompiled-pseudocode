/*
 * XREFs of ApiSetEditionOpenProfileKey @ 0x1400AA0EC
 * Callers:
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 * Callees:
 *     EditionOpenProfileKey @ 0x14023E9C8 (EditionOpenProfileKey.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionOpenProfileKey(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  int (*v9)(void); // rax

  v4 = 0;
  *a4 = 0LL;
  v7 = a2;
  v8 = a1;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3184LL);
  if ( v9 && v9() >= 0 )
  {
    *a4 = EditionOpenProfileKey(v8, v7, a3);
    return 1;
  }
  return v4;
}
