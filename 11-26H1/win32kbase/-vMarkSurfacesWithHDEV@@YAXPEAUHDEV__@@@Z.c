/*
 * XREFs of ?vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z @ 0x1400C6218
 * Callers:
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall vMarkSurfacesWithHDEV(HDEV a1)
{
  __int64 v2; // r8
  char v3; // dl
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // esi
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rax
  unsigned __int64 v13; // r10
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  HSEMAPHORE v15; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 3960), 1uLL);
  v4 = *((_QWORD *)a1 + 223);
  v5 = v3 & 0xF;
  *(_QWORD *)(v2 + 16LL * (unsigned int)v5 + 3976) = a1;
  *(_QWORD *)(v2 + 16 * (v5 + 249)) = v4;
  SEMOBJ<20>::SEMOBJ<20>(&v15);
  v7 = 0;
  v8 = (_DWORD)a1[10] & 0x80000;
LABEL_2:
  v9 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  v14 = 0LL;
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v9 + 8) + 32LL))(
           *(_QWORD *)(v9 + 8),
           v7,
           &v14);
    if ( !v7 )
      break;
    if ( *(_BYTE *)(v14 + 14) == 5 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 8) + 96LL))(*(_QWORD *)(v9 + 8), v7);
      v6 = *(unsigned __int8 *)(v14 + 12);
      v13 = (unsigned __int16)v7 | (unsigned __int64)(*(unsigned __int16 *)(v14 + 12) << 16);
      if ( (_DWORD)v13 == (unsigned int)*(_QWORD *)v12 )
      {
        if ( v13 )
        {
          if ( *(HDEV *)(v12 + 48) == a1 || !v8 && *(_QWORD *)(v12 + 40) == v4 )
          {
            if ( *(_WORD *)(v12 + 100)
              || (*(_DWORD *)(v12 + 112) &= 0xFFFC4A10, *(_QWORD *)(v12 + 40) = 0LL, *(HDEV *)(v12 + 48) == a1) )
            {
              *(_QWORD *)(v12 + 48) = 0LL;
            }
          }
          goto LABEL_2;
        }
      }
      else
      {
        GrepCaptureLiveMemoryDump(400LL, 47LL, v14, *(_QWORD *)v12, v13, 0);
      }
    }
  }
  SEMOBJ<20>::vUnlock(&v15, v10, v11);
}
