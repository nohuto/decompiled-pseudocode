/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180020F68
 * Callers:
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x18001F120 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180020F30 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180021320 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180022550 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180022E2C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180024214 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     WPP_SF_qq @ 0x1800B01F8 (WPP_SF_qq.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::SetVolumeAllStreams(__int64 a1, int a2, char a3, float a4, unsigned int a5, float *a6)
{
  float *v8; // r13
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  CAudioStream **v10; // rdi
  CAudioStream **v11; // r12
  bool v12; // si
  CAudioStream *v13; // rbx
  struct AudioSrvTelemetryProvider *v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  CAudioStream *v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // eax
  _QWORD *v21; // r8
  __int64 v22; // rdx
  int v23; // eax
  int v24; // ebx
  int updated; // eax
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  float v28; // xmm1_4
  float *v29; // rax
  __int64 v30; // rcx
  __int64 i; // r8
  int *v32; // [rsp+20h] [rbp-68h]
  int v33[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+38h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  float v37; // [rsp+90h] [rbp+8h] BYREF
  char v38; // [rsp+A0h] [rbp+18h]

  v38 = a3;
  v8 = a6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 66LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, a1);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, LPCRITICAL_SECTION *))(*(_QWORD *)g_PolicyManager + 184LL))(
    g_PolicyManager,
    lpCriticalSection);
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v34 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  lpCriticalSection[1] = (LPCRITICAL_SECTION)(a1 + 64);
  v10 = *(CAudioStream ***)(a1 + 112);
  v11 = *(CAudioStream ***)(a1 + 120);
  if ( v10 != v11 )
  {
    LOBYTE(v37) = a5 == 0;
    v12 = a5 == 0;
    while ( 1 )
    {
      v13 = *v10;
      v37 = 1.0;
      *(_QWORD *)v33 = 0LL;
      v14 = AudioSrvTelemetryProvider::Instance();
      v32 = v33;
      GetPolicyVolumeForAudioStream(
        g_PolicyManager,
        ((unsigned __int64)v13 + 16) & -(__int64)(v13 != 0LL),
        *((_QWORD *)v14 + 1),
        &v37);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v32 = (int *)*v10;
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 67LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, a1);
      }
      if ( a2 == 3 )
      {
        v15 = *((_BYTE *)*v10 + 232) != 0 ? 0x3D0900 : 0;
      }
      else if ( a2 == 4 )
      {
        v15 = *((_BYTE *)*v10 + 232) != 0 ? 0x2710 : 0;
      }
      else
      {
        v15 = *(_QWORD *)v33;
      }
      v16 = CAudioStream::SetPolicyVolume(*v10, v37, v15, v12);
      v17 = retaddr;
      if ( v16 < 0 )
      {
        v26 = (unsigned int)v16;
        v27 = 3831LL;
      }
      else
      {
        if ( !a5 )
          goto LABEL_19;
        *((_BYTE *)*v10 + 528) = v38;
        v18 = *v10;
        v19 = 0LL;
        v20 = *((_DWORD *)*v10 + 20);
        v21 = (_QWORD *)((char *)*v10 + 512);
        if ( v20 )
        {
          do
          {
            *(float *)(*v21 + 4 * v19) = a4;
            v19 = (unsigned int)(v19 + 1);
            v20 = *((_DWORD *)v18 + 20);
          }
          while ( (unsigned int)v19 < v20 );
        }
        if ( a5 < v20 )
        {
          v28 = 0.0;
          if ( a5 )
          {
            v29 = v8;
            v30 = a5;
            do
            {
              v28 = fmaxf(v28, *v29++);
              --v30;
            }
            while ( v30 );
          }
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)v18 + 20); i = (unsigned int)(i + 1) )
            *(float *)(*((_QWORD *)v18 + 64) + 4 * i) = v28 * *(float *)(*((_QWORD *)v18 + 64) + 4 * i);
        }
        else
        {
          v22 = 0LL;
          if ( v20 )
          {
            do
            {
              *(float *)(*v21 + 4 * v22) = v8[v22] * *(float *)(*v21 + 4 * v22);
              v22 = (unsigned int)(v22 + 1);
            }
            while ( (unsigned int)v22 < *((_DWORD *)v18 + 20) );
          }
        }
        *((_QWORD *)v18 + 65) = v15;
        v23 = CAudioStream::RecalculateVolume(v18, 0, 0LL);
        v24 = v23;
        if ( v23 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5C5,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v23);
        else
          v24 = 0;
        v17 = retaddr;
        if ( v24 >= 0 )
          goto LABEL_19;
        v26 = (unsigned int)v24;
        v27 = 3839LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v17,
        (void *)v27,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)v26,
        (int)v32);
LABEL_19:
      updated = CAudioStream::UpdateStreamPriority(*v10);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF05,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)updated,
          (int)v32);
      if ( ++v10 == v11 )
      {
        v9 = v34;
        break;
      }
    }
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
}
