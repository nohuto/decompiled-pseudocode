/*
 * XREFs of ?HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z @ 0x140024260
 * Callers:
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1401FA98C (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x1401FAA10 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1401FAB18 (-vCleanupSurfaces@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1401FABE8 (-vRemoveRefPalettes@@YAXK@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z @ 0x140024200 (-HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgNextOwned(unsigned int a1, int a2, struct HOBJ__ **a3, struct OBJECT **a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // r8d
  const struct OBJECT *v12; // rdi
  struct HOBJ__ *v13; // rax
  struct ENTRYOBJ *v15; // [rsp+20h] [rbp-28h] BYREF
  HSEMAPHORE v16[4]; // [rsp+28h] [rbp-20h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(v16);
  v15 = 0LL;
  v9 = *(_QWORD *)(W32GetSessionState(v8) + 88);
  while ( 1 )
  {
    a1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ENTRYOBJ **))(**(_QWORD **)(v9 + 8) + 32LL))(
           *(_QWORD *)(v9 + 8),
           a1,
           &v15);
    if ( !a1 )
      break;
    if ( *((_BYTE *)v15 + 14) )
    {
      if ( ((*((_DWORD *)v15 + 2) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      {
        v12 = (const struct OBJECT *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 8) + 96LL))(
                                       *(_QWORD *)(v9 + 8),
                                       a1);
        v13 = HmgpComputeHandleValue(v12, a1, v15);
        *a3 = v13;
        if ( v13 )
        {
          *a4 = v12;
          goto LABEL_7;
        }
      }
    }
  }
  a1 = 0;
LABEL_7:
  SEMOBJ<20>::vUnlock(v16, v10, v11);
  return a1;
}
