/*
 * XREFs of RIMIsParallelDevice @ 0x1401703D8
 * Callers:
 *     RIMAssignTouchType @ 0x1401701F0 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1401706F8 (RIMRetrieveAllLinkIndexUsages.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMValidateAllCollectionUsages @ 0x14020569C (RIMValidateAllCollectionUsages.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, ULONG *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  char *v6; // r14
  char *v7; // r15
  _DWORD *v8; // rdi
  int v9; // r13d
  unsigned __int16 v10; // r12
  BOOL v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  char v16; // r15
  bool v17; // r13
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  ULONG v22; // ecx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v25; // [rsp+44h] [rbp-75h] BYREF
  unsigned __int16 v26[2]; // [rsp+48h] [rbp-71h] BYREF
  ULONG LinkCollectionNodesLength[3]; // [rsp+4Ch] [rbp-6Dh] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+58h] [rbp-61h]
  char *v29; // [rsp+60h] [rbp-59h] BYREF
  char *v30; // [rsp+68h] [rbp-51h] BYREF
  __int64 v31; // [rsp+70h] [rbp-49h]
  ULONG *v32; // [rsp+78h] [rbp-41h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+80h] [rbp-39h] BYREF

  v3 = 0;
  v32 = a3;
  PreparsedData = a2;
  v5 = a1;
  v31 = a1;
  v29 = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v8 = *(_DWORD **)(v5 + 768);
  ValueCapsLength[0] = 1;
  v26[0] = 0;
  v25 = 0;
  LinkCollectionNodesLength[0] = 0;
  v9 = 0;
  if ( HidP_GetLinkCollectionNodes(0LL, LinkCollectionNodesLength, a2) == -1072627705
    && LinkCollectionNodesLength[0] > 1 )
  {
    v8[3] = LinkCollectionNodesLength[0];
    v10 = 1;
    if ( LinkCollectionNodesLength[0] > 1 )
    {
      v11 = 0;
      do
      {
        if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, v10, 0x51u, &ValueCaps, ValueCapsLength, PreparsedData) == 1114112 )
        {
          ++*v8;
          if ( v9 )
          {
            if ( v6 && !v11 )
              v11 = RIMValidateAllCollectionUsages((_DWORD)v6, v26[0], (_DWORD)v7, v25, v10, (__int64)PreparsedData) == 0;
          }
          else
          {
            v15 = RIMRetrieveAllLinkIndexUsages(v10, PreparsedData, v26, &v29, &v25, &v30);
            v6 = v29;
            if ( v15 != 1114112 )
            {
              if ( v29 )
              {
                LinkCollectionNodesLength[1] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1557LL);
              }
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (v12 = 1LL, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
                || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v16 = 0;
              }
              v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
                LOBYTE(v19) = v17;
                LOBYTE(v20) = v16;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v20,
                  v19,
                  *(_QWORD *)(UserSessionState + 19368),
                  3,
                  1,
                  26,
                  (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
              }
            }
            v7 = v30;
            v9 = 1;
          }
        }
        ++v10;
        ValueCapsLength[0] = 1;
      }
      while ( v10 < LinkCollectionNodesLength[0] );
      v5 = v31;
      if ( v6 )
        GreDeleteFastMutex(v6, v12, v13, v14);
      if ( v7 )
        GreDeleteFastMutex(v7, v12, v13, v14);
    }
    ValueCapsLength[0] = 1;
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x54u, &ValueCaps, ValueCapsLength, PreparsedData) == 1114112 )
    {
      v8[8] |= 1u;
      *(_DWORD *)(v5 + 24) = 3;
    }
    if ( *v8 > 1u && (v8[8] & 1) == 0 )
      *(_DWORD *)(v5 + 24) = 4;
    v21 = *(_DWORD *)(v5 + 24);
    if ( v21 == 4 || v21 == 3 )
    {
      v22 = LinkCollectionNodesLength[0];
      *(_DWORD *)(v5 + 368) |= 2u;
      v3 = 1;
      *v32 = v22;
    }
  }
  return v3;
}
