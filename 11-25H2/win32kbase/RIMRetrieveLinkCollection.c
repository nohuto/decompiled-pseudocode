/*
 * XREFs of RIMRetrieveLinkCollection @ 0x14012D368
 * Callers:
 *     RIMAssignTouchType @ 0x14013F638 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMCacheAxisChildIndex @ 0x14012D6C0 (RIMCacheAxisChildIndex.c)
 *     RIMGetPropertyCount @ 0x14012D940 (RIMGetPropertyCount.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMRetrieveLinkCollection(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, ULONG a3)
{
  __int64 v3; // r13
  unsigned int v6; // r15d
  struct _HIDP_LINK_COLLECTION_NODE *v8; // rax
  struct _HIDP_LINK_COLLECTION_NODE *v9; // rsi
  USHORT FirstChild; // r14
  int v11; // r12d
  USHORT i; // ax
  __int64 v13; // r9
  char v14; // bl
  bool v15; // di
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-59h] BYREF
  USHORT ReportCount; // [rsp+44h] [rbp-55h]
  ULONG LinkCollectionNodesLength; // [rsp+48h] [rbp-51h] BYREF
  USHORT v22[8]; // [rsp+50h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+60h] [rbp-39h] BYREF

  v3 = *(_QWORD *)(a1 + 768);
  LinkCollectionNodesLength = a3;
  v22[0] = 0;
  v6 = 0;
  *(_WORD *)(v3 + 8) = 0;
  if ( LinkCollectionNodesLength > 1 )
  {
    v8 = (struct _HIDP_LINK_COLLECTION_NODE *)Win32AllocPoolZInitImpl(
                                                256LL,
                                                24LL * LinkCollectionNodesLength,
                                                0x65637352u);
    v9 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v3 + 16) = v8;
      if ( HidP_GetLinkCollectionNodes(v8, &LinkCollectionNodesLength, a2) == 1114112 )
      {
        ReportCount = 0;
        memset(&ValueCaps, 0, sizeof(ValueCaps));
        ValueCapsLength[0] = 0;
        FirstChild = v9->FirstChild;
        v11 = 1;
        for ( i = 0; ; i = ++ReportCount )
        {
          if ( i >= LinkCollectionNodesLength )
            goto LABEL_22;
          ValueCapsLength[0] = 1;
          if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, FirstChild, 0x51u, &ValueCaps, ValueCapsLength, a2) == 1114112 )
            break;
          FirstChild = v9[FirstChild].NextSibling;
        }
        ValueCapsLength[0] = 1;
        *(_WORD *)(v3 + 4) = FirstChild;
        *(_WORD *)(a1 + 784) = FirstChild;
        if ( HidP_GetSpecificValueCaps(HidP_Input, 1u, FirstChild, 0x30u, &ValueCaps, ValueCapsLength, a2) == 1114112 )
        {
          ReportCount = ValueCaps.ReportCount;
          ValueCapsLength[0] = 1;
          if ( HidP_GetSpecificValueCaps(HidP_Input, 1u, FirstChild, 0x31u, &ValueCaps, ValueCapsLength, a2) == 1114112 )
          {
            v11 = 0;
            if ( ReportCount == ValueCaps.ReportCount && ReportCount == 2 )
              *(_DWORD *)(a1 + 368) |= 0x200u;
          }
        }
        if ( v9[FirstChild].FirstChild )
        {
          if ( v11 )
          {
            v13 = 1LL;
LABEL_13:
            v6 = RIMCacheAxisChildIndex(a1, a2, LinkCollectionNodesLength, v13);
            if ( v6 && HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v3 + 4), 0, 0LL, v22, a2) == -1072627705 )
              RIMGetPropertyCount(a1, *(unsigned __int16 *)(v3 + 4), v22[0], a2);
            return v6;
          }
LABEL_21:
          v13 = 0LL;
          goto LABEL_13;
        }
        if ( !v11 )
          goto LABEL_21;
LABEL_22:
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v14 = 0;
        }
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 1LL);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(UserSessionState + 19336),
            3,
            1,
            29,
            (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
        }
      }
    }
  }
  return v6;
}
