/*
 * XREFs of DxgkEngFindViewDesktopPosition @ 0x1401D06A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1400C3120 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x140127250 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 */

__int64 __fastcall DxgkEngFindViewDesktopPosition(_DWORD *a1, int a2, _QWORD *a3)
{
  unsigned int v3; // edi
  PDEV *i; // rcx
  bool v8; // zf
  struct _LUID *v9; // rcx
  PDEV *v10; // rax
  PDEV *v11; // rbx
  PDEV *v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  for ( i = 0LL; ; i = v11 )
  {
    v10 = hdevEnumerate<1>(i);
    v11 = v10;
    if ( !v10 )
      break;
    v8 = (*((_DWORD *)v10 + 10) & 0x20400) == 0;
    v13 = v10;
    if ( v8 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v13) )
      {
        v9 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v13);
        if ( v9->LowPart == *a1 && v9->HighPart == a1[1] && *(_DWORD *)(*((_QWORD *)v11 + 321) + 248LL) == a2 )
        {
          v3 = 1;
          *a3 = *((_QWORD *)v11 + 322);
        }
      }
    }
  }
  return v3;
}
