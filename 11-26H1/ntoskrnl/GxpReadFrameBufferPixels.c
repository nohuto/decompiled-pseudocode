/*
 * XREFs of GxpReadFrameBufferPixels @ 0x140C596CC
 * Callers:
 *     BgpGxReadRectangle @ 0x140C59390 (BgpGxReadRectangle.c)
 * Callees:
 *     BgpGetBitsPerPixel @ 0x1404B98EC (BgpGetBitsPerPixel.c)
 *     GxpAdjustRectangleToFrameBuffer @ 0x1404B9914 (GxpAdjustRectangleToFrameBuffer.c)
 *     GxpGetRotatedPixelOffset @ 0x1404C5DB0 (GxpGetRotatedPixelOffset.c)
 *     BgpGetResolution @ 0x14050E808 (BgpGetResolution.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall GxpReadFrameBufferPixels(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r12d
  unsigned int *v3; // rsi
  unsigned int v5; // r15d
  _DWORD *Resolution; // rax
  int v7; // r9d
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // r8d
  __int64 result; // rax
  __int64 v12; // r8
  int RotatedPixelOffset; // r14d
  char *v14; // r13
  unsigned int v15; // ebx
  char *v16; // r12
  size_t v17; // r14
  __int64 v18; // rsi
  unsigned int i; // eax
  unsigned __int64 v20; // [rsp+40h] [rbp-69h]
  __int64 v21; // [rsp+48h] [rbp-61h] BYREF
  int v22; // [rsp+50h] [rbp-59h]
  __int64 v23; // [rsp+58h] [rbp-51h] BYREF
  int v24; // [rsp+60h] [rbp-49h]
  __int64 v25; // [rsp+68h] [rbp-41h] BYREF
  __int64 v26; // [rsp+70h] [rbp-39h] BYREF
  int v27; // [rsp+78h] [rbp-31h]
  struct _LIST_ENTRY *Flink; // [rsp+80h] [rbp-29h]
  __int64 v29; // [rsp+90h] [rbp-19h] BYREF
  int v30; // [rsp+98h] [rbp-11h]
  _DWORD v31[4]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+7h]
  int v33; // [rsp+110h] [rbp+67h] BYREF
  unsigned int *v34; // [rsp+118h] [rbp+6Fh]
  unsigned int v35; // [rsp+120h] [rbp+77h] BYREF
  int v36; // [rsp+128h] [rbp+7Fh]

  v34 = a2;
  v2 = 0;
  v23 = 0LL;
  v3 = a2;
  v24 = 0;
  v25 = 0LL;
  v35 = 0;
  v33 = 0;
  v5 = (unsigned int)BgpGetBitsPerPixel() >> 3;
  Resolution = BgpGetResolution(&v26);
  v8 = Resolution[2];
  v21 = *(_QWORD *)Resolution;
  v22 = v8;
  if ( !a1 )
    return 3221225485LL;
  v9 = *(_DWORD *)(a1 + 4);
  if ( !v9 )
    return 3221225485LL;
  v10 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 || *(_DWORD *)(a1 + 8) != v7 || !v3 || v9 + *v3 > (unsigned int)v21 || v10 + v3[1] > HIDWORD(v21) )
    return 3221225485LL;
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 8) != 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 12) < v5 * v10 * v9 )
    return 3221225507LL;
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer(
             (unsigned int *)a1,
             v3,
             (unsigned int *)&v21,
             (unsigned int *)&v23,
             &v25,
             &v35,
             0);
  if ( (int)result >= 0 )
  {
    RotatedPixelOffset = 0;
    v36 = 0;
    if ( LOBYTE(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) )
    {
      v14 = *(char **)(a1 + 24);
      v15 = *(_DWORD *)a1;
      Flink = gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink;
      if ( BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) )
      {
        HIDWORD(v20) = 0;
        if ( v15 )
        {
          do
          {
            for ( i = 0; ; i = v20 + 1 )
            {
              LODWORD(v20) = i;
              if ( i >= *(_DWORD *)(a1 + 4) )
                break;
              v30 = v22;
              v27 = v24;
              v29 = v21;
              v26 = v23;
              RotatedPixelOffset = GxpGetRotatedPixelOffset(v20, (int *)&v26, v3, (__int64)&v29, &v33);
              if ( RotatedPixelOffset < 0 )
                goto LABEL_18;
              memmove(v14, (char *)Flink + v5 * v33, v5);
              v14 += v5;
            }
            HIDWORD(v20) = ++v2;
          }
          while ( v2 < *(_DWORD *)a1 );
        }
      }
      else
      {
        v16 = (char *)gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink + v5 * (*v3 + v3[1] * v22);
        if ( v15 )
        {
          v17 = *(_DWORD *)(a1 + 4) * v5;
          v18 = v5 * v22;
          do
          {
            memmove(v14, v16, v17);
            v16 += v18;
            v14 += *(_DWORD *)(a1 + 4) * v5;
            --v15;
          }
          while ( v15 );
          v3 = v34;
          RotatedPixelOffset = v36;
        }
      }
    }
    else
    {
      v31[0] = *(_DWORD *)a1;
      v31[1] = *(_DWORD *)(a1 + 4);
      v31[3] = *(_DWORD *)(a1 + 12);
      v31[2] = gLoadedDiffHivesLock.Timer.Dpc;
      v32 = *(_QWORD *)(a1 + 24);
      if ( gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink )
      {
        LOBYTE(v12) = 1;
        RotatedPixelOffset = ((__int64 (__fastcall *)(_DWORD *, unsigned int *, __int64))gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink)(
                               v31,
                               v3,
                               v12);
      }
      else
      {
        RotatedPixelOffset = -1073741823;
      }
    }
LABEL_18:
    *(_DWORD *)a1 = HIDWORD(v23);
    *(_DWORD *)(a1 + 4) = v23;
    *(_DWORD *)(a1 + 12) = v35;
    *(_QWORD *)v3 = v25;
    return (unsigned int)RotatedPixelOffset;
  }
  return result;
}
