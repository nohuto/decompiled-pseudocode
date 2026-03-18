/*
 * XREFs of ?vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z @ 0x140092D48
 * Callers:
 *     vUnreferencePdevWorker @ 0x140092830 (vUnreferencePdevWorker.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     HmgSafeNextObjt @ 0x1400726E0 (HmgSafeNextObjt.c)
 */

void __fastcall vMarkSurfacesWithHDEV(HDEV a1)
{
  __int64 v2; // r8
  char v3; // dl
  __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // edi
  __int64 i; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  HSEMAPHORE v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 3856), 1uLL);
  v4 = *((_QWORD *)a1 + 223);
  v5 = v3 & 0xF;
  *(_QWORD *)(v2 + 16 * v5 + 3880) = v4;
  *(_QWORD *)(v2 + 16 * (v5 + 242)) = a1;
  SEMOBJ<20>::SEMOBJ<20>(&v11);
  v10 = 0LL;
  v6 = (_DWORD)a1[10] & 0x80000;
  for ( i = 0LL; ; i = v8 )
  {
    v8 = HmgSafeNextObjt(i, 5, &v10);
    if ( !v8 )
      break;
    v9 = v10;
    if ( *(HDEV *)(v10 + 48) == a1 || !v6 && *(_QWORD *)(v10 + 40) == v4 )
    {
      if ( *(_WORD *)(v10 + 100)
        || (*(_DWORD *)(v10 + 112) &= 0xFFFC4A10, *(_QWORD *)(v9 + 40) = 0LL, *(HDEV *)(v9 + 48) == a1) )
      {
        *(_QWORD *)(v9 + 48) = 0LL;
      }
    }
  }
  SEMOBJ<20>::vUnlock(&v11);
}
