/*
 * XREFs of HmgShareLockCheckIgnoreStockBit @ 0x1400C7380
 * Callers:
 *     EngAssociateSurface @ 0x1400C72B0 (EngAssociateSurface.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019500 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLockCheckIgnoreStockBit(__int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  unsigned __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r10
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r9
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int *v20; // [rsp+20h] [rbp-20h] BYREF
  int v21; // [rsp+28h] [rbp-18h]
  __int16 v22; // [rsp+2Ch] [rbp-14h]
  __int64 v23; // [rsp+30h] [rbp-10h]

  v2 = 0LL;
  v20 = 0LL;
  v4 = a1;
  v21 = 0;
  v22 = 0;
  v23 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v20, (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000, 0);
  if ( v21 )
  {
    if ( *((_BYTE *)v20 + 14) != a2 || ((HIWORD(v4) ^ *((unsigned __int16 *)v20 + 6)) & 0xFFFFFF7F) != 0 )
    {
      HIBYTE(v22) = 1;
      goto LABEL_27;
    }
    v5 = *v20;
    v6 = *(_QWORD *)(v23 + 5672);
    if ( (unsigned int)v5 >= 0x10000 )
    {
      if ( *(_DWORD *)v6 <= 0x10000u )
      {
        v5 = (unsigned __int16)v5;
      }
      else
      {
        v7 = *(_QWORD *)(v6 + 16);
        v8 = *(_DWORD *)(v7 + 2056);
        if ( (unsigned __int16)v5 >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
        {
          v12 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v5 >= v8 )
            v9 = (((unsigned __int16)v5 - v8) >> 16) + 1;
          else
            v9 = 0;
          v10 = *(_QWORD *)(v7 + 8LL * v9 + 8);
          if ( v9 )
            v11 = (unsigned __int16)v5 + ((1 - v9) << 16) - v8;
          else
            v11 = (unsigned __int16)v5;
          v12 = 0LL;
          if ( (unsigned int)v11 < *(_DWORD *)(v10 + 20) )
            v12 = *(_QWORD *)v10 + 24 * v11;
        }
        if ( *(unsigned __int8 *)(v12 + 13) == WORD1(v5) )
          v5 = (unsigned __int16)v5;
      }
    }
    v13 = *(_QWORD *)(v6 + 16);
    v14 = *(_DWORD *)(v13 + 2056);
    if ( (unsigned int)v5 < v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v5 >= v14 )
        v15 = (((unsigned int)v5 - v14) >> 16) + 1;
      else
        v15 = 0;
      v16 = *(_QWORD *)(v13 + 8LL * v15 + 8);
      if ( v15 )
        v5 = ((1 - v15) << 16) - v14 + (unsigned int)v5;
      if ( (unsigned int)v5 < *(_DWORD *)(v16 + 20) )
        v2 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
    }
    ++*(_DWORD *)(v2 + 8);
    if ( a2 == 5 )
    {
      v17 = *(_QWORD *)(v2 + 680);
      v18 = 0LL;
    }
    else
    {
      if ( a2 != 16 )
      {
LABEL_27:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
        goto LABEL_28;
      }
      v17 = *(_QWORD *)(v2 + 136);
      v18 = 2LL;
    }
    TrackObjectReferenceIncrement(v18, v17);
    goto LABEL_27;
  }
LABEL_28:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v20);
  return v2;
}
