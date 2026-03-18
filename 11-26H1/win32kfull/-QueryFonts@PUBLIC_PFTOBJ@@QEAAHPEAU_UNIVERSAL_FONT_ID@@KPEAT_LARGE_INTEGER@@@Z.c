/*
 * XREFs of ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x14025B1C8
 * Callers:
 *     ?GreQueryFonts@@YAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1403109EC (-GreQueryFonts@@YAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0PffIterator@@QEAA@PEAVPFF@@@Z @ 0x140297050 (--0PffIterator@@QEAA@PEAVPFF@@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::QueryFonts(
        PUBLIC_PFTOBJ *this,
        struct _UNIVERSAL_FONT_ID *a2,
        unsigned int a3,
        union _LARGE_INTEGER *a4)
{
  int v4; // ebx
  int v8; // ebp
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int i; // r9d
  int v13; // r9d
  int v14; // r10d
  __int64 j; // rcx
  __int64 v16; // rdx
  char v17; // al
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  LODWORD(v19) = 0;
  *a4 = *(union _LARGE_INTEGER *)((char *)this + 8);
  v8 = 0;
  v9 = 0;
  v10 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96);
  if ( a2 && a3 )
  {
    v20 = *(_QWORD *)(v10 + 20320);
    GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v20);
    if ( *(_DWORD *)(v10 + 24288) == 2 )
    {
      v9 = 1;
      *(_QWORD *)a2 = *(_QWORD *)(v10 + 24288);
    }
    v11 = *(_QWORD *)this;
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 24LL); i = v14 + v13 )
    {
      PffIterator::PffIterator((PffIterator *)&v19, *(struct PFF **)(v11 + 8LL * i + 40));
      for ( j = v19; j && v9 < a3; v19 = j )
      {
        if ( (*(_DWORD *)(j + 52) & 0x20) == 0 )
        {
          v16 = v9;
          v9 += v14;
          *((_DWORD *)a2 + 2 * v16 + 1) = v14;
          *((_DWORD *)a2 + 2 * v16) = *(_DWORD *)(j + 144);
        }
        do
        {
          j = *(_QWORD *)(j + 8);
          if ( !j || (v8 |= v14, v17 = v14, (*(_DWORD *)(j + 52) & 0x10000) == 0) )
            v17 = 0;
          if ( ((unsigned __int8)v8 & (unsigned __int8)v14) != 0 )
            v8 &= ~1u;
        }
        while ( v17 );
      }
      v11 = *(_QWORD *)this;
    }
    SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v20);
    return v9;
  }
  else
  {
    LOBYTE(v4) = *(_DWORD *)(v10 + 24288) == 2;
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 28LL) + v4);
  }
}
