/*
 * XREFs of GxpWriteFrameBufferPixels @ 0x1404B9540
 * Callers:
 *     BgpGxDrawRectangle @ 0x1404B947C (BgpGxDrawRectangle.c)
 * Callees:
 *     BgpGxConvertRectangleEx @ 0x14048B3C0 (BgpGxConvertRectangleEx.c)
 *     BgpGetBitsPerPixel @ 0x1404B98EC (BgpGetBitsPerPixel.c)
 *     GxpAdjustRectangleToFrameBuffer @ 0x1404B9914 (GxpAdjustRectangleToFrameBuffer.c)
 *     BgfxGrowDirtyRect @ 0x14071AE88 (BgfxGrowDirtyRect.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BgpGxRectangleDestroy @ 0x140C59414 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall GxpWriteFrameBufferPixels(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r15
  __int64 v3; // rdi
  unsigned int BitsPerPixel; // r12d
  __int64 result; // rax
  char *v6; // r14
  unsigned int v7; // r12d
  unsigned int v8; // r9d
  char *v9; // rsi
  unsigned int v10; // r13d
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int i; // esi
  int v16; // ebx
  char *v17; // r9
  unsigned int j; // r14d
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  size_t v21; // r13
  __int64 v22; // r15
  __int64 v23; // rdi
  _BYTE *v24; // rsi
  char v25; // r9
  int v26; // edx
  unsigned __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v31; // [rsp+60h] [rbp-A0h]
  _DWORD v32[2]; // [rsp+68h] [rbp-98h] BYREF
  int Blink_high; // [rsp+70h] [rbp-90h]
  unsigned int v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v38[2]; // [rsp+A8h] [rbp-58h] BYREF
  int Dpc; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B4h] [rbp-4Ch]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  _DWORD *v43; // [rsp+C8h] [rbp-38h]
  _BYTE v44[80]; // [rsp+D0h] [rbp-30h] BYREF

  v43 = a2;
  v2 = a2;
  v42 = a1;
  v3 = a1;
  v36 = 0LL;
  v29 = 0LL;
  v30 = 0;
  memset_0(v44, 0, 0x48uLL);
  v37 = 0LL;
  v35 = 0LL;
  v28 = 0;
  v27 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  v32[0] = gLoadedDiffHivesLock.Timer.TimerListEntry.Blink;
  v32[1] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
  Blink_high = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Blink);
  if ( !v3 || !*(_DWORD *)(v3 + 4) || !*(_DWORD *)v3 || *(_DWORD *)(v3 + 8) != BitsPerPixel || !v2 )
    return 3221225485LL;
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer(
             v3,
             (_DWORD)v2,
             (unsigned int)v32,
             (unsigned int)&v37,
             (__int64)&v35,
             (__int64)&v28,
             1);
  if ( (int)result >= 0 )
  {
    if ( !LOBYTE(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) )
    {
      v24 = 0LL;
      v38[0] = *(_DWORD *)v3;
      v38[1] = *(_DWORD *)(v3 + 4);
      v27 = 0LL;
      if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 8) != 0 )
      {
        if ( (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0 )
        {
          v25 = 1;
          v27 = (unsigned __int64)v44;
        }
        else
        {
          v25 = 0;
        }
        v16 = BgpGxConvertRectangleEx(v3, 4LL, &v27, v25);
        if ( v16 < 0 )
          goto LABEL_20;
        v24 = (_BYTE *)v27;
        v40 = *(_DWORD *)(v27 + 12);
        v41 = *(_QWORD *)(v27 + 24);
        Dpc = 1;
      }
      else
      {
        v40 = *(_DWORD *)(v3 + 12);
        v41 = *(_QWORD *)(v3 + 24);
        Dpc = (int)gLoadedDiffHivesLock.Timer.Dpc;
      }
      if ( !gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink )
      {
        v16 = -1073741823;
        goto LABEL_20;
      }
      v16 = ((__int64 (__fastcall *)(_DWORD *, _DWORD *, _QWORD))gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink)(
              v38,
              v2,
              0LL);
      if ( v24 && v24 != v44 )
        BgpGxRectangleDestroy(v24);
      if ( v16 < 0 )
        goto LABEL_20;
      goto LABEL_18;
    }
    v6 = *(char **)(v3 + 24);
    v7 = BitsPerPixel >> 3;
    v8 = v7 * v37;
    v9 = (char *)gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink + v7 * (*v2 + v2[1] * Blink_high);
    v34 = v7 * v37;
    if ( !BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) )
      goto LABEL_12;
    if ( BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) != 1 )
    {
      if ( BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) == 2 )
      {
LABEL_12:
        v10 = *(_DWORD *)(v3 + 4);
        v11 = v10;
        v12 = *(_DWORD *)v3;
        v13 = *(_DWORD *)v3;
LABEL_13:
        v14 = v7 * v11;
        v30 = v7 * Blink_high;
        v29 = __PAIR64__(v12, v14);
        if ( BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) )
        {
          v36 = __PAIR64__(v13, v10);
          for ( i = 0; ; ++i )
          {
            HIDWORD(v27) = i;
            if ( i >= *(_DWORD *)v3 )
              goto LABEL_16;
            v17 = (char *)(*(_QWORD *)(v3 + 24) + i * v8);
            for ( j = 0; ; ++j )
            {
              LODWORD(v27) = j;
              v31 = (unsigned __int64)v17;
              if ( j >= *(_DWORD *)(v3 + 4) )
                break;
              if ( !BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) )
              {
                LODWORD(v20) = j;
                v19 = HIDWORD(v27);
                goto LABEL_29;
              }
              if ( BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) == 1 )
              {
                v20 = HIDWORD(v27);
                v26 = v10 - j;
                goto LABEL_57;
              }
              if ( BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) == 2 )
              {
                LODWORD(v20) = v10 - j - 1;
                v26 = HIDWORD(v36) - HIDWORD(v27);
LABEL_57:
                LODWORD(v19) = v26 - 1;
                goto LABEL_29;
              }
              if ( BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) != 3 )
              {
                v16 = -1073741637;
                goto LABEL_20;
              }
              LODWORD(v19) = j;
              LODWORD(v20) = HIDWORD(v36) - HIDWORD(v27) - 1;
LABEL_29:
              memmove(
                (char *)gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink
              + v7 * (*v2 + Blink_high * ((_DWORD)v19 + v2[1]) + (_DWORD)v20),
                v17,
                v7);
              v17 = (char *)(v7 + v31);
            }
            v8 = v34;
          }
        }
        if ( v12 )
        {
          v21 = v14;
          v31 = v8;
          v22 = v8;
          v23 = v7 * Blink_high;
          do
          {
            memmove(v9, v6, v21);
            v6 += v22;
            v9 += v23;
            --v12;
          }
          while ( v12 );
          v3 = v42;
          v2 = v43;
        }
LABEL_16:
        if ( gLoadedDiffHivesLock.SuspendEvent.Header.WaitListHead.Blink )
          BgfxGrowDirtyRect(&v29, v2, v7);
LABEL_18:
        v16 = 0;
LABEL_20:
        *(_DWORD *)v3 = HIDWORD(v37);
        *(_DWORD *)(v3 + 4) = v37;
        *(_DWORD *)(v3 + 12) = v28;
        *(_QWORD *)v2 = v35;
        return (unsigned int)v16;
      }
      if ( BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) != 3 )
      {
        v16 = -1073741811;
        goto LABEL_20;
      }
    }
    v13 = *(_DWORD *)v3;
    v11 = *(_DWORD *)v3;
    v12 = *(_DWORD *)(v3 + 4);
    v10 = v12;
    goto LABEL_13;
  }
  return result;
}
