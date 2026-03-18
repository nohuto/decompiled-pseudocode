/*
 * XREFs of ESM_FindAndSetTargetState @ 0x1400212B4
 * Callers:
 *     ESM_RunStateMachine @ 0x140020FDC (ESM_RunStateMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_qLLL @ 0x140022A88 (WPP_RECORDER_SF_qLLL.c)
 *     ESM_LogUnhandledEvent @ 0x140055B14 (ESM_LogUnhandledEvent.c)
 */

char __fastcall ESM_FindAndSetTargetState(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // r9
  unsigned int v4; // r15d
  int v6; // r13d
  char v8; // bp
  __int64 v9; // r12
  int v10; // ebx
  __int64 v11; // rcx
  __int64 i; // rax
  int v13; // edx
  unsigned int v14; // r13d
  _BYTE *v15; // r9
  char v17; // cl
  int v18; // esi
  __int64 v19; // [rsp+50h] [rbp-48h]
  unsigned int v20; // [rsp+A0h] [rbp+8h]
  int v22; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 968);
  v4 = *(_DWORD *)(a1 + 880);
  v20 = v4;
  v6 = *(_DWORD *)(a1 + 976);
  *a3 = 0;
  v19 = v3;
  v8 = 1;
  v22 = v6;
  while ( 2 )
  {
    v9 = v4;
    v10 = 1002;
    v11 = *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v4 + 852) - v6));
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v13 = *(_DWORD *)(v11 + 8 * i + 32);
      if ( v13 == 1000 )
        break;
      if ( a2 == v13 )
      {
        v10 = *(_DWORD *)(v11 + 8 * i + 36);
        if ( v10 != 1002 )
          goto LABEL_7;
        break;
      }
    }
    if ( v4 )
    {
      --v4;
      continue;
    }
    break;
  }
LABEL_7:
  v14 = v20;
  v15 = a3;
  if ( v10 == 1000 )
    return 0;
  if ( v10 == 1002 )
  {
    ESM_LogUnhandledEvent(a1, a2, a3, a3);
    return 0;
  }
  if ( v4 < v20 )
  {
    v17 = *(_BYTE *)(a1 + 832);
    do
    {
      v18 = *(_DWORD *)(a1 + 4LL * --v14 + 852);
      if ( *(_DWORD *)(a1 + 976) == 2000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          17,
          12,
          (__int64)&WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids,
          *(_QWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 12LL * ((v17 - 1) & 0x3F) + 4),
          232,
          v18);
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v18;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v14;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      v17 = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
      *(_BYTE *)(a1 + 832) = v17;
    }
    while ( v14 > v4 );
    v15 = a3;
    v9 = v4;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v9 + 852) - v22)) + 16LL) & 0x20) != 0 )
    *v15 = 1;
  *(_DWORD *)(a1 + 4 * v9 + 852) = v10;
  *(_DWORD *)(a1 + 880) = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *(_DWORD *)(a1 + 976) == 2000 )
    WPP_RECORDER_SF_qLLL(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      17,
      12,
      (__int64)&WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids,
      *(_QWORD *)(a1 + 960),
      *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
      a2,
      v10);
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v10;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v4;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = a2;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  return v8;
}
