/*
 * XREFs of ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800F5BA0
 * Callers:
 *     ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800F5B4C (-DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?front@?$queue@UGetInputReportResult@@V?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@@std@@QEAAAEAUGetInputReportResult@@XZ @ 0x1800DD6BC (-front@-$queue@UGetInputReportResult@@V-$deque@UGetInputReportResult@@V-$allocator@UGetInputRepo.c)
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F6268 (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 *     ?pop_front@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@QEAAXXZ @ 0x1800F6E50 (-pop_front@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER.c)
 */

void __fastcall KeyboardOverriderDispatcher::DrainMessageQueue(KeyboardOverriderDispatcher *this)
{
  __int128 *v2; // rax
  __int64 v3; // rdx
  __int128 *v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _BYTE v19[376]; // [rsp+20h] [rbp-178h] BYREF

  while ( *((_QWORD *)this + 7) )
  {
    v2 = (__int128 *)std::queue<GetInputReportResult>::front((_QWORD *)this + 3);
    v3 = 2LL;
    v4 = (__int128 *)v19;
    do
    {
      v5 = *v2;
      v6 = v2[1];
      v2 += 8;
      *v4 = v5;
      v7 = *(v2 - 6);
      v4[1] = v6;
      v8 = *(v2 - 5);
      v4[2] = v7;
      v9 = *(v2 - 4);
      v4[3] = v8;
      v10 = *(v2 - 3);
      v4[4] = v9;
      v11 = *(v2 - 2);
      v4[5] = v10;
      v12 = *(v2 - 1);
      v4[6] = v11;
      v4 += 8;
      *(v4 - 1) = v12;
      --v3;
    }
    while ( v3 );
    v13 = v2[1];
    *v4 = *v2;
    v14 = v2[2];
    v4[1] = v13;
    v15 = v2[3];
    v4[2] = v14;
    v16 = v2[4];
    v4[3] = v15;
    v17 = v2[5];
    v4[4] = v16;
    v18 = v2[6];
    v4[5] = v17;
    v4[6] = v18;
    std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::pop_front((char *)this + 24);
    KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
      this,
      (const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *)v19);
  }
}
