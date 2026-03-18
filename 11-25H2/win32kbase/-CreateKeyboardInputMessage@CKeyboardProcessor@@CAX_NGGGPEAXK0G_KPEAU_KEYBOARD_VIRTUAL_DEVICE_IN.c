/*
 * XREFs of ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x140066C20
 * Callers:
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140066B40 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140160080 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 * Callees:
 *     ?SendToUserMode@Keyboard@InputTraceLogging@@SAXHPEAXH@Z @ 0x140067030 (-SendToUserMode@Keyboard@InputTraceLogging@@SAXHPEAXH@Z.c)
 *     GetActiveHKL @ 0x1400670C0 (GetActiveHKL.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     InternalMapVirtualKeyEx @ 0x14009F2F0 (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CKeyboardProcessor::CreateKeyboardInputMessage(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        unsigned __int16 a8,
        __int16 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10,
        struct _MIT_KEYBOARD_INPUT_MESSAGE *a11)
{
  int v13; // esi
  __int64 v15; // rdx
  int v16; // esi
  _QWORD *v17; // rax
  __int16 v18; // ax
  unsigned __int128 v19; // rax
  __int64 v20; // rcx
  __int16 v21; // bx
  __int16 v22; // dx
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  _BYTE *v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rax
  __int16 v31; // ax
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int64 UserSessionState; // rax
  _BYTE *i; // rax
  __int64 v47; // rax
  int v50; // [rsp+24h] [rbp-DCh]
  _OWORD v51[22]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v52; // [rsp+190h] [rbp+90h]

  v13 = a1;
  memset(v51, 0, sizeof(v51));
  if ( (_BYTE)a3 == 19 && a2 == 69 )
    a2 = -7907;
  InputTraceLogging::Keyboard::SendToUserMode(a3 & 0x8000, a5, v13);
  v16 = 0;
  if ( a5 )
  {
    LOBYTE(v15) = 19;
    v17 = (_QWORD *)HMValidateHandleNoSecure(a5, v15);
    if ( v17 )
      *(_QWORD *)&v51[0] = *v17;
  }
  if ( a10 )
    v52 = *(_OWORD *)a10;
  else
    v52 = 0LL;
  v18 = WORD6(v51[20]);
  v51[21] = v52;
  if ( a1 )
    v18 = a9;
  WORD6(v51[20]) = v18;
  DWORD2(v51[20]) = a7;
  if ( a6 )
    *((_QWORD *)&v19 + 1) = a6;
  else
    v19 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  *((_QWORD *)&v51[19] + 1) = *((_QWORD *)&v19 + 1);
  *(LARGE_INTEGER *)&v51[20] = KeQueryPerformanceCounter(0LL);
  v20 = 1LL;
  WORD4(v51[0]) = a4;
  v21 = (a3 & 0x8000) != 0;
  v22 = 256;
  if ( (a8 & 0x100) != 0 || (v22 = 512, (a8 & 0x200) != 0) )
    v21 |= v22;
  if ( (a8 & 0x80u) != 0 )
    v21 |= 0x80u;
  v23 = 2LL;
  if ( (a3 & 0x2000) != 0 )
  {
    if ( (unsigned __int8)(a3 - 127) > 1u )
    {
      UserSessionState = W32GetUserSessionState(1LL, 128LL);
      a2 = InternalMapVirtualKeyEx((unsigned __int8)a3, 4LL, *(_QWORD *)(UserSessionState + 14064));
      for ( i = &ausNumPadCvt; *(_WORD *)i; i += 2 )
      {
        if ( *i == (_BYTE)a3 )
        {
          v21 |= 2u;
          break;
        }
      }
    }
    v21 |= 0x40u;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v21 |= 0x20u;
  }
  if ( ((GetActiveHKL(v20) & 0x3FF) == 0x11 || (GetActiveHKL(v25) & 0x3FF) == 0x12) && (a3 & 0x400) != 0 )
  {
    v47 = W32GetUserSessionState(v25, v24);
    if ( (unsigned __int8)InternalMapVirtualKeyEx((unsigned __int8)a3, 4LL, *(_QWORD *)(v47 + 14064)) != (_BYTE)a2 )
      a2 = 0;
  }
  WORD6(v51[0]) = (unsigned __int8)a3;
  WORD5(v51[0]) = a2;
  HIWORD(v51[16]) = (a3 >> 7) & 2 | v21;
  v26 = (char *)v51 + 14;
  do
  {
    v27 = W32GetUserSessionState(v25, v24);
    v28 = (unsigned __int64)(unsigned __int8)v16 >> 2;
    v50 = v16 & 3;
    v29 = (unsigned int)(1 << (2 * v50));
    if ( ((unsigned __int8)v29 & *(_BYTE *)(v27 + v28 + 14336)) != 0 )
      *v26 |= 0x80u;
    v30 = W32GetUserSessionState((unsigned int)(2 * v50), v29);
    v25 = (unsigned int)(2 * v50 + 1);
    v24 = (unsigned int)(1 << (2 * v50 + 1));
    if ( ((unsigned __int8)v24 & *(_BYTE *)(v30 + v28 + 14336)) != 0 )
      *v26 |= 1u;
    ++v16;
    ++v26;
  }
  while ( v16 < 256 );
  v31 = WORD2(v51[17]);
  if ( (_BYTE)a3 == 0xE7 )
    v31 = a2;
  WORD2(v51[17]) = v31;
  v32 = v51;
  do
  {
    v33 = v32[1];
    *(_OWORD *)a11 = *v32;
    v34 = v32[2];
    *((_OWORD *)a11 + 1) = v33;
    v35 = v32[3];
    *((_OWORD *)a11 + 2) = v34;
    v36 = v32[4];
    *((_OWORD *)a11 + 3) = v35;
    v37 = v32[5];
    *((_OWORD *)a11 + 4) = v36;
    v38 = v32[6];
    *((_OWORD *)a11 + 5) = v37;
    v39 = v32[7];
    v32 += 8;
    *((_OWORD *)a11 + 6) = v38;
    a11 = (struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a11 + 128);
    *((_OWORD *)a11 - 1) = v39;
    --v23;
  }
  while ( v23 );
  v40 = v32[1];
  *(_OWORD *)a11 = *v32;
  v41 = v32[2];
  *((_OWORD *)a11 + 1) = v40;
  v42 = v32[3];
  *((_OWORD *)a11 + 2) = v41;
  v43 = v32[4];
  *((_OWORD *)a11 + 3) = v42;
  v44 = v32[5];
  *((_OWORD *)a11 + 4) = v43;
  *((_OWORD *)a11 + 5) = v44;
}
