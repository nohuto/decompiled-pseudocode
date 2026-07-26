/*
 * XREFs of ndisNsiGetInterfaceRodInformation @ 0x14016F790
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400126D0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140014610 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z @ 0x140001008 (-ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z.c)
 *     ndisNsiCopyMemoryWithGlobalIfLock @ 0x140001144 (ndisNsiCopyMemoryWithGlobalIfLock.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qDqL @ 0x140062FC0 (WPP_RECORDER_SF_qDqL.c)
 *     WPP_RECORDER_SF_qLqL @ 0x140066200 (WPP_RECORDER_SF_qLqL.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r13d
  __int64 v5; // r8
  __int64 v6; // rbp
  _DWORD *v8; // r14
  int v9; // ecx
  int v10; // r12d
  int v11; // r12d
  char v12; // al
  int v13; // r9d
  unsigned int v14; // esi
  unsigned __int8 *p_ifOperStatusFlags; // r11
  struct _NDIS_IF_BLOCK *v16; // r10
  unsigned int v17; // edi
  int v18; // ebx
  unsigned int (__fastcall *v19)(__int64, _QWORD, unsigned int *, _DWORD *); // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edx
  unsigned int v24; // eax
  int v25; // eax
  int v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+40h] [rbp-58h]
  unsigned int v29; // [rsp+50h] [rbp-48h] BYREF
  int v30; // [rsp+54h] [rbp-44h]
  __int64 v31; // [rsp+58h] [rbp-40h]
  char v32; // [rsp+A8h] [rbp+10h]
  int v34; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v4 = 0;
  v5 = a2;
  v6 = a2;
  if ( !a2 )
    v5 = a1;
  v31 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      a1,
      a2,
      v3);
    v5 = v31;
  }
  v8 = *(_DWORD **)(v3 + 40);
  v9 = *(_DWORD *)(v3 + 48);
  v10 = *(_DWORD *)(v3 + 52);
  v30 = v9;
  if ( !v8 )
  {
    v11 = 0;
    goto LABEL_101;
  }
  v12 = 0;
  v34 = v9;
  v32 = 0;
  v13 = v9;
  if ( v9 <= 0 )
    goto LABEL_98;
  while ( !v12 )
  {
    v14 = 0;
    p_ifOperStatusFlags = 0LL;
    LODWORD(a2) = 0;
    v16 = 0LL;
    if ( v10 )
    {
      switch ( v10 )
      {
        case 0:
          goto LABEL_14;
        case 4:
          v17 = 4;
          if ( *(_BYTE *)(v5 + 1394) )
            v16 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v5 + 1408) + 32LL) + 4040LL);
          else
            v16 = (struct _NDIS_IF_BLOCK *)v5;
          p_ifOperStatusFlags = (unsigned __int8 *)&v16->ifOperStatusFlags;
          v18 = 8;
          LODWORD(a2) = 2;
          goto LABEL_73;
        case 8:
          v17 = 4;
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 1394) )
            {
              LODWORD(a2) = 2;
              v18 = 12;
              v16 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v6 + 1408) + 32LL) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&v16->MediaConnectState;
            }
            else
            {
              v16 = (struct _NDIS_IF_BLOCK *)v6;
              p_ifOperStatusFlags = (unsigned __int8 *)(v6 + 1220);
              LODWORD(a2) = 2;
              v18 = 12;
            }
          }
          else
          {
            v14 = 66186;
            v18 = 12;
          }
          goto LABEL_73;
        case 12:
          v17 = 4;
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 1394) )
            {
              LODWORD(a2) = 2;
              v18 = 16;
              v16 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v6 + 1408) + 32LL) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&v16->MediaDuplexState;
            }
            else
            {
              v16 = (struct _NDIS_IF_BLOCK *)v6;
              p_ifOperStatusFlags = (unsigned __int8 *)(v6 + 1224);
              LODWORD(a2) = 2;
              v18 = 16;
            }
          }
          else
          {
            v14 = 66188;
            v18 = 16;
          }
          goto LABEL_73;
        case 16:
          v17 = 4;
          v14 = 65798;
          v18 = 20;
          goto LABEL_73;
        case 20:
          v17 = 1;
          if ( *(_BYTE *)(a1 + 1393) )
          {
            if ( *(_BYTE *)(a1 + 1394) )
            {
              LODWORD(a2) = 2;
              v18 = 21;
              v16 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(a1 + 1408) + 32LL) + 4040LL);
              p_ifOperStatusFlags = &v16->ifPromiscuousMode;
            }
            else
            {
              v16 = (struct _NDIS_IF_BLOCK *)a1;
              p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 1216);
              LODWORD(a2) = 2;
              v18 = 21;
            }
          }
          else
          {
            v14 = 66176;
            v18 = 21;
          }
          goto LABEL_73;
        case 21:
          v17 = 1;
          p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 1217);
          v18 = 24;
          LODWORD(a2) = 2;
          v16 = (struct _NDIS_IF_BLOCK *)a1;
          goto LABEL_73;
        case 24:
          v17 = 8;
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 1394) )
            {
              LODWORD(a2) = 2;
              v18 = 32;
              v16 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v6 + 1408) + 32LL) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&v16->XmitLinkSpeed;
            }
            else
            {
              v16 = (struct _NDIS_IF_BLOCK *)v6;
              p_ifOperStatusFlags = (unsigned __int8 *)(v6 + 1200);
              LODWORD(a2) = 2;
              v18 = 32;
            }
          }
          else
          {
            v14 = 66180;
            v18 = 32;
          }
          goto LABEL_73;
        case 32:
          v17 = 8;
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 1394) )
            {
              LODWORD(a2) = 2;
              v18 = 40;
              v16 = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v6 + 1408) + 32LL) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&v16->RcvLinkSpeed;
            }
            else
            {
              v16 = (struct _NDIS_IF_BLOCK *)v6;
              p_ifOperStatusFlags = (unsigned __int8 *)(v6 + 1208);
              LODWORD(a2) = 2;
              v18 = 40;
            }
          }
          else
          {
            v14 = 66181;
            v18 = 40;
          }
          goto LABEL_73;
        case 40:
          v17 = 8;
          v14 = 66177;
          v18 = 48;
          goto LABEL_73;
        case 48:
          v17 = 8;
          v14 = 66178;
          v18 = 56;
          goto LABEL_73;
        case 56:
          v17 = 8;
          v14 = 66182;
          v18 = 64;
          goto LABEL_73;
        case 64:
          if ( (unsigned int)v13 >= 0x90 && *(_BYTE *)(a1 + 1393) )
          {
            v17 = 144;
            v14 = 131334;
            v18 = 208;
          }
          else
          {
            v17 = 8;
            v14 = 131611;
            v18 = 72;
          }
          goto LABEL_73;
        case 72:
          v17 = 8;
          v14 = 131332;
          v18 = 80;
          goto LABEL_73;
        case 80:
          v17 = 8;
          v14 = 131609;
          v18 = 88;
          goto LABEL_73;
        case 88:
          v17 = 8;
          v14 = 131592;
          v18 = 96;
          goto LABEL_73;
        case 96:
          v17 = 8;
          v14 = 131594;
          v18 = 104;
          goto LABEL_73;
        case 104:
          v17 = 8;
          v14 = 131596;
          v18 = 112;
          goto LABEL_73;
        case 112:
          v17 = 8;
          v14 = 131610;
          v18 = 120;
          goto LABEL_73;
        case 120:
          v17 = 8;
          v14 = 131586;
          v18 = 128;
          goto LABEL_73;
        case 128:
          v17 = 8;
          v14 = 131588;
          v18 = 136;
          goto LABEL_73;
        case 136:
          v17 = 8;
          v14 = 131590;
          v18 = 144;
          goto LABEL_73;
        case 144:
          v17 = 8;
          v14 = 131331;
          v18 = 152;
          goto LABEL_73;
        case 152:
          v17 = 8;
          v14 = 131612;
          v18 = 160;
          goto LABEL_73;
        case 160:
          v17 = 8;
          v14 = 131591;
          v18 = 168;
          goto LABEL_73;
        case 168:
          v17 = 8;
          v14 = 131593;
          v18 = 176;
          goto LABEL_73;
        case 176:
          v17 = 8;
          v14 = 131595;
          v18 = 184;
          goto LABEL_73;
        case 184:
          v17 = 8;
          v14 = 131585;
          v18 = 192;
          goto LABEL_73;
        case 192:
          v17 = 8;
          v14 = 131587;
          v18 = 200;
          goto LABEL_73;
        case 200:
          v17 = 8;
          v14 = 131589;
          v18 = 208;
          goto LABEL_73;
        case 208:
          v17 = 4;
          p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 576);
          v18 = 212;
          LODWORD(a2) = 1;
          goto LABEL_73;
        case 212:
          v17 = 4;
          p_ifOperStatusFlags = (unsigned __int8 *)(v5 + 1416);
          v18 = 216;
          LODWORD(a2) = 1;
          goto LABEL_72;
        default:
          goto LABEL_95;
      }
    }
    if ( (unsigned int)v9 < 0xD8 || v6 )
    {
LABEL_14:
      v17 = 4;
      v14 = 66179;
      v18 = 4;
    }
    else
    {
      v17 = 216;
      v14 = 66183;
      v18 = 216;
LABEL_72:
      v32 = 1;
    }
LABEL_73:
    if ( v13 < (int)v17 )
    {
LABEL_95:
      v12 = 1;
      v32 = 1;
      goto LABEL_96;
    }
    if ( v14 )
    {
      v19 = *(unsigned int (__fastcall **)(__int64, _QWORD, unsigned int *, _DWORD *))(*(_QWORD *)(v5 + 1328) + 56LL);
      v20 = *(_QWORD *)(v31 + 1320);
      v29 = v17;
      if ( v19(v20, v14, &v29, v8) )
      {
        memset(v8, 0, v17);
      }
      else
      {
        if ( v29 < v17 )
          memset((char *)v8 + v29, 0, v17 - v29);
        if ( !*(_BYTE *)(v31 + 1393) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v28) = v17;
            WPP_RECORDER_SF_qDqL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x16u,
              0x10u,
              (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
              a1,
              v14,
              (char)v8,
              v28);
          }
          if ( v14 == 66183 && v17 >= 0xD8 && !v8[52] )
            v8[52] = *(_DWORD *)(a1 + 576);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, v21, v22, v27);
        }
      }
    }
    else
    {
      if ( !p_ifOperStatusFlags )
        goto LABEL_95;
      v23 = a2 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
          ndisNsiCopyMemoryWithIfBlockLock(v16, (unsigned __int8 *)v8, p_ifOperStatusFlags, v17);
        else
          memmove(v8, p_ifOperStatusFlags, v17);
      }
      else
      {
        ndisNsiCopyMemoryWithGlobalIfLock(v8, p_ifOperStatusFlags, v17);
      }
    }
    v24 = v18 - v10;
    v10 = v18;
    v8 = (_DWORD *)((char *)v8 + v24);
    v13 = v34 - v24;
    v12 = v32;
    v34 = v13;
LABEL_96:
    v5 = v31;
    v9 = v30;
    if ( v13 <= 0 )
      break;
  }
  v3 = a3;
LABEL_98:
  v11 = v10 - *(_DWORD *)(v3 + 52);
  v25 = -1073741811;
  if ( v11 )
    v25 = 0;
  v4 = v25;
LABEL_101:
  *(_DWORD *)(v3 + 48) = v11;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v28) = v4;
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      a1,
      v6,
      v3,
      v28);
  }
  return v4;
}
