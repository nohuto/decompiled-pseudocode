/*
 * XREFs of RootHub_WaitForPendingU3TransitionCompletion @ 0x14002C8AC
 * Callers:
 *     RootHub_UcxEvtSetPortFeature @ 0x140009050 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x14000BBF0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_D0Exit @ 0x14002C10C (RootHub_D0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_IsPortU3TransitionPending @ 0x14002CC14 (RootHub_IsPortU3TransitionPending.c)
 *     WPP_RECORDER_SF_dD @ 0x14002CC88 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDD @ 0x14003761C (WPP_RECORDER_SF_dDD.c)
 */

__int64 __fastcall RootHub_WaitForPendingU3TransitionCompletion(_QWORD *a1, int a2, char a3)
{
  char v3; // r9
  unsigned int v4; // r8d
  unsigned int v5; // ebp
  __int64 v8; // r13
  unsigned int v9; // r15d
  unsigned int *v10; // r12
  int v11; // edi
  int v12; // eax
  int v13; // edx
  unsigned int v14; // ebx
  char v15; // cl
  void *v16; // r10
  int Ulong; // eax
  int v19; // edx
  int v20; // r8d
  int v21; // ebx
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+80h] [rbp+8h]
  __int64 v30; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v4 = a2 - 1;
  v5 = 0;
  v8 = *(_QWORD *)(a1[1] + 88LL);
  v9 = -1073741823;
  v10 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  v11 = -1;
  v28 = v8;
  v30 = (unsigned int)(a2 - 1);
  while ( 1 )
  {
    if ( v3 && v5 && v5 == 3 * (v5 / 3) )
    {
      RootHub_AcquireReadModifyWriteLock((__int64)a1, v4);
      Ulong = XilRegister_ReadUlong(v8, v10);
      v21 = Ulong & 0xE00C200 | 0x10060;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDD(*(_QWORD *)(a1[1] + 72LL), v19, v20, 241, v25, a2, Ulong, 96);
      XilRegister_WriteUlong(v8, v10, v21);
      RootHub_ReleaseReadModifyWriteLock((__int64)a1, a2 - 1);
    }
    v12 = XilRegister_ReadUlong(v8, v10);
    v14 = v12;
    if ( v12 == -1 )
      break;
    if ( v12 == v11 )
      goto LABEL_5;
    v11 = v12;
    v15 = *(_BYTE *)(a1[6] + 120 * v30 + 13);
    if ( v15 != 2 )
    {
      if ( v15 != 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1[1] + 72LL),
            v13,
            11,
            244,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            a2,
            v12);
        }
        v9 = 0;
        break;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      v22 = 243;
      goto LABEL_22;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 242;
LABEL_22:
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        v22,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        a2,
        v12);
    }
LABEL_9:
    if ( !(unsigned __int8)RootHub_IsPortU3TransitionPending(120 * v30 + a1[6], v14) )
    {
      v9 = 0;
      break;
    }
    if ( WPP_RECORDER_INITIALIZED != v16 )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF5u,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    v8 = v28;
LABEL_5:
    KeStallExecutionProcessor(0xAu);
    if ( ++v5 >= 0x1900 )
      break;
    v3 = a3;
    v4 = a2 - 1;
  }
  if ( v5 == 6400 )
  {
    v23 = a1[1];
    ++*(_DWORD *)(v23 + 892);
    ++*(_DWORD *)(v23 + 936);
    *(_BYTE *)(v23 + 872) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        246,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        a2,
        v14);
    }
  }
  else if ( v5 )
  {
    if ( v5 > 0x960 )
    {
      v24 = a1[1];
      ++*(_DWORD *)(v24 + 896);
      ++*(_DWORD *)(v24 + 940);
      *(_BYTE *)(v24 + 872) = 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v27) = a2;
      LODWORD(v26) = v5;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF7u,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v26,
        v27);
    }
  }
  return v9;
}
