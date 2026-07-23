/*
 * XREFs of MiLogReserveVaFailed @ 0x140B3F7A0
 * Callers:
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 * Callees:
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiLogReserveVaFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _KPROCESS *Process; // rbx
  struct _LIST_ENTRY *v9; // rax
  int v10; // ett
  __int64 v11; // r8
  int v13; // [rsp+28h] [rbp-E0h]
  int v14; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  void *AutoBoostState2; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h] BYREF
  int Flink; // [rsp+80h] [rbp-88h] BYREF
  __int16 SessionId; // [rsp+84h] [rbp-84h]
  __int16 v24; // [rsp+86h] [rbp-82h]
  struct _LIST_ENTRY *v25; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+98h] [rbp-70h] BYREF
  int *p_Flink; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  __int64 *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  void **p_AutoBoostState2; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  __int64 *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  __int64 *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  __int64 *v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  __int64 *v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]

  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw((char *)&Process[3].ActiveGroupsMask.Masks[1] + 4);
  LODWORD(v9) = HIDWORD(Process[3].ActiveGroupsMask.Masks[1]);
  do
  {
    v10 = (int)v9;
    LODWORD(v9) = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1,
                    (unsigned int)v9 | 0x800,
                    (signed __int32)v9);
  }
  while ( v10 != (_DWORD)v9 );
  if ( ((unsigned __int16)v9 & 0x800) == 0 )
  {
    Flink = (int)Process[1].Header.WaitListHead.Flink;
    SessionId = PsGetSessionId((__int64)Process);
    v24 = MEMORY[0xFFFFF780000002C4];
    v9 = Process[1].ThreadListHead.Flink;
    v25 = v9;
    if ( *(_DWORD *)stru_140E366D8.FirstArgument > 2u )
    {
      LOBYTE(v9) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000002000LL);
      if ( (_BYTE)v9 )
      {
        v28 = 16LL;
        p_Flink = &Flink;
        v15 = a2;
        v29 = &v15;
        v16 = *(_QWORD *)&Process[1].AutoBoostState.TreeCount;
        v31 = &v16;
        AutoBoostState2 = Process[1].AutoBoostState2;
        p_AutoBoostState2 = &AutoBoostState2;
        v18 = *(_QWORD *)&Process[1].PrimaryGroup;
        v35 = &v18;
        v37 = &v19;
        v39 = &v20;
        v21 = a5;
        v41 = &v21;
        v30 = 8LL;
        v32 = 8LL;
        v34 = 8LL;
        v36 = 8LL;
        v19 = a3;
        v38 = 8LL;
        v20 = a4;
        v40 = 8LL;
        v42 = 8LL;
        LOBYTE(v9) = tlgWriteEx_EtwWriteEx(v11, (unsigned __int8 *)&dword_140058A64, v11, 1u, v13, v14, 0xAu, &v26);
      }
    }
  }
  return (char)v9;
}
