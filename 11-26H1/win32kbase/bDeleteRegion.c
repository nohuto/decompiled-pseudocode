/*
 * XREFs of bDeleteRegion @ 0x1400555E0
 * Callers:
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1400C57B0 (NtGdiDeleteObjectApp.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x1401FAA10 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140055690 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 */

_BOOL8 __fastcall bDeleteRegion(HRGN a1)
{
  __int64 v1; // rax
  bool v2; // zf
  BOOL v3; // ebx
  __int64 v4; // rdx
  _QWORD **v5; // rcx
  _BOOL8 result; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  _QWORD **v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+50h] [rbp-10h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v7, a1, 0, 0);
  v1 = v7;
  v3 = 0;
  if ( v7 )
  {
    if ( !*(_DWORD *)(v7 + 76) )
    {
      v2 = (unsigned int)RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)&v7) == 0;
      v1 = v7;
      if ( !v2 )
        v3 = 1;
    }
  }
  if ( !v10 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v7);
    v1 = v7;
  }
  if ( v1 )
    _InterlockedDecrement16((volatile signed __int16 *)(v1 + 12));
  v4 = v8;
  v5 = v9;
  if ( *(__int64 **)(v8 + 8) != &v8 || *v9 != &v8 )
    __fastfail(3u);
  *v9 = (_QWORD *)v8;
  result = v3;
  *(_QWORD *)(v4 + 8) = v5;
  return result;
}
