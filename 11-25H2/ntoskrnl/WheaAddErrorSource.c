/*
 * XREFs of WheaAddErrorSource @ 0x1407B71B0
 * Callers:
 *     WheaRegisterErrorSourceOverride @ 0x140652A10 (WheaRegisterErrorSourceOverride.c)
 *     WheaAddErrorSourceDeviceDriver @ 0x1407B7610 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     WheapAddErrorSource @ 0x14064FCA8 (WheapAddErrorSource.c)
 *     WheapIsErrorSourceTypeAddable @ 0x14064FE88 (WheapIsErrorSourceTypeAddable.c)
 *     WheapCallErrorSourceInitialize @ 0x140651744 (WheapCallErrorSourceInitialize.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     WheapInitializeErrorSource @ 0x1407B70C0 (WheapInitializeErrorSource.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  int v5; // esi
  __int64 Pool2; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rcx
  _BYTE *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _DWORD Src[8]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v28[972]; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+414h] [rbp+30Ch]
  char v30; // [rsp+418h] [rbp+310h]

  memset_0(v28, 0, sizeof(v28));
  v4 = 7LL;
  if ( WheapIsErrorSourceTypeAddable(a1) )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      v8 = Pool2 + 96;
      v9 = a1;
      v10 = 7LL;
      do
      {
        *(_OWORD *)v8 = *(_OWORD *)v9;
        *(_OWORD *)(v8 + 16) = *(_OWORD *)(v9 + 16);
        *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
        *(_OWORD *)(v8 + 48) = *(_OWORD *)(v9 + 48);
        *(_OWORD *)(v8 + 64) = *(_OWORD *)(v9 + 64);
        *(_OWORD *)(v8 + 80) = *(_OWORD *)(v9 + 80);
        *(_OWORD *)(v8 + 96) = *(_OWORD *)(v9 + 96);
        v8 += 128LL;
        v11 = *(_OWORD *)(v9 + 112);
        v9 += 128LL;
        *(_OWORD *)(v8 - 16) = v11;
        --v10;
      }
      while ( v10 );
      *(_OWORD *)v8 = *(_OWORD *)v9;
      *(_OWORD *)(v8 + 16) = *(_OWORD *)(v9 + 16);
      *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
      *(_OWORD *)(v8 + 48) = *(_OWORD *)(v9 + 48);
      *(_QWORD *)(v8 + 64) = *(_QWORD *)(v9 + 64);
      *(_DWORD *)(v8 + 72) = *(_DWORD *)(v9 + 72);
      v5 = WheapInitializeErrorSource(v7);
      if ( v5 )
      {
        ExFreePoolWithTag((PVOID)v7, 0x61656857u);
      }
      else
      {
        *(_QWORD *)(v7 + 56) = a2;
        WheapAddErrorSource(v12, v7);
        if ( WheapInitializationComplete )
          *(_DWORD *)(v7 + 108) = 2;
        v5 = WheapCallErrorSourceInitialize(v7, 1u);
        if ( v5 < 0 )
          *(_DWORD *)(v7 + 108) = 1;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  Src[3] = 0;
  v13 = v28;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 1009;
  Src[5] = -2147483636;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 977;
  do
  {
    v14 = *(_OWORD *)a1;
    v15 = *(_OWORD *)(a1 + 16);
    a1 += 128LL;
    *(_OWORD *)v13 = v14;
    v16 = *(_OWORD *)(a1 - 96);
    *((_OWORD *)v13 + 1) = v15;
    v17 = *(_OWORD *)(a1 - 80);
    *((_OWORD *)v13 + 2) = v16;
    v18 = *(_OWORD *)(a1 - 64);
    *((_OWORD *)v13 + 3) = v17;
    v19 = *(_OWORD *)(a1 - 48);
    *((_OWORD *)v13 + 4) = v18;
    v20 = *(_OWORD *)(a1 - 32);
    *((_OWORD *)v13 + 5) = v19;
    v21 = *(_OWORD *)(a1 - 16);
    *((_OWORD *)v13 + 6) = v20;
    v13 += 128;
    *((_OWORD *)v13 - 1) = v21;
    --v4;
  }
  while ( v4 );
  v22 = *(_QWORD *)(a1 + 64);
  v23 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)v13 = *(_OWORD *)a1;
  v24 = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v13 + 1) = v23;
  v25 = *(_OWORD *)(a1 + 48);
  *((_OWORD *)v13 + 2) = v24;
  *((_OWORD *)v13 + 3) = v25;
  *((_QWORD *)v13 + 8) = v22;
  *((_DWORD *)v13 + 18) = *(_DWORD *)(a1 + 72);
  v29 = v5;
  v30 = 0;
  WheaLogInternalEvent(Src);
  return (unsigned int)v5;
}
