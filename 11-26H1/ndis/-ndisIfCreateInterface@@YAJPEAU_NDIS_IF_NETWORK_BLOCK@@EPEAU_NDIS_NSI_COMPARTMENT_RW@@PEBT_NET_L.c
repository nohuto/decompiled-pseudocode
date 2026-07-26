/*
 * XREFs of ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140165700
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140061B40 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140089D40 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400CF9FC (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1400CFBB8 (ndisIfCreateCompartment.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqq @ 0x140022C70 (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qqqqL @ 0x14006A010 (WPP_RECORDER_SF_qqqqL.c)
 *     ?ndisIfNdisProviderGetHandle@@YAPEAX_N@Z @ 0x1400745A0 (-ndisIfNdisProviderGetHandle@@YAPEAX_N@Z.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x140077870 (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x140089340 (ndisIfRegisterInterfaceEx.c)
 *     ndisIfUpdateLoopbackInterfaceOnNetwork @ 0x1400CE668 (ndisIfUpdateLoopbackInterfaceOnNetwork.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x140146A30 (NdisIfAllocateNetLuidIndexEx.c)
 *     NdisIfFreeNetLuidIndex @ 0x140167E70 (NdisIfFreeNetLuidIndex.c)
 */

__int64 __fastcall ndisIfCreateInterface(
        struct _NDIS_IF_NETWORK_BLOCK *a1,
        __int64 a2,
        struct _NDIS_NSI_COMPARTMENT_RW *a3,
        const union _NET_LUID_LH *a4,
        const struct _GUID *a5,
        const struct NdisNetworkInterfacePersistedState *a6,
        struct _NDIS_FILTER_BLOCK *a7,
        enum NdisIfBlockSource a8)
{
  unsigned int v8; // r12d
  unsigned __int16 v11; // si
  __int64 Pool2; // rax
  __int64 v13; // rdi
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  _UNICODE_STRING *FilterFriendlyName; // rdx
  unsigned __int16 v16; // ax
  unsigned int v17; // ecx
  size_t v18; // r8
  unsigned int SupportedStatistics; // ecx
  _NET_IF_ADMIN_STATUS ifAdminStatus; // ecx
  unsigned int ifMtu; // ecx
  ULONG64 Value; // rbx
  __int128 v23; // xmm0
  __int64 v24; // rax
  _QWORD *Handle; // rax
  int appended; // esi
  UINT32 v27; // ebx
  NET_IFTYPE v28; // r8
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  unsigned __int16 v33; // ax
  __int64 v34; // rdx
  unsigned __int16 v35; // ax
  unsigned int v36; // ecx
  size_t v37; // r8
  char v38; // al
  unsigned __int16 Length; // ax
  __int16 v40; // ax
  unsigned int v41; // esi
  size_t v42; // r8
  size_t v43; // r8
  char *v44; // rcx
  char *v45; // rdx
  size_t v46; // r8
  int v47; // [rsp+28h] [rbp-79h]
  UINT32 NetLuidIndex; // [rsp+58h] [rbp-49h]
  UINT32 v49; // [rsp+5Ch] [rbp-45h] BYREF
  _UNICODE_STRING Destination; // [rsp+60h] [rbp-41h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-31h] BYREF
  _UNICODE_STRING String; // [rsp+80h] [rbp-21h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-11h] BYREF
  char v54; // [rsp+E8h] [rbp+47h]
  char v55; // [rsp+F0h] [rbp+4Fh]

