/*
 * XREFs of ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA09C
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400C9F70 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1400C9278 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400C9380 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400C94D8 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140129474 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 */

void __fastcall CPTPEngine::DoFinalProcessing(struct tagPOINT *this, struct PTPInput *a2)
{
  __int64 v4; // r14
  unsigned int v5; // r9d
  char *v6; // r8
  __int64 v7; // rdx
  LONG x; // ecx
  unsigned int v9; // ecx
  unsigned int i; // edx
  unsigned int v11; // r8d
  unsigned int v12; // edx
  const signed __int32 *v13; // rcx
  struct tagPOINT *v14; // rsi
  int v15; // r10d
  int v16; // ecx
  _BYTE v17[24]; // [rsp+20h] [rbp-40h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  v4 = 6LL;
  if ( !*((_DWORD *)a2 + 9) )
  {
    v5 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v6 = (char *)a2 + 68;
      do
      {
        v7 = 41LL * (unsigned int)(*((_DWORD *)v6 - 2) % this[2].x);
        x = this[v7 + 102].x;
        if ( (x & 1) != 0 && *(_DWORD *)v6 )
        {
          if ( (*(_DWORD *)v6 & 0x40000) != 0 )
          {
            v9 = x & 0xFFFFFFFE;
            this[v7 + 102].x = v9;
            if ( (*(_DWORD *)v6 & 0x2000000) != 0 )
              ++this[351].y;
            else
              this[v7 + 102].x = v9 & 0xBFFFFFFF;
          }
          else
          {
            this[v7 + 112] = *(struct tagPOINT *)(v6 + 68);
            this[v7 + 107] = *(struct tagPOINT *)(v6 + 28);
          }
        }
        v6 += 96;
        ++v5;
      }
      while ( v5 < *((_DWORD *)a2 + 12) );
    }
    if ( this[353].x != 2 )
      this[385].x &= ~0x80000u;
    for ( i = 0; i < 6; ++i )
    {
      if ( (this[41 * i + 102].x & 1) != 0 )
        goto LABEL_27;
    }
    v11 = *((_DWORD *)a2 + 12);
    v12 = 0;
    if ( v11 )
    {
      v13 = (const signed __int32 *)((char *)a2 + 68);
      while ( !_bittest(v13, 0x12u) )
      {
        ++v12;
        v13 += 24;
        if ( v12 >= v11 )
          goto LABEL_27;
      }
      this[385].x &= 0xFF09FFFF;
      this[349].y = 0;
      this[350].x = 0;
      this[353].x = 1;
      CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)&this[348].y);
      if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
      {
        CBasePTPEngine::SendInertiaOutput(this, 3LL);
        *((_DWORD *)a2 + 10) = 0;
      }
      *(_QWORD *)v17 = *(_QWORD *)a2;
      *(_OWORD *)&v17[8] = 0LL;
      v18 = *(_OWORD *)v17;
      v19 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v17[8], *(__m128d *)&v17[8]);
      CBasePTPEngine::SendTelemetryOutput((__int64)this, 1, (__int64)&v18);
    }
  }
LABEL_27:
  v14 = this + 102;
  do
  {
    if ( (v14->x & 0x40000000) != 0 && *(_QWORD *)&v14[39] != *(_QWORD *)a2 )
    {
      v18 = 0LL;
      v19 = 0LL;
      CBasePTPEngine::SendTelemetryOutput((__int64)this, 11, (__int64)&v18);
      v14->x &= 0xBFFFFFFE;
    }
    v14 += 41;
    --v4;
  }
  while ( v4 );
  if ( (unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    if ( (v15 & 1) != 0 || (v15 & 2) != 0 || (v15 & 4) != 0 || this[382].x || this[353].x != 1 )
    {
      v16 = 0;
    }
    else
    {
      v16 = 0x2000000;
      if ( (v15 & 0x2000000) == 0 )
      {
        v18 = 0LL;
        v19 = 0LL;
        CBasePTPEngine::SendTelemetryOutput((__int64)this, 10, (__int64)&v18);
        this[385].x &= 0xFB09FFFF;
        if ( *((_DWORD *)a2 + 10) || (v16 = 0x2000000, *((_DWORD *)a2 + 13)) )
        {
          CBasePTPEngine::SendInertiaOutput(this, 3LL);
          *((_DWORD *)a2 + 10) = 0;
          v16 = 0x2000000;
        }
      }
    }
    this[385].x = v16 | this[385].x & 0xFDFFFFFF;
  }
  else
  {
    v18 = 0LL;
    this[385].x = v15 & 0xF9FFFFFF | 0x2000000;
    v19 = 0LL;
    CBasePTPEngine::SendTelemetryOutput((__int64)this, 9, (__int64)&v18);
  }
}
