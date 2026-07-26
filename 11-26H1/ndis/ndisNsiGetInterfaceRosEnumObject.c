/*
 * XREFs of ndisNsiGetInterfaceRosEnumObject @ 0x140152A60
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140010D10 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400126D0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140014610 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140015D10 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019D10 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosEnumObject(struct _NDIS_IF_BLOCK *a1, struct _NDIS_IF_BLOCK *a2, __int64 a3)
{
  __int64 v3; // r13
  char v5; // bl
  unsigned int v6; // edi
  char *v7; // r12
  unsigned int v8; // ebp
  int v9; // esi
  char v10; // r15
  const void *p_InterfaceGuid; // rbx
  unsigned int v12; // edi
  int v13; // r14d
  struct _NDIS_MINIPORT_BLOCK *v14; // rax
  struct _NDIS_MINIPORT_BLOCK *v15; // rdx
  signed __int32 InterlockedFlags; // eax
  signed __int32 v17; // ett
  __int16 v18; // bx
  bool v19; // cf
  struct _NDIS_IF_BLOCK *v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  struct _NDIS_IF_BLOCK *v25; // [rsp+88h] [rbp+10h]

  v3 = a3;
  v5 = (char)a1;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1,
      a3);
  v7 = *(char **)(v3 + 40);
  v8 = *(_DWORD *)(v3 + 52);
  v9 = *(_DWORD *)(v3 + 48);
  if ( v7 )
  {
    v10 = 0;
    if ( v9 > 0 )
    {
      if ( !a2 )
        a2 = a1;
      v25 = a2;
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_34:
          v3 = a3;
          v6 = 0;
          v5 = (char)a1;
          break;
        }
        if ( v8 > 0x214 )
        {
          switch ( v8 )
          {
            case 0x218u:
              v12 = 16;
              p_InterfaceGuid = &a1->InterfaceGuid;
              v13 = 552;
              break;
            case 0x228u:
              v12 = 1;
              p_InterfaceGuid = &a1->ifConnectorPresent;
              v13 = 556;
              break;
            case 0x22Cu:
              v12 = 4;
              p_InterfaceGuid = &a1->ifFlags;
              v13 = 560;
              break;
            case 0x230u:
              p_InterfaceGuid = &a2->MediaType;
              v12 = 4;
              v14 = ndisIfReferenceMiniport(a1, 0x18u);
              v15 = v14;
              if ( v14 )
              {
                _m_prefetchw(&v14->InterlockedFlags);
                InterlockedFlags = v14->InterlockedFlags;
                do
                {
                  v17 = InterlockedFlags;
                  InterlockedFlags = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&v15->InterlockedFlags,
                                       InterlockedFlags,
                                       InterlockedFlags);
                }
                while ( v17 != InterlockedFlags );
                v18 = InterlockedFlags;
                ndisIfDereferenceMiniport(a1, v15, 0x18u);
                v19 = (v18 & 0x100) != 0;
                v20 = a1;
                if ( !v19 )
                  v20 = a2;
                p_InterfaceGuid = &v20->MediaType;
              }
              v13 = 564;
              break;
            case 0x234u:
              p_InterfaceGuid = &a2->PhysicalMediumType;
              v12 = 4;
              v13 = 568;
              v10 = 1;
              break;
            default:
              goto LABEL_16;
          }
        }
        else if ( v8 == 532 )
        {
          p_InterfaceGuid = &a2->ConnectionType;
          v12 = 4;
          v13 = 536;
        }
        else if ( v8 )
        {
          switch ( v8 )
          {
            case 4u:
              v12 = 516;
              p_InterfaceGuid = &a1->ifDescr;
              v13 = 520;
              break;
            case 0x208u:
              v12 = 2;
              p_InterfaceGuid = &a1->ifType;
              v13 = 524;
              break;
            case 0x20Cu:
              p_InterfaceGuid = &a2->AccessType;
              v12 = 4;
              v13 = 528;
              break;
            case 0x210u:
              v12 = 4;
              p_InterfaceGuid = &a1->DirectionType;
              v13 = 532;
              break;
            default:
              goto LABEL_16;
          }
        }
        else
        {
          v12 = 4;
          p_InterfaceGuid = &a1->_NDIS_NSI_INTERFACE_ENUM_ROS;
          v13 = 4;
        }
        if ( v9 >= v12 && p_InterfaceGuid )
        {
          memmove(v7, p_InterfaceGuid, v12);
          v21 = v13 - v8;
          v8 = v13;
          v7 += v21;
          v9 -= v21;
          goto LABEL_33;
        }
LABEL_16:
        v10 = 1;
LABEL_33:
        a2 = v25;
        if ( v9 <= 0 )
          goto LABEL_34;
      }
    }
    v22 = v8 - *(_DWORD *)(v3 + 52);
    *(_DWORD *)(v3 + 48) = v22;
    if ( !v22 )
      v6 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      v5,
      v3,
      v6);
  return v6;
}
