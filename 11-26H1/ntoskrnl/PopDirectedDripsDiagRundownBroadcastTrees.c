/*
 * XREFs of PopDirectedDripsDiagRundownBroadcastTrees @ 0x140B0AC0C
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140B0A9B8 (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PopDirectedDripsDiagRundownBroadcastTrees()
{
  char *SListFaultAddress; // rbx
  __int64 v1; // rax
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  int v17; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+5Ch] [rbp-ACh] BYREF
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
  int *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  int *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  __int64 *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  char *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  char *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  __int64 *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  __int64 v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  __int64 v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  char *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  char *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]

  v19 = PopWnfCsEnterScenarioId;
  while ( 1 )
  {
    SListFaultAddress = (char *)PopDirectedDripsDiagLock.SListFaultAddress;
    if ( PopDirectedDripsDiagLock.SListFaultAddress == &PopDirectedDripsDiagLock.SListFaultAddress )
      break;
    if ( *((struct _KTHREAD **)PopDirectedDripsDiagLock.SListFaultAddress + 1) != (struct _KTHREAD *)&PopDirectedDripsDiagLock.SListFaultAddress
      || (v1 = *(_QWORD *)PopDirectedDripsDiagLock.SListFaultAddress,
          *(void **)(*(_QWORD *)PopDirectedDripsDiagLock.SListFaultAddress + 8LL) != PopDirectedDripsDiagLock.SListFaultAddress) )
    {
      __fastfail(3u);
    }
    PopDirectedDripsDiagLock.SListFaultAddress = *(void **)PopDirectedDripsDiagLock.SListFaultAddress;
    *(_QWORD *)(v1 + 8) = &PopDirectedDripsDiagLock.SListFaultAddress;
    if ( (unsigned int)dword_140FD68F0 > 5 && tlgKeywordOn((__int64)&dword_140FD68F0, 0x400000000000LL) )
    {
      v3 = *((_QWORD *)SListFaultAddress + 2);
      v20 = v19;
      v25 = 8LL;
      v24 = &v20;
      v9 = *(_DWORD *)(v3 + 24);
      v26 = &v9;
      v27 = 4LL;
      v10 = *(_DWORD *)(v3 + 144);
      v28 = &v10;
      v11 = *((_DWORD *)SListFaultAddress + 8);
      v30 = &v11;
      v12 = *((_DWORD *)SListFaultAddress + 10);
      v32 = &v12;
      v34 = (int *)(SListFaultAddress + 56);
      v36 = (int *)(SListFaultAddress + 80);
      v38 = (__int64 *)(SListFaultAddress + 192);
      v40 = SListFaultAddress + 128;
      v42 = SListFaultAddress + 152;
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
        (__int64)&dword_140FD68F0,
        (unsigned __int8 *)&word_140050E26,
        0LL,
        0LL,
        0xDu,
        v23);
    }
    while ( 1 )
    {
      v2 = (_QWORD *)*((_QWORD *)SListFaultAddress + 3);
      if ( !v2 )
        break;
      if ( (unsigned int)dword_140FD68F0 > 5 && tlgKeywordOn((__int64)&dword_140FD68F0, 0x400000000000LL) )
      {
        v20 = v19;
        v25 = 8LL;
        v24 = &v20;
        v4 = *(_DWORD *)(*((_QWORD *)SListFaultAddress + 2) + 24LL);
        v26 = &v13;
        v14 = *((_DWORD *)SListFaultAddress + 8);
        v28 = &v14;
        v15 = *((_DWORD *)SListFaultAddress + 10);
        v30 = &v15;
        v5 = v2[1];
        v13 = v4;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v6 = *(_DWORD *)(v5 + 24);
        v32 = &v16;
        v17 = *((_DWORD *)v2 + 4);
        v34 = &v17;
        v18 = *((_DWORD *)v2 + 5);
        v36 = &v18;
        v38 = &v22;
        v16 = v6;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        v22 = 0x1000000LL;
        v39 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140FD68F0,
          (unsigned __int8 *)byte_140050D99,
          0LL,
          0LL,
          0xAu,
          v23);
      }
      if ( PopDiagHandleRegistered )
      {
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_ERROR_RECORD) )
        {
          UserData.Ptr = (ULONGLONG)&v19;
          *(_QWORD *)&UserData.Size = 8LL;
          v7 = *((_QWORD *)SListFaultAddress + 2) + 16LL;
          v48 = 8LL;
          v47 = v7;
          v8 = v2[1];
          v50 = 8LL;
          v49 = v8 + 16;
          v51 = (char *)(v2 + 2);
          v53 = (char *)v2 + 20;
          v52 = 4LL;
          v54 = 4LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_ERROR_RECORD, 0LL, 5u, &UserData);
        }
      }
      *((_QWORD *)SListFaultAddress + 3) = *v2;
      ExFreePoolWithTag(v2, 0x67696450u);
    }
    ExFreePoolWithTag(SListFaultAddress, 0x67696450u);
  }
}
