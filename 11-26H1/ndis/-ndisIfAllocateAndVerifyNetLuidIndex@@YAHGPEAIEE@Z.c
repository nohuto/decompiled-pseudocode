/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140165C40
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140061B40 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x140089340 (ndisIfRegisterInterfaceEx.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140089D40 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400CF9FC (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     NdisIfAllocateNetLuidIndex @ 0x140146A10 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x140146A30 (NdisIfAllocateNetLuidIndexEx.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     WPP_RECORDER_SF_dL @ 0x14006AD30 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_dllL @ 0x14006AF30 (WPP_RECORDER_SF_dllL.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ndisIfWriteRegistry @ 0x140146840 (ndisIfWriteRegistry.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(__int16 a1, unsigned int *a2, __int64 a3, char a4)
{
  char v4; // bp
  unsigned int v5; // r12d
  unsigned int v6; // esi
  char *v7; // r13
  unsigned int v9; // r14d
  NTSTATUS v11; // eax
  __int64 i; // rbx
  __int64 v13; // r8
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 j; // rax
  unsigned __int8 v20; // r9
  char *v21; // r10
  __int64 v22; // r11
  char v23; // dl
  unsigned int k; // eax
  char v25; // r8
  _BYTE *v26; // rsi
  __int64 v27; // r13
  unsigned int v28; // r12d
  __int64 Pool2; // rax
  __int64 v30; // rsi
  __int64 v31; // rcx
  size_t v32; // r12
  __int64 v33; // rcx
  char *v34; // rcx
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rax
  int Timeout; // [rsp+20h] [rbp-78h]
  int Timeouta; // [rsp+20h] [rbp-78h]
  unsigned int v40; // [rsp+50h] [rbp-48h]
  _BYTE *v41; // [rsp+58h] [rbp-40h]
  char v42; // [rsp+B0h] [rbp+18h]

  v4 = a3;
  v5 = 0;
  v41 = 0LL;
  v6 = 0;
  v42 = 0;
  v7 = 0LL;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, a3, 0xAu, Timeout);
  if ( v4 )
  {
    *a2 = 0;
  }
  else
  {
    v6 = *a2;
    if ( *a2 > 0x1000 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0x16u,
          0xBu,
          (struct _GUID *)&WPP_0ffebb44763b3fc5c7acd63373d92315_Traceguids,
          *a2);
      return 3221226224LL;
    }
  }
  v11 = KeWaitForSingleObject(&Mutex, Executive, 0, 0, 0LL);
  if ( v11 )
    ndisBugCheckEx(0x24uLL, 1uLL, v11, 1uLL);
  for ( i = qword_14011E9A0; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_14011E9A0 )
    {
      i = 0LL;
      if ( v4 )
      {
        v41 = 0LL;
        v14 = 0;
        goto LABEL_47;
      }
LABEL_13:
      if ( !i )
        v9 = -1073741072;
      goto LABEL_15;
    }
    if ( *(_WORD *)(i + 16) == a1 )
      break;
  }
  v13 = *(_QWORD *)(i + 48);
  v14 = *(_DWORD *)(i + 40);
  if ( !v4 )
  {
    if ( v14 < (v6 >> 3) + 1 )
    {
      v9 = -1073741072;
    }
    else if ( ((unsigned __int8)(1 << (v6 & 7)) & *(_BYTE *)(((unsigned __int64)v6 >> 3) + v13)) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), 3u, v13, 0xCu, Timeouta);
      v9 = -1073741072;
    }
    goto LABEL_13;
  }
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= v14 )
    {
LABEL_36:
      v25 = a4;
      goto LABEL_37;
    }
    v20 = *(_BYTE *)(j + v13);
    v21 = (char *)(j + v13);
    v22 = (unsigned int)j;
    if ( v20 != 0xFF )
      break;
    v5 += 8;
  }
  v23 = 1;
  for ( k = 0; ; ++k )
  {
    if ( k >= 8 )
      goto LABEL_36;
    if ( (v20 & (unsigned __int8)v23) == 0 )
      break;
    v23 *= 2;
  }
  v25 = a4;
  v5 += k;
  *v21 = v23 | v20;
  v42 = k;
  v7 = v21;
  if ( a4 )
  {
    *(_BYTE *)(*(_QWORD *)(i + 56) + v22) |= v23;
    v26 = (_BYTE *)(v22 + *(_QWORD *)(i + 56));
    v41 = v26;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v21 )
  {
LABEL_34:
    if ( v7 )
    {
LABEL_60:
      if ( v25 && (v9 = ndisIfWriteRegistry(i)) != 0 )
      {
        if ( v7 )
          *v7 &= ~(1 << v42);
        if ( v26 )
          *v26 &= ~(1 << v42);
      }
      else
      {
        *a2 = v5;
      }
      goto LABEL_15;
    }
LABEL_47:
    v27 = 0LL;
    if ( i )
      v27 = v14;
    v28 = v27 + 1;
    v40 = 8 * v27;
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(2 * (v27 + 1) + 64), 1718174798LL);
    v30 = Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_15;
    }
    *(_DWORD *)(Pool2 + 40) = v28;
    *(_WORD *)(Pool2 + 16) = a1;
    v31 = Pool2 + v28 + 64LL;
    v32 = (unsigned int)v27;
    *(_QWORD *)(Pool2 + 56) = v31;
    *(_QWORD *)(Pool2 + 48) = Pool2 + 64;
    *(_BYTE *)(v27 + Pool2 + 64) = 1;
    v33 = *(_QWORD *)(Pool2 + 56);
    if ( a4 )
    {
      *(_BYTE *)(v33 + v27) = 1;
      v41 = (_BYTE *)((unsigned int)v27 + *(_QWORD *)(Pool2 + 56));
    }
    else
    {
      *(_BYTE *)(v33 + v27) = 0;
    }
    v34 = *(char **)(Pool2 + 48);
    v7 = &v34[v27];
    v42 = 0;
    if ( i )
    {
      memmove(v34, *(const void **)(i + 48), v32);
      memmove(*(void **)(v30 + 56), *(const void **)(i + 56), v32);
      v35 = *(_QWORD *)i;
      if ( *(_QWORD *)(*(_QWORD *)i + 8LL) == i )
      {
        v36 = *(__int64 **)(i + 8);
        if ( *v36 == i )
        {
          *v36 = v35;
          *(_QWORD *)(v35 + 8) = v36;
          ExFreePoolWithTag((PVOID)i, 0);
          goto LABEL_58;
        }
      }
    }
    else
    {
LABEL_58:
      v37 = qword_14011E9A0;
      if ( *(__int64 **)(qword_14011E9A0 + 8) == &qword_14011E9A0 )
      {
        v5 = v40;
        i = v30;
        v25 = a4;
        *(_QWORD *)v30 = qword_14011E9A0;
        *(_QWORD *)(v30 + 8) = &qword_14011E9A0;
        *(_QWORD *)(v37 + 8) = v30;
        qword_14011E9A0 = v30;
        v26 = v41;
        goto LABEL_60;
      }
    }
    __fastfail(3u);
  }
LABEL_37:
  if ( 8 * v14 + 1 < 0x1001 )
  {
    v26 = v41;
    goto LABEL_34;
  }
  v9 = -1073741670;
LABEL_15:
  KeReleaseMutex(&Mutex, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dllL(*((_QWORD *)WPP_GLOBAL_Control + 8), v15, v16, v17, Timeouta);
  return v9;
}
