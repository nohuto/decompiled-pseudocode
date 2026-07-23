/*
 * XREFs of VmpLogAccessFault @ 0x140824158
 * Callers:
 *     VmpAccessFault @ 0x1408224C4 (VmpAccessFault.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall VmpLogAccessFault(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11)
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
  int v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *p_ProcessId; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  int *v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  int *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  __int64 *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  __int64 *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  __int64 *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  int *v50; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  __int64 *v52; // [rsp+148h] [rbp+40h]
  __int64 v53; // [rsp+150h] [rbp+48h]
  _UNKNOWN *retaddr; // [rsp+180h] [rbp+78h] BYREF

  v11 = &retaddr;
  InitialStack = stru_140F06A28.InitialStack;
  if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u )
  {
    LOBYTE(v11) = tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 8LL);
    if ( (_BYTE)v11 )
    {
      ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v33 = 4LL;
      p_ProcessId = &ProcessId;
      v21 = a11;
      v34 = &v21;
      v36 = &v22;
      v38 = &v23;
      v40 = &v24;
      v26 = a5;
      v42 = &v26;
      v27 = a6;
      v44 = &v27;
      v28 = a8;
      v46 = &v28;
      v29 = a9;
      v48 = &v29;
      v25 = a7;
      v50 = &v25;
      v30 = a10;
      v52 = &v30;
      v35 = 4LL;
      v22 = a2;
      v37 = 4LL;
      v23 = a3;
      v39 = 4LL;
      v24 = a4;
      v41 = 4LL;
      v43 = 8LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 8LL;
      v51 = 4LL;
      v53 = 8LL;
      LOBYTE(v11) = tlgWriteEx_EtwWriteEx(
                      (__int64)InitialStack,
                      (unsigned __int8 *)&byte_140053E4F,
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
