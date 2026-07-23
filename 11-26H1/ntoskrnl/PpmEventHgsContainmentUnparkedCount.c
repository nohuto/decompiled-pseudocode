/*
 * XREFs of PpmEventHgsContainmentUnparkedCount @ 0x140504764
 * Callers:
 *     PpmHeteroHgsCalculateContainmentCount @ 0x14060D428 (PpmHeteroHgsCalculateContainmentCount.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventHgsContainmentUnparkedCount(
        __int16 a1,
        __int16 a2,
        __int16 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        __int64 a8)
{
  BOOLEAN result; // al
  __int64 v10; // rcx
  bool v11; // zf
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  BOOL v14; // [rsp+50h] [rbp-B8h] BYREF
  int v15; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v16; // [rsp+58h] [rbp-B0h] BYREF
  BOOL v17; // [rsp+5Ch] [rbp-ACh] BYREF
  BOOL v18; // [rsp+60h] [rbp-A8h] BYREF
  BOOL v19; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  BOOL *v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  char *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  char *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  int *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int16 *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int16 *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  __int16 *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  int *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  __int64 v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  unsigned int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  BOOL *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  BOOL *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  BOOL *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  __int16 v49; // [rsp+188h] [rbp+80h] BYREF
  __int16 v50; // [rsp+190h] [rbp+88h] BYREF
  __int16 v51; // [rsp+198h] [rbp+90h] BYREF

  v51 = a3;
  v50 = a2;
  v49 = a1;
  result = PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 && PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_CONTAINMENT_UNPARK_COUNT);
    if ( result )
    {
      v10 = *(_QWORD *)(a4 + 1240);
      v16 = ((unsigned int)PpmHeteroHgsContainmentState >> 3) & 1;
      LOWORD(v12) = *(_WORD *)(a4 + 1224);
      LOWORD(v13) = *(_WORD *)(a4 + 1226);
      v15 = *(_DWORD *)(v10 + 4);
      v14 = a7 != 0;
      v17 = *(_BYTE *)(v10 + 824) != 0;
      v18 = *(_BYTE *)(v10 + 825) != 0;
      v11 = *(_BYTE *)(v10 + 826) == 0;
      v24 = 1LL;
      v26 = 1LL;
      v19 = !v11;
      v28 = 1LL;
      UserData.Ptr = v10 + 820;
      *(_QWORD *)&UserData.Size = 4LL;
      v21 = &v14;
      v22 = 4LL;
      v23 = &a5;
      v25 = &a6;
      v27 = &v15;
      v29 = &v49;
      v31 = &v50;
      v33 = &v51;
      v35 = &v12;
      v37 = &v13;
      v39 = a8;
      v41 = &v16;
      v43 = &v17;
      v45 = &v18;
      v47 = &v19;
      v30 = 2LL;
      v32 = 2LL;
      v34 = 2LL;
      v36 = 2LL;
      v38 = 2LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      return EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_CONTAINMENT_UNPARK_COUNT, 0LL, 0, 0LL, 0LL, 0xFu, &UserData);
    }
  }
  return result;
}
