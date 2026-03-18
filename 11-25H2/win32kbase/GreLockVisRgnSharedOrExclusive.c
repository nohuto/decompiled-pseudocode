/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x140089890
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140043C18 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400458F8 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140045A94 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400865B0 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14008B5C0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14008B640 (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1, HDC a2, _DWORD *a3)
{
  __int64 v4; // rdi
  bool v5; // bl
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD v9[10]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+88h] [rbp+10h] BYREF

  v4 = a1;
  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v9, a2);
    if ( !v9[0] )
    {
      DCOBJA::~DCOBJA((DCOBJA *)v9);
      return 0LL;
    }
    v4 = *(_QWORD *)(v9[0] + 48LL);
    v10 = v4;
    v5 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10)
      && ((*(_DWORD *)(v9[0] + 36LL) & 0x200) == 0
       || (**(_BYTE **)(v9[0] + 976LL) & 1) != 0
       || (*(_DWORD *)(v9[0] + 36LL) & 0x8000) != 0);
    DCOBJA::~DCOBJA((DCOBJA *)v9);
  }
  else
  {
    v10 = a1;
    v5 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10);
  }
  *a3 = v5;
  if ( v5 )
  {
    v7 = *(_QWORD **)(W32GetSessionState(v6) + 88);
    GreAcquireSemaphoreShared<1,>(v7);
    GreAcquireSemaphoreShared<2,>(v7);
    GreAcquireSemaphoreShared<3,>(v7);
  }
  else
  {
    GreLockVisRgn(v4);
  }
  return 1LL;
}
