/*
 * XREFs of DCELogicalSpeedTopLevelHitTest @ 0x140169380
 * Callers:
 *     <none>
 * Callees:
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008CBCC (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x140169524 (IsWindowUnderActiveLockScreen.c)
 */

struct tagWND *__fastcall DCELogicalSpeedTopLevelHitTest(struct tagPOINT *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  struct tagWND *i; // rbx
  __int64 v6; // rcx
  unsigned __int8 v8; // r8
  int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  struct tagPOINT v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct tagPOINT v15; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144) + 8LL) + 24LL);
  if ( v4 )
  {
    for ( i = *(struct tagWND **)(v4 + 112); ; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      if ( !i )
        return i;
      v6 = *((_QWORD *)i + 5);
      v15 = *a1;
      if ( (*(_BYTE *)(v6 + 31) & 0x10) != 0 )
      {
        v8 = *(_BYTE *)(v6 + 233);
        v9 = (v8 >> 4) & 2 | 1;
        if ( (v8 & 0x40) == 0 )
          v9 = (v8 >> 4) & 2;
        v10 = v9 | 1;
        if ( (v8 & 0x80u) == 0 )
          v10 = v9;
        if ( !v10 && !(unsigned int)IsWindowUnderActiveLockScreen(i) )
        {
          if ( (((unsigned __int16)(v2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)i + 5) + 288LL) >> 8)) & 0x1FF) != 0 )
          {
            LogicalToPhysicalDPIPoint(&v15, &v15, v2, 0LL);
            PhysicalToLogicalDPIPoint(&v15, &v15, *(unsigned int *)(*((_QWORD *)i + 5) + 288LL), 0LL);
          }
          v11 = *((_QWORD *)i + 5);
          v12 = v15;
          if ( v15.x >= *(_DWORD *)(v11 + 88)
            && v15.x < *(_DWORD *)(v11 + 96)
            && v15.y >= *(_DWORD *)(v11 + 92)
            && v15.y < *(_DWORD *)(v11 + 100) )
          {
            v13 = *(_QWORD *)(v11 + 168);
            if ( v13 )
            {
              if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))GrePtInRegion)(v13, v15) )
                continue;
              v12 = v15;
            }
            v14 = *((_QWORD *)i + 5);
            if ( (*(_BYTE *)(v14 + 26) & 8) == 0 || (*(_DWORD *)(v14 + 232) & 2) != 0 || DCELayerHitTest(i, v12) )
              return i;
          }
        }
      }
    }
  }
  return 0LL;
}
