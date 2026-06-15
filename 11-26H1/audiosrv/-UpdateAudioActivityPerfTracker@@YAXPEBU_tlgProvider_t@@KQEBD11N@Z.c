/*
 * XREFs of ?UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z @ 0x18007A8C8
 * Callers:
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 * Callees:
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180047460 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall UpdateAudioActivityPerfTracker(
        const struct _tlgProvider_t *a1,
        int a2,
        const char *a3,
        const char *a4,
        char *a5,
        double a6)
{
  int v9; // ecx
  char v10; // di
  _DWORD *v11; // r11
  int i; // r10d
  const char *v13; // rax
  const char *v14; // r9
  int v15; // edx
  int v16; // r8d
  int v17; // eax
  double v18; // xmm6_8
  bool v19; // cc
  double v20; // xmm0_8
  double *v21; // rdx
  unsigned int j; // r8d
  double v23; // xmm1_8
  int v24; // eax
  __int64 v25; // rbx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  EnterCriticalSection(&g_csAudioActivityPayload);
  v9 = 0;
  v10 = 0;
  v11 = &g_AudioActivityPayload;
  for ( i = 0; (unsigned __int64)i < 5; ++i )
  {
    v13 = (char *)&g_AudioActivityPayload + 664 * i + 394;
    v14 = (const char *)(a3 - v13);
    do
    {
      v15 = (unsigned __int8)v14[(_QWORD)v13];
      v16 = *(unsigned __int8 *)v13 - v15;
      if ( v16 )
        break;
      ++v13;
    }
    while ( v15 );
    if ( !v16 )
    {
      v18 = a6;
      if ( a6 <= *((double *)&g_AudioActivityPayload + 83 * i + 82) )
        goto LABEL_29;
      v9 = i;
      goto LABEL_22;
    }
    v17 = v9 + 1;
    if ( !*v11 )
      v17 = v9;
    v11 += 166;
    v9 = v17;
  }
  v18 = a6;
  v19 = v9 < 5;
  if ( v9 == 5 )
  {
    v20 = a6;
    v21 = (double *)&unk_1801D6E10;
    for ( j = 0; j < 5; ++j )
    {
      v23 = v20;
      if ( v20 > *v21 )
      {
        v20 = *v21;
        v10 = 1;
      }
      v24 = j;
      if ( v23 <= *v21 )
        v24 = v9;
      v21 += 83;
      v9 = v24;
    }
    if ( v10 )
      goto LABEL_22;
    v19 = v24 < 5;
  }
  if ( !v19 )
    goto LABEL_29;
LABEL_22:
  v25 = 664LL * v9;
  v26 = StringCchCopyA((char *)&g_AudioActivityPayload + v25 + 4, 130LL, a4);
  if ( v26 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\perftracker.cpp",
      (const char *)(unsigned int)v26,
      v29);
  v27 = StringCchCopyA((char *)&g_AudioActivityPayload + v25 + 134, 260LL, a5);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\perftracker.cpp",
      (const char *)(unsigned int)v27,
      v29);
  v28 = StringCchCopyA((char *)&g_AudioActivityPayload + v25 + 394, 260LL, a3);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\perftracker.cpp",
      (const char *)(unsigned int)v28,
      v29);
  *(double *)((char *)&g_AudioActivityPayload + v25 + 656) = v18;
  *(_DWORD *)((char *)&g_AudioActivityPayload + v25) = a2;
LABEL_29:
  LeaveCriticalSection(&g_csAudioActivityPayload);
}
