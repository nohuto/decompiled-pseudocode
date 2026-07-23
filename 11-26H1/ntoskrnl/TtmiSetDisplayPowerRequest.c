/*
 * XREFs of TtmiSetDisplayPowerRequest @ 0x1407EC400
 * Callers:
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1407EDDA0 (TtmpDispatchSetDisplayPowerRequest.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1407EC304 (TtmiScheduleSessionWorker.c)
 *     TtmpFindPowerRequestEntryById @ 0x1407ECA54 (TtmpFindPowerRequestEntryById.c)
 *     TtmiLogDisplayPowerRequestSet @ 0x1407EF0D0 (TtmiLogDisplayPowerRequestSet.c)
 *     TtmiGetTerminalById @ 0x1407F1870 (TtmiGetTerminalById.c)
 *     TtmiSetPendingOnOffRequest @ 0x1407F1ED4 (TtmiSetPendingOnOffRequest.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmiSetDisplayPowerRequest(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r11
  __int64 i; // r10
  __int64 *v14; // r10
  int v15; // eax
  _DWORD *Pool2; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r11
  __int64 j; // r10
  _QWORD *v23; // r10
  __int64 v24; // rdx
  _QWORD *v25; // rax
  int v26; // eax
  int v27; // eax
  __int64 v29; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v30[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  v29 = 0LL;
  v30[0] = 0LL;
  if ( a4 )
  {
    if ( !(unsigned __int8)TtmpFindPowerRequestEntryById(a1, a3, &v29) )
    {
      v10 = 817LL;
      goto LABEL_36;
    }
    v11 = v29;
    v12 = v29 + 48;
    for ( i = *(_QWORD *)(v29 + 48); i != v12; i = *v14 )
    {
      if ( (int)TtmiGetTerminalById(v30, a1) >= 0 && *(_DWORD *)(v30[0] + 28LL) == a2[7] )
      {
        v4 = -1073741270;
        v10 = 860LL;
        goto LABEL_37;
      }
    }
    if ( a2[8] == -1 )
    {
      v4 = -1073741675;
      v10 = 873LL;
      goto LABEL_37;
    }
    v15 = a2[10];
    if ( v15 == 2 )
    {
      LOBYTE(v9) = 1;
      TtmiSetPendingOnOffRequest(a1, (_DWORD)a2, v9, 8, 1413571669);
    }
    else if ( v15 != 3 )
    {
      v4 = -1073741637;
      goto LABEL_39;
    }
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
      v4 = -1073741670;
      v17 = 0xFFFFFFFFLL;
      v18 = 3221225626LL;
      v10 = 891LL;
LABEL_38:
      TtmiLogError("TtmiSetDisplayPowerRequest", v10, v17, v18);
      goto LABEL_39;
    }
    *Pool2 = a2[7];
    v19 = Pool2 + 2;
    v20 = *(_QWORD **)(v11 + 56);
    if ( *v20 == v11 + 48 )
    {
      *v19 = v11 + 48;
      v19[1] = v20;
      *v20 = v19;
      *(_QWORD *)(v11 + 56) = v19;
      ++a2[8];
      goto LABEL_39;
    }
LABEL_34:
    __fastfail(3u);
  }
  if ( !(unsigned __int8)TtmpFindPowerRequestEntryById(a1, a3, &v29) )
  {
    v10 = 933LL;
    goto LABEL_36;
  }
  v21 = v29 + 48;
  for ( j = *(_QWORD *)(v29 + 48); ; j = *v23 )
  {
    if ( j == v21 )
    {
      v10 = 977LL;
LABEL_36:
      v4 = -1073741275;
LABEL_37:
      v18 = 0xFFFFFFFFLL;
      v17 = v4;
      goto LABEL_38;
    }
    if ( (int)TtmiGetTerminalById(v30, a1) >= 0 && *(_DWORD *)(v30[0] + 28LL) == a2[7] )
      break;
  }
  v24 = *v23;
  if ( *(_QWORD **)(*v23 + 8LL) != v23 )
    goto LABEL_34;
  v25 = (_QWORD *)v23[1];
  if ( (_QWORD *)*v25 != v23 )
    goto LABEL_34;
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  ExFreePoolWithTag(v23 - 1, 0x52507454u);
  v26 = a2[8];
  if ( !v26 )
  {
    v4 = -1073741811;
    v10 = 1004LL;
    goto LABEL_37;
  }
  v27 = v26 - 1;
  a2[8] = v27;
  if ( !v27 )
  {
    a2[9] |= 0x24u;
    TtmiScheduleSessionWorker(a1, 2);
  }
LABEL_39:
  TtmiLogDisplayPowerRequestSet((unsigned int)a2[7], a3, a4, v4);
  return v4;
}
