/*
 * XREFs of ndisPktMonMiniportRegister @ 0x14016E5F0
 * Callers:
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1400B52B0 (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019F20 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     PktMonClientAddEdge @ 0x1400605E0 (PktMonClientAddEdge.c)
 *     PktMonClientComponentRegister @ 0x140060620 (PktMonClientComponentRegister.c)
 *     PktMonClientComponentUnregister @ 0x140064970 (PktMonClientComponentUnregister.c)
 *     PktMonClientSetCompProperty @ 0x14006F1E0 (PktMonClientSetCompProperty.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPktMonMiniportRegister(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  _UNICODE_STRING *p_ImageName; // rdx
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  _NDIS_IF_BLOCK *IfBlock; // r8
  unsigned __int16 Length; // r9
  __int64 result; // rax
  char v12[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v15; // [rsp+68h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp-18h]

  v16 = *(_DWORD *)L"r";
  v14[1] = &v15;
  v13[1] = L"netadaptercx.sys";
  v15 = *(_QWORD *)L"Upper";
  v14[0] = 786442LL;
  v13[0] = 2228256LL;
  v12[0] = 1;
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL )
    p_ImageName = &a1->DriverHandle->ImageName;
  else
    p_ImageName = (_UNICODE_STRING *)v13;
  v5 = PktMonClientComponentRegister((__int64)&a1->PktMonComp, (__int64)p_ImageName, v3, 2LL, v2);
  if ( v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 15;
LABEL_28:
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v6,
        (struct _GUID *)&WPP_0cab6ce7973535d336ed7fc241c47cd0_Traceguids,
        (char)a1,
        v5);
    }
  }
  else
  {
    v5 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 9, (__int64)v12, 1u);
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 16;
        goto LABEL_28;
      }
    }
    else
    {
      v5 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 1, (__int64)&a1->IfIndex, 4u);
      if ( v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = 17;
          goto LABEL_28;
        }
      }
      else
      {
        v5 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 4, (__int64)&a1->InterfaceGuid, 0x10u);
        if ( v5 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v6 = 18;
            goto LABEL_28;
          }
        }
        else
        {
          v5 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 5, (__int64)&a1->MiniportMediaType, 4u);
          if ( v5 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v6 = 19;
              goto LABEL_28;
            }
          }
          else
          {
            if ( !ndisMReferenceIfBlock(a1, 0x1Bu) )
              goto LABEL_25;
            IfBlock = a1->IfBlock;
            Length = IfBlock->ifPhysAddress.Length;
            if ( Length )
              v5 = PktMonClientSetCompProperty(
                     (__int64)&a1->PktMonComp,
                     6,
                     (__int64)IfBlock->ifPhysAddress.Address,
                     Length);
            ndisMDereferenceIfBlock(a1, 0x1Bu);
            if ( v5 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v6 = 20;
                goto LABEL_28;
              }
            }
            else
            {
LABEL_25:
              result = PktMonClientAddEdge(
                         (__int64)&a1->PktMonComp,
                         (__int64)v14,
                         v7,
                         v8,
                         a1->MiniportMediaType,
                         (__int64)&a1->PktMonEdge);
              v5 = result;
              if ( !(_DWORD)result )
                return result;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v6 = 21;
                goto LABEL_28;
              }
            }
          }
        }
      }
    }
  }
  PktMonClientComponentUnregister((__int64 *)&a1->PktMonComp);
  return v5;
}
