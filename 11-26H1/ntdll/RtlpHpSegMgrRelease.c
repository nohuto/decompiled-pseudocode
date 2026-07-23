/*
 * XREFs of RtlpHpSegMgrRelease @ 0x18006DBFC
 * Callers:
 *     RtlpHpSegSegmentFree @ 0x18006DAE4 (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegMgrAllocate @ 0x18006E9CC (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x18006EE10 (RtlpHpFreeVA.c)
 *     RtlpHpQueryVA @ 0x180070D98 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1801582E4 (RtlpHpSegMgrVaCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, void *a2, int a3)
{
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // r9
  ULONG_PTR v5; // rax
  _WORD *v7; // rbx
  int v8; // esi
  unsigned __int64 v9; // r14
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  _WORD *v13; // [rsp+98h] [rbp+48h] BYREF

  v3 = (ULONG_PTR)a2;
  v4 = (unsigned int)-*(_DWORD *)a1;
  LOBYTE(v5) = *(_BYTE *)(a1 + 13) & 7;
  v13 = 0LL;
  RegionSize = v4;
  BaseAddress = a2;
  if ( !(_BYTE)v5 )
  {
LABEL_11:
    if ( v3 )
      LOBYTE(v5) = RtlpHpFreeVA(&BaseAddress, &RegionSize);
    return v5;
  }
  if ( v4 >= 0x200000 )
    goto LABEL_6;
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, (_DWORD)a2, 0, (unsigned int)v4 >> 12, -a3, 0x4000, 0);
  v5 = RtlpHpSegMgrVaCtxFree(a1, v3, &RegionSize);
  BaseAddress = (PVOID)v5;
  v3 = v5;
  if ( v5 )
  {
LABEL_6:
    RtlpHpQueryVA(v3, a2, &v13, 0LL);
    v7 = v13;
    v8 = 0;
    v5 = RegionSize >> 21;
    v9 = (unsigned __int64)&v13[RegionSize >> 21];
    if ( (unsigned __int64)v13 < v9 )
    {
      do
      {
        LOWORD(v5) = *v7;
        if ( (*v7 & 0x7FF) != 0 )
          LOBYTE(v5) = RtlpHpSegMgrCommit(a1, (_DWORD)BaseAddress, v8, 512, -(v5 & 0x7FF), 0x4000, 0);
        ++v7;
        v8 += 512;
      }
      while ( (unsigned __int64)v7 < v9 );
    }
    v3 = (ULONG_PTR)BaseAddress;
    goto LABEL_11;
  }
  return v5;
}
