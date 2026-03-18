/*
 * XREFs of DrawSize @ 0x1402E4C0C
 * Callers:
 *     xxxDrawWindowFrame @ 0x14025CE6C (xxxDrawWindowFrame.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x14021049C (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 *     SizeBoxHwnd @ 0x1402287F8 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 *a1, HDC a2, int a3, int a4)
{
  __int64 v4; // rbx
  HDC v7; // rsi
  __int64 *v8; // r12
  int v9; // r13d
  int v10; // r13d
  int v11; // ebx
  unsigned int DpiForSystem; // eax
  __int64 v13; // rax
  int v14; // edi
  int v15; // ebx
  unsigned int v16; // eax
  int v17; // edi
  char v18; // dl
  char v19; // al
  unsigned int v20; // eax
  int DpiDependentMetric; // r15d
  unsigned int v22; // eax
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // ebx
  __int64 v26; // r12
  int v27; // esi
  int v28; // r14d
  int v29; // edi
  int v30; // ebp
  __int64 v31; // rdx
  __int64 UserSessionState; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v38; // [rsp+78h] [rbp-A0h]
  int v39; // [rsp+88h] [rbp-90h]
  char v40; // [rsp+B0h] [rbp-68h]
  char v41; // [rsp+B1h] [rbp-67h]
  int v42; // [rsp+B4h] [rbp-64h]
  _DWORD v43[4]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-50h]

  v4 = a1[5];
  v7 = a2;
  v8 = a1;
  if ( (*(_BYTE *)(v4 + 25) & 0x40) != 0 )
  {
    v9 = a3;
  }
  else
  {
    v10 = *(_DWORD *)(v4 + 96);
    v11 = *(_DWORD *)(v4 + 88);
    DpiForSystem = GetDpiForSystem();
    v9 = v10 - v11 - a3 - GetDpiDependentMetric(0, DpiForSystem);
  }
  v13 = v8[5];
  v14 = *(_DWORD *)(v13 + 100);
  v15 = *(_DWORD *)(v13 + 92);
  v16 = GetDpiForSystem();
  v17 = v14 - v15 - a4 - GetDpiDependentMetric(1, v16);
  v42 = v17;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v18 = 0;
  }
  v41 = v18;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v19 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v19 = 0;
  }
  v40 = v19;
  if ( v18 || v19 )
  {
    v20 = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(1, v20);
    v22 = GetDpiForSystem();
    v23 = GetDpiDependentMetric(0, v22);
    v24 = (_DWORD *)v8[5];
    v25 = v23;
    v26 = *v8;
    v27 = v24[25];
    v28 = v24[23];
    v29 = v24[24];
    v30 = v24[22];
    UserSessionState = W32GetUserSessionState(v24, v31);
    v39 = v29 - v30;
    v38 = v29;
    v17 = v42;
    WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v41,
      v40,
      *(_QWORD *)(UserSessionState + 69160),
      5u,
      9u,
      0x10u,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      v26,
      a3,
      a4,
      v9,
      v42,
      v30,
      v28,
      v38,
      v27,
      v39,
      v27 - v28,
      v25,
      DpiDependentMetric);
    v8 = a1;
    v7 = a2;
  }
  if ( SizeBoxHwnd((__int64)v8) )
    return BitBltSysBmp(v7, v9, v17, (*(_BYTE *)(v8[5] + 25) & 0x40) != 0 ? 91 : 45, 1);
  v43[0] = v9;
  v43[1] = v17;
  v33 = GetDpiForSystem();
  v43[2] = GetDpiDependentMetric(0, v33);
  v34 = GetDpiForSystem();
  v43[3] = GetDpiDependentMetric(1, v34);
  v44 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v36, v35) + 19872) + 4816LL);
  return GrePolyPatBlt(v7, 0xF00021u, (struct _POLYPATBLT *)v43, 1u);
}
