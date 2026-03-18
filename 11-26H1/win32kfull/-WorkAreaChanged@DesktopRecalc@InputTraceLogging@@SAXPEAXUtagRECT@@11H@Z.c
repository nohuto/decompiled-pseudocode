/*
 * XREFs of ?WorkAreaChanged@DesktopRecalc@InputTraceLogging@@SAXPEAXUtagRECT@@11H@Z @ 0x14025A8E0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444@Z @ 0x140002D54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@.c)
 */

void __fastcall InputTraceLogging::DesktopRecalc::WorkAreaChanged(
        void *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        int a5)
{
  int v5; // [rsp+90h] [rbp+Fh] BYREF
  LONG bottom; // [rsp+94h] [rbp+13h] BYREF
  LONG right; // [rsp+98h] [rbp+17h] BYREF
  LONG top; // [rsp+9Ch] [rbp+1Bh] BYREF
  LONG left; // [rsp+A0h] [rbp+1Fh] BYREF
  LONG v10; // [rsp+A4h] [rbp+23h] BYREF
  LONG v11; // [rsp+A8h] [rbp+27h] BYREF
  LONG v12; // [rsp+ACh] [rbp+2Bh] BYREF
  LONG v13; // [rsp+B0h] [rbp+2Fh] BYREF
  LONG v14; // [rsp+B4h] [rbp+33h] BYREF
  LONG v15; // [rsp+B8h] [rbp+37h] BYREF
  LONG v16; // [rsp+BCh] [rbp+3Bh] BYREF
  LONG v17; // [rsp+C0h] [rbp+3Fh] BYREF
  void *v18; // [rsp+C8h] [rbp+47h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4
    && (qword_1403AA9D0 & 0x80000) != 0
    && (qword_1403AA9D8 & 0x80000) == qword_1403AA9D8 )
  {
    v5 = a5;
    bottom = a4->bottom;
    right = a4->right;
    top = a4->top;
    left = a4->left;
    v10 = a3->bottom;
    v11 = a3->right;
    v12 = a3->top;
    v13 = a3->left;
    v14 = a2->bottom;
    v15 = a2->right;
    v16 = a2->top;
    v17 = a2->left;
    v18 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AA9C0,
      (__int64)&unk_14037591E,
      (__int64)a3,
      (__int64)a4,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom,
      (__int64)&v5);
  }
}
