/*
 * XREFs of xxxClientCopyImage @ 0x140069484
 * Callers:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x14004E6E0 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1400693D8 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x140069574 (xxxCreateClassSmIcon.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCopyImage(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9[3]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]
  int v13; // [rsp+58h] [rbp-10h]
  int v14; // [rsp+5Ch] [rbp-Ch]
  void *Src; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+78h] [rbp+10h] BYREF

  Src = 0LL;
  v16 = 0;
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v14 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v9);
  EtwTraceBeginCallback(64LL);
  v6 = KeUserModeCallback(64LL, &v10, 24LL, &Src, &v16);
  EtwTraceEndCallback(64LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v9);
  if ( v6 < 0 || v16 != 24 )
    return 0LL;
  v9[0] = 0LL;
  RtlCopyFromUser(v9, Src, 8uLL);
  result = v9[0];
  v9[1] = v9[0];
  if ( v9[0] )
  {
    if ( a2 )
    {
      LOBYTE(v7) = 3;
      return HMValidateHandleNoRip(v9[0], v7);
    }
  }
  return result;
}
