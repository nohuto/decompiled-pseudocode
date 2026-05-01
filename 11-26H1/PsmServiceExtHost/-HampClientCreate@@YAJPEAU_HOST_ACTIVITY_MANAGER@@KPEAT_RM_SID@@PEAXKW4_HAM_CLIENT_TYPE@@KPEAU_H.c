/*
 * XREFs of ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180017318
 * Callers:
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180030D78 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BA70 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x1800139F4 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 *     CemRcTableFindOrInsertEx @ 0x180016A90 (CemRcTableFindOrInsertEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180018844 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall HampClientCreate(
        __int64 a1,
        unsigned int a2,
        void *a3,
        void *a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        __int128 *a8,
        __int64 a9,
        const unsigned __int16 **a10,
        struct _HAM_CLIENT_CONTEXT **a11)
{
  struct _HAM_CLIENT_CONTEXT *v13; // rsi
  __int64 v14; // r8
  unsigned int v15; // edi
  unsigned int v16; // r15d
  void *Heap; // rax
  unsigned __int64 v18; // rbx
  signed __int64 v19; // rax
  struct _HAM_CLIENT_CONTEXT *v20; // r11
  __int16 *v21; // r15
  __int16 v22; // cx
  unsigned int v23; // edi
  const unsigned __int16 *v25; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm0
  int v28; // eax
  __int64 v29; // [rsp+20h] [rbp-68h]
  struct _HAM_CLIENT_CONTEXT *v30; // [rsp+30h] [rbp-58h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h] BYREF
  __int64 v32; // [rsp+48h] [rbp-40h]

  v13 = 0LL;
  if ( !a6 && a10 && (v25 = *a10) != 0LL )
  {
    v26 = 64LL;
    do
    {
      if ( !*v25 )
        break;
      ++v25;
      --v26;
    }
    while ( v26 );
    v23 = v26 == 0 ? 0xC000000D : 0;
    v14 = (64 - v26) & -(__int64)(v26 != 0);
    if ( !v26 )
      return v23;
  }
  else
  {
    LODWORD(v14) = 0;
  }
  v15 = v14 + 1;
  v16 = 2 * (v14 + 1) + 220;
  Heap = HampAllocateHeap(v16);
  v18 = (unsigned __int64)Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, v16);
    CempLockInitialize(v18 + 40);
    *(_QWORD *)v18 = 0LL;
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_QWORD *)(v18 + 16) = -1LL;
    *(_QWORD *)(v18 + 24) = 1LL;
    *(_QWORD *)(v18 + 32) = a1 + 48LL * a6 + 16;
    *(_QWORD *)(v18 + 64) = v18 + 56;
    *(_QWORD *)(v18 + 56) = v18 + 56;
    *(_QWORD *)(v18 + 88) = 0LL;
    *(_QWORD *)(v18 + 96) = 0LL;
    *(_QWORD *)(v18 + 104) = 0LL;
    *(_QWORD *)(v18 + 112) = 0LL;
    *(_QWORD *)(v18 + 72) = 0LL;
    *(_QWORD *)(v18 + 80) = 0LL;
    RtlInitializeSRWLock(v18 + 88);
    RtlInitializeConditionVariable(v18 + 104);
    *(_QWORD *)(v18 + 96) = HampClientPkgDestroy;
    *(_DWORD *)(v18 + 168) = a5;
    *(_BYTE *)(v18 + 164) = a6;
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 976), 1uLL);
    v20 = 0LL;
    *(_DWORD *)(v18 + 160) = a7;
    *(_QWORD *)(v18 + 152) = v19 + 1;
    v21 = (__int16 *)(v18 + 220);
    *(_WORD *)(v18 + 220) = 0;
    v22 = 0;
    *(_DWORD *)(v18 + 200) = 0;
    if ( a10 )
    {
      if ( a6 == 6 )
      {
        *(_DWORD *)(v18 + 172) = *(_DWORD *)*a10;
        v22 = 0;
      }
      else if ( !a6 && *a10 )
      {
        RtlStringCchCopyW((unsigned __int16 *)(v18 + 220), v15, *a10);
        v22 = *v21;
      }
    }
    if ( a8 )
    {
      v27 = *a8;
      *(_DWORD *)(v18 + 144) |= 1u;
      *(_OWORD *)(v18 + 120) = v27;
      *(_QWORD *)(v18 + 136) = a9;
    }
    if ( !v22
      || (v28 = TpAllocTimer(v18 + 208, HampClientRundownTimerCallback, v18, 0LL), v20 = 0LL, v23 = v28, v28 >= 0) )
    {
      v30 = v20;
      v32 = 0LL;
      v31 = 0LL;
      if ( *v21 == (_WORD)v20 )
      {
        v32 = *(_QWORD *)(v18 + 152);
      }
      else
      {
        *(_QWORD *)&v31 = v18 + 220;
        DWORD2(v31) = *(_DWORD *)(v18 + 168);
      }
      CemRcTableFindOrInsertEx(
        *(_QWORD *)(v18 + 32),
        (__int64)&v31,
        (__int64 (__fastcall *)(__int64, unsigned __int64))HampClientCompareByLookupKey,
        v18,
        v29,
        (unsigned __int64 *)&v30);
      v13 = v30;
      if ( (struct _HAM_CLIENT_CONTEXT *)v18 == v30
        && _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24)) <= 1 )
      {
        __fastfail(0xEu);
      }
      v23 = HampClientStart(v13, a3, a4, a2, a7, (struct _HAM_CLIENT_CONNECTION_PARAMETERS *)a10);
      if ( (v23 & 0x80000000) == 0 )
      {
        v23 = 0;
        *a11 = v13;
      }
    }
    CemRcObjectDereference(v18);
    if ( v13 )
      CemRcObjectDereference(v13);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v23;
}
