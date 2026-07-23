/*
 * XREFs of PopDiagTraceSleepStudyStop @ 0x140B216EC
 * Callers:
 *     PopSleepstudyScenarioStopWorker @ 0x140B21670 (PopSleepstudyScenarioStopWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceSleepStudyStop(__int64 a1)
{
  __int64 UserData; // rax
  void *v2; // rbx
  int v3; // [rsp+30h] [rbp-30h] BYREF
  int v4; // [rsp+34h] [rbp-2Ch] BYREF
  int v5; // [rsp+38h] [rbp-28h] BYREF
  int v6; // [rsp+3Ch] [rbp-24h] BYREF
  int v7; // [rsp+40h] [rbp-20h] BYREF
  int v8; // [rsp+44h] [rbp-1Ch] BYREF
  int v9; // [rsp+48h] [rbp-18h] BYREF
  int v10; // [rsp+4Ch] [rbp-14h] BYREF
  int v11; // [rsp+50h] [rbp-10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  char v13; // [rsp+88h] [rbp+28h] BYREF
  int v14; // [rsp+90h] [rbp+30h] BYREF
  int v15; // [rsp+98h] [rbp+38h] BYREF

  v12 = a1;
  if ( PopDiagSleepStudyHandleRegistered
    && EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_STOP_REASON) )
  {
    UserData = ExAllocatePool2(0x100uLL);
    v2 = (void *)UserData;
    if ( UserData )
    {
      v13 = 0;
      v14 = byte_140F0F888 & 1;
      v3 = byte_140F0F889 & 1;
      v15 = ((unsigned __int8)byte_140F0F889 >> 1) & 1;
      v11 = ((unsigned __int8)byte_140F0F889 >> 4) & 1;
      v10 = ((unsigned __int8)byte_140F0F889 >> 3) & 1;
      v9 = ((unsigned __int8)byte_140F0F889 >> 5) & 3;
      v7 = (unsigned __int8)byte_140F0F8E1;
      v5 = (unsigned __int8)byte_140F0F8E0;
      v6 = (unsigned __int8)byte_140F0F8B8;
      v8 = dword_140F0F838;
      v4 = ((unsigned __int8)byte_140F0F889 >> 2) & 1;
      *(_QWORD *)UserData = &PopWdiScenarioStopEventData;
      *(_QWORD *)(UserData + 8) = 4LL;
      *(_QWORD *)(UserData + 16) = &unk_140F0F828;
      *(_QWORD *)(UserData + 24) = 8LL;
      *(_QWORD *)(UserData + 32) = &v14;
      *(_QWORD *)(UserData + 40) = 4LL;
      *(_QWORD *)(UserData + 48) = &unk_140F0F890;
      *(_QWORD *)(UserData + 56) = 8LL;
      *(_QWORD *)(UserData + 64) = &unk_140F0F898;
      *(_QWORD *)(UserData + 72) = 8LL;
      *(_QWORD *)(UserData + 80) = &unk_140F0F8A0;
      *(_QWORD *)(UserData + 88) = 8LL;
      *(_QWORD *)(UserData + 96) = &unk_140F0F820;
      *(_QWORD *)(UserData + 104) = 8LL;
      *(_QWORD *)(UserData + 112) = &unk_140F0F81C;
      *(_QWORD *)(UserData + 120) = 4LL;
      *(_QWORD *)(UserData + 128) = &unk_140F0F860;
      *(_QWORD *)(UserData + 136) = 8LL;
      *(_QWORD *)(UserData + 144) = &v13;
      *(_QWORD *)(UserData + 152) = 1LL;
      *(_QWORD *)(UserData + 160) = &unk_140F0F818;
      *(_QWORD *)(UserData + 168) = 4LL;
      *(_QWORD *)(UserData + 176) = &unk_140F0F858;
      *(_QWORD *)(UserData + 184) = 8LL;
      *(_QWORD *)(UserData + 192) = &unk_140F0F884;
      *(_QWORD *)(UserData + 200) = 4LL;
      *(_QWORD *)(UserData + 208) = &v15;
      *(_QWORD *)(UserData + 216) = 4LL;
      *(_QWORD *)(UserData + 224) = &v3;
      *(_QWORD *)(UserData + 232) = 4LL;
      *(_QWORD *)(UserData + 248) = 8LL;
      *(_QWORD *)(UserData + 240) = &unk_140F0F868;
      *(_QWORD *)(UserData + 256) = &v4;
      *(_QWORD *)(UserData + 264) = 4LL;
      *(_QWORD *)(UserData + 272) = &unk_140F0F8B0;
      *(_QWORD *)(UserData + 280) = 4LL;
      *(_QWORD *)(UserData + 288) = &unk_140F0F8B4;
      *(_QWORD *)(UserData + 296) = 4LL;
      *(_QWORD *)(UserData + 304) = &unk_140F0F8BC;
      *(_QWORD *)(UserData + 312) = 4LL;
      *(_QWORD *)(UserData + 320) = &unk_140F0F8C8;
      *(_QWORD *)(UserData + 328) = 4LL;
      *(_QWORD *)(UserData + 336) = &unk_140F0F8CC;
      *(_QWORD *)(UserData + 344) = 4LL;
      *(_QWORD *)(UserData + 352) = &unk_140F0F808;
      *(_QWORD *)(UserData + 360) = 4LL;
      *(_QWORD *)(UserData + 368) = &unk_140F0F810;
      *(_QWORD *)(UserData + 376) = 8LL;
      *(_QWORD *)(UserData + 384) = &unk_140F0F8DC;
      *(_QWORD *)(UserData + 392) = 4LL;
      *(_QWORD *)(UserData + 400) = &v5;
      *(_QWORD *)(UserData + 408) = 4LL;
      *(_QWORD *)(UserData + 416) = &unk_140F0F8E4;
      *(_QWORD *)(UserData + 424) = 4LL;
      *(_QWORD *)(UserData + 432) = &unk_140F0F8E8;
      *(_QWORD *)(UserData + 440) = 4LL;
      *(_QWORD *)(UserData + 448) = &v6;
      *(_QWORD *)(UserData + 456) = 4LL;
      *(_QWORD *)(UserData + 464) = &v7;
      *(_QWORD *)(UserData + 472) = 4LL;
      *(_QWORD *)(UserData + 480) = &v12;
      *(_QWORD *)(UserData + 488) = 8LL;
      *(_QWORD *)(UserData + 496) = &unk_140F0F8C0;
      *(_QWORD *)(UserData + 504) = 4LL;
      *(_QWORD *)(UserData + 512) = &unk_140F0F8C4;
      *(_QWORD *)(UserData + 520) = 4LL;
      *(_QWORD *)(UserData + 528) = &v8;
      *(_QWORD *)(UserData + 536) = 4LL;
      *(_QWORD *)(UserData + 544) = &v9;
      *(_QWORD *)(UserData + 552) = 4LL;
      *(_QWORD *)(UserData + 560) = &v10;
      *(_QWORD *)(UserData + 568) = 4LL;
      *(_QWORD *)(UserData + 576) = &v11;
      *(_QWORD *)(UserData + 584) = 4LL;
      *(_QWORD *)(UserData + 592) = &unk_140F0F878;
      *(_QWORD *)(UserData + 600) = 4LL;
      *(_QWORD *)(UserData + 608) = &unk_140F0F870;
      *(_QWORD *)(UserData + 616) = 8LL;
      *(_QWORD *)(UserData + 624) = &unk_140F0F95C;
      *(_QWORD *)(UserData + 632) = 4LL;
      *(_QWORD *)(UserData + 640) = &unk_140F0F984;
      *(_QWORD *)(UserData + 648) = 1LL;
      *(_QWORD *)(UserData + 656) = &unk_140F0F988;
      *(_QWORD *)(UserData + 664) = 8LL;
      *(_QWORD *)(UserData + 680) = 8LL;
      *(_QWORD *)(UserData + 672) = &unk_140F0F990;
      *(_QWORD *)(UserData + 696) = 8LL;
      *(_QWORD *)(UserData + 688) = &unk_140F0F998;
      *(_QWORD *)(UserData + 712) = 8LL;
      *(_QWORD *)(UserData + 704) = &unk_140F0F9A0;
      *(_QWORD *)(UserData + 728) = 8LL;
      *(_QWORD *)(UserData + 720) = &unk_140F0F9A8;
      EtwWrite(
        PopDiagSleepStudyHandle,
        &SLEEPSTUDY_EVT_SCENARIO_STOP_REASON,
        &PopDiagActivityId,
        0x2Eu,
        (PEVENT_DATA_DESCRIPTOR)UserData);
      ExFreePoolWithTag(v2, 0x50455654u);
    }
  }
}
