/*
 * XREFs of MiLogAddPhysicalMemory @ 0x1406EE42C
 * Callers:
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
 *     MiValidateAddPhysicalMemoryParameters @ 0x14086D580 (MiValidateAddPhysicalMemoryParameters.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiLogAddPhysicalMemory(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 *v7; // r8
  __int64 *v8; // r9
  __int64 v9; // r10
  int *v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // r9
  _DWORD *v13; // r10
  __int64 *v14; // r11
  int v15; // [rsp+20h] [rbp-79h]
  int v16; // [rsp+28h] [rbp-71h]
  ULONG v17; // [rsp+30h] [rbp-69h]
  int v18; // [rsp+40h] [rbp-59h] BYREF
  int v19; // [rsp+44h] [rbp-55h] BYREF
  __int64 v20; // [rsp+48h] [rbp-51h] BYREF
  __int64 v21; // [rsp+50h] [rbp-49h] BYREF
  __int64 v22; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp-39h] BYREF
  int *v24; // [rsp+80h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-11h]
  __int64 *v26; // [rsp+90h] [rbp-9h]
  __int64 v27; // [rsp+98h] [rbp-1h]
  __int64 *v28; // [rsp+A0h] [rbp+7h]
  __int64 v29; // [rsp+A8h] [rbp+Fh]
  int *v30; // [rsp+B0h] [rbp+17h]
  __int64 v31; // [rsp+B8h] [rbp+1Fh]
  __int64 *v32; // [rsp+C0h] [rbp+27h]
  __int64 v33; // [rsp+C8h] [rbp+2Fh]

  if ( a6 )
  {
    if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 256LL) )
    {
      v10 = (int *)&dword_140058A04;
      v19 = *a2;
      v11 = (__int64)v7;
      v33 = 4LL;
      v24 = &v19;
      v21 = *v14;
      v26 = &v21;
      v22 = *v12;
      v28 = &v22;
      v18 = a5;
      v30 = &v18;
      LODWORD(v20) = *v13;
      v32 = &v20;
      v17 = 7;
      goto LABEL_8;
    }
  }
  else if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 256LL) )
  {
    v10 = &dword_1400589AC;
    v18 = *a2;
    v11 = v9;
    v24 = &v18;
    v20 = *v7;
    v26 = &v20;
    v21 = *v8;
    v28 = &v21;
    v19 = a5;
    v30 = &v19;
    v17 = 6;
LABEL_8:
    v25 = 4LL;
    v27 = 8LL;
    v29 = 8LL;
    v31 = 4LL;
    tlgWriteEx_EtwWriteEx(v11, (unsigned __int8 *)v10, (__int64)v7, 1u, v15, v16, v17, &v23);
  }
}
