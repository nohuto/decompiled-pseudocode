/*
 * XREFs of ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1401940E0
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA388 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x140105F7C (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     ?FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z @ 0x140106004 (-FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z.c)
 *     Feature_MultiFingerTapImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14022550C (Feature_MultiFingerTapImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CPTPEngine::ProcessGestureFrame(CPTPEngine *this, struct PTPInput *a2, int a3, int *a4)
{
  __int64 v4; // rax
  __int64 *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  _BYTE *v16; // r13
  __int128 v17; // xmm1
  _DWORD *v18; // rbx
  int v19; // r15d
  _BYTE *v20; // rsi
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  unsigned int v26; // ebp
  __int64 v27; // r14
  __int64 v28; // r8
  bool v29; // r9
  char v30; // r14
  bool v31; // cf
  char v32; // r8
  char v33; // r10
  char v34; // r11
  unsigned int v35; // esi
  char *v36; // r9
  __int64 v37; // rbx
  int v38; // eax
  int v39; // ecx
  BOOL v40; // r8d
  __int64 v42; // [rsp+40h] [rbp-2C8h] BYREF
  __int64 v43; // [rsp+70h] [rbp-298h]
  _BYTE v44[12]; // [rsp+78h] [rbp-290h] BYREF
  char v45; // [rsp+84h] [rbp-284h] BYREF

  v4 = 4LL;
  v7 = &v42;
  do
  {
    v8 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v7 = *(_OWORD *)a2;
    v9 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v7 + 1) = v8;
    v10 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v7 + 2) = v9;
    v11 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v7 + 3) = v10;
    v12 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v7 + 4) = v11;
    v13 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v7 + 5) = v12;
    v14 = *((_OWORD *)a2 + 7);
    a2 = (struct PTPInput *)((char *)a2 + 128);
    *((_OWORD *)v7 + 6) = v13;
    v7 += 16;
    *((_OWORD *)v7 - 1) = v14;
    --v4;
  }
  while ( v4 );
  v15 = *((_QWORD *)a2 + 14);
  v16 = 0LL;
  v17 = *((_OWORD *)a2 + 1);
  v18 = 0LL;
  v19 = 0;
  *(_OWORD *)v7 = *(_OWORD *)a2;
  v20 = v44;
  v21 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v7 + 1) = v17;
  v22 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v7 + 2) = v21;
  v23 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v7 + 3) = v22;
  v24 = *((_OWORD *)a2 + 5);
  *((_OWORD *)v7 + 4) = v23;
  v25 = *((_OWORD *)a2 + 6);
  *((_OWORD *)v7 + 5) = v24;
  *((_OWORD *)v7 + 6) = v25;
  v7[14] = v15;
  v26 = v43;
  if ( (_DWORD)v43 )
  {
    v27 = (unsigned int)v43;
    do
    {
      v18 = (_DWORD *)((char *)this + 328 * (unsigned int)(*((_DWORD *)v20 + 1) % *((_DWORD *)this + 4)) + 816);
      if ( (*v18 & 1) != 0 && (*v18 & 0x800) == 0 )
      {
        ++v19;
        v16 = v20;
        if ( (unsigned int)Feature_MultiFingerTapImprovements__private_IsEnabledDeviceUsageNoInline() )
          v18[1] &= ~1u;
      }
      v20 += 96;
      --v27;
    }
    while ( v27 );
    v26 = v43;
  }
  v28 = v42;
  v29 = !a3
     && *((_DWORD *)this + 702) > 2u
     && v42 - *((_QWORD *)this + 374) < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 811) / 0x3E8;
  if ( v19 != 1 || (*((_DWORD *)v16 + 3) & 0x40000) != 0 || *((_DWORD *)this + 6) )
  {
    v30 = 0;
    v32 = 1;
  }
  else
  {
    v30 = 1;
    if ( (*v18 & 0x40000) == 0 )
    {
      *v18 |= 0x40000u;
      *((_QWORD *)this + 371) = v28;
    }
    v31 = v28 - *((_QWORD *)this + 371) < *((_QWORD *)this + 12)
                                        * (unsigned __int64)*((unsigned int *)this + 790)
                                        / 0x3E8;
    v32 = 1;
    if ( !v31 )
    {
      *v18 &= 0xFFFBFBFF;
      v18[1] |= 4u;
      v33 = 0;
LABEL_23:
      v34 = 1;
      goto LABEL_24;
    }
  }
  v33 = 0;
  if ( v29 )
    goto LABEL_23;
  v34 = 0;
LABEL_24:
  v35 = 0;
  if ( v26 )
  {
    v36 = &v45;
    do
    {
      v37 = 328LL * (unsigned int)(*((_DWORD *)v36 - 2) % *((_DWORD *)this + 4));
      v38 = *(_DWORD *)((char *)this + v37 + 816);
      v39 = v38;
      if ( (v38 & 1) != 0 && v34 && (v38 & 2) != 0 )
      {
        v39 = v38 | 0x800;
        *(_DWORD *)((char *)this + v37 + 816) = v38 | 0x800;
      }
      if ( (v39 & 1) == 0 || (v39 & 0x800) != 0 )
      {
        *(_DWORD *)v36 = 0;
        *(_QWORD *)(v36 + 28) = 0LL;
      }
      else
      {
        v40 = v39 < 0 || (*(_DWORD *)v36 & 0x2000) != 0;
        if ( (v39 & 2) != 0 )
          *(_DWORD *)v36 = *(_DWORD *)v36 & 0xFFFCFFFF | 0x10000;
        if ( v34 )
          *(_DWORD *)v36 = 0x40000;
        CPTPEngine::FixupGestureContact(this, (struct PTPEnginePointerNode *)(v36 - 12), v40);
        v32 = 0;
        if ( !v30 )
          *(_DWORD *)((char *)this + v37 + 816) &= ~0x40000u;
      }
      v26 = v43;
      ++v35;
      v36 += 96;
    }
    while ( v35 < (unsigned int)v43 );
  }
  if ( !v34 && !v32 && v33 || (*a4 = 1, !v32) )
    CBasePTPEngine::SendGestureOutput((__int64)this, 3, a3, v26, v44);
}
