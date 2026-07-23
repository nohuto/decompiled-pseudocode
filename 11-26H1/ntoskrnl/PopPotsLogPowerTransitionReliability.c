/*
 * XREFs of PopPotsLogPowerTransitionReliability @ 0x140B5F010
 * Callers:
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x1407D28E0 (PopQueryMostRecentWakeSourceAttributes.c)
 */

char __fastcall PopPotsLogPowerTransitionReliability(int a1, int a2, int a3)
{
  unsigned __int16 *v3; // rdi
  unsigned __int16 *v4; // rsi
  int v5; // r14d
  BOOL v8; // r15d
  char result; // al
  int v10; // ecx
  int v11; // ecx
  BOOL v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v13; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+70h] [rbp-90h] BYREF
  BOOL *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  _BYTE v26[16]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  __int64 v29; // [rsp+E0h] [rbp-20h]
  _DWORD v30[2]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  __int64 v33; // [rsp+100h] [rbp+0h]
  _DWORD v34[2]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 **v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  unsigned __int16 **v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  __int64 *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  wchar_t Dst[12]; // [rsp+140h] [rbp+40h] BYREF
  int v42; // [rsp+1B0h] [rbp+B0h] BYREF

  v42 = a3;
  v17[0] = 0x20000LL;
  v12 = 0;
  v17[1] = &word_140B8A320;
  v3 = (unsigned __int16 *)v17;
  v14 = (unsigned __int16 *)v17;
  v4 = (unsigned __int16 *)v17;
  v13 = (unsigned __int16 *)v17;
  v5 = a3;
  v8 = 0;
  if ( a1 >= 0 )
  {
    PopQueryMostRecentWakeSourceAttributes(&v42, &v14, &v13, &v12);
    v5 = v42;
    v8 = v12;
    v3 = v14;
    v4 = v13;
  }
  result = swprintf_s(Dst, 9uLL, L"%08X", (unsigned int)a1);
  if ( PotsPowerTransitionsHandleRegistered && (unsigned int)dword_140E081E0 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E081E0, 0x400000000000LL);
    if ( result )
    {
      v21 = 4LL;
      v20 = &v12;
      v15 = a2;
      v22 = &v15;
      v23 = 4LL;
      v24 = &v16;
      v12 = a1 >= 0;
      v16 = v5;
      v25 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v26, Dst);
      v10 = *v3;
      v29 = *((_QWORD *)v3 + 1);
      v27 = v30;
      v30[0] = v10;
      v28 = 2LL;
      v30[1] = 0;
      v11 = *v4;
      v33 = *((_QWORD *)v4 + 1);
      LODWORD(v13) = PpmIdlePolicyLock.Teb;
      v35 = &v13;
      v37 = &v14;
      v39 = &v18;
      v31 = v34;
      v34[0] = v11;
      v32 = 2LL;
      v34[1] = 0;
      v36 = 4LL;
      LODWORD(v14) = v8;
      v38 = 4LL;
      v18 = 0x1000000LL;
      v40 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E081E0,
               (unsigned __int8 *)byte_140051569,
               0LL,
               0LL,
               0xDu,
               &v19);
    }
  }
  return result;
}
