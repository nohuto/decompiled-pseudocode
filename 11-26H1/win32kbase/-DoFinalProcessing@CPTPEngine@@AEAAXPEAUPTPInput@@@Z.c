/*
 * XREFs of ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103630
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1401031F0 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1401039A4 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140105600 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x14010565C (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140105958 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CPTPEngine::DoFinalProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // esi
  __int64 v5; // r12
  unsigned int v6; // r9d
  unsigned int i; // edx
  char *v8; // r15
  int v9; // r10d
  __int64 v10; // rcx
  __int64 v11; // rcx
  char *v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  const signed __int32 *v15; // rdx
  unsigned int j; // ecx
  unsigned int v17; // ecx
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int64 v20; // [rsp+50h] [rbp-10h]

  v2 = 1;
  v5 = 6LL;
  if ( !*((_DWORD *)a2 + 9) )
  {
    v6 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v12 = (char *)a2 + 68;
      do
      {
        v13 = 328LL * (unsigned int)(*((_DWORD *)v12 - 2) % *((_DWORD *)this + 4));
        v14 = *(_DWORD *)((char *)this + v13 + 816);
        if ( (v14 & 1) != 0 && *(_DWORD *)v12 )
        {
          if ( (*(_DWORD *)v12 & 0x40000) != 0 )
          {
            v17 = v14 & 0xFFFFFFFE;
            *(_DWORD *)((char *)this + v13 + 816) = v17;
            if ( (*(_DWORD *)v12 & 0x2000000) != 0 )
              ++*((_DWORD *)this + 703);
            else
              *(_DWORD *)((char *)this + v13 + 816) = v17 & 0xDFFFFFFF;
          }
          else
          {
            *(_QWORD *)((char *)this + v13 + 896) = *(_QWORD *)(v12 + 68);
            *(_QWORD *)((char *)this + v13 + 856) = *(_QWORD *)(v12 + 28);
          }
        }
        v12 += 96;
        ++v6;
      }
      while ( v6 < *((_DWORD *)a2 + 12) );
    }
    if ( *((_DWORD *)this + 706) != 2 )
      *((_DWORD *)this + 768) &= ~0x80000u;
    for ( i = 0; i < 6; ++i )
    {
      if ( (*((_DWORD *)this + 82 * i + 204) & 1) != 0 )
        goto LABEL_8;
    }
    v15 = (const signed __int32 *)((char *)a2 + 68);
    for ( j = 0; j < *((_DWORD *)a2 + 12); ++j )
    {
      if ( _bittest(v15, 0x12u) )
      {
        *((_DWORD *)this + 768) &= 0xFF09FFFF;
        *((_DWORD *)this + 706) = 1;
        *(_QWORD *)((char *)this + 2796) = 0LL;
        CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 697);
        if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
        {
          CBasePTPEngine::SendInertiaOutput(this, 3LL);
          *((_DWORD *)a2 + 10) = 0;
        }
        v18 = *(unsigned __int64 *)a2;
        v19 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
        CBasePTPEngine::SendTelemetryOutput(this, 1LL, &v18);
        break;
      }
      v15 += 24;
    }
  }
LABEL_8:
  v8 = (char *)this + 816;
  do
  {
    if ( (*(_DWORD *)v8 & 0x20000000) != 0 && *((_QWORD *)v8 + 39) != *(_QWORD *)a2 )
    {
      v11 = *((_QWORD *)this + 1);
      *((_DWORD *)this + 193) = 2;
      v19 = 0LL;
      *(_OWORD *)((char *)this + 780) = 0LL;
      *((_DWORD *)this + 194) = 11;
      *(_QWORD *)((char *)this + 796) = v19;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 8LL))(v11, (char *)this + 772);
      *(_OWORD *)((char *)this + 772) = 0LL;
      *(_OWORD *)((char *)this + 788) = 0LL;
      *(_DWORD *)v8 &= 0xDFFFFFFE;
    }
    v8 += 328;
    --v5;
  }
  while ( v5 );
  if ( (unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    if ( (v9 & 1) != 0 || (v9 & 2) != 0 || (v9 & 4) != 0 || *((_DWORD *)this + 762) || *((_DWORD *)this + 706) != 1 )
    {
      v2 = 0;
    }
    else if ( (v9 & 0x2000000) == 0 )
    {
      v20 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 10LL, &v18);
      *((_DWORD *)this + 768) &= 0xFB09FFFF;
      if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
      {
        CBasePTPEngine::SendInertiaOutput(this, 3LL);
        *((_DWORD *)a2 + 10) = 0;
      }
    }
    *((_DWORD *)this + 768) = (v2 << 25) | *((_DWORD *)this + 768) & 0xFDFFFFFF;
  }
  else
  {
    v10 = *((_QWORD *)this + 1);
    *((_DWORD *)this + 193) = 2;
    v20 = 0LL;
    *(_OWORD *)((char *)this + 780) = 0LL;
    *((_DWORD *)this + 194) = 9;
    *(_QWORD *)((char *)this + 796) = v20;
    *((_DWORD *)this + 768) = v9 & 0xF9FFFFFF | 0x2000000;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 8LL))(v10, (char *)this + 772);
    *(_OWORD *)((char *)this + 772) = 0LL;
    *(_OWORD *)((char *)this + 788) = 0LL;
  }
}
