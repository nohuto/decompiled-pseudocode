/*
 * XREFs of HmgNextGarbageCollectible @ 0x140155D88
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140023CB8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z @ 0x140024200 (-HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgNextGarbageCollectible(unsigned int a1, struct HOBJ__ **a2, _BYTE *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rax
  struct HOBJ__ *v11; // rax
  HSEMAPHORE v13[3]; // [rsp+20h] [rbp-18h] BYREF
  struct ENTRYOBJ *v14; // [rsp+58h] [rbp+20h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(v13);
  v14 = 0LL;
  v7 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  while ( 1 )
  {
    a1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ENTRYOBJ **))(**(_QWORD **)(v7 + 8) + 32LL))(
           *(_QWORD *)(v7 + 8),
           a1,
           &v14);
    if ( !a1 )
      break;
    if ( *((_DWORD *)v14 + 2) == -2147483630 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 8) + 96LL))(*(_QWORD *)(v7 + 8), a1);
      if ( (*(_BYTE *)(v10 + 14) & 0x40) != 0 )
      {
        v11 = HmgpComputeHandleValue((const struct OBJECT *)v10, a1, v14);
        *a2 = v11;
        if ( v11 )
        {
          *a3 = *((_BYTE *)v14 + 14);
          goto LABEL_7;
        }
      }
    }
  }
  a1 = 0;
LABEL_7:
  SEMOBJ<20>::vUnlock(v13, v8, v9);
  return a1;
}
