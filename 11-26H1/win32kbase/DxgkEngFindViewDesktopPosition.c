/*
 * XREFs of DxgkEngFindViewDesktopPosition @ 0x1401F9D30
 * Callers:
 *     <none>
 * Callees:
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x140102518 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x140165780 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 */

__int64 __fastcall DxgkEngFindViewDesktopPosition(_DWORD *a1, int a2, PVOID *a3)
{
  unsigned int v3; // edi
  __int64 i; // rcx
  bool v8; // zf
  struct _LUID *v9; // rcx
  struct _ERESOURCE *v10; // rax
  struct _ERESOURCE *v11; // rbx
  struct _ERESOURCE *v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  for ( i = 0LL; ; i = (__int64)v11 )
  {
    v10 = hdevEnumerate<1>(i);
    v11 = v10;
    if ( !v10 )
      break;
    v8 = ((__int64)v10->ExclusiveWaiters & 0x20400) == 0;
    v13 = v10;
    if ( v8 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v13) )
      {
        v9 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v13);
        if ( v9->LowPart == *a1
          && v9->HighPart == a1[1]
          && *(_DWORD *)(*(_QWORD *)&v11[24].NumberOfSharedWaiters + 248LL) == a2 )
        {
          v3 = 1;
          *a3 = v11[24].Reserved2;
        }
      }
    }
  }
  return v3;
}
