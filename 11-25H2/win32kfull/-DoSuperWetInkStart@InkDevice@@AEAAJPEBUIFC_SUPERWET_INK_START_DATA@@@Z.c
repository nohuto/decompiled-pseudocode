/*
 * XREFs of ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1402EEB38
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402EF4A0 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U1@U4@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@6666363333333333333@Z @ 0x14000661C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapper.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1402EE9A0 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1402EEE68 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 */

__int64 __fastcall InkDevice::DoSuperWetInkStart(InkDevice *this, const struct IFC_SUPERWET_INK_START_DATA *a2)
{
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+130h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+138h] [rbp-38h]
  __int64 v10; // [rsp+140h] [rbp-30h] BYREF
  const char *v11; // [rsp+148h] [rbp-28h] BYREF
  float v12; // [rsp+178h] [rbp+8h] BYREF
  char v13; // [rsp+180h] [rbp+10h]
  char v14; // [rsp+188h] [rbp+18h]

  v12 = 0.0;
  v4 = InkDevice::GetDisplayScalingInfoAndCheckSupported(this, *(_DWORD *)a2, &v12);
  if ( v4 >= 0 )
  {
    v4 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 1u, (__int64)a2, 0x40u);
    if ( v4 >= 0 && (unsigned int)dword_14039BC68 > 4 )
    {
      LOBYTE(v12) = *((_BYTE *)a2 + 16);
      v13 = *((_BYTE *)a2 + 11);
      v14 = *((_BYTE *)a2 + 10);
      v10 = *((_QWORD *)this + 10);
      v8 = 0;
      v11 = "Started super-wet ink";
      v9 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        (__int64)&unk_14036B94D,
        v5,
        v6,
        (__int64)&v8,
        &v11,
        &v10);
    }
  }
  return (unsigned int)v4;
}
