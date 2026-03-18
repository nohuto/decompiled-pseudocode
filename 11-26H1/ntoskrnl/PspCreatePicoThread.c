/*
 * XREFs of PspCreatePicoThread @ 0x140A041C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v7; // ebx
  struct _EX_RUNDOWN_REF *v8; // rdi
  int inserted; // esi
  __int64 v10; // rdx
  _BYTE *v11; // rdx
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v14; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h] BYREF
  __int64 v17[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+90h] [rbp-70h]
  _BYTE v19[416]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+240h] [rbp+140h]
  __int64 v21[6]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v22; // [rsp+2D0h] [rbp+1D0h]
  int v23; // [rsp+2D4h] [rbp+1D4h]
  __int16 v24; // [rsp+2D8h] [rbp+1D8h]
  int v25; // [rsp+2DAh] [rbp+1DAh]
  __int16 v26; // [rsp+2DEh] [rbp+1DEh]
  __int16 v27; // [rsp+2E0h] [rbp+1E0h]
  __int16 v28; // [rsp+2E2h] [rbp+1E2h]
  __int64 v29; // [rsp+318h] [rbp+218h]
  __int64 v30; // [rsp+320h] [rbp+220h]
  __int64 v31; // [rsp+328h] [rbp+228h]
  __int64 v32; // [rsp+330h] [rbp+230h]
  __int64 v33; // [rsp+338h] [rbp+238h]
  __int64 v34; // [rsp+340h] [rbp+240h]
  __int64 v35; // [rsp+348h] [rbp+248h]
  __int64 v36; // [rsp+350h] [rbp+250h]
  __int64 v37; // [rsp+358h] [rbp+258h]
  __int64 v38; // [rsp+360h] [rbp+260h]
  __int64 v39; // [rsp+368h] [rbp+268h]
  __int64 v40; // [rsp+370h] [rbp+270h]
  __int64 v41; // [rsp+378h] [rbp+278h]
  __int64 v42; // [rsp+380h] [rbp+280h]
  __int64 v43; // [rsp+388h] [rbp+288h]
  __int64 v44; // [rsp+390h] [rbp+290h]
  __int64 v45; // [rsp+398h] [rbp+298h]
  __int16 v46; // [rsp+3A0h] [rbp+2A0h]
  int v47; // [rsp+3B8h] [rbp+2B8h]
  __int64 v48[50]; // [rsp+770h] [rbp+670h] BYREF

  memset_0(v19, 0, 0x1F8uLL);
  LODWORD(v13) = 0;
  v16 = 0LL;
  memset_0(v48, 0, sizeof(v48));
  v14 = 0LL;
  v18 = 0LL;
  *(_OWORD *)v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v8 = 0LL;
  Object = 0LL;
  if ( !*(_QWORD *)(a1 + 184) )
  {
    inserted = -1073741811;
    goto LABEL_20;
  }
  inserted = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 2LL, PsProcessType, 0, 0x72437350u, &Object, 0LL, 0LL);
  if ( inserted < 0 )
  {
LABEL_14:
    if ( v14 )
      ObfDereferenceObject(v14);
    if ( v7 < 2 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v8 = (struct _EX_RUNDOWN_REF *)Object;
  if ( !*((_QWORD *)Object + 200) )
  {
    inserted = -1073741816;
    goto LABEL_14;
  }
  --CurrentThread->KernelApcDisable;
  v7 = 1;
  if ( !ExAcquireRundownProtection_0(v8 + 61) )
  {
    inserted = -1073741558;
    goto LABEL_14;
  }
  v7 = 3;
  ObfReferenceObjectWithTag(v8, 0x72437350u);
  memset_0(v21, 0, 0x4D0uLL);
  v45 = *(_QWORD *)(a1 + 16);
  v30 = *(_QWORD *)(a1 + 24);
  v31 = *(_QWORD *)(a1 + 32);
  v28 = 43;
  v24 = 51;
  v46 = 639;
  v33 = *(_QWORD *)(a1 + 8);
  v26 = *(_WORD *)(a1 + 56);
  v27 = *(_WORD *)(a1 + 58);
  v17[1] = *(_QWORD *)(a1 + 40);
  v18 = *(_QWORD *)(a1 + 48);
  v29 = *(_QWORD *)(a1 + 64);
  v32 = *(_QWORD *)(a1 + 72);
  v36 = *(_QWORD *)(a1 + 96);
  v35 = *(_QWORD *)(a1 + 104);
  v34 = *(_QWORD *)(a1 + 112);
  v37 = *(_QWORD *)(a1 + 120);
  v38 = *(_QWORD *)(a1 + 128);
  v39 = *(_QWORD *)(a1 + 136);
  v40 = *(_QWORD *)(a1 + 144);
  v41 = *(_QWORD *)(a1 + 152);
  v42 = *(_QWORD *)(a1 + 160);
  v43 = *(_QWORD *)(a1 + 168);
  v44 = *(_QWORD *)(a1 + 176);
  v23 = 8064;
  v47 = 8064;
  v22 = 1048587;
  v25 = 2818091;
  LODWORD(v13) = 1;
  v17[0] = 0LL;
  inserted = PspAllocateThread(
               (ULONG_PTR)v8,
               0LL,
               0,
               0LL,
               (__int64)v21,
               (void **)v17,
               0LL,
               0LL,
               (int *)&v13,
               &v14,
               0LL,
               (__int64)v48);
  if ( inserted >= 0 )
  {
    v11 = 0LL;
    if ( a2 )
    {
      v20 = a2;
      v11 = v19;
    }
    *((_QWORD *)v14 + 206) = *(_QWORD *)(a1 + 184);
    inserted = PspInsertThread(
                 (ULONG_PTR)v14,
                 (__int64)v8,
                 0LL,
                 &v13,
                 0x1FFFFF,
                 0LL,
                 (__int64)v11,
                 0LL,
                 (__int64)v48,
                 &v16,
                 0LL);
    if ( inserted >= 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)v14 + 360, 0x14u);
      inserted = 0;
      *a3 = v16;
    }
    goto LABEL_14;
  }
  v14 = 0LL;
LABEL_17:
  ExReleaseRundownProtection_0(v8 + 61);
LABEL_18:
  if ( (v7 & 1) != 0 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10);
LABEL_20:
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x72437350u);
  return (unsigned int)inserted;
}
