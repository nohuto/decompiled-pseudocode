/*
 * XREFs of ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x140143A40
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401039F8 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x140143C8C (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     ?FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z @ 0x140143D10 (-FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CPTPEngine::SendInitialGestureFrame(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  unsigned int v18; // r10d
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  unsigned int v25; // r9d
  unsigned int v26; // r11d
  char *v27; // r8
  struct CContactState *v28; // rcx
  unsigned int v29; // r11d
  char *i; // r10
  struct CContactState *v31; // rcx
  _QWORD v33[6]; // [rsp+40h] [rbp-2A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-278h]
  char v35; // [rsp+78h] [rbp-270h] BYREF
  char v36; // [rsp+84h] [rbp-264h] BYREF

  v4 = 0;
  v8 = v33;
  v9 = 4LL;
  do
  {
    v10 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v8 = *(_OWORD *)a2;
    v11 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v8 + 1) = v10;
    v12 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v8 + 2) = v11;
    v13 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v8 + 3) = v12;
    v14 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v8 + 4) = v13;
    v15 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v8 + 5) = v14;
    v16 = *((_OWORD *)a2 + 7);
    a2 = (struct PTPInput *)((char *)a2 + 128);
    *((_OWORD *)v8 + 6) = v15;
    v8 += 16;
    *((_OWORD *)v8 - 1) = v16;
    --v9;
  }
  while ( v9 );
  v17 = *((_QWORD *)a2 + 14);
  v18 = 0;
  v19 = *((_OWORD *)a2 + 1);
  *(_OWORD *)v8 = *(_OWORD *)a2;
  v20 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v8 + 1) = v19;
  v21 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v8 + 2) = v20;
  v22 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v8 + 3) = v21;
  v23 = *((_OWORD *)a2 + 5);
  *((_OWORD *)v8 + 4) = v22;
  v24 = *((_OWORD *)a2 + 6);
  *((_OWORD *)v8 + 5) = v23;
  *((_OWORD *)v8 + 6) = v24;
  v8[14] = v17;
  v25 = v34;
  if ( (_DWORD)v34 )
  {
    v26 = *((_DWORD *)this + 4);
    v27 = &v36;
    do
    {
      v28 = (CPTPEngine *)((char *)this + 328 * (*((_DWORD *)v27 - 2) % v26) + 816);
      if ( (*(_DWORD *)v28 & 1) == 0 || (*(_DWORD *)v28 & 0x800) != 0 )
      {
        *(_QWORD *)(v27 + 28) = 0LL;
        *(_DWORD *)v27 = 0;
      }
      else
      {
        if ( (*(_DWORD *)v27 & 0x10000) == 0 )
          *(_DWORD *)v27 = *(_DWORD *)v27 & 0xFFFCFFFF | 0x10000;
        *(_QWORD *)(v27 + 28) = *((_QWORD *)v28 + 2);
        *((_DWORD *)v27 + 13) = *((_DWORD *)v28 + 34);
        *(_QWORD *)(v27 + 68) = *((_QWORD *)v28 + 16);
        if ( v28 == a3 )
          *(_QWORD *)((char *)this + 2828) = *(_QWORD *)((char *)&v33[3] + 4);
        if ( *((_QWORD *)v28 + 16) == v33[0] )
          v4 = 1;
      }
      v25 = v34;
      ++v18;
      v27 += 96;
    }
    while ( v18 < (unsigned int)v34 );
  }
  v29 = 0;
  for ( i = &v35; v29 < v25; i += 96 )
  {
    v31 = (CPTPEngine *)((char *)this + 328 * (unsigned int)(*((_DWORD *)i + 1) % *((_DWORD *)this + 4)) + 816);
    if ( (*(_DWORD *)v31 & 1) != 0 && (*(_DWORD *)v31 & 0x800) == 0 )
    {
      CPTPEngine::FixupGestureContact(this, (struct PTPEnginePointerNode *)i, v31 == a3);
      v25 = v34;
    }
    ++v29;
  }
  CBasePTPEngine::SendGestureOutput(this, 2LL, a4);
  return v4;
}
