/*
 * XREFs of ?GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA@@@Z @ 0x14027AA58
 * Callers:
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1401CB42C (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@@@Z @ 0x14026EB54 (-MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@.c)
 *     ?MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z @ 0x14026ED14 (-MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::GetCachedGammaRampForDiagnostics(
        DxgMonitor::MonitorGammaState *this,
        struct _DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // esi
  _DWORD *v6; // r11
  unsigned int v7; // r10d
  int v8; // r9d
  __int64 v9; // rax
  char *v10; // r10
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rbp
  float *v15; // r10
  unsigned int v16; // r8d
  unsigned int v17; // eax
  char v19; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v19, (DxgMonitor::MonitorGammaState *)((char *)this + 96));
  v4 = *((_QWORD *)this + 18);
  v5 = 0;
  if ( v4 )
  {
    switch ( *(_DWORD *)(v4 + 16) )
    {
      case 1:
        v8 = 0;
        break;
      case 2:
        v15 = (float *)((char *)a2 + 132);
        v16 = 1;
        *(float *)a2 = (float)**(unsigned __int16 **)(v4 + 32);
        *((float *)a2 + 16) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 512LL);
        *((float *)a2 + 32) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 1024LL);
        do
        {
          v17 = 16 * v16;
          if ( 16 * v16 >= 0xFF )
            break;
          ++v16;
          *(v15 - 32) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 2LL * v17);
          *(v15 - 16) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 2LL * v17 + 512);
          *v15++ = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 2LL * v17 + 1024);
        }
        while ( v16 < 0xF );
        v8 = 3;
        *((float *)a2 + 15) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 510LL);
        *((float *)a2 + 31) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 1022LL);
        *((float *)a2 + 47) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 1534LL);
        break;
      case 4:
        v6 = (_DWORD *)((char *)a2 + 132);
        v7 = 1;
        *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v4 + 32) + 52LL);
        v8 = 4;
        *((_DWORD *)a2 + 16) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 56LL);
        *((_DWORD *)a2 + 32) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 60LL);
        do
        {
          v9 = v7 << 8;
          if ( (unsigned int)v9 >= 0xFFF )
            break;
          ++v7;
          *(v6 - 32) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 12 * v9 + 52);
          *(v6 - 16) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 12 * v9 + 56);
          *v6++ = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 12LL * (unsigned int)v9 + 60);
        }
        while ( v7 < 0xF );
        v10 = (char *)a2 + 192;
        v11 = 0LL;
        v12 = 3LL;
        *((_DWORD *)a2 + 15) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 49192LL);
        *((_DWORD *)a2 + 31) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 49196LL);
        *((_DWORD *)a2 + 47) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 32LL) + 49200LL);
        do
        {
          v13 = v11;
          v14 = 3LL;
          do
          {
            *(_DWORD *)&v10[v13] = *(_DWORD *)(v13 + *(_QWORD *)(*((_QWORD *)this + 18) + 32LL));
            v13 += 4LL;
            --v14;
          }
          while ( v14 );
          v11 += 16LL;
          v10 -= 4;
          --v12;
        }
        while ( v12 );
        break;
      default:
        *((_DWORD *)a2 + 57) = 2;
        v5 = -1073741811;
        goto LABEL_21;
    }
    *((_DWORD *)a2 + 57) = v8;
    goto LABEL_21;
  }
  *((_DWORD *)a2 + 57) = 1;
LABEL_21:
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v19);
  return v5;
}
