/*
 * XREFs of ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1800ABB8C
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1800AC724 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C64 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C80 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095CC8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095E0C (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095E5C (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U1@U1@U3@U3@U2@U1@U2@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@335543444443@Z @ 0x1801D8EA8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U1@U1@U3@U3@U2.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::SetPointerResult(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        const struct TargetingInfo *a5)
{
  const struct TargetingInfo *v5; // rdi
  __int64 v10; // rbx
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdx
  unsigned __int8 v14; // al
  int v15; // eax
  const char *v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  const char *v21; // rax
  int v22; // ecx
  BOOL v23; // [rsp+B8h] [rbp-80h] BYREF
  BOOL v24; // [rsp+BCh] [rbp-7Ch] BYREF
  BOOL v25; // [rsp+C0h] [rbp-78h] BYREF
  int v26; // [rsp+C4h] [rbp-74h] BYREF
  int v27; // [rsp+C8h] [rbp-70h] BYREF
  int v28; // [rsp+CCh] [rbp-6Ch] BYREF
  int v29; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD *InputHandle; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-58h] BYREF
  const char *v32; // [rsp+E8h] [rbp-50h] BYREF
  const char *v33; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v35; // [rsp+100h] [rbp-38h] BYREF
  const char *v36; // [rsp+108h] [rbp-30h] BYREF
  __int64 v37; // [rsp+110h] [rbp-28h] BYREF
  __int64 v38; // [rsp+118h] [rbp-20h] BYREF

  v5 = a5;
  v10 = (*((_QWORD *)a5 + 1) - 72LL) & -(__int64)(*((_QWORD *)a5 + 1) != 0LL);
  v11 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v11 > 4u
    && (*((_DWORD *)v11 + 4) & 0x800LL) != 0
    && (*((_QWORD *)v11 + 3) & 0x800LL) == *((_QWORD *)v11 + 3) )
  {
    if ( v10 )
      v12 = *(_QWORD *)(v10 + 1712);
    else
      v12 = 0LL;
    v31 = v12;
    v23 = InputTraceLogging::InteractionHoverSource((const struct CInteraction *)v10);
    v24 = InputTraceLogging::InteractionInputTransparency((const struct CInteraction *)v10);
    v25 = InputTraceLogging::InteractionFurtherProcessingForInput((const struct CInteraction *)v10);
    if ( v10 )
      v14 = *(_BYTE *)(v10 + 200) & 1;
    else
      v14 = (unsigned __int8)v13;
    v26 = v14;
    if ( v10 )
    {
      LODWORD(a5) = *(_DWORD *)(v10 + 196);
      InputHandle = CInteraction::GetInputHandle((CInteraction *)v10);
      v15 = *(_DWORD *)(v10 + 1720);
    }
    else
    {
      LODWORD(a5) = (_DWORD)v13;
      v15 = (int)v13;
      InputHandle = v13;
    }
    v27 = v15;
    v32 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v10);
    v16 = InputTraceLogging::InteractionSourceTypeToString((const struct CInteraction *)v10);
    v20 = *(_DWORD *)v5;
    v33 = v16;
    v34 = v10;
    v35 = v10;
    if ( v20 )
    {
      v22 = v20 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
          v21 = "Release";
        else
          v21 = "UNKNOWN";
      }
      else
      {
        v21 = "Drop";
        if ( *((_QWORD *)v5 + 1) != v17 )
          v21 = "Send";
      }
    }
    else
    {
      v21 = "Buffer";
    }
    v36 = v21;
    v28 = a4;
    v29 = a3;
    v37 = a2;
    v38 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v18,
      (unsigned int)&unk_1803B0413,
      v18,
      v19,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v27,
      (__int64)&InputHandle,
      (__int64)&a5,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v31);
  }
}
