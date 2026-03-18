/*
 * XREFs of ulIndexToRGB @ 0x140090D30
 * Callers:
 *     GreGetNearestColor @ 0x14008EEF0 (GreGetNearestColor.c)
 *     ulColorRefToRGB @ 0x14015F890 (ulColorRefToRGB.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8268 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall ulIndexToRGB(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  unsigned int v6; // eax
  int v7; // eax
  _DWORD *v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  unsigned int v11; // r11d
  unsigned int v12; // r8d
  unsigned int v13; // r11d
  unsigned int v14; // esi
  unsigned int v15; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  _BYTE *v19; // rcx
  unsigned int i; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _ERESOURCE *v23; // rbx
  unsigned int v24; // edi
  struct _GRETHREAD *v25; // rax
  bool v26; // zf
  struct _ERESOURCE *v27; // rbx
  struct _GRETHREAD *v28; // rax
  HSEMAPHORE v29; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a3;
  if ( a1 )
  {
    v6 = *(_DWORD *)(a1 + 28);
    if ( v6 )
    {
      if ( v6 > a3 )
        return *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL * a3) & 0xFFFFFF;
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 24);
      if ( (v7 & 2) != 0 )
      {
        v8 = *(_DWORD **)(a1 + 112);
        v9 = v8[9];
        v10 = ((unsigned int)v4 & *v8) >> v8[6];
        if ( v9 < 8 )
          v10 = (v10 << (8 - v9) >> v9) | (v10 << (8 - v9));
        v11 = v8[10];
        v12 = ((unsigned int)v4 & v8[1]) >> v8[7];
        if ( v11 < 8 )
          v12 = (v12 << (8 - v11) >> v11) | (v12 << (8 - v11));
        v13 = v8[11];
        v14 = ((unsigned int)v4 & v8[2]) >> v8[8];
        v15 = v12 << 8;
        if ( v13 < 8 )
          v14 = (v14 << (8 - v13) >> v13) | (v14 << (8 - v13));
        return v10 | v15 | (v14 << 16);
      }
      else if ( (v7 & 8) != 0 )
      {
        WORD1(v29) = (unsigned __int8)a3;
        LOBYTE(v29) = BYTE2(a3);
        BYTE1(v29) = BYTE1(a3);
        return (unsigned int)v29;
      }
      else
      {
        return a3 & 0xFFFFFF;
      }
    }
    return v3;
  }
  else
  {
    v17 = *(_QWORD *)(W32GetSessionState(0LL) + 88);
    if ( (unsigned int)v4 >= 0xA )
    {
      if ( (unsigned int)v4 < 0xF6 )
      {
        SEMOBJ<13>::SEMOBJ<13>(&v29, v17);
        v18 = *(_QWORD *)(a2 + 72);
        if ( v18 )
        {
          v19 = (_BYTE *)(v18 + 4);
          for ( i = 0; i < *(_DWORD *)(a2 + 28); ++i )
          {
            if ( *v19 == (_BYTE)v4 )
            {
              v21 = i;
              v22 = *(_QWORD *)(a2 + 112);
              v23 = (struct _ERESOURCE *)v29;
              v24 = *(_DWORD *)(v22 + 4 * v21);
              if ( v29 )
              {
                EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v29);
                v25 = GreGetCurrentThreadCrossSessionCheck();
                if ( v25 )
                {
                  v26 = (*((_BYTE *)v25 + 21))-- == 1;
                  if ( v26 )
                    *(_QWORD *)v25 &= ~0x2000uLL;
                }
                GreReleaseSemaphoreSharedInternal(v23);
              }
              return v24;
            }
            ++v19;
          }
        }
        v27 = (struct _ERESOURCE *)v29;
        if ( v29 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v29);
          v28 = GreGetCurrentThreadCrossSessionCheck();
          if ( v28 )
          {
            v26 = (*((_BYTE *)v28 + 21))-- == 1;
            if ( v26 )
              *(_QWORD *)v28 &= ~0x2000uLL;
          }
          GreReleaseSemaphoreSharedInternal(v27);
        }
        return 0LL;
      }
      else
      {
        return *(unsigned int *)(v17 + 4LL * (unsigned int)(v4 - 236) + 3680);
      }
    }
    else
    {
      return *(unsigned int *)(v17 + 4 * v4 + 3680);
    }
  }
}
