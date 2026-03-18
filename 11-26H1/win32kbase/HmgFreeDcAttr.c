/*
 * XREFs of HmgFreeDcAttr @ 0x14000E59C
 * Callers:
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     GrepThreadCallout @ 0x14011A030 (GrepThreadCallout.c)
 *     ?FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x140186EB4 (-FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall HmgFreeDcAttr(_QWORD *a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  result = v5 + 8;
  v7 = -v5;
  if ( a2 && (result & -(__int64)(v7 != 0)) != 0 )
  {
    if ( !*(_QWORD *)((result & -(__int64)(v7 != 0)) + 0x20) )
    {
      *(_QWORD *)((result & -(__int64)(v7 != 0)) + 0x20) = a2;
      return result;
    }
    result = PsGetCurrentProcessWin32Process();
    v8 = result;
    if ( result )
    {
      if ( *(_QWORD *)result )
      {
        v13 = *a1 + 1512LL;
        GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>();
        v9 = v8 + 192;
        v10 = *(_QWORD *)(v8 + 192);
        if ( v10 == v8 + 192 || *(_DWORD *)(v10 + 16) == 11 )
        {
          v10 = PALLOCNOZ(112LL, 1717789767LL);
          if ( !v10 )
            return SEMOBJ<20>::vUnlock(&v13);
          v12 = *(_QWORD *)v9;
          if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
            __fastfail(3u);
          *(_QWORD *)v10 = v12;
          *(_QWORD *)(v10 + 8) = v9;
          *(_QWORD *)(v12 + 8) = v10;
          *(_QWORD *)v9 = v10;
          *(_DWORD *)(v10 + 16) = 0;
        }
        v11 = *(unsigned int *)(v10 + 16);
        *(_DWORD *)(v10 + 16) = v11 + 1;
        *(_QWORD *)(v10 + 8 * v11 + 24) = a2;
        *(_QWORD *)(v8 + 40) = a2;
        return SEMOBJ<20>::vUnlock(&v13);
      }
    }
  }
  return result;
}
