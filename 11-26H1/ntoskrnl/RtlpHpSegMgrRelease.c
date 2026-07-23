/*
 * XREFs of RtlpHpSegMgrRelease @ 0x140350500
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x14034FBC0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentFree @ 0x1403517EC (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegMgrAllocate @ 0x1403519C8 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x140350BD0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x140352258 (RtlpHpFreeVA.c)
 *     RtlpHpQueryVA @ 0x140352540 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1404A5E54 (RtlpHpSegMgrVaCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _WORD *v7; // rsi
  unsigned __int64 v8; // r15
  int v9; // ebx
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  _WORD *v13; // [rsp+88h] [rbp+38h] BYREF
  __int64 v14; // [rsp+98h] [rbp+48h] BYREF

  v3 = a2;
  v4 = (unsigned int)-*(_DWORD *)a1;
  LOBYTE(v5) = *(_BYTE *)(a1 + 13) & 7;
  v13 = 0LL;
  v12 = v4;
  v14 = a2;
  if ( !(_BYTE)v5 )
  {
LABEL_11:
    if ( v3 )
    {
      v11 = *(_OWORD *)(a1 + 40);
      LOBYTE(v5) = RtlpHpFreeVA(&v14, &v12, 0x8000LL, &v11);
    }
    return v5;
  }
  if ( v4 >= 0x200000 )
  {
LABEL_7:
    LOBYTE(v5) = RtlpHpQueryVA(v3, a2, &v13, 0LL);
    v7 = v13;
    v8 = (unsigned __int64)&v13[v4 >> 21];
    v9 = 0;
    if ( (unsigned __int64)v13 < v8 )
    {
      do
      {
        LOWORD(v5) = *v7;
        if ( (*v7 & 0x7FF) != 0 )
          LOBYTE(v5) = RtlpHpSegMgrCommit(a1, v3, v9, 512, -(v5 & 0x7FF), 0x4000, 0);
        ++v7;
        v9 += 512;
      }
      while ( (unsigned __int64)v7 < v8 );
    }
    goto LABEL_11;
  }
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, a2, 0, (unsigned int)v4 >> 12, -a3, 0x4000, 0);
  v5 = RtlpHpSegMgrVaCtxFree(a1, v3, &v12);
  v14 = v5;
  v3 = v5;
  if ( v5 )
  {
    v4 = v12;
    goto LABEL_7;
  }
  return v5;
}
