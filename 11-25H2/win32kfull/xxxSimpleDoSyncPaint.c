/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1400359F0
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1400356D0 (xxxInternalDoSyncPaint.c)
 *     xxxGetUpdateRgn @ 0x14004DED0 (xxxGetUpdateRgn.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14004F8CC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRect @ 0x140051110 (xxxGetUpdateRect.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x14001D2A8 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     xxxSendEraseBkgnd @ 0x1400531F0 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400538A8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x140053964 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 */

__int64 __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // ebx
  int v5; // ebp
  int v6; // r14d
  _DWORD *v7; // rax
  int v8; // r15d
  int v9; // edx
  int v10; // esi
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ebx
  int v16; // ebp
  __int64 v17; // r12
  void *v18; // r14
  __int64 v19; // rsi
  HRGN NCUpdateRgn; // rax
  HRGN v21; // rsi
  int v22; // [rsp+20h] [rbp-58h] BYREF
  __int16 v23; // [rsp+24h] [rbp-54h]
  __int128 v24; // [rsp+26h] [rbp-52h]
  __int128 v25; // [rsp+36h] [rbp-42h]
  __int16 v26; // [rsp+46h] [rbp-32h]
  int v27; // [rsp+48h] [rbp-30h]
  __int64 v28; // [rsp+4Ch] [rbp-2Ch]
  int v29; // [rsp+54h] [rbp-24h]
  int v30; // [rsp+58h] [rbp-20h]

  result = (__int64)a1;
  if ( a1 )
  {
    while ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 27LL) & 2) == 0 )
    {
      result = *(_QWORD *)(result + 104);
      if ( !result )
        goto LABEL_6;
    }
  }
  if ( !result )
  {
LABEL_6:
    v3 = *((_QWORD *)a1 + 5);
    v4 = *(_DWORD *)(v3 + 28);
    v5 = *(_DWORD *)(v3 + 24);
    v6 = *(_DWORD *)(v3 + 232);
    *(_BYTE *)(v3 + 18) &= ~0x40u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_10:
      v14 = *((_QWORD *)a1 + 5);
      result = *(unsigned __int8 *)(v14 + 17);
      v15 = (*(unsigned __int8 *)(v14 + 17) >> 2) & 2 | 1;
      if ( (result & 2) == 0 )
        v15 = (*(unsigned __int8 *)(v14 + 17) >> 2) & 2;
      if ( v15 )
      {
        if ( (*(_BYTE *)(v14 + 31) & 0x10) != 0 )
        {
          result = (__int64)PtiCurrent();
          v19 = result;
          if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) )
          {
            SetOrClrWF(0LL, a1, 258LL, 1LL);
            result = SetOrClrWF(0LL, a1, 260LL, 1LL);
            LOBYTE(v15) = v15 & 0xFE;
          }
          if ( *((_QWORD *)a1 + 2) == v19 )
          {
            NCUpdateRgn = GetNCUpdateRgn(a1, 1);
            v21 = NCUpdateRgn;
            if ( (v15 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
              xxxSendNCPaint(a1, NCUpdateRgn);
            if ( (v15 & 1) != 0 )
            {
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
              {
                DeleteMaybeSpecialRgn(v21);
                v21 = GetNCUpdateRgn(a1, 0);
              }
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 2) != 0 )
              {
                SetOrClrWF(0LL, a1, 258LL, 1LL);
                SetOrClrWF(0LL, a1, 260LL, 1LL);
                xxxSendEraseBkgnd(a1, 0LL, v21);
              }
            }
            return DeleteMaybeSpecialRgn(v21);
          }
        }
        else
        {
          SetOrClrWF(0LL, a1, 264LL, 1LL);
          SetOrClrWF(0LL, a1, 258LL, 1LL);
          return SetOrClrWF(0LL, a1, 260LL, 1LL);
        }
      }
      return result;
    }
    v7 = (_DWORD *)*((_QWORD *)a1 + 5);
    v8 = v7[7];
    v9 = v7[6];
    v10 = v4 ^ v8;
    v11 = v7[58];
    v12 = v5 ^ v9;
    v13 = v6 ^ v11;
    if ( !v10 )
    {
      if ( v12 )
        goto LABEL_15;
      if ( !v13 )
        goto LABEL_10;
    }
    if ( (v10 & 0xB9CF0000) != 0 )
    {
      v16 = -16;
      goto LABEL_19;
    }
LABEL_15:
    if ( (v12 & 0x4E27A9) != 0 )
    {
      v16 = -20;
      v8 = v9;
    }
    else
    {
      if ( (v13 & 0x3F2C0) == 0 )
      {
LABEL_21:
        if ( (v10 & 0x1C40000) != 0 || (v12 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(a1, 1LL);
        goto LABEL_10;
      }
      v16 = -268435456;
      v8 = v11;
    }
LABEL_19:
    DirtyVisRgnTrackers(a1);
    v17 = *(_QWORD *)a1;
    v18 = (void *)ReferenceDwmApiPort();
    IncrementDWMWindowUniqueness();
    if ( v18 )
    {
      v22 = 3932180;
      v26 = 0;
      v27 = 1073741846;
      v23 = 0x8000;
      v28 = v17;
      v29 = v16;
      v24 = 0LL;
      v30 = v8;
      v25 = 0LL;
      LpcRequestPort(v18, &v22);
      ObfDereferenceObject(v18);
    }
    goto LABEL_21;
  }
  return result;
}
