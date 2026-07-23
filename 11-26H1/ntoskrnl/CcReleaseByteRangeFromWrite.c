/*
 * XREFs of CcReleaseByteRangeFromWrite @ 0x1404668F0
 * Callers:
 *     CcFlushCachePostProcessOneRange @ 0x14039BBBC (CcFlushCachePostProcessOneRange.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140466788 (CcNotifyOfMappedWriteComplete.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x14039F000 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcReleaseByteRangeFromWrite(__int64 a1, __int64 *a2, unsigned int a3, _WORD *a4, char a5)
{
  __int64 v5; // rbx
  _WORD *v6; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = a4;
  if ( a4 )
  {
    if ( *a4 != 765 )
      KeBugCheckEx(0x34u, 0x158AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    do
    {
      v10 = *((_QWORD *)v6 + 2);
      if ( *v6 == 765 )
      {
        v5 = *((_QWORD *)v6 + 1);
        if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
          CcUnpinFileDataEx((char *)v6, (*(_DWORD *)(a1 + 152) & 2) != 0, 2);
        if ( a5 )
          CcSetDirtyPinnedData(v6, 0LL);
        CcUnpinFileDataEx((char *)v6, 1, 0);
      }
      v6 = (_WORD *)(v10 - 16);
    }
    while ( *a2 != v5 );
  }
  else if ( a5 )
  {
    v11 = *a2;
    while ( 1 )
    {
      v13 = v11;
      if ( !a3 )
        break;
      if ( (v11 & 0xFFFFFFFFFE000000uLL) >= ((v11 + a3 - 1LL) & 0xFFFFFFFFFE000000uLL) )
        v12 = a3;
      else
        v12 = ((v11 + 0x1FFFFFF) & 0xFE000000) - v11;
      if ( v12 > 0x2000000 )
        KeBugCheckEx(0x34u, 0x1577uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      CcSetDirtyInMask(a1, &v13, v12, 0LL);
      v11 += v12;
      a3 -= v12;
    }
  }
}
