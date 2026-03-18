/*
 * XREFs of ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1402FE238
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402FEB90 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U1@U4@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@6666363333333333333@Z @ 0x140001CE4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapper.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1402FE0A0 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1402FE570 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 */

__int64 __fastcall InkDevice::DoSuperWetInkStart(InkDevice *this, const struct IFC_SUPERWET_INK_START_DATA *a2)
{
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  char v9; // [rsp+F0h] [rbp-80h] BYREF
  char v10; // [rsp+F1h] [rbp-7Fh] BYREF
  _BYTE v11[2]; // [rsp+F2h] [rbp-7Eh] BYREF
  int v12; // [rsp+F4h] [rbp-7Ch] BYREF
  int v13; // [rsp+F8h] [rbp-78h] BYREF
  int v14; // [rsp+FCh] [rbp-74h] BYREF
  int v15; // [rsp+100h] [rbp-70h] BYREF
  int v16; // [rsp+104h] [rbp-6Ch] BYREF
  int v17; // [rsp+108h] [rbp-68h] BYREF
  int v18; // [rsp+10Ch] [rbp-64h] BYREF
  int v19; // [rsp+110h] [rbp-60h] BYREF
  int v20; // [rsp+114h] [rbp-5Ch] BYREF
  int v21; // [rsp+118h] [rbp-58h] BYREF
  int v22; // [rsp+11Ch] [rbp-54h] BYREF
  int v23; // [rsp+120h] [rbp-50h] BYREF
  int v24; // [rsp+124h] [rbp-4Ch] BYREF
  int v25; // [rsp+128h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+12Ch] [rbp-44h] BYREF
  int v27; // [rsp+130h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+138h] [rbp-38h] BYREF
  void *v29; // [rsp+140h] [rbp-30h] BYREF
  const char *v30; // [rsp+148h] [rbp-28h] BYREF
  float v31; // [rsp+178h] [rbp+8h] BYREF
  char v32; // [rsp+180h] [rbp+10h] BYREF
  char v33; // [rsp+188h] [rbp+18h] BYREF

  v31 = 0.0;
  v4 = InkDevice::GetDisplayScalingInfoAndCheckSupported(this, *(_DWORD *)a2, &v31);
  if ( v4 >= 0 )
  {
    v4 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 1u, (__int64)a2, 0x40u);
    if ( v4 >= 0 && (unsigned int)dword_1403AAAD8 > 4 )
    {
      v7 = *((_DWORD *)a2 + 15);
      v27 = 0;
      v12 = -__CFSHR__(v7, 3);
      v13 = -__CFSHR__(v7, 2);
      v15 = *((_DWORD *)a2 + 14);
      v16 = *((_DWORD *)a2 + 13);
      v17 = *((_DWORD *)a2 + 12);
      v18 = *((_DWORD *)a2 + 11);
      v19 = *((_DWORD *)a2 + 10);
      v20 = *((_DWORD *)a2 + 9);
      v21 = *((_DWORD *)a2 + 8);
      v22 = *((_DWORD *)a2 + 7);
      v23 = *((_DWORD *)a2 + 6);
      v24 = *((_DWORD *)a2 + 5);
      LOBYTE(v31) = *((_BYTE *)a2 + 16);
      v25 = *((_DWORD *)a2 + 3);
      v32 = *((_BYTE *)a2 + 11);
      v33 = *((_BYTE *)a2 + 10);
      v9 = *((_BYTE *)a2 + 9);
      v10 = *((_BYTE *)a2 + 8);
      v11[0] = *((_BYTE *)a2 + 4);
      v26 = *(_DWORD *)a2;
      v14 = -(v7 & 1);
      v29 = (void *)*((_QWORD *)this + 10);
      v30 = "Started super-wet ink";
      v28 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)this + 32,
        (__int64)&unk_140379D19,
        v5,
        v6,
        (__int64)&v27,
        (void **)&v30,
        &v29,
        (__int64)&v28,
        (__int64)&v26,
        (__int64)v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v25,
        (__int64)&v31,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
  return (unsigned int)v4;
}