  v55 = a2;
  *(_QWORD *)&Source.Length = 262146LL;
  v8 = 0;
  Source.Buffer = L" ";
  NetLuidIndex = 0;
  v49 = 0;
  v54 = 0;
  Destination = 0LL;
  DestinationString = 0LL;
  String = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_3f36a8145c46374a55ba7bb1149603fd_Traceguids,
      (char)a1,
      (char)a3,
      (char)a4,
      a7);
  if ( a1 )
  {
    if ( a6 && *((_WORD *)a6 + 32) > 0x20u )
    {
      appended = -1073741811;
      goto LABEL_26;
    }
    if ( a7 && a7->Miniport->IfBlock->ifPhysAddress.Length > 0x20u )
    {
      appended = -1073741811;
    }
    else
    {
      v11 = 512;
      String.MaximumLength = 512;
      Pool2 = ExAllocatePool2(64LL, 1784LL, 1718174798LL);
      v13 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 6291840;
        String.Buffer = (wchar_t *)(Pool2 + 1272);
        if ( !a6 )
        {
          if ( !a7 )
          {
            v38 = v55;
            if ( v55 )
            {
              appended = NdisIfAllocateNetLuidIndexEx(0x18u, *((_BYTE *)a3 + 1616) & 1, &v49);
              if ( appended )
              {
LABEL_25:
                ExFreePoolWithTag((PVOID)v13, 0);
                goto LABEL_26;
              }
              v27 = v49;
              *((_WORD *)a3 + 7) = 24;
              v54 = 1;
              NetLuidIndex = v27;
              *((_QWORD *)a3 + 1) = ((unsigned __int64)v27 << 24) ^ (*((_QWORD *)a3 + 1) ^ ((unsigned __int64)v27 << 24)) & 0xFFFF000000000000uLL;
              appended = ExUuidCreate((UUID *)a3 + 2);
              if ( appended < 0 )
                goto LABEL_18;
              v38 = v55;
            }
            Value = *((_QWORD *)a3 + 1);
            *(_QWORD *)(v13 + 28) = 1LL;
            *(_DWORD *)(v13 + 36) = 1;
            *(_BYTE *)(v13 + 40) = 0;
            *(_QWORD *)(v13 + 88) = 17LL;
            *(_DWORD *)(v13 + 640) = 1500;
            *(_QWORD *)(v13 + 720) = 0x40000000LL;
            *(_QWORD *)(v13 + 728) = 0x40000000LL;
            *(_DWORD *)(v13 + 740) = 1;
            *(_DWORD *)(v13 + 744) = 2;
            *(_QWORD *)(v13 + 632) = 1LL;
            *(_OWORD *)(v13 + 52) = *((_OWORD *)a3 + 2);
            if ( v38 )
            {
              RtlInitUnicodeString(&DestinationString, &xmmword_14011F242);
              *(_DWORD *)&Destination.Length = 0x2000000;
              Destination.Buffer = (wchar_t *)(v13 + 754);
              RtlCopyUnicodeString(&Destination, &DestinationString);
              appended = RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( appended < 0 )
                goto LABEL_69;
              appended = RtlIntegerToUnicodeString(*(_DWORD *)(*((_QWORD *)a1 + 6) + 16LL), 0xAu, &String);
              if ( appended < 0 )
                goto LABEL_69;
              appended = RtlAppendUnicodeStringToString(&Destination, &String);
              if ( appended < 0 )
                goto LABEL_69;
              Length = Destination.Length;
              *(_WORD *)(v13 + 752) = Destination.Length;
              *(_WORD *)(v13 + 48) = Length;
              RtlInitUnicodeString(&DestinationString, &xmmword_14011F452);
              *(_DWORD *)&Destination.Length = 0x2000000;
              Destination.Buffer = (wchar_t *)(v13 + 118);
              RtlCopyUnicodeString(&Destination, &DestinationString);
              appended = RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( appended < 0 || (appended = RtlAppendUnicodeStringToString(&Destination, &String), appended < 0) )
              {
LABEL_69:
                v27 = NetLuidIndex;
LABEL_18:
                v28 = 24;
                goto LABEL_19;
              }
              v40 = *(_WORD *)(v13 + 48);
              v41 = Destination.Length;
              v42 = *(unsigned __int16 *)(v13 + 752);
              *(_WORD *)(v13 + 116) = Destination.Length;
              *((_WORD *)a3 + 24) = v40;
              memmove((char *)a3 + 50, (const void *)(v13 + 754), v42);
              v43 = v41;
              *((_WORD *)a3 + 282) = v41;
              v44 = (char *)a3 + 566;
              v45 = (char *)(v13 + 118);
            }
            else
            {
              if ( !ndisIsValidIfString((const struct _IF_COUNTED_STRING_LH *)((char *)a3 + 48))
                || !ndisIsValidIfString((const struct _IF_COUNTED_STRING_LH *)((char *)a3 + 564)) )
              {
                v27 = NetLuidIndex;
                appended = -1073676267;
LABEL_19:
                if ( v54 )
                  NdisIfFreeNetLuidIndex(v28, v27);
                goto LABEL_25;
              }
              v46 = *((unsigned __int16 *)a3 + 24);
              *(_WORD *)(v13 + 48) = v46;
              memmove((void *)(v13 + 754), (char *)a3 + 50, v46);
              v43 = *((unsigned __int16 *)a3 + 282);
              v45 = (char *)a3 + 566;
              *(_WORD *)(v13 + 116) = v43;
              v44 = (char *)(v13 + 118);
            }
            memmove(v44, v45, v43);
            *(_DWORD *)(v13 + 712) = 1;
LABEL_14:
            v23 = *((_OWORD *)a1 + 2);
            v24 = *((_QWORD *)a1 + 6);
            *(_WORD *)(v13 + 50) = 754;
            *(_OWORD *)(v13 + 68) = v23;
            *(_DWORD *)(v13 + 96) = *(_DWORD *)(v24 + 16);
            *(_WORD *)(v13 + 736) = 0;
            *(_OWORD *)(v13 + 100) = v23;
            if ( a6 )
              v8 = *((_DWORD *)a6 + 8);
            Handle = ndisIfNdisProviderGetHandle(a3 != 0LL);
            appended = ndisIfRegisterInterfaceEx(Handle, Value, (__int64)a7, v13, a8, v8, &v49);
            if ( !appended )
            {
              if ( a3 )
                ndisIfUpdateLoopbackInterfaceOnNetwork((__int64)a1, (union _NET_LUID_LH)Value);
              goto LABEL_25;
            }
            v27 = NetLuidIndex;
            goto LABEL_18;
          }
          *(_DWORD *)(Pool2 + 4) |= 2u;
          Miniport = a7->Miniport;
          FilterFriendlyName = a7->FilterFriendlyName;
          *(_DWORD *)(Pool2 + 20) = -1;
          *(_DWORD *)(Pool2 + 28) = Miniport->IfBlock->AccessType;
          *(_DWORD *)(Pool2 + 32) = Miniport->IfBlock->DirectionType;
          *(_DWORD *)(Pool2 + 36) = Miniport->IfBlock->ConnectionType;
          *(_BYTE *)(Pool2 + 40) = 0;
          v16 = FilterFriendlyName->Length;
          if ( FilterFriendlyName->Length > 0x200u )
          {
            *(_WORD *)(v13 + 752) = 512;
            *(_WORD *)(v13 + 48) = 512;
          }
          else
          {
            *(_WORD *)(v13 + 752) = v16;
            v11 = v16;
            *(_WORD *)(v13 + 48) = v16;
            if ( !v16 )
            {
LABEL_13:
              *(_BYTE *)(v13 + 738) = Miniport->IfBlock->ifHideInterfaceInUi;
              v17 = Miniport->IfBlock->ifPhysAddress.Length;
              *(_WORD *)(v13 + 42) = v17;
              *(_WORD *)(v13 + 644) = v17;
              *(_DWORD *)(v13 + 44) = 44565126;
              memmove((void *)(v13 + 646), Miniport->IfBlock->ifPhysAddress.Address, v17);
              v18 = *(unsigned __int16 *)(v13 + 42);
              *(_WORD *)(v13 + 678) = v18;
              memmove((void *)(v13 + 680), Miniport->IfBlock->PermanentPhysAddress.Address, v18);
              *(_GUID *)(v13 + 52) = a7->InterfaceGuid;
              SupportedStatistics = Miniport->IfBlock->SupportedStatistics;
              *(_DWORD *)(v13 + 88) = a7->MediaType;
              *(_DWORD *)(v13 + 92) = a7->PhysicalMediaType;
              *(_DWORD *)(v13 + 84) = SupportedStatistics;
              ifAdminStatus = Miniport->IfBlock->ifAdminStatus;
              *(_QWORD *)(v13 + 720) = a7->XmitLinkSpeed;
              *(_QWORD *)(v13 + 728) = a7->RcvLinkSpeed;
              *(_DWORD *)(v13 + 740) = a7->MediaConnectState;
              *(_DWORD *)(v13 + 744) = a7->MediaDuplexState;
              *(_DWORD *)(v13 + 712) = ifAdminStatus;
              *(_DWORD *)(v13 + 632) = Miniport->IfBlock->ifOperStatus;
              *(_DWORD *)(v13 + 636) = Miniport->IfBlock->ifOperStatusFlags;
              ifMtu = Miniport->IfBlock->ifMtu;
              Value = a4->Value;
              *(_DWORD *)(v13 + 640) = ifMtu;
              goto LABEL_14;
            }
          }
          memmove((void *)(v13 + 754), FilterFriendlyName->Buffer, v11);
          goto LABEL_13;
        }
        v30 = *((unsigned __int16 *)a6 + 8) - 1;
        *(_QWORD *)(v13 + 28) = 2LL;
        *(_DWORD *)(v13 + 36) = 1;
        switch ( v30 )
        {
          case 0:
            switch ( *((_DWORD *)a6 + 14) )
            {
              case 9:
                goto LABEL_40;
              case 0xA:
                goto LABEL_41;
              case 0xB:
                *(_DWORD *)(v13 + 32) = 2;
                goto LABEL_41;
              case 0xC:
                goto LABEL_40;
            }
            break;
          case 22:
LABEL_40:
            *(_DWORD *)(v13 + 36) = 3;
            goto LABEL_41;
          case 36:
            *(_DWORD *)(v13 + 28) = 4;
            break;
          case 130:
LABEL_41:
            *(_DWORD *)(v13 + 28) = 3;
            break;
          default:
            break;
        }
        *(_DWORD *)(v13 + 20) = -1;
        *(_DWORD *)(v13 + 4) = 28;
        if ( *((_BYTE *)a6 + 133) )
          *(_DWORD *)(v13 + 4) = 29;
        if ( *((_BYTE *)a6 + 132) )
          *(_BYTE *)(v13 + 738) = 1;
        v31 = *(_QWORD *)a6;
        *(_DWORD *)(v13 + 88) = *((_DWORD *)a6 + 14);
        v32 = *((_DWORD *)a6 + 15);
        *(_DWORD *)(v13 + 24) = 0;
        *(_BYTE *)(v13 + 40) = 0;
        *(_DWORD *)(v13 + 42) = 0;
        *(_WORD *)(v13 + 46) = 0;
        *(_DWORD *)(v13 + 92) = v32;
        *(_QWORD *)(v13 + 636) = 0LL;
        *(_WORD *)(v13 + 644) = 0;
        *(_WORD *)(v13 + 678) = 0;
        *(_QWORD *)(v13 + 720) = 0LL;
        *(_QWORD *)(v13 + 728) = 0LL;
        *(_QWORD *)(v13 + 740) = 0LL;
        *(_DWORD *)(v13 + 712) = 2;
        *(_DWORD *)(v13 + 632) = 6;
        v33 = *(_WORD *)v31;
        if ( *(_WORD *)v31 <= 0x200u )
        {
          *(_WORD *)(v13 + 116) = v33;
          if ( !v33 )
          {
LABEL_51:
            v34 = *((_QWORD *)a6 + 1);
            v35 = *(_WORD *)v34;
            if ( *(_WORD *)v34 )
            {
              if ( v35 > 0x200u )
                v35 = 512;
              *(_WORD *)(v13 + 752) = v35;
              memmove((void *)(v13 + 754), *(const void **)(v34 + 8), v35);
              *(_WORD *)(v13 + 48) = *(_WORD *)(v13 + 752);
            }
            v36 = *((unsigned __int16 *)a6 + 32);
            *(struct _GUID *)(v13 + 52) = *a5;
            if ( (_WORD)v36 )
            {
              *(_WORD *)(v13 + 42) = v36;
              *(_WORD *)(v13 + 644) = v36;
              *(_DWORD *)(v13 + 44) = 44565126;
              memmove((void *)(v13 + 646), (char *)a6 + 66, v36);
              v37 = *(unsigned __int16 *)(v13 + 42);
              *(_WORD *)(v13 + 678) = v37;
              memmove((void *)(v13 + 680), (char *)a6 + 100, v37);
            }
            Value = a4->Value;
            goto LABEL_14;
          }
        }
        else
        {
          v33 = 512;
          *(_WORD *)(v13 + 116) = 512;
        }
        memmove((void *)(v13 + 118), *(const void **)(v31 + 8), v33);
        goto LABEL_51;
      }
      appended = -1073741670;
    }
  }
  else
  {
    appended = -1073741811;
  }
LABEL_26:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, (__int64)a4, v47);
  return (unsigned int)appended;
}
