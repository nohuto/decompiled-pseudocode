/*
 * XREFs of MiZeroPageWorkMapping @ 0x14029F2C0
 * Callers:
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiPageListCollision @ 0x14048758C (MiPageListCollision.c)
 *     MiUnmapZeroedPage @ 0x140521B08 (MiUnmapZeroedPage.c)
 *     MiReleaseScrubProtection @ 0x140710C10 (MiReleaseScrubProtection.c)
 * Callees:
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiZeroPageWorkMapping(unsigned int a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  __int64 i; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned __int64 v9; // r14
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  struct _LIST_ENTRY **v12; // rax
  int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // r8
  struct _LIST_ENTRY **v16; // r9
  int v17; // eax
  BOOL v18; // ecx
  int v19; // [rsp+20h] [rbp-E0h]
  struct _LIST_ENTRY **v20; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+3Ch] [rbp-C4h]
  unsigned int v23; // [rsp+40h] [rbp-C0h]
  int v24; // [rsp+44h] [rbp-BCh]
  bool v25; // [rsp+48h] [rbp-B8h]
  __int16 v26; // [rsp+49h] [rbp-B7h]
  char v27; // [rsp+4Bh] [rbp-B5h]
  int v28; // [rsp+4Ch] [rbp-B4h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int128 v31; // [rsp+60h] [rbp-A0h]
  __int128 v32; // [rsp+70h] [rbp-90h]
  __int128 v33; // [rsp+80h] [rbp-80h]
  __int128 v34; // [rsp+90h] [rbp-70h]
  __int128 v35; // [rsp+A0h] [rbp-60h]
  __int128 v36; // [rsp+B0h] [rbp-50h]
  __int128 v37; // [rsp+C0h] [rbp-40h]
  __int128 v38; // [rsp+D0h] [rbp-30h]
  __int128 v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-10h]

  v19 = a3;
  v31 = 0LL;
  v27 = 0;
  v4 = a2;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  for ( i = a1; v4 >= 0xFFFFF68000000000uLL; v4 = (__int64)(v4 << 25) >> 16 )
  {
    if ( v4 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  result = 0xFFFFF68000000000uLL;
  v7 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a1 <= 1 )
  {
    v11 = (int)(2 - a1);
    do
    {
      result = 0xFFFFF68000000000uLL;
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v11;
    }
    while ( v11 );
  }
  v8 = 0;
  v9 = MiPtesToSupportLargePageSizes[i];
  if ( v9 )
  {
    result = 0LL;
    do
    {
      v10 = (_QWORD *)(v7 + 8 * result);
      if ( *v10 )
      {
        if ( (unsigned int)i <= 1 )
          MiRewritePteWithLockBit(0LL, 0, (unsigned __int64)v10, *(__int64 *)&CLFS_LSN_NULL_EXT);
        else
          *v10 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      result = ++v8;
    }
    while ( v8 < v9 );
    a3 = v19;
  }
  if ( a3 )
  {
    v12 = (struct _LIST_ENTRY **)MiVaToFlushVm(v4);
    v15 = 1LL;
    v22 = 20;
    v23 = 8;
    v16 = v12;
    v24 = 1;
    v20 = v12;
    v25 = ((_DWORD)v12[23] & 0x40) != 0;
    if ( ((_DWORD)v12[23] & 0xF) != 0 || v12 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v17 = v23;
      v18 = ((_DWORD)v16[23] & 0xF) == 0;
    }
    else
    {
      v18 = 0;
      v17 = 9;
    }
    v21 = v18;
    v26 = 0;
    v28 = 0;
    v29 = 0LL;
    v23 = v17 & 0xFFFFFFDB;
    v30 = 0LL;
    if ( (unsigned int)i <= 1 )
    {
      MiInsertLargeTbFlushEntry(&v20, (unsigned int)(v13 - i), a2);
      return MiFlushTbList(&v20);
    }
    else
    {
      if ( (_DWORD)i != 3 )
        v15 = *(_QWORD *)(8 * i + v14 + 80512);
      MiInsertTbFlushEntry(&v20, v4, v15);
      return MiFlushTbList(&v20);
    }
  }
  return result;
}
