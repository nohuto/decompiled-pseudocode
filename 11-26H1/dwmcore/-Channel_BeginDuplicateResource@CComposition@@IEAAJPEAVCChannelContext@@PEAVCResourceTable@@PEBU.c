/*
 * XREFs of ?Channel_BeginDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_BEGINDUPLICATERESOURCE@@@Z @ 0x18019CD00
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qqqqx_EventWriteTransfer @ 0x18019CE9C (McTemplateU0qqqqx_EventWriteTransfer.c)
 *     ??$_Emplace_reallocate@U?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@@?$vector@U?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@V?$allocator@U?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@@2@@std@@AEAAPEAU?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@1@QEAU21@$$QEAU21@@Z @ 0x18019CF50 (--$_Emplace_reallocate@U-$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@@-$vector@U-$pair@PEAVC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::Channel_BeginDuplicateResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_BEGINDUPLICATERESOURCE *a4)
{
  unsigned int v4; // r10d
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v11; // rsi
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rbx
  _OWORD *v15; // rdx
  int v16; // edx
  int v17; // ecx
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF

  v4 = *((_DWORD *)a4 + 1);
  if ( v4
    && v4 < *((_DWORD *)a3 + 7)
    && (v7 = *((_QWORD *)a3 + 5), v8 = *((_DWORD *)a3 + 6) * v4, *(_DWORD *)(v8 + v7))
    && (v11 = *(_QWORD *)(v8 + v7 + 8)) != 0 )
  {
    if ( v4 >= *((_DWORD *)a3 + 7) )
      v12 = 0;
    else
      v12 = *(_DWORD *)(*((_DWORD *)a3 + 6) * v4 + v7);
    v13 = *((unsigned int *)a4 + 2);
    if ( (unsigned int)v13 < 0x10000
      && (unsigned int)v13 < *((_DWORD *)this + 214)
      && (v14 = *(_QWORD *)(*((_QWORD *)this + 104) + 8 * v13)) != 0 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v14 + 8));
      *(_QWORD *)&v18 = v11;
      v15 = *(_OWORD **)(v14 + 88);
      v9 = 0;
      DWORD2(v18) = v12;
      if ( v15 == *(_OWORD **)(v14 + 96) )
      {
        std::vector<std::pair<CResource *,enum MIL_RESOURCE_TYPE>>::_Emplace_reallocate<std::pair<CResource *,enum MIL_RESOURCE_TYPE>>(
          v14 + 80,
          v15,
          &v18);
      }
      else
      {
        *v15 = v18;
        *(_QWORD *)(v14 + 88) += 16LL;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800000) != 0 )
        McTemplateU0qqqqx_EventWriteTransfer(
          v17,
          v16,
          *((_DWORD *)a2 + 6),
          *((_DWORD *)a4 + 1),
          *((_DWORD *)a4 + 2),
          v12,
          v11);
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)v14);
    }
    else
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x693u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x4FFu, 0LL);
    }
  }
  else
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x4FAu, 0LL);
  }
  return v9;
}
