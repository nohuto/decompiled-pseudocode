/*
 * XREFs of MiInsertReadiedSystemCacheViews @ 0x1402A28A4
 * Callers:
 *     MiRebalanceSystemCacheFreedViews @ 0x1402A2790 (MiRebalanceSystemCacheFreedViews.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A29D8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiReleaseSystemCacheView @ 0x1402A6600 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1402C6BA0 (MiObtainSystemCacheView.c)
 *     MiReleaseNoFlushSystemCacheView @ 0x1404B451C (MiReleaseNoFlushSystemCacheView.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInsertReadiedSystemCacheViews(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rdx
  unsigned int v9; // r11d
  _QWORD *i; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  unsigned int j; // r11d
  __int64 v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rax

  v3 = a1 + 2688;
  v4 = a1 + 2720;
LABEL_2:
  while ( 1 )
  {
    v5 = (_QWORD *)*a2;
    if ( (_QWORD *)*a2 == a2 )
      break;
    if ( (_QWORD *)v5[1] != a2 )
      goto LABEL_10;
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 )
      goto LABEL_10;
    *a2 = v6;
    *(_QWORD *)(v6 + 8) = a2;
    v5[4] &= 0x3FFFFFFFFFFFFFFFuLL;
    v7 = (*((_DWORD *)v5 + 4) >> 18) & 7;
    v8 = &v5[-5 * v7];
    v9 = 0;
    for ( i = v8 + 4; ; i += 5 )
    {
      if ( v9 >= 8 )
      {
        v12 = &v5[-5 * v7];
        for ( j = 0; j < 8; ++j )
        {
          if ( j != v7 )
          {
            v14 = *v12;
            if ( *(_QWORD **)(*v12 + 8LL) != v12 )
              goto LABEL_10;
            v15 = (_QWORD *)v12[1];
            if ( (_QWORD *)*v15 != v12 )
              goto LABEL_10;
            *v15 = v14;
            *(_QWORD *)(v14 + 8) = v15;
          }
          v12 += 5;
        }
        *(_QWORD *)(v3 + 16) -= 7LL;
        v16 = *(_QWORD **)(v4 + 8);
        if ( *v16 == v4 )
        {
          *v8 = v4;
          v8[1] = v16;
          *v16 = v8;
          *(_QWORD *)(v4 + 8) = v8;
          ++*(_QWORD *)(v4 + 16);
          goto LABEL_2;
        }
LABEL_10:
        __fastfail(3u);
      }
      if ( *i >= 0x4000000000000000uLL )
        break;
      ++v9;
    }
    v11 = *(_QWORD **)(v3 + 8);
    if ( *v11 != v3 )
      goto LABEL_10;
    *v5 = v3;
    v5[1] = v11;
    *v11 = v5;
    *(_QWORD *)(v3 + 8) = v5;
    ++*(_QWORD *)(v3 + 16);
  }
  a2[2] = 0LL;
}
