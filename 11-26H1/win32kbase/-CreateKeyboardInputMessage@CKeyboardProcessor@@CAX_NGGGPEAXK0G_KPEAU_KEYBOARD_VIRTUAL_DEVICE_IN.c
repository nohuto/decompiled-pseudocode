/*
 * XREFs of ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x14008B010
 * Callers:
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x14008AF40 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1401A4EC0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     InternalMapVirtualKeyEx @ 0x140088250 (InternalMapVirtualKeyEx.c)
 *     GetActiveHKL @ 0x14008B420 (GetActiveHKL.c)
 *     ?SendToUserMode@Keyboard@InputTraceLogging@@SAXHPEAXH@Z @ 0x14008B4E8 (-SendToUserMode@Keyboard@InputTraceLogging@@SAXHPEAXH@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
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
  __int16 v15; // r12
  __int64 v16; // rdx
  int v17; // esi
  _QWORD *v18; // rax
  __int128 v19; // xmm0
  __int16 v20; // ax
  LARGE_INTEGER PerformanceCounter; // rax
  int v22; // r8d
  __int64 v23; // rcx
  __int16 v24; // bx
  __int16 v25; // dx
  __int64 v26; // r15
  int v27; // edx
  __int64 v28; // rcx
  int v29; // r8d
  _BYTE *v30; // rbx
  unsigned __int64 v31; // r12
  int v32; // r13d
  int v33; // edx
  int v34; // r8d
  __int64 v35; // rax
  __int16 v36; // ax
  _OWORD *v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 UserSessionState; // rax
  _BYTE *v51; // rax
  __int64 v52; // rax
  __int16 v54; // [rsp+24h] [rbp-DCh]
  _OWORD v56[22]; // [rsp+30h] [rbp-D0h] BYREF

  v13 = a1;
  memset(v56, 0, sizeof(v56));
  if ( (_BYTE)a3 == 19 && a2 == 69 )
    v15 = -7907;
  else
    v15 = a2;
  v54 = v15;
  InputTraceLogging::Keyboard::SendToUserMode(a3 & 0x8000, a5, v13);
  v17 = 0;
  if ( a5 )
  {
    LOBYTE(v16) = 19;
    v18 = (_QWORD *)HMValidateHandleNoSecure((__int64)a5, v16);
    if ( v18 )
      *(_QWORD *)&v56[0] = *v18;
  }
  if ( a10 )
    v19 = *(_OWORD *)a10;
  else
    v19 = 0LL;
  v20 = WORD6(v56[20]);
  v56[21] = v19;
  if ( a1 )
    v20 = a9;
  WORD6(v56[20]) = v20;
  DWORD2(v56[20]) = a7;
  if ( a6 )
    *((_QWORD *)&v56[19] + 1) = a6;
  else
    *((_QWORD *)&v56[19] + 1) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v23 = 1LL;
  *(LARGE_INTEGER *)&v56[20] = PerformanceCounter;
  WORD4(v56[0]) = a4;
  v24 = (a3 & 0x8000) != 0;
  v25 = 256;
  if ( (a8 & 0x100) != 0 || (v25 = 512, (a8 & 0x200) != 0) )
    v24 |= v25;
  if ( (a8 & 0x80u) != 0 )
    v24 |= 0x80u;
  v26 = 2LL;
  if ( (a3 & 0x2000) != 0 )
  {
    if ( (unsigned __int8)(a3 - 127) > 1u )
    {
      UserSessionState = W32GetUserSessionState(1, 128, v22);
      v15 = InternalMapVirtualKeyEx((unsigned __int8)a3, 4, *(_QWORD *)(UserSessionState + 14056));
      v51 = &ausNumPadCvt;
      v54 = v15;
      while ( *(_WORD *)v51 )
      {
        if ( *v51 == (_BYTE)a3 )
        {
          v24 |= 2u;
          break;
        }
        v51 += 2;
      }
    }
    v24 |= 0x40u;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v24 |= 0x20u;
  }
  if ( ((GetActiveHKL(v23) & 0x3FF) == 0x11 || (GetActiveHKL(v28) & 0x3FF) == 0x12) && (a3 & 0x400) != 0 )
  {
    v52 = W32GetUserSessionState(v28, v27, v29);
    if ( (unsigned __int8)InternalMapVirtualKeyEx((unsigned __int8)a3, 4, *(_QWORD *)(v52 + 14056)) != (_BYTE)v15 )
    {
      v15 = 0;
      v54 = 0;
    }
  }
  WORD6(v56[0]) = (unsigned __int8)a3;
  WORD5(v56[0]) = v15;
  HIWORD(v56[16]) = (a3 >> 7) & 2 | v24;
  v30 = (char *)v56 + 14;
  do
  {
    v31 = (unsigned __int64)(unsigned __int8)v17 >> 2;
    v32 = v17 & 3;
    LOBYTE(v33) = *(_BYTE *)(W32GetUserSessionState(v28, v27, v29) + v31 + 14328);
    if ( ((unsigned __int8)v33 & (unsigned __int8)(1 << (2 * v32))) != 0 )
      *v30 |= 0x80u;
    v35 = W32GetUserSessionState(2 * v32, v33, v34);
    LODWORD(v28) = 2 * v32 + 1;
    LOBYTE(v27) = *(_BYTE *)(v35 + v31 + 14328);
    if ( ((unsigned __int8)v27 & (unsigned __int8)(1 << (2 * v32 + 1))) != 0 )
      *v30 |= 1u;
    ++v17;
    ++v30;
  }
  while ( v17 < 256 );
  v36 = WORD2(v56[17]);
  if ( (_BYTE)a3 == 0xE7 )
    v36 = v54;
  WORD2(v56[17]) = v36;
  v37 = v56;
  do
  {
    v38 = v37[1];
    *(_OWORD *)a11 = *v37;
    v39 = v37[2];
    *((_OWORD *)a11 + 1) = v38;
    v40 = v37[3];
    *((_OWORD *)a11 + 2) = v39;
    v41 = v37[4];
    *((_OWORD *)a11 + 3) = v40;
    v42 = v37[5];
    *((_OWORD *)a11 + 4) = v41;
    v43 = v37[6];
    *((_OWORD *)a11 + 5) = v42;
    v44 = v37[7];
    v37 += 8;
    *((_OWORD *)a11 + 6) = v43;
    a11 = (struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a11 + 128);
    *((_OWORD *)a11 - 1) = v44;
    --v26;
  }
  while ( v26 );
  v45 = v37[1];
  *(_OWORD *)a11 = *v37;
  v46 = v37[2];
  *((_OWORD *)a11 + 1) = v45;
  v47 = v37[3];
  *((_OWORD *)a11 + 2) = v46;
  v48 = v37[4];
  *((_OWORD *)a11 + 3) = v47;
  v49 = v37[5];
  *((_OWORD *)a11 + 4) = v48;
  *((_OWORD *)a11 + 5) = v49;
}
