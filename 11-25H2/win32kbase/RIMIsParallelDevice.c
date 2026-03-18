/*
 * XREFs of RIMIsParallelDevice @ 0x14013F814
 * Callers:
 *     RIMAssignTouchType @ 0x14013F638 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1401E493C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMValidateAllCollectionUsages @ 0x1401E4CBC (RIMValidateAllCollectionUsages.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
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
  int v12; // eax
  __int64 v13; // rdx
  char v14; // r15
  bool v15; // r13
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  ULONG v19; // ecx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v22; // [rsp+44h] [rbp-75h] BYREF
  unsigned __int16 v23[2]; // [rsp+48h] [rbp-71h] BYREF
  ULONG LinkCollectionNodesLength[3]; // [rsp+4Ch] [rbp-6Dh] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+58h] [rbp-61h]
  char *v26; // [rsp+60h] [rbp-59h] BYREF
  char *v27; // [rsp+68h] [rbp-51h] BYREF
  __int64 v28; // [rsp+70h] [rbp-49h]
  ULONG *v29; // [rsp+78h] [rbp-41h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+80h] [rbp-39h] BYREF

  v3 = 0;
  v29 = a3;
  PreparsedData = a2;
  v5 = a1;
  v28 = a1;
  v26 = 0LL;
  v27 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v8 = *(_DWORD **)(v5 + 768);
  ValueCapsLength[0] = 1;
  v23[0] = 0;
  v22 = 0;
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
              v11 = RIMValidateAllCollectionUsages((_DWORD)v6, v23[0], (_DWORD)v7, v22, v10, (__int64)PreparsedData) == 0;
          }
          else
          {
            v12 = RIMRetrieveAllLinkIndexUsages(v10, PreparsedData, v23, &v26, &v22, &v27);
            v6 = v26;
            if ( v12 != 1114112 )
            {
              if ( v26 )
              {
                LinkCollectionNodesLength[1] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1557LL);
              }
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (v13 = 1LL, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
                || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v14 = 0;
              }
              v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
                LOBYTE(v17) = v15;
                LOBYTE(v18) = v14;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v18,
                  v17,
                  *(_QWORD *)(UserSessionState + 19336),
                  3,
                  1,
                  26,
                  (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
              }
            }
            v7 = v27;
            v9 = 1;
          }
        }
        ++v10;
        ValueCapsLength[0] = 1;
      }
      while ( v10 < LinkCollectionNodesLength[0] );
      v5 = v28;
      if ( v6 )
        GreDeleteFastMutex(v6);
      if ( v7 )
        GreDeleteFastMutex(v7);
    }
    ValueCapsLength[0] = 1;
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x54u, &ValueCaps, ValueCapsLength, PreparsedData) == 1114112 )
    {
      v8[8] |= 1u;
      *(_DWORD *)(v5 + 24) = 3;
    }
    if ( *v8 > 1u && (v8[8] & 1) == 0 )
      *(_DWORD *)(v5 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 3) <= 1 )
    {
      v19 = LinkCollectionNodesLength[0];
      *(_DWORD *)(v5 + 368) |= 2u;
      v3 = 1;
      *v29 = v19;
    }
  }
  return v3;
}
