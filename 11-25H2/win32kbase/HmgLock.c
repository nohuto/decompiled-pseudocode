/*
 * XREFs of HmgLock @ 0x140018210
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     GreMakeBitmapNonStock @ 0x14006F4E0 (GreMakeBitmapNonStock.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140085D1C (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     GreLockRegion @ 0x1401376E0 (GreLockRegion.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x14014A34C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1401D0A50 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1401D0B60 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1401D0BC0 (EngUnlockDriverObj.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?IncrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x140019480 (-IncrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall HmgLock(__int64 a1, char a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  unsigned int *v5; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // r10
  unsigned int v12; // r11d
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned int v16; // r8d
  __int64 v17; // r10
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // r10
  unsigned int v22; // r11d
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // r10
  unsigned int v26; // r8d
  __int64 v27; // r11
  _DWORD *v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r8
  unsigned int v31; // r11d
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // r10
  unsigned int v35; // r8d
  __int64 v36; // r11
  unsigned int *v38; // [rsp+20h] [rbp-38h] BYREF
  int v39; // [rsp+28h] [rbp-30h]
  __int16 v40; // [rsp+2Ch] [rbp-2Ch]
  __int64 v41; // [rsp+30h] [rbp-28h]

  v2 = 0LL;
  v38 = 0LL;
  v39 = 0;
  v4 = a1;
  v40 = 0;
  v41 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  HANDLELOCK::vLockHandle(&v38, (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000, 0LL);
  if ( v39 )
  {
    v5 = v38;
    if ( *((_BYTE *)v38 + 14) == a2 && *((_WORD *)v38 + 6) == HIWORD(v4) )
    {
      CurrentThread = KeGetCurrentThread();
      v5 = v38;
      v7 = v41;
      v8 = *v38;
      v9 = *(_QWORD *)(v41 + 5672);
      if ( (unsigned int)v8 >= 0x10000 )
      {
        v10 = (unsigned __int16)v8;
        if ( *(_DWORD *)v9 <= 0x10000u )
        {
          v8 = (unsigned __int16)v8;
        }
        else
        {
          v11 = *(_QWORD *)(v9 + 16);
          v12 = *(_DWORD *)(v11 + 2056);
          if ( (unsigned __int16)v8 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
          {
            v14 = 0LL;
          }
          else
          {
            if ( (unsigned __int16)v8 >= v12 )
            {
              v13 = *(_QWORD *)(v11 + 8LL * ((((unsigned __int16)v8 - v12) >> 16) + 1) + 8);
              v10 = -65536 * (((unsigned __int16)v8 - v12) >> 16) - v12 + (unsigned __int16)v8;
            }
            else
            {
              v13 = *(_QWORD *)(v11 + 8);
            }
            v14 = 0LL;
            if ( v10 < *(_DWORD *)(v13 + 20) )
              v14 = *(_QWORD *)v13 + 24LL * v10;
          }
          if ( *(unsigned __int8 *)(v14 + 13) == WORD1(v8) )
            v8 = (unsigned __int16)v8;
        }
      }
      v15 = *(_QWORD *)(v9 + 16);
      v16 = *(_DWORD *)(v15 + 2056);
      if ( (unsigned int)v8 < v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
      {
        if ( (unsigned int)v8 >= v16 )
        {
          v17 = *(_QWORD *)(v15 + 8LL * ((((unsigned int)v8 - v16) >> 16) + 1) + 8);
          v8 = -65536 * (((unsigned int)v8 - v16) >> 16) - v16 + (unsigned int)v8;
        }
        else
        {
          v17 = *(_QWORD *)(v15 + 8);
        }
        if ( (unsigned int)v8 < *(_DWORD *)(v17 + 20) )
          v2 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v8 >> 8)) + 16LL * (unsigned __int8)v8 + 8);
      }
      if ( !*(_WORD *)(v2 + 12) || *(struct _KTHREAD **)(v2 + 16) == CurrentThread )
      {
        OBJECT::IncrementExclusiveLockCount((OBJECT *)v2);
        *(_QWORD *)(v2 + 16) = CurrentThread;
      }
      else
      {
        v2 = 0LL;
      }
    }
    else
    {
      v7 = v41;
    }
    v18 = *v5;
    v19 = *(_QWORD *)(v7 + 5672);
    if ( (unsigned int)v18 >= 0x10000 )
    {
      v20 = (unsigned __int16)v18;
      if ( *(_DWORD *)v19 <= 0x10000u )
      {
        v18 = (unsigned __int16)v18;
      }
      else
      {
        v21 = *(_QWORD *)(v19 + 16);
        v22 = *(_DWORD *)(v21 + 2056);
        if ( (unsigned __int16)v18 >= v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
        {
          v24 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v18 >= v22 )
          {
            v23 = *(_QWORD *)(v21 + 8LL * ((((unsigned __int16)v18 - v22) >> 16) + 1) + 8);
            v20 = -65536 * (((unsigned __int16)v18 - v22) >> 16) - v22 + (unsigned __int16)v18;
          }
          else
          {
            v23 = *(_QWORD *)(v21 + 8);
          }
          v24 = 0LL;
          if ( v20 < *(_DWORD *)(v23 + 20) )
            v24 = *(_QWORD *)v23 + 24LL * v20;
        }
        if ( *(unsigned __int8 *)(v24 + 13) == WORD1(v18) )
          v18 = (unsigned __int16)v18;
      }
    }
    v25 = *(_QWORD *)(v19 + 16);
    v26 = *(_DWORD *)(v25 + 2056);
    if ( (unsigned int)v18 >= v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16)
      || ((unsigned int)v18 >= v26
        ? (v27 = *(_QWORD *)(v25 + 8LL * ((((unsigned int)v18 - v26) >> 16) + 1) + 8),
           v18 = -65536 * (((unsigned int)v18 - v26) >> 16) - v26 + (unsigned int)v18)
        : (v27 = *(_QWORD *)(v25 + 8)),
          (unsigned int)v18 >= *(_DWORD *)(v27 + 20)) )
    {
      v28 = 0LL;
    }
    else
    {
      v28 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18 + 8);
    }
    v29 = (unsigned __int16)*v28 | (*v28 >> 8) & 0xFF0000;
    if ( v29 >= 0x10000 )
    {
      v30 = (unsigned __int16)*v28;
      if ( *(_DWORD *)v19 <= 0x10000u )
      {
        v29 = (unsigned __int16)*v28;
      }
      else
      {
        v31 = *(_DWORD *)(v25 + 2056);
        if ( (unsigned __int16)*v28 >= v31 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
        {
          v33 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)*v28 >= v31 )
          {
            v32 = *(_QWORD *)(v25 + 8LL * ((((unsigned __int16)*v28 - v31) >> 16) + 1) + 8);
            v30 = -65536 * (((unsigned __int16)v29 - v31) >> 16) - v31 + (unsigned __int16)v29;
          }
          else
          {
            v32 = *(_QWORD *)(v25 + 8);
          }
          v33 = 0LL;
          if ( (unsigned int)v30 < *(_DWORD *)(v32 + 20) )
            v33 = *(_QWORD *)v32 + 24 * v30;
        }
        if ( *(unsigned __int8 *)(v33 + 13) == HIWORD(v29) )
          v29 = (unsigned __int16)v29;
      }
    }
    v34 = *(_QWORD *)(v19 + 16);
    v35 = *(_DWORD *)(v34 + 2056);
    if ( v29 < v35 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16) )
    {
      if ( v29 >= v35 )
      {
        v36 = *(_QWORD *)(v34 + 8LL * (((v29 - v35) >> 16) + 1) + 8);
        v29 += -65536 * ((v29 - v35) >> 16) - v35;
      }
      else
      {
        v36 = *(_QWORD *)(v34 + 8);
      }
      *(_BYTE *)(*(_QWORD *)v36 + 24LL * v29 + 6) = 0;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v36 + 24) + 8 * ((unsigned __int64)v29 >> 8)) + 16LL * (unsigned __int8)v29,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v2;
}
