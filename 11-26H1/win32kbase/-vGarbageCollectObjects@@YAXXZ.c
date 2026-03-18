/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x140023CB8
 * Callers:
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgNextGarbageCollectible @ 0x140155D88 (HmgNextGarbageCollectible.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1ED4 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1F78 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2058 (--$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2174 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F22AC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F237C (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 */

void __fastcall vGarbageCollectObjects(__int64 a1)
{
  __int64 v1; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  char v5; // [rsp+30h] [rbp+10h] BYREF
  __int64 v6; // [rsp+38h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_DWORD *)(v1 + 1844) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( !CurrentProcessWin32Process
      || !*(_QWORD *)CurrentProcessWin32Process
      || *(_DWORD *)(CurrentProcessWin32Process + 64) )
    {
      v6 = 0LL;
      v3 = 0LL;
      v5 = 30;
      while ( 1 )
      {
        v4 = HmgNextGarbageCollectible(v3, &v6, &v5);
        if ( !v4 )
          break;
        switch ( v5 )
        {
          case 1:
            vGarbageCollectObject<DCOBJA>((struct Gre::Base::SESSION_GLOBALS *)v1);
            break;
          case 5:
            vGarbageCollectObject<SURFREFGC>(v1, v6);
            break;
          case 7:
            vGarbageCollectObject<EPATHOBJGC>(v1, v6);
            break;
          case 8:
            vGarbageCollectObject<XEPALOBJ2>((struct Gre::Base::SESSION_GLOBALS *)v1);
            break;
          case 9:
            vGarbageCollectObject<COLORSPACEGC>(v1, v6);
            break;
          case 16:
            vGarbageCollectObject<BRUSHSELOBJGC>((struct Gre::Base::SESSION_GLOBALS *)v1);
            break;
        }
        v3 = v4;
      }
    }
  }
}
