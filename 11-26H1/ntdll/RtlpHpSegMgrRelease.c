/*
 * XREFs of RtlpHpSegMgrRelease @ 0x18008A7C4
 * Callers:
 *     RtlpHpSegSegmentFree @ 0x18008A6AC (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegMgrAllocate @ 0x18008B594 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x180069E10 (RtlpHpSegMgrCommit.c)
 *     RtlpHpQueryVA @ 0x180089D98 (RtlpHpQueryVA.c)
 *     RtlpHpFreeVA @ 0x18008B9D0 (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180158414 (RtlpHpSegMgrVaCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  _WORD *v7; // rbx
  unsigned int v8; // esi
  unsigned __int64 v9; // r14
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+38h] BYREF
  _WORD *v14; // [rsp+98h] [rbp+48h] BYREF

  v3 = a2;
  v4 = (unsigned int)-*(_DWORD *)a1;
  LOBYTE(v5) = *(_BYTE *)(a1 + 13) & 7;
  v14 = 0LL;
  v13 = v4;
  v12 = a2;
  if ( !(_BYTE)v5 )
  {
LABEL_11:
    if ( v3 )
    {
      v11 = *(_OWORD *)(a1 + 40);
      LOBYTE(v5) = RtlpHpFreeVA(&v12, &v13, 0x8000LL, &v11);
    }
    return v5;
  }
  if ( v4 >= 0x200000 )
    goto LABEL_6;
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, a2, 0, (unsigned int)v4 >> 12, -a3, 0x4000, 0);
  v5 = RtlpHpSegMgrVaCtxFree(a1, v3, &v13);
  v12 = v5;
  v3 = v5;
  if ( v5 )
  {
LABEL_6:
    RtlpHpQueryVA(v3, a2, &v14, 0LL);
    v7 = v14;
    v8 = 0;
    v5 = v13 >> 21;
    v9 = (unsigned __int64)&v14[v13 >> 21];
    if ( (unsigned __int64)v14 < v9 )
    {
      do
      {
        LOWORD(v5) = *v7;
        if ( (*v7 & 0x7FF) != 0 )
          LOBYTE(v5) = RtlpHpSegMgrCommit(a1, v12, v8, 512, -(v5 & 0x7FF), 0x4000, 0);
        ++v7;
        v8 += 512;
      }
      while ( (unsigned __int64)v7 < v9 );
    }
    v3 = v12;
    goto LABEL_11;
  }
  return v5;
}
