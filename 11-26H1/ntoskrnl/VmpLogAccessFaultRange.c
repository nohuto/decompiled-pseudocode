/*
 * XREFs of VmpLogAccessFaultRange @ 0x140824328
 * Callers:
 *     VmpAccessFault @ 0x1408224C4 (VmpAccessFault.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall VmpLogAccessFaultRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  _UNKNOWN **v11; // rax
  void *InitialStack; // rbx
  __int64 v16; // r8
  int v18; // [rsp+28h] [rbp-E0h]
  int v19; // [rsp+30h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *p_ProcessId; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  __int64 *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  __int64 *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  int *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  int *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  __int64 *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  __int64 *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  int *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  __int64 *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  __int64 *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  _UNKNOWN *retaddr; // [rsp+180h] [rbp+78h] BYREF

  v11 = &retaddr;
  InitialStack = stru_140F06A28.InitialStack;
  if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u )
  {
    LOBYTE(v11) = tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 16LL);
    if ( (_BYTE)v11 )
    {
      ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v33 = 4LL;
      p_ProcessId = &ProcessId;
      v25 = a2;
      v34 = &v25;
      v35 = 8LL;
      v36 = &v26;
      v38 = &v27;
      v21 = a7;
      v40 = &v21;
      v22 = a8;
      v42 = &v22;
      v28 = a5;
      v44 = &v28;
      v29 = a6;
      v46 = &v29;
      v23 = a9;
      v48 = &v23;
      LODWORD(v24) = a10;
      v50 = &v24;
      v30 = a11;
      v52 = &v30;
      v26 = a3;
      v37 = 8LL;
      v27 = a4;
      v39 = 8LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 8LL;
      LOBYTE(v11) = tlgWriteEx_EtwWriteEx(
                      (__int64)InitialStack,
                      (unsigned __int8 *)&byte_140054109,
                      v16,
                      0,
                      v18,
                      v19,
                      0xDu,
                      &v31);
    }
  }
  return (char)v11;
}
