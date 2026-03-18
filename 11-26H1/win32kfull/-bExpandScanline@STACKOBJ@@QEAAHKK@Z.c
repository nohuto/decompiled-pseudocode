/*
 * XREFs of ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x14026A0D0
 * Callers:
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1401DF7B0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z @ 0x1401E2D68 (-bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z.c)
 *     ?bSearchAllSpans@?$FLOODBM@$0A@@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x14033312C (-bSearchAllSpans@-$FLOODBM@$0A@@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bExpandScanline(STACKOBJ *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  int v6; // r14d
  unsigned int *v7; // rbp
  unsigned int *v8; // rax
  unsigned int *v9; // rbx

  v3 = 24LL;
  v4 = a2 + 160;
  v6 = a3;
  if ( (_DWORD)a3 != 1 )
    v3 = 16LL;
  v7 = *(unsigned int **)((char *)this + v3);
  if ( v4 <= a2 )
    return 0LL;
  v8 = (unsigned int *)PALLOCNOZ(v4, 1684817479LL, a3);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  memmove(v8, v7, *v7);
  *v9 = v4;
  Win32FreePool(v7);
  if ( v6 == 1 )
    *((_QWORD *)this + 3) = v9;
  else
    *((_QWORD *)this + 2) = v9;
  return 1LL;
}
