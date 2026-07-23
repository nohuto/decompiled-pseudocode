/*
 * XREFs of WheaAddErrorSource @ 0x14084D9D0
 * Callers:
 *     WheaRegisterErrorSourceOverride @ 0x1406DBD20 (WheaRegisterErrorSourceOverride.c)
 *     WheaAddErrorSourceDeviceDriver @ 0x14084DEA0 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     Feature_1631842619__private_IsEnabledDeviceUsageNoInline @ 0x1406D8B68 (Feature_1631842619__private_IsEnabledDeviceUsageNoInline.c)
 *     WheapAddErrorSource @ 0x1406D8C98 (WheapAddErrorSource.c)
 *     WheapIsErrorSourceTypeAddable @ 0x1406D8E7C (WheapIsErrorSourceTypeAddable.c)
 *     WheapCallErrorSourceInitialize @ 0x1406DA8CC (WheapCallErrorSourceInitialize.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WheapInitializeErrorSource @ 0x14084D8E4 (WheapInitializeErrorSource.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  int v5; // edi
  __int64 Pool2; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  _QWORD Src[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v29; // [rsp+38h] [rbp-D0h]
  int v30; // [rsp+3Ch] [rbp-CCh]
  int v31; // [rsp+40h] [rbp-C8h]
  int v32; // [rsp+44h] [rbp-C4h]
  _BYTE v33[72]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h]
  __int64 v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  __int64 v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+D8h] [rbp-30h]
  int v39; // [rsp+414h] [rbp+30Ch]
  char v40; // [rsp+418h] [rbp+310h]

  memset_0(v33, 0, 0x3CCuLL);
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
  Src[0] = 0x1674C6857LL;
  v13 = v33;
  v14 = a1;
  Src[1] = 1009LL;
  v30 = -2147483636;
  v29 = 1280201291;
  v31 = 2;
  v32 = 977;
  do
  {
    v15 = *(_OWORD *)v14;
    v16 = *(_OWORD *)(v14 + 16);
    v14 += 128LL;
    *(_OWORD *)v13 = v15;
    v17 = *(_OWORD *)(v14 - 96);
    *((_OWORD *)v13 + 1) = v16;
    v18 = *(_OWORD *)(v14 - 80);
    *((_OWORD *)v13 + 2) = v17;
    v19 = *(_OWORD *)(v14 - 64);
    *((_OWORD *)v13 + 3) = v18;
    v20 = *(_OWORD *)(v14 - 48);
    *((_OWORD *)v13 + 4) = v19;
    v21 = *(_OWORD *)(v14 - 32);
    *((_OWORD *)v13 + 5) = v20;
    v22 = *(_OWORD *)(v14 - 16);
    *((_OWORD *)v13 + 6) = v21;
    v13 += 128;
    *((_OWORD *)v13 - 1) = v22;
    --v4;
  }
  while ( v4 );
  v23 = *(_QWORD *)(v14 + 64);
  v24 = *(_OWORD *)(v14 + 16);
  *(_OWORD *)v13 = *(_OWORD *)v14;
  v25 = *(_OWORD *)(v14 + 32);
  *((_OWORD *)v13 + 1) = v24;
  v26 = *(_OWORD *)(v14 + 48);
  *((_OWORD *)v13 + 2) = v25;
  *((_OWORD *)v13 + 3) = v26;
  *((_QWORD *)v13 + 8) = v23;
  *((_DWORD *)v13 + 18) = *(_DWORD *)(v14 + 72);
  if ( (unsigned int)Feature_1631842619__private_IsEnabledDeviceUsageNoInline() && *(_DWORD *)(a1 + 8) == 16 )
  {
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v34 = 0LL;
    v38 = 0LL;
  }
  v39 = v5;
  v40 = 0;
  WheaLogInternalEvent(Src);
  return (unsigned int)v5;
}
