/*
 * XREFs of ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x140105ED4
 * Callers:
 *     ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140105A98 (-HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B1764 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140105600 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CPTPEngine::FilterMoveForStableContact(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        struct CContactState *a4)
{
  __int64 v7; // rbp
  char v8; // dl
  char v9; // cl
  bool v10; // si
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // r11
  __int64 v15; // r12
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  int v18; // edx
  bool v19; // al
  __int64 v21; // rax
  __int64 v22; // xmm0_8
  __int128 v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+50h] [rbp-38h]

  if ( (*((_DWORD *)this + 821) & 0x80u) == 0 )
    return 0LL;
  v7 = *(_QWORD *)a2;
  if ( a3 )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    if ( (*(_DWORD *)a4 & 0x4000000) == 0 )
    {
      *(_DWORD *)a4 |= 0x4000000u;
      *((_QWORD *)a4 + 14) = *(_QWORD *)a2;
    }
  }
  if ( (*(_DWORD *)a4 & 0x4000000) != 0 && v8 )
  {
    v9 = 1;
    v10 = 0;
LABEL_10:
    *(_DWORD *)a4 &= ~0x4000000u;
    goto LABEL_11;
  }
  v10 = 0;
  v9 = 0;
  if ( v8 )
    goto LABEL_10;
LABEL_11:
  if ( (*((_DWORD *)this + 768) & 0x1000000) != 0
    && v9
    && (int)((*((_QWORD *)a4 + 1) - *((_QWORD *)a4 + 6)) * (*((_QWORD *)a4 + 1) - *((_QWORD *)a4 + 6))
           + (HIDWORD(*((_QWORD *)a4 + 1)) - HIDWORD(*((_QWORD *)a4 + 6)))
           * (HIDWORD(*((_QWORD *)a4 + 1)) - HIDWORD(*((_QWORD *)a4 + 6)))) > (unsigned __int64)(unsigned int)(*((_DWORD *)this + 778) * *((_DWORD *)this + 778)) )
  {
    v10 = v7 - *((_QWORD *)a4 + 14) >= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 798) / 0x3E8;
  }
  v11 = *((_QWORD *)a4 + 1);
  v12 = *((unsigned int *)this + 779);
  v13 = *((unsigned int *)this + 780);
  v14 = HIDWORD(*((_QWORD *)a4 + 1));
  v15 = v13 * (int)((*((_QWORD *)a4 + 6) - v11) * (*((_QWORD *)a4 + 6) - v11));
  v16 = v12 * v13;
  v17 = v12 * (int)((HIDWORD(*((_QWORD *)a4 + 6)) - v14) * (HIDWORD(*((_QWORD *)a4 + 6)) - v14)) + v15;
  v18 = *(_DWORD *)a4;
  v19 = __CFSHR__(*(_DWORD *)a4, 28)
     && (v7 - *((_QWORD *)a4 + 13) < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 797) / 0x3E8
      || (int)((v11 - *((_QWORD *)a4 + 6)) * (v11 - *((_QWORD *)a4 + 6))
             + (v14 - HIDWORD(*((_QWORD *)a4 + 6))) * (v14 - HIDWORD(*((_QWORD *)a4 + 6)))) <= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 777) * *((_DWORD *)this + 777)))
     && v17 < v16;
  if ( v10 )
  {
    *((_QWORD *)a4 + 6) = v11;
    v21 = *(_QWORD *)((char *)a2 + 28);
    v25 = 0LL;
    *(_DWORD *)a4 = v18 | 0x8000000;
    v23 = 0LL;
    v22 = v25;
    *((_QWORD *)a4 + 7) = v21;
    *((_QWORD *)a4 + 13) = v7;
    v24 = v22;
    CBasePTPEngine::SendTelemetryOutput((__int64)this, 12, (__int64)&v23);
  }
  else if ( !v19 )
  {
    if ( __CFSHR__(*(_DWORD *)a4, 28) )
    {
      v25 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      CBasePTPEngine::SendTelemetryOutput((__int64)this, 13, (__int64)&v23);
      *((_QWORD *)a4 + 15) = *(_QWORD *)a2;
    }
    *(_DWORD *)a4 &= ~0x8000000u;
    return 0LL;
  }
  return 1LL;
}
