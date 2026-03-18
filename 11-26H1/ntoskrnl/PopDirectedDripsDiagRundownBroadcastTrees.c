/*
 * XREFs of PopDirectedDripsDiagRundownBroadcastTrees @ 0x140B08C90
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140B08A3C (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void PopDirectedDripsDiagRundownBroadcastTrees()
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *v3; // rcx
  int v4; // ecx
  struct _LIST_ENTRY *v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  struct _LIST_ENTRY *v8; // rax
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  int v17; // [rsp+58h] [rbp-B0h] BYREF
  int Flink_high; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  int *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  int *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  struct _LIST_ENTRY **p_Blink; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  struct _LIST_ENTRY *p_Flink_high; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  __int64 *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  struct _LIST_ENTRY *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  struct _LIST_ENTRY **v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  __int64 *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  __int64 v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  struct _LIST_ENTRY *v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  struct _LIST_ENTRY *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  char *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]

  v19 = qword_140F0F5D0;
  while ( 1 )
  {
    Blink = PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink;
    if ( (unsigned __int8 *)PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink == &PopDirectedDripsUmLock.ApcStateFill[24] )
      break;
    if ( (unsigned __int8 *)PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink->Blink != &PopDirectedDripsUmLock.ApcStateFill[24]
      || (Flink = PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink->Flink,
          PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink->Flink->Blink != PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink) )
    {
      __fastfail(3u);
    }
    PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink = PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink->Flink;
    Flink->Blink = (struct _LIST_ENTRY *)&PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink;
    if ( (unsigned int)dword_140FD58E0 > 5 && tlgKeywordOn((__int64)&dword_140FD58E0, 0x400000000000LL) )
    {
      v3 = Blink[1].Flink;
      v20 = v19;
      v25 = 8LL;
      v24 = &v20;
      v9 = (int)v3[1].Blink;
      v26 = &v9;
      v27 = 4LL;
      v10 = (int)v3[9].Flink;
      v28 = &v10;
      v11 = (int)Blink[2].Flink;
      v30 = &v11;
      v12 = (int)Blink[2].Blink;
      v32 = &v12;
      p_Blink = &Blink[3].Blink;
      p_Flink_high = Blink + 5;
      v38 = (__int64 *)&Blink[12];
      v40 = Blink + 8;
      v42 = &Blink[9].Blink;
      v44 = &v21;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 20LL;
      v37 = 40LL;
      v39 = 40LL;
      v41 = 20LL;
      v43 = 40LL;
      v21 = 0x1000000LL;
      v45 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140FD58E0,
        (unsigned __int8 *)byte_14004FD79,
        0LL,
        0LL,
        0xDu,
        v23);
    }
    while ( 1 )
    {
      v2 = Blink[1].Blink;
      if ( !v2 )
        break;
      if ( (unsigned int)dword_140FD58E0 > 5 && tlgKeywordOn((__int64)&dword_140FD58E0, 0x400000000000LL) )
      {
        v20 = v19;
        v25 = 8LL;
        v24 = &v20;
        v4 = (int)Blink[1].Flink[1].Blink;
        v26 = &v13;
        v14 = (int)Blink[2].Flink;
        v28 = &v14;
        v15 = (int)Blink[2].Blink;
        v30 = &v15;
        v5 = v2->Blink;
        v13 = v4;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v6 = (int)v5[1].Blink;
        v32 = &v16;
        v17 = (int)v2[1].Flink;
        p_Blink = (struct _LIST_ENTRY **)&v17;
        Flink_high = HIDWORD(v2[1].Flink);
        p_Flink_high = (struct _LIST_ENTRY *)&Flink_high;
        v38 = &v22;
        v16 = v6;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        v22 = 0x1000000LL;
        v39 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140FD58E0,
          (unsigned __int8 *)&dword_14004FCEC,
          0LL,
          0LL,
          0xAu,
          v23);
      }
      if ( byte_140E67628 )
      {
        if ( EtwEventEnabled(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_DIRECTED_DRIPS_ERROR_RECORD) )
        {
          UserData.Ptr = (ULONGLONG)&v19;
          *(_QWORD *)&UserData.Size = 8LL;
          v7 = (__int64)&Blink[1].Flink[1];
          v48 = 8LL;
          v47 = v7;
          v8 = v2->Blink;
          v50 = 8LL;
          v49 = v8 + 1;
          v51 = v2 + 1;
          v53 = (char *)&v2[1].Flink + 4;
          v52 = 4LL;
          v54 = 4LL;
          EtwWrite(
            *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
            &POP_ETW_EVENT_DIRECTED_DRIPS_ERROR_RECORD,
            0LL,
            5u,
            &UserData);
        }
      }
      Blink[1].Blink = v2->Flink;
      ExFreePoolWithTag(v2, 0x67696450u);
    }
    ExFreePoolWithTag(Blink, 0x67696450u);
  }
}
