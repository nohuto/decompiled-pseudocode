/*
 * XREFs of ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800F6050
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x18005F03C (-CreateKeyboardInputInfo@Win32kInterop@@SA-AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?front@?$queue@UGetInputReportResult@@V?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@@std@@QEAAAEAUGetInputReportResult@@XZ @ 0x1800DD6BC (-front@-$queue@UGetInputReportResult@@V-$deque@UGetInputReportResult@@V-$allocator@UGetInputRepo.c)
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F6268 (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800F6520 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 *     ?pop_front@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@QEAAXXZ @ 0x1800F6E50 (-pop_front@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::OnKeyProcessed(KeyboardOverriderDispatcher *this, char a2)
{
  _QWORD *v2; // rsi
  _OWORD *v5; // rax
  __int64 v6; // rbp
  _OWORD *v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // rax
  const struct _MIT_KEYBOARD_INPUT_MESSAGE *v38; // rdi
  _DWORD v40[92]; // [rsp+20h] [rbp-198h] BYREF

  v2 = (_QWORD *)((char *)this + 24);
  if ( *((_QWORD *)this + 7) )
  {
    v5 = (_OWORD *)std::queue<GetInputReportResult>::front((_QWORD *)this + 3);
    v6 = 2LL;
    v7 = v40;
    v8 = 2LL;
    do
    {
      v9 = v5[1];
      *v7 = *v5;
      v10 = v5[2];
      v7[1] = v9;
      v11 = v5[3];
      v7[2] = v10;
      v12 = v5[4];
      v7[3] = v11;
      v13 = v5[5];
      v7[4] = v12;
      v14 = v5[6];
      v7[5] = v13;
      v15 = v5[7];
      v5 += 8;
      v7[6] = v14;
      v7 += 8;
      *(v7 - 1) = v15;
      --v8;
    }
    while ( v8 );
    v16 = v5[1];
    *v7 = *v5;
    v17 = v5[2];
    v7[1] = v16;
    v18 = v5[3];
    v7[2] = v17;
    v19 = v5[4];
    v7[3] = v18;
    v20 = v5[5];
    v7[4] = v19;
    v21 = v5[6];
    v7[5] = v20;
    v7[6] = v21;
    std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::pop_front(v2);
    if ( !a2 )
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        this,
        (const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *)v40);
    *((_BYTE *)this + 704) = 0;
    *((_BYTE *)this + 432) = a2;
    if ( a2 )
    {
      v22 = (_OWORD *)((char *)this + 64);
      v23 = v40;
      do
      {
        v24 = v23[1];
        *v22 = *v23;
        v25 = v23[2];
        v22[1] = v24;
        v26 = v23[3];
        v22[2] = v25;
        v27 = v23[4];
        v22[3] = v26;
        v28 = v23[5];
        v22[4] = v27;
        v29 = v23[6];
        v22[5] = v28;
        v30 = v23[7];
        v23 += 8;
        v22[6] = v29;
        v22 += 8;
        *(v22 - 1) = v30;
        --v6;
      }
      while ( v6 );
      v31 = v23[1];
      *v22 = *v23;
      v32 = v23[2];
      v22[1] = v31;
      v33 = v23[3];
      v22[2] = v32;
      v34 = v23[4];
      v22[3] = v33;
      v35 = v23[5];
      v22[4] = v34;
      v36 = v23[6];
      v22[5] = v35;
      v22[6] = v36;
    }
    while ( *((_QWORD *)this + 7) )
    {
      v37 = std::queue<GetInputReportResult>::front(v2);
      v38 = (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)v37;
      if ( (*(_BYTE *)(v37 + 270) & 0x80) == 0 && *((_QWORD *)this + 55) )
      {
        Win32kInterop::CreateKeyboardInputInfo(v40, v37);
        KeyboardOverriderDispatcher::SendMessageToNarrator(this, v38, (const struct KeyboardInputInfo *)v40);
        return 0LL;
      }
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        this,
        (const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *)v37);
      std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::pop_front(v2);
    }
  }
  return 0LL;
}
