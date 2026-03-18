/*
 * XREFs of rimProcessInput @ 0x1400A09DC
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1400A05C4 (rimStackAttachAndProcessInput.c)
 *     rimProcessMouseInput @ 0x1400A0798 (rimProcessMouseInput.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMFixUpCompleteFrames @ 0x1400A0548 (RIMFixUpCompleteFrames.c)
 *     RIMFixUpCompleteFrame @ 0x1400A0EB8 (RIMFixUpCompleteFrame.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1400A11F4 (rimObsDeliverToNonExclusiveObservers.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     RIMFreeUserMem @ 0x140203C40 (RIMFreeUserMem.c)
 *     rimAllocUserMemInternal @ 0x140203CE4 (rimAllocUserMemInternal.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

char __fastcall rimProcessInput(__int64 a1, __int64 a2, unsigned int *a3, __m128i *a4, int a5)
{
  char v8; // r13
  __m128i v9; // xmm1
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // edi
  size_t v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int *v17; // r12
  unsigned int *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // edx
  int v24; // r8d
  char v25; // r12
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  __int64 Src; // [rsp+48h] [rbp-60h] BYREF
  __int64 v31; // [rsp+50h] [rbp-58h] BYREF
  __m128i Size; // [rsp+58h] [rbp-50h] BYREF
  bool v33; // [rsp+C8h] [rbp+20h]

  Src = 0LL;
  v8 = 0;
  v9 = *a4;
  Size = *a4;
  v10 = *(_DWORD *)(a2 + 48);
  if ( !v10 )
  {
    v13 = 1;
    goto LABEL_6;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v13 = 2;
    goto LABEL_6;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v13 = (*(_DWORD *)(a2 + 168) & 0x1000) != 0 ? 8 : 16;
      goto LABEL_6;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 184) & 0x80u) == 0 )
    {
      v13 = 32;
      goto LABEL_6;
    }
    v19 = *(_QWORD *)(a2 + 456);
    if ( *(_DWORD *)(v19 + 24) == 7 )
    {
      v13 = 8;
      goto LABEL_6;
    }
    if ( (unsigned int)RIMIsPenPointerDevice(v19) )
    {
      v13 = 4;
      goto LABEL_6;
    }
    if ( (unsigned int)RIMIsTouchPointerDevice(v20) )
    {
      v13 = 16;
      goto LABEL_6;
    }
  }
  v13 = 0;
LABEL_6:
  v14 = *(unsigned int *)(a1 + 888);
  if ( *(_DWORD *)(a1 + 848) )
  {
    if ( Size.m128i_i64[1] > v14 )
    {
      v31 = 0LL;
      rimAllocUserMemInternal(a1, Size.m128i_i64[1], &v31);
      Src = v31;
      if ( v31 )
      {
        LOBYTE(v14) = RtlCopyToUser(*(void **)(a1 + 880), &Src, 8uLL);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v25 = 0;
        }
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v23, v24);
          LOBYTE(v27) = v33;
          LOBYTE(v28) = v25;
          LOBYTE(v14) = WPP_RECORDER_AND_TRACE_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v28,
                          v27,
                          *(_QWORD *)(UserSessionState + 19368),
                          4,
                          1,
                          14,
                          (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids);
        }
        Size.m128i_i32[0] = -1073741801;
      }
    }
    if ( Size.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 776) = 1;
    }
    else
    {
      RtlWriteULongToUser(*(_QWORD *)(a1 + 856), v13);
      v21 = *(_QWORD *)(a2 + 328);
      if ( !v21 )
        v21 = *(_QWORD *)(a2 + 16);
      RtlWriteULong64ToUser(*(_QWORD *)(a1 + 864), v21);
      RtlCopyToUser(*(void **)(a1 + 872), &Size, 0x10uLL);
      LOBYTE(v14) = RtlCopyToUser(**(void ***)(a1 + 880), a3, Size.m128i_u64[1]);
      if ( a5 )
        LOBYTE(v14) = (unsigned __int8)RIMFixUpCompleteFrames(
                                         a1,
                                         a2,
                                         **(unsigned int ***)(a1 + 880),
                                         a3,
                                         Size.m128i_u32[2]);
      else
        v8 = 1;
    }
  }
  else
  {
    v15 = _mm_srli_si128(v9, 8).m128i_u64[0];
    if ( v15 > v14 )
    {
      v22 = Win32AllocPoolZInitImpl(256LL, v15, 0x656D4B52u);
      Src = v22;
      if ( v22 )
        **(_QWORD **)(a1 + 880) = v22;
      else
        Size.m128i_i32[0] = -1073741801;
      v9 = Size;
    }
    v14 = *(_QWORD *)(a1 + 872);
    *(__m128i *)v14 = v9;
    if ( Size.m128i_i32[0] >= 0 )
    {
      **(_DWORD **)(a1 + 856) = v13;
      if ( _bittest((const signed __int32 *)(a2 + 168), 0xDu) )
      {
        v16 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v16 = *(_QWORD *)(a2 + 328);
        if ( !v16 )
          v16 = *(_QWORD *)(a2 + 16);
      }
      **(_QWORD **)(a1 + 864) = v16;
      memmove(**(void ***)(a1 + 880), a3, Size.m128i_u64[1]);
      LODWORD(v14) = *(_DWORD *)(a2 + 168);
      if ( (v14 & 0x2000) != 0 || (v14 & 0x40) != 0 )
      {
        LODWORD(v14) = *(_DWORD *)(a2 + 48);
        if ( (_DWORD)v14 )
        {
          if ( (_DWORD)v14 == 1 )
            *(_DWORD *)(a2 + 672) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 896) = 0;
        }
      }
      if ( a5 )
      {
        v14 = *(_QWORD *)(a1 + 880);
        v17 = *(unsigned int **)v14;
        v18 = (unsigned int *)((char *)a3 + Size.m128i_u32[2]);
        while ( a3 < v18 )
        {
          RIMFixUpCompleteFrame(a1, a2, v17, a3, 0);
          a3 = (unsigned int *)((char *)a3 + *a3);
          v14 = *v17;
          v17 = (unsigned int *)((char *)v17 + v14);
        }
      }
      else
      {
        v8 = 1;
      }
    }
  }
  if ( v8 )
    LOBYTE(v14) = rimObsDeliverToNonExclusiveObservers((struct RIMDEV *)a2);
  return v14;
}
