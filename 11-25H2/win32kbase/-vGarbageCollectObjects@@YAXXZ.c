/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1400855F0
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgNextGarbageCollectible @ 0x14006F2A4 (HmgNextGarbageCollectible.c)
 *     HmgIsProcessCleanupRequired @ 0x1400F2E38 (HmgIsProcessCleanupRequired.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D13B8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1498 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1588 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1680 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1760 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void __fastcall vGarbageCollectObjects(__int64 a1)
{
  __int64 v1; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  unsigned __int8 v5; // [rsp+30h] [rbp+10h] BYREF
  struct HOBJ__ *v6; // [rsp+38h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_DWORD *)(v1 + 1756) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process) )
    {
      v6 = 0LL;
      v3 = 0;
      v5 = 30;
      while ( 1 )
      {
        v4 = HmgNextGarbageCollectible(v3, &v6, &v5);
        if ( !v4 )
          break;
        switch ( v5 )
        {
          case 5u:
            vGarbageCollectObject<SURFREFGC>(v6, (unsigned int)v5 - 5);
            break;
          case 7u:
            vGarbageCollectObject<EPATHOBJGC>(v6);
            break;
          case 8u:
            vGarbageCollectObject<XEPALOBJ2>(v6);
            break;
          case 9u:
            vGarbageCollectObject<COLORSPACEGC>(v6);
            break;
          case 0x10u:
            vGarbageCollectObject<BRUSHSELOBJGC>(v6);
            break;
        }
        v3 = v4;
      }
    }
  }
}
