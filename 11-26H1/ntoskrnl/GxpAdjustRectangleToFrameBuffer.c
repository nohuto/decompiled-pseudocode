/*
 * XREFs of GxpAdjustRectangleToFrameBuffer @ 0x1404B9914
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x1404B9540 (GxpWriteFrameBufferPixels.c)
 *     GxpReadFrameBufferPixels @ 0x140C596CC (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpAdjustRectangleToFrameBuffer(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5,
        unsigned int *a6,
        char a7)
{
  unsigned int v8; // r11d
  unsigned int v9; // r13d
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // esi
  unsigned int v15; // r10d
  unsigned int v16; // r9d
  unsigned int v17; // ebp
  unsigned int v18; // r12d
  unsigned int v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // r8d
  unsigned int v23; // [rsp+0h] [rbp-68h]
  unsigned int v24; // [rsp+4h] [rbp-64h]
  __int64 v25; // [rsp+8h] [rbp-60h]
  unsigned __int64 v26; // [rsp+10h] [rbp-58h]
  unsigned int v27; // [rsp+70h] [rbp+8h]

  v8 = *a1;
  v9 = *a3;
  v27 = *a1;
  v11 = a1[1];
  v12 = *(_QWORD *)a2;
  v13 = 0;
  v24 = a3[2];
  v14 = 0;
  v15 = a1[3];
  v25 = v12;
  v16 = v12;
  v26 = *(_QWORD *)a3;
  v23 = v15;
  if ( *a3 < (unsigned int)v12 )
    return (unsigned int)-1073741811;
  v17 = a3[1];
  if ( v17 < HIDWORD(v12) )
    return (unsigned int)-1073741811;
  v18 = *(_QWORD *)a3;
  if ( v11 > (int)v26 - (int)v12 )
  {
    if ( !a7 )
      return (unsigned int)-1073741811;
    v11 = v26 - v12;
    v14 = 1;
  }
  if ( v8 > HIDWORD(v26) - HIDWORD(v12) )
  {
    if ( a7 )
    {
      v8 = HIDWORD(v26) - HIDWORD(v12);
      goto LABEL_35;
    }
    return (unsigned int)-1073741811;
  }
  if ( v14 )
LABEL_35:
    v15 = (v8 * a1[2] * v11 + 7) >> 3;
  if ( (unsigned __int8)(BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) - 2) <= 1u
    && LOBYTE(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) )
  {
    v19 = a1[1];
    if ( v11 < v19 && BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) == 2 )
    {
      v16 = 0;
      LODWORD(v25) = 0;
    }
    else
    {
      v16 = v9 - v11 - v12;
      LODWORD(v25) = v16;
    }
    v20 = *a1;
    if ( v8 < v27 && BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) == 2 )
    {
      v21 = 0;
      HIDWORD(v25) = 0;
      goto LABEL_18;
    }
    v21 = v17 - v8 - HIDWORD(v12);
    HIDWORD(v25) = v21;
  }
  else
  {
    v21 = HIDWORD(v12);
    v19 = a1[1];
  }
  if ( ((BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) - 1) & 0xFD) != 0
    || !LOBYTE(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) )
  {
    goto LABEL_30;
  }
  v18 = v17;
  v26 = __PAIR64__(v9, v17);
  if ( BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) == 1 )
  {
    if ( v11 >= v19 )
    {
      v21 = v9 - *a2 - v11;
      HIDWORD(v25) = v21;
    }
    else
    {
      v21 = 0;
      HIDWORD(v25) = 0;
    }
    v16 = a2[1];
    LODWORD(v25) = v16;
LABEL_30:
    v20 = v27;
    goto LABEL_18;
  }
  v20 = v27;
  if ( v8 < v27 )
  {
    v16 = 0;
    LODWORD(v25) = 0;
  }
  else
  {
    v16 = v17 - a2[1] - v8;
    LODWORD(v25) = v16;
  }
  v21 = *a2;
  HIDWORD(v25) = *a2;
LABEL_18:
  if ( v18 < v16 || HIDWORD(v26) < v21 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    a4[1] = v20;
    *a4 = v19;
  }
  if ( a5 )
    *a5 = v12;
  if ( a6 )
    *a6 = v23;
  *(_QWORD *)a3 = v26;
  a3[2] = v24;
  *(_QWORD *)a2 = v25;
  *a1 = v8;
  a1[1] = v11;
  a1[3] = v15;
  return v13;
}
