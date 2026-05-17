/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x180158414
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x18008A7C4 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpQueryVA @ 0x180089D98 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrLock @ 0x18010FAC8 (RtlpHpSegMgrLock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int16 *v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int16 *v10; // r10
  int v11; // r11d
  __int16 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int16 *v14; // rcx
  unsigned __int16 *v15; // rdx
  __int16 *v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFE00000uLL;
  v17 = 0LL;
  v7 = 0LL;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v17, 0LL);
  v8 = (a2 - v5) % *a3;
  v9 = (a2 - v5) / *a3;
  RtlpHpSegMgrLock(a1, v8);
  v10 = v17;
  v11 = (unsigned __int16)(v17[1] ^ (1 << v9));
  v17[1] = v11;
  v12 = *v10;
  v13 = (unsigned __int64)(unsigned __int16)*v10 >> 15;
  if ( v11 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( *((_QWORD *)v10 + 1) != -1LL )
    {
      if ( v12 >= 0 )
        *v10 = v12 ^ (v12 ^ (v12 - 1)) & 0x7FF;
      while ( 1 )
      {
        v14 = *(unsigned __int16 **)(a1 + 8 * v13 + 128);
        if ( !v14 )
          NT_ASSERT("Link != ((void *)0)");
        *(_QWORD *)(a1 + 8 * v13 + 128) = *(_QWORD *)v14;
        if ( v14 == (unsigned __int16 *)(v10 + 4) )
          break;
        *(_QWORD *)v14 = v7;
        v7 = v14;
      }
      while ( 1 )
      {
        v15 = v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *(_QWORD *)v15 = *(_QWORD *)(a1 + 8 * v13 + 128);
        *(_QWORD *)(a1 + 8 * v13 + 128) = v15;
      }
    }
  }
  else
  {
    if ( ((v11 - 1) & v11) == 0 )
    {
      *((_QWORD *)v10 + 1) = *(_QWORD *)(a1 + 8 * v13 + 128);
      *(_QWORD *)(a1 + 8 * v13 + 128) = v10 + 4;
    }
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 120));
  if ( v5 )
    *a3 = 0x200000LL;
  return v5;
}
