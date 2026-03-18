/*
 * XREFs of rimGetCompleteFrameFromIVCompleteFrame @ 0x14020D8E4
 * Callers:
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021F270 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ConvertPointCoordinates @ 0x140196130 (ConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x14020CA88 (-CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x14020CBC4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x14020D80C (-StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall rimGetCompleteFrameFromIVCompleteFrame(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
  _DWORD *v9; // rdi
  __int64 v10; // r14
  __int128 v11; // xmm6
  __int128 v12; // xmm7
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r12
  __m128i v21; // xmm2
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  int (*v26)(void); // rax
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(_QWORD, _QWORD); // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v33; // ecx
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rcx
  int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // [rsp+28h] [rbp-89h]
  __int64 v40; // [rsp+30h] [rbp-81h]
  __int128 v41; // [rsp+38h] [rbp-79h] BYREF
  int v42[8]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v43; // [rsp+68h] [rbp-49h]
  __int128 v44; // [rsp+78h] [rbp-39h]
  __int128 v45; // [rsp+88h] [rbp-29h]
  __int128 v46; // [rsp+98h] [rbp-19h]
  __int64 v47; // [rsp+A8h] [rbp-9h]
  int v48; // [rsp+118h] [rbp+67h]
  int v50; // [rsp+130h] [rbp+7Fh]

  v3 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  *a3 = 0LL;
  v7 = Win32AllocPoolZInitImpl(256LL, v3, 0x66637352u);
  v8 = v7;
  if ( v7 )
  {
    *(_DWORD *)v7 = v3;
    v9 = (_DWORD *)(a1 + 176);
    if ( a2 )
      v10 = *(_QWORD *)((*v9 != 0 ? 8 : 0) + a2 + 16);
    else
      v10 = 0LL;
    v39 = v10;
    *(_QWORD *)(v7 + 16) = v7 + 8;
    *(_QWORD *)(v7 + 8) = v7 + 8;
    *(_DWORD *)v7 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(v7 + 24) = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(v7 + 28) = *(_DWORD *)(a1 + 24);
    *(_OWORD *)(v7 + 48) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v7 + 64) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v7 + 80) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v7 + 96) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v7 + 112) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v7 + 128) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v7 + 144) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(v7 + 160) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(v7 + 176) = *(_OWORD *)(a1 + 160);
    v40 = 0LL;
    v11 = 0LL;
    *(LARGE_INTEGER *)(v7 + 120) = KeQueryPerformanceCounter(0LL);
    v12 = 0LL;
    *(_DWORD *)(v8 + 192) = *v9;
    *(_DWORD *)(v8 + 196) = *(_DWORD *)(a1 + 180);
    *(_DWORD *)(v8 + 200) = *(_DWORD *)(a1 + 184);
    *(_QWORD *)(v8 + 208) = *(_QWORD *)(a1 + 192);
    *(_QWORD *)(v8 + 232) = v8 + 240;
    *(_QWORD *)(v8 + 32) = v10;
    if ( a2 )
    {
      v13 = *(_QWORD *)(a2 + 456);
      if ( v13 )
      {
        v11 = *(_OWORD *)(v13 + 176);
        v40 = *(_QWORD *)(a2 + 456);
        v12 = *(_OWORD *)(v13 + 160);
      }
    }
    InputTraceLogging::RIM::StartFrameFromContainer((struct RIMDEV *const)a2, (const struct RIMCOMPLETEFRAME *)v8);
    v14 = *(_QWORD *)(a1 + 216);
    v15 = 0LL;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v8 + 232);
      v48 = v15;
      if ( (unsigned int)v15 >= *(_DWORD *)(a1 + 20) )
        break;
      v17 = 192 * v15;
      *(_DWORD *)(v16 + v17) = *(_DWORD *)v14;
      *(_WORD *)(*(_QWORD *)(v8 + 232) + v17 + 8) = *(_WORD *)(v14 + 8);
      *(_WORD *)(*(_QWORD *)(v8 + 232) + v17 + 10) = *(_WORD *)(v14 + 12);
      *(_DWORD *)(*(_QWORD *)(v8 + 232) + v17 + 160) = *(_DWORD *)(v14 + 152);
      v18 = *(_QWORD *)(v8 + 232);
      *(_DWORD *)(v18 + v17 + 164) = *(_DWORD *)(v14 + 156);
      v19 = *(_DWORD *)(v14 + 16);
      v50 = v19;
      if ( v19 == 2 || v19 == 5 )
      {
        v18 = *(_QWORD *)(v8 + 232);
        *(_DWORD *)(v17 + v18 + 112) = *(_DWORD *)(v14 + 104);
        *(_DWORD *)(v17 + v18 + 116) = *(_DWORD *)(v14 + 108);
        *(_OWORD *)(v17 + v18 + 120) = *(_OWORD *)(v14 + 112);
        *(_OWORD *)(v17 + v18 + 136) = *(_OWORD *)(v14 + 128);
        *(_DWORD *)(v17 + v18 + 152) = *(_DWORD *)(v14 + 144);
        *(_DWORD *)(v17 + v18 + 156) = *(_DWORD *)(v14 + 148);
      }
      else if ( v19 == 3 )
      {
        v18 = *(_QWORD *)(v8 + 232);
        *(_DWORD *)(v17 + v18 + 112) = *(_DWORD *)(v14 + 104);
        *(_DWORD *)(v17 + v18 + 116) = *(_DWORD *)(v14 + 108);
        *(_DWORD *)(v17 + v18 + 120) = *(_DWORD *)(v14 + 112);
        *(_DWORD *)(v17 + v18 + 124) = *(_DWORD *)(v14 + 116);
        *(_DWORD *)(v17 + v18 + 128) = *(_DWORD *)(v14 + 120);
        *(_DWORD *)(v17 + v18 + 132) = *(_DWORD *)(v14 + 124);
      }
      v20 = *(_QWORD *)(v8 + 232);
      v21 = *(__m128i *)(v14 + 16);
      v22 = *(_OWORD *)(v14 + 48);
      v43 = *(_OWORD *)(v14 + 32);
      v23 = *(_OWORD *)(v14 + 64);
      v44 = v22;
      v24 = *(_OWORD *)(v14 + 80);
      v45 = v23;
      *(_QWORD *)&v23 = *(_QWORD *)(v14 + 96);
      *(_DWORD *)(v17 + v20 + 20) = v21.m128i_i32[1];
      *(_DWORD *)(v17 + v20 + 16) = _mm_cvtsi128_si32(v21);
      v46 = v24;
      *(_DWORD *)(v17 + v20 + 28) = _mm_srli_si128(v21, 8).m128i_i32[1];
      *(_QWORD *)(v17 + v20 + 32) = v39;
      *(_QWORD *)(v17 + v20 + 48) = *((_QWORD *)&v43 + 1);
      *(_QWORD *)(v17 + v20 + 64) = *((_QWORD *)&v44 + 1);
      v25 = *(_QWORD *)(v8 + 232) + 16LL;
      v47 = v23;
      *(_QWORD *)&v41 = v17 + v25;
      v26 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18) + 48) + 7024LL);
      if ( !v26 || v26() < 0 )
        return 0LL;
      v28 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27) + 48) + 7032LL);
      if ( !(v28 ? v28(v43, v41) : 0) )
        return 0LL;
      if ( v50 == 5 || !v40 )
      {
        *(_QWORD *)(v17 + v20 + 56) = v44;
        *(_QWORD *)(v17 + v20 + 72) = v45;
      }
      else
      {
        v30 = *(_QWORD *)(v17 + v20 + 48);
        v41 = v11;
        *(_OWORD *)v42 = v12;
        ConvertPointCoordinates(v30, v42, (int *)&v41, (_QWORD *)(v17 + v20 + 56));
        v31 = *(_QWORD *)(v17 + v20 + 64);
        *(_OWORD *)v42 = v11;
        v41 = v12;
        ConvertPointCoordinates(v31, &v41, v42, (_QWORD *)(v17 + v20 + 72));
      }
      *(_QWORD *)(v17 + v20 + 80) = *((_QWORD *)&v45 + 1);
      *(_OWORD *)(v17 + v20 + 88) = v46;
      *(_DWORD *)(v17 + v20 + 104) = v47;
      InputTraceLogging::RIM::CopyPointerFromContainer(
        (struct RIMDEV *const)a2,
        (const struct tagPOINTEREVENTINT *)(v17 + *(_QWORD *)(v8 + 232) + 8LL));
      v15 = (unsigned int)(v48 + 1);
      v14 += 176LL;
    }
    *(_QWORD *)(v8 + 216) = v16;
    v33 = 192 * *(_DWORD *)(a1 + 20);
    *(_DWORD *)(v8 + 28) = *(_DWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 208) )
      *(_QWORD *)(v8 + 224) = v16 + v33;
    v34 = *(_QWORD *)(a1 + 208);
    v35 = *(_QWORD *)(v8 + 224);
    while ( v34 )
    {
      while ( 1 )
      {
        *(_DWORD *)v35 = *(_DWORD *)v34;
        *(_DWORD *)(v35 + 4) = *(_DWORD *)(v34 + 4);
        *(_QWORD *)(v35 + 8) = v35 + 24;
        memmove((void *)(v35 + 24), *(const void **)(v34 + 8), *(unsigned int *)(v34 + 4));
        v36 = 0LL;
        v37 = *(_DWORD *)(v34 + 4) + 7;
        *(_QWORD *)(v35 + 16) = 0LL;
        v38 = (v37 & 0xFFFFFFF8) + 24;
        if ( *(_QWORD *)(v34 + 16) )
        {
          v36 = v35 + v38;
          *(_QWORD *)(v35 + 16) = v36;
        }
        v34 = *(_QWORD *)(v34 + 16);
        v35 = v36;
        if ( !v36 )
          break;
        if ( !v34 )
          goto LABEL_36;
      }
      if ( !v34 )
        break;
LABEL_36:
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1549);
    }
    v6 = 1;
    *a3 = v8;
    InputTraceLogging::RIM::CompleteFrameFromContainer((struct RIMDEV *const)a2, (const struct RIMCOMPLETEFRAME *)v8);
  }
  return v6;
}
