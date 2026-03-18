/*
 * XREFs of rimExtractDigitizerPageButtonUsages @ 0x140184658
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x140077F1C (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall rimExtractDigitizerPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        CHAR *a3,
        ULONG a4,
        __int64 UsageLength)
{
  void *v5; // r12
  __int64 v7; // rbx
  unsigned int v9; // eax
  unsigned int v12; // r13d
  unsigned int v13; // r14d
  bool v14; // bp
  char v15; // di
  bool v16; // si
  __int64 UserSessionState; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // eax
  __int16 Report; // [rsp+30h] [rbp-38h]
  NTSTATUS Usages; // [rsp+70h] [rbp+8h]

  v5 = *(void **)(a1 + 824);
  v7 = UsageLength;
  v9 = *(_DWORD *)(a1 + 1048);
  LODWORD(UsageLength) = v9;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2945LL);
    v9 = UsageLength;
  }
  memset(v5, 0, 2LL * v9);
  Usages = HidP_GetUsages(HidP_Input, 0xDu, *(_WORD *)(v7 + 58), (PUSAGE)v5, (PULONG)&UsageLength, a2, a3, a4);
  v12 = Usages;
  if ( Usages >= 0 )
  {
    v13 = 0;
    v14 = (unsigned int)(*(_DWORD *)(a1 + 24) - 5) <= 1;
    if ( (_DWORD)UsageLength )
    {
      while ( 1 )
      {
        if ( v13 >= 6 )
          return (unsigned int)Usages;
        if ( *((_WORD *)v5 + v13) == 50 )
        {
          *(_DWORD *)(v7 + 76) |= 0x1000002u;
        }
        else
        {
          if ( *((_WORD *)v5 + v13) == 60 )
          {
            if ( v14 )
              *(_DWORD *)(v7 + 160) |= 2u;
            goto LABEL_41;
          }
          if ( *((_WORD *)v5 + v13) == 66 )
            goto LABEL_34;
          if ( *((_WORD *)v5 + v13) == 68 )
          {
            if ( v14 )
              *(_DWORD *)(v7 + 160) |= 1u;
            goto LABEL_41;
          }
          if ( *((_WORD *)v5 + v13) == 69 )
          {
            if ( v14 )
            {
              *(_DWORD *)(v7 + 160) |= 6u;
LABEL_34:
              v20 = *(_DWORD *)(v7 + 76) | 0x1000006;
              *(_DWORD *)(v7 + 76) = v20;
              if ( *(_DWORD *)(a1 + 24) != 7 )
                *(_DWORD *)(v7 + 76) = v20 | 0x10;
            }
          }
          else if ( *((_WORD *)v5 + v13) == 71 )
          {
            *(_DWORD *)(v7 + 76) |= 0x4000u;
          }
          else if ( *((_WORD *)v5 + v13) == 100 )
          {
            *(_DWORD *)(v7 + 76) |= 0x1000000u;
          }
          else
          {
            if ( *((_WORD *)v5 + v13) == 254 )
            {
              *(_DWORD *)(v7 + 208) = 1;
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v15 = 0;
              }
              v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_41;
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
              Report = 65;
            }
            else
            {
              if ( *((_WORD *)v5 + v13) != 255 )
                goto LABEL_41;
              *(_DWORD *)(v7 + 212) = 1;
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v15 = 0;
              }
              v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_41;
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
              Report = 66;
            }
            LOBYTE(v19) = v16;
            LOBYTE(v18) = v15;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v18,
              v19,
              *(_QWORD *)(UserSessionState + 19336),
              3,
              1,
              Report,
              (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
          }
        }
LABEL_41:
        if ( ++v13 >= (unsigned int)UsageLength )
          return (unsigned int)Usages;
      }
    }
  }
  return v12;
}
