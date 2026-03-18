/*
 * XREFs of ulIndexToRGB @ 0x140117310
 * Callers:
 *     GreGetNearestColor @ 0x14003AA70 (GreGetNearestColor.c)
 *     ulColorRefToRGB @ 0x1401172E0 (ulColorRefToRGB.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C3380 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall ulIndexToRGB(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int v6; // eax
  int v7; // eax
  _DWORD *v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // r8d
  unsigned int v11; // r11d
  unsigned int v12; // edx
  unsigned int v13; // r11d
  unsigned int v14; // edi
  unsigned int v15; // edx
  struct _ERESOURCE **v17; // rdx
  int v18; // r8d
  __int64 v19; // rcx
  _BYTE *v20; // rcx
  unsigned int i; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _ERESOURCE *v24; // rbx
  unsigned int v25; // esi
  struct _GRETHREAD *v26; // rax
  bool v27; // zf
  struct _ERESOURCE *v28; // rbx
  struct _GRETHREAD *v29; // rax
  HSEMAPHORE v30; // [rsp+30h] [rbp+8h] BYREF

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
        v10 = (a3 & *v8) >> v8[6];
        if ( v9 < 8 )
          v10 = (v10 << (8 - v9)) | (v10 << (8 - v9) >> v9);
        v11 = v8[10];
        v12 = ((unsigned int)v4 & v8[1]) >> v8[7];
        if ( v11 < 8 )
          v12 = (v12 << (8 - v11)) | (v12 << (8 - v11) >> v11);
        v13 = v8[11];
        v14 = ((unsigned int)v4 & v8[2]) >> v8[8];
        v15 = v12 << 8;
        if ( v13 < 8 )
          v14 = (v14 << (8 - v13)) | (v14 << (8 - v13) >> v13);
        return v10 | v15 | (v14 << 16);
      }
      else if ( (v7 & 8) != 0 )
      {
        WORD1(v30) = (unsigned __int8)a3;
        LOBYTE(v30) = BYTE2(a3);
        BYTE1(v30) = BYTE1(a3);
        return (unsigned int)v30;
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
    v17 = *(struct _ERESOURCE ***)(W32GetSessionState(0LL) + 88);
    if ( (unsigned int)v4 >= 0xA )
    {
      if ( (unsigned int)v4 < 0xF6 )
      {
        SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v30, v17);
        v19 = *(_QWORD *)(a2 + 72);
        if ( v19 )
        {
          v20 = (_BYTE *)(v19 + 4);
          for ( i = 0; i < *(_DWORD *)(a2 + 28); ++i )
          {
            if ( *v20 == (_BYTE)v4 )
            {
              v22 = i;
              v23 = *(_QWORD *)(a2 + 112);
              v24 = (struct _ERESOURCE *)v30;
              v25 = *(_DWORD *)(v23 + 4 * v22);
              if ( v30 )
              {
                EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v30, v18);
                v26 = GreGetCurrentThreadCrossSessionCheck();
                if ( v26 )
                {
                  v27 = (*((_BYTE *)v26 + 21))-- == 1;
                  if ( v27 )
                    *(_QWORD *)v26 &= ~0x2000uLL;
                }
                GreReleaseSemaphoreSharedInternal(v24);
              }
              return v25;
            }
            ++v20;
          }
        }
        v28 = (struct _ERESOURCE *)v30;
        if ( v30 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v30, v18);
          v29 = GreGetCurrentThreadCrossSessionCheck();
          if ( v29 )
          {
            v27 = (*((_BYTE *)v29 + 21))-- == 1;
            if ( v27 )
              *(_QWORD *)v29 &= ~0x2000uLL;
          }
          GreReleaseSemaphoreSharedInternal(v28);
        }
        return 0LL;
      }
      else
      {
        return *((unsigned int *)v17 + (unsigned int)(v4 - 236) + 946);
      }
    }
    else
    {
      return *((unsigned int *)v17 + v4 + 946);
    }
  }
}
