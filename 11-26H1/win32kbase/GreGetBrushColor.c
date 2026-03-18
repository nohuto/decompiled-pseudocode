/*
 * XREFs of GreGetBrushColor @ 0x1401ECF40
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140033CE0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400346C8 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBrushColor(HBRUSH a1)
{
  unsigned int v2; // edi
  int v3; // ecx
  __int64 v4; // rdx
  int v5; // r8d
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF
  HSEMAPHORE v8; // [rsp+68h] [rbp+10h] BYREF

  v2 = -1;
  SEMOBJ<20>::SEMOBJ<20>(&v8);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v7, a1);
  if ( v7[0] )
  {
    v3 = *(_DWORD *)(v7[0] + 80LL);
    if ( v3 == 6 || v3 == 7 )
      v2 = *(_DWORD *)(v7[0] + 76LL);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v7);
  SEMOBJ<20>::vUnlock(&v8, v4, v5);
  return v2;
}
