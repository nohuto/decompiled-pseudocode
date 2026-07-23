/*
 * XREFs of VmpLogPin @ 0x14082497C
 * Callers:
 *     VmPinMemoryRanges @ 0x1408234A0 (VmPinMemoryRanges.c)
 *     VmUnpinMemoryRanges @ 0x140823890 (VmUnpinMemoryRanges.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall VmpLogPin(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  _UNKNOWN **v9; // rax
  void *InitialStack; // rbx
  __int64 v14; // r8
  unsigned __int8 *v15; // rdx
  __int64 *v16; // rax
  int v18; // [rsp+28h] [rbp-E0h]
  int v19; // [rsp+30h] [rbp-D8h]
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  __int64 *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  __int64 *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  __int64 *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 v40; // [rsp+F8h] [rbp-10h]
  int v41; // [rsp+100h] [rbp-8h]
  int v42; // [rsp+104h] [rbp-4h]
  int *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  __int64 v45; // [rsp+118h] [rbp+10h]
  int v46; // [rsp+120h] [rbp+18h]
  int v47; // [rsp+124h] [rbp+1Ch]
  __int64 *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v9 = &retaddr;
  InitialStack = stru_140F06A28.InitialStack;
  LOWORD(v20) = a5;
  if ( a2 )
  {
    if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u )
    {
      LOBYTE(v9) = tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 32LL);
      if ( (_BYTE)v9 )
      {
        LODWORD(v22) = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v15 = (unsigned __int8 *)&word_140054646;
        v29 = 4LL;
        v28 = &v22;
        v26 = a7;
        v30 = &v26;
        v25 = a9;
        v32 = &v25;
        v21 = a8;
        v34 = (__int64 *)&v21;
        v24 = *a2;
        v36 = &v24;
        v38 = &v20;
        v41 = 16 * a5;
        v43 = &v20;
        v46 = 8 * a5;
        v16 = &v23;
        v31 = 8LL;
        v35 = 4LL;
        v37 = 8LL;
        v23 = 21LL;
        goto LABEL_8;
      }
    }
  }
  else if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 32LL);
    if ( (_BYTE)v9 )
    {
      LODWORD(v23) = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v15 = (unsigned __int8 *)byte_1400543C3;
      v29 = 4LL;
      v28 = &v23;
      v21 = a6;
      v30 = (__int64 *)&v21;
      v24 = a7;
      v32 = &v24;
      v25 = a9;
      v34 = &v25;
      LODWORD(v22) = a8;
      v36 = &v22;
      v38 = &v20;
      v41 = 16 * a5;
      v43 = &v20;
      v46 = 8 * a5;
      v16 = &v26;
      v31 = 4LL;
      v35 = 8LL;
      v37 = 4LL;
      v26 = 21LL;
LABEL_8:
      v48 = v16;
      v33 = 8LL;
      v39 = 2LL;
      v40 = a3;
      v42 = 0;
      v44 = 2LL;
      v45 = a4;
      v47 = 0;
      v49 = 8LL;
      LOBYTE(v9) = tlgWriteEx_EtwWriteEx((__int64)InitialStack, v15, v14, 0, v18, v19, 0xCu, &v27);
    }
  }
  return (char)v9;
}
