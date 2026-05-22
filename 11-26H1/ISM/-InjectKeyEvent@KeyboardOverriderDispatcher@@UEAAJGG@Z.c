/*
 * XREFs of ?InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z @ 0x1800F5C90
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?front@?$queue@UGetInputReportResult@@V?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@@std@@QEAAAEAUGetInputReportResult@@XZ @ 0x1800DD6BC (-front@-$queue@UGetInputReportResult@@V-$deque@UGetInputReportResult@@V-$allocator@UGetInputRepo.c)
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F6268 (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::InjectKeyEvent(
        KeyboardOverriderDispatcher *this,
        unsigned __int16 a2,
        __int16 a3)
{
  char v4; // di
  __int16 v7; // r8
  __int16 v8; // ax
  _OWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v27; // [rsp+170h] [rbp+70h]
  _WORD v28[2]; // [rsp+190h] [rbp+90h] BYREF
  __int16 v29; // [rsp+194h] [rbp+94h]
  __int64 v30; // [rsp+1B8h] [rbp+B8h]
  __int128 v31; // [rsp+1C0h] [rbp+C0h]

  v4 = a2;
  if ( a2 != 1 && (unsigned int)a2 - 4 >= 2 )
    return 2147942487LL;
  if ( !*((_BYTE *)this + 432) )
    goto LABEL_13;
  v7 = *((_WORD *)this + 212);
  v8 = *((_WORD *)this + 208) | 0xE000;
  if ( (v7 & 0x100) == 0 )
    v8 = *((_WORD *)this + 208);
  if ( a3 == v8 )
  {
    if ( (a2 & 1) != 0 )
    {
      *((_WORD *)this + 212) = v7 & 0x7FFF;
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        this,
        (KeyboardOverriderDispatcher *)((char *)this + 64));
    }
    if ( (v4 & 4) != 0 )
    {
      *((_WORD *)this + 212) |= 0x8000u;
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        this,
        (KeyboardOverriderDispatcher *)((char *)this + 64));
    }
    *((_BYTE *)this + 432) = 0;
    memset_0((char *)this + 64, 0, 0x170uLL);
  }
  else
  {
LABEL_13:
    memset_0(v28, 0, 0x40uLL);
    v28[1] = a3;
    v28[0] = -2;
    v29 = 128;
    v9 = (_OWORD *)std::queue<GetInputReportResult>::front((_QWORD *)this + 3);
    v11 = (unsigned int)(v10 - 126);
    v12 = &v26;
    do
    {
      v13 = v9[1];
      *(_OWORD *)v12 = *v9;
      v14 = v9[2];
      *((_OWORD *)v12 + 1) = v13;
      v15 = v9[3];
      *((_OWORD *)v12 + 2) = v14;
      v16 = v9[4];
      *((_OWORD *)v12 + 3) = v15;
      v17 = v9[5];
      *((_OWORD *)v12 + 4) = v16;
      v18 = v9[6];
      *((_OWORD *)v12 + 5) = v17;
      v19 = v9[7];
      v9 = (_OWORD *)((char *)v9 + v10);
      *((_OWORD *)v12 + 6) = v18;
      v12 = (__int64 *)((char *)v12 + v10);
      *((_OWORD *)v12 - 1) = v19;
      --v11;
    }
    while ( v11 );
    v20 = v9[1];
    *(_OWORD *)v12 = *v9;
    v21 = v9[2];
    *((_OWORD *)v12 + 1) = v20;
    v22 = v9[3];
    *((_OWORD *)v12 + 2) = v21;
    v23 = v9[4];
    *((_OWORD *)v12 + 3) = v22;
    v24 = v9[5];
    *((_OWORD *)v12 + 4) = v23;
    v25 = v9[6];
    *((_OWORD *)v12 + 5) = v24;
    *((_OWORD *)v12 + 6) = v25;
    v30 = v26;
    v31 = v27;
    if ( (v4 & 1) != 0 )
    {
      NtMITSynthesizeKeyboardInput(8LL, v28);
      LOWORD(v10) = v29;
    }
    if ( (v4 & 4) != 0 )
    {
      v29 = v10 | 1;
      NtMITSynthesizeKeyboardInput(8LL, v28);
    }
  }
  return 0LL;
}
