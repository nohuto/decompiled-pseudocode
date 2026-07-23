/*
 * XREFs of ExLogTimeZoneInformation @ 0x14051204C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

int ExLogTimeZoneInformation()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *Blink; // r9
  int *v2; // r9
  char v3; // cl
  char v5; // [rsp+30h] [rbp-D0h] BYREF
  char v6; // [rsp+31h] [rbp-CFh] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  int Flink_high; // [rsp+38h] [rbp-C8h] BYREF
  int Flink; // [rsp+3Ch] [rbp-C4h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  struct _LIST_ENTRY *v13; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-A0h] BYREF
  int *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int *p_Flink_high; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  int *p_Flink; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  char *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  struct _LIST_ENTRY **v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  char v25[16]; // [rsp+D0h] [rbp-30h] BYREF
  char *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  int *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  int *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  int *v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  int *v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Blink = CurrentServerSiloGlobals[76].Blink;
  if ( (unsigned int)dword_140E09170 > 5 )
  {
    v7 = (int)Blink[62].Blink;
    v16 = 4LL;
    v15 = &v7;
    Flink_high = HIDWORD(Blink[27].Flink);
    p_Flink_high = &Flink_high;
    Flink = (int)Blink[27].Flink;
    p_Flink = &Flink;
    v5 = ExpRealTimeIsUniversal;
    v21 = &v5;
    v13 = Blink[62].Flink;
    v23 = &v13;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 1LL;
    v24 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v25, (const WCHAR *)&Blink[10].Blink + 2);
    v3 = *((_BYTE *)v2 + 428);
    v26 = &v6;
    v10 = *v2;
    v28 = &v10;
    v11 = v2[21];
    v30 = &v11;
    v12 = v2[42];
    v32 = &v12;
    v34 = v2 + 17;
    v36 = v2 + 38;
    v6 = v3;
    v27 = 1LL;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 16LL;
    v37 = 16LL;
    LODWORD(CurrentServerSiloGlobals) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140E09170,
                                          (unsigned __int8 *)byte_14005612D,
                                          0LL,
                                          0LL,
                                          0xEu,
                                          &v14);
  }
  return (int)CurrentServerSiloGlobals;
}
