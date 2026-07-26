/*
 * XREFs of ndisNsiGetInterfaceRodEnumObject @ 0x14016F0D0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140010D10 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400126D0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140014610 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z @ 0x140001008 (-ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z.c)
 *     ndisNsiCopyMemoryWithGlobalIfLock @ 0x140001144 (ndisNsiCopyMemoryWithGlobalIfLock.c)
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisIfGetFilterIfAlias@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_IF_COUNTED_STRING_LH@@@Z @ 0x14015C940 (-ndisIfGetFilterIfAlias@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_IF_COUNTED_STRING_LH@@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodEnumObject(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r10
  char *v9; // r12
  int v10; // r8d
  unsigned int v11; // ebp
  unsigned int v12; // ebp
  char v13; // r9
  unsigned int v14; // r14d
  unsigned __int8 *p_ifOperStatusFlags; // rdx
  int v16; // esi
  struct _NDIS_IF_BLOCK *v17; // r15
  unsigned int v18; // ebx
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int (__fastcall *v24)(__int64, _QWORD, unsigned int *, char *); // rax
  int v25; // esi
  unsigned int v26; // eax
  int v27; // eax
  char v29; // [rsp+40h] [rbp-2A8h]
  int v31; // [rsp+44h] [rbp-2A4h]
  unsigned int v32; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-298h]
  __int64 v34; // [rsp+58h] [rbp-290h]
  __int64 v35; // [rsp+60h] [rbp-288h]
  _OWORD v36[2]; // [rsp+68h] [rbp-280h] BYREF
  __int16 v37; // [rsp+88h] [rbp-260h]
  struct _IF_COUNTED_STRING_LH v38; // [rsp+90h] [rbp-258h] BYREF

  v4 = a3;
  v35 = a3;
  v5 = a2;
  v34 = a2;
  v7 = 0;
  memset(&v38, 0, sizeof(v38));
  v8 = v5;
  if ( !v5 )
    v8 = a1;
  v33 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      a1,
      v4);
    v8 = v33;
  }
  v9 = *(char **)(v4 + 40);
  v10 = *(_DWORD *)(v4 + 48);
  v11 = *(_DWORD *)(v4 + 52);
  v37 = 0;
  v31 = v10;
  memset(v36, 0, sizeof(v36));
  if ( !v9 )
  {
    v12 = 0;
    goto LABEL_91;
  }
  v13 = 0;
  v29 = 0;
  if ( v10 <= 0 )
    goto LABEL_88;
  while ( !v13 )
  {
    v14 = 0;
    p_ifOperStatusFlags = 0LL;
    v16 = 0;
    v17 = 0LL;
    if ( v11 > 0x218 )
    {
      switch ( v11 )
      {
        case 0x21Cu:
          v18 = 4;
          if ( *(_BYTE *)(v8 + 1394) )
            v17 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v8 + 1408) + 32LL) + 4040LL);
          else
            v17 = (struct _NDIS_IF_BLOCK *)v8;
          p_ifOperStatusFlags = (unsigned __int8 *)&v17->ifOperStatusFlags;
          v19 = 544;
          v16 = 2;
          goto LABEL_72;
        case 0x220u:
          v18 = 4;
          v19 = 548;
          v14 = 65798;
          goto LABEL_72;
        case 0x224u:
          v18 = 34;
          if ( *(_WORD *)(a1 + 524) == 71 && a4 )
          {
            p_ifOperStatusFlags = (unsigned __int8 *)v36;
            v19 = 582;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 1393) )
            {
              p_ifOperStatusFlags = (unsigned __int8 *)(v8 + 1124);
              v16 = 1;
            }
            else
            {
              v14 = 16843010;
            }
            v19 = 582;
          }
          goto LABEL_72;
        case 0x246u:
          v18 = 34;
          if ( *(_WORD *)(a1 + 524) == 71 && a4 )
          {
            p_ifOperStatusFlags = (unsigned __int8 *)v36;
            v19 = 616;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 1393) )
            {
              p_ifOperStatusFlags = (unsigned __int8 *)(v8 + 1158);
              v16 = 1;
            }
            else
            {
              v14 = 16843009;
            }
            v19 = 616;
          }
          goto LABEL_72;
        case 0x268u:
          v18 = 4;
          v19 = 624;
          v14 = 66184;
          goto LABEL_72;
        case 0x270u:
          v18 = 8;
          if ( v5 )
          {
            if ( *(_BYTE *)(v5 + 1394) )
            {
              v20 = *(_QWORD *)(v5 + 1408);
              v16 = 2;
              v19 = 632;
              v17 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(v20 + 32) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&v17->XmitLinkSpeed;
            }
            else
            {
              v17 = (struct _NDIS_IF_BLOCK *)v5;
              p_ifOperStatusFlags = (unsigned __int8 *)(v5 + 1200);
              v19 = 632;
              v16 = 2;
            }
          }
          else
          {
            v14 = 66180;
            v19 = 632;
          }
          goto LABEL_72;
        case 0x278u:
          v18 = 8;
          if ( v5 )
          {
            if ( *(_BYTE *)(v5 + 1394) )
            {
              v21 = *(_QWORD *)(v5 + 1408);
              v16 = 2;
              v19 = 640;
              v17 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(v21 + 32) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&v17->RcvLinkSpeed;
            }
            else
            {
              v17 = (struct _NDIS_IF_BLOCK *)v5;
              p_ifOperStatusFlags = (unsigned __int8 *)(v5 + 1208);
              v19 = 640;
              v16 = 2;
            }
          }
          else
          {
            v14 = 66181;
            v19 = 640;
          }
          goto LABEL_72;
        case 0x280u:
          v18 = 1;
          if ( *(_BYTE *)(a1 + 1393) )
          {
            if ( *(_BYTE *)(a1 + 1394) )
            {
              v16 = 2;
              v19 = 641;
              v17 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(a1 + 1408) + 32LL) + 4040LL);
              p_ifOperStatusFlags = &v17->ifPromiscuousMode;
            }
            else
            {
              v17 = (struct _NDIS_IF_BLOCK *)a1;
              p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 1216);
              v16 = 2;
              v19 = 641;
            }
          }
          else
          {
            v14 = 66176;
            v19 = 641;
          }
          goto LABEL_72;
        case 0x281u:
          v18 = 1;
          p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 1217);
          v19 = 642;
          v16 = 2;
          v17 = (struct _NDIS_IF_BLOCK *)a1;
          goto LABEL_72;
        case 0x282u:
          v18 = 1;
          p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 1218);
          v19 = 644;
          v16 = 2;
          v17 = (struct _NDIS_IF_BLOCK *)a1;
          goto LABEL_72;
        case 0x284u:
          v18 = 4;
          if ( v5 )
          {
            if ( *(_BYTE *)(v5 + 1394) )
            {
              v22 = *(_QWORD *)(v5 + 1408);
              v16 = 2;
              v19 = 648;
              v17 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(v22 + 32) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&v17->MediaConnectState;
            }
            else
            {
              v17 = (struct _NDIS_IF_BLOCK *)v5;
              p_ifOperStatusFlags = (unsigned __int8 *)(v5 + 1220);
              v19 = 648;
              v16 = 2;
            }
          }
          else
          {
            v14 = 66186;
            v19 = 648;
          }
          goto LABEL_72;
        case 0x288u:
          v18 = 4;
          if ( v5 )
          {
            if ( *(_BYTE *)(v5 + 1394) )
            {
              v16 = 2;
              v17 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v5 + 1408) + 32LL) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&v17->MediaDuplexState;
            }
            else
            {
              v17 = (struct _NDIS_IF_BLOCK *)v5;
              p_ifOperStatusFlags = (unsigned __int8 *)(v5 + 1224);
              v16 = 2;
            }
          }
          else
          {
            v14 = 66188;
          }
          v19 = v11 + 4;
          v29 = 1;
          goto LABEL_72;
        default:
          goto LABEL_85;
      }
    }
    if ( v11 == 536 )
    {
      v18 = 4;
      v19 = 540;
      v14 = 66179;
    }
    else if ( v11 )
    {
      if ( v11 == 4 )
      {
        v18 = 16;
        p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 580);
        v19 = 20;
        v16 = 1;
      }
      else
      {
        if ( v11 != 20 )
          goto LABEL_85;
        v18 = 516;
        if ( *(_BYTE *)(a1 + 1393) )
        {
          if ( *(_BYTE *)(a1 + 1394) )
          {
            ndisIfGetFilterIfAlias(*(struct _NDIS_FILTER_BLOCK **)(a1 + 1408), &v38);
            v10 = v31;
            p_ifOperStatusFlags = (unsigned __int8 *)&v38;
          }
          else
          {
            p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 596);
            v16 = 1;
          }
          v19 = 536;
        }
        else
        {
          v14 = 66185;
          v19 = 536;
        }
      }
    }
    else
    {
      v18 = 4;
      p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 576);
      v19 = 4;
      v16 = 1;
    }
LABEL_72:
    if ( v10 < v18 )
    {
LABEL_85:
      v13 = 1;
      v29 = 1;
      goto LABEL_86;
    }
    if ( v14 )
    {
      v23 = *(_QWORD *)(v33 + 1320);
      v24 = *(unsigned int (__fastcall **)(__int64, _QWORD, unsigned int *, char *))(*(_QWORD *)(v33 + 1328) + 56LL);
      v32 = v18;
      if ( v24(v23, v14, &v32, v9) )
      {
        memset(v9, 0, v18);
      }
      else if ( v32 < v18 )
      {
        memset(&v9[v32], 0, v18 - v32);
      }
    }
    else
    {
      if ( !p_ifOperStatusFlags )
        goto LABEL_85;
      v25 = v16 - 1;
      if ( v25 )
      {
        if ( v25 == 1 )
          ndisNsiCopyMemoryWithIfBlockLock(v17, (unsigned __int8 *)v9, p_ifOperStatusFlags, v18);
        else
          memmove(v9, p_ifOperStatusFlags, v18);
      }
      else
      {
        ndisNsiCopyMemoryWithGlobalIfLock(v9, p_ifOperStatusFlags, v18);
      }
    }
    v13 = v29;
    v26 = v19 - v11;
    v11 = v19;
    v9 += v26;
    v10 = v31 - v26;
    v31 -= v26;
LABEL_86:
    v5 = v34;
    v8 = v33;
    if ( v10 <= 0 )
      break;
  }
  v4 = v35;
LABEL_88:
  v12 = v11 - *(_DWORD *)(v4 + 52);
  v27 = -1073741811;
  if ( v12 )
    v27 = 0;
  v7 = v27;
LABEL_91:
  *(_DWORD *)(v4 + 48) = v12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      a1,
      v4,
      v7);
  return v7;
}
