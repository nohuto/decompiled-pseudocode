/*
 * XREFs of PspCreatePicoThread @ 0x140A7C010
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
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
  __int64 v21[6]; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v22; // [rsp+2F0h] [rbp+1F0h]
  int v23; // [rsp+2F4h] [rbp+1F4h]
  __int16 v24; // [rsp+2F8h] [rbp+1F8h]
  int v25; // [rsp+2FAh] [rbp+1FAh]
  __int16 v26; // [rsp+2FEh] [rbp+1FEh]
  __int16 v27; // [rsp+300h] [rbp+200h]
  __int16 v28; // [rsp+302h] [rbp+202h]
  __int64 v29; // [rsp+338h] [rbp+238h]
  __int64 v30; // [rsp+340h] [rbp+240h]
  __int64 v31; // [rsp+348h] [rbp+248h]
  __int64 v32; // [rsp+350h] [rbp+250h]
  __int64 v33; // [rsp+358h] [rbp+258h]
  __int64 v34; // [rsp+360h] [rbp+260h]
  __int64 v35; // [rsp+368h] [rbp+268h]
  __int64 v36; // [rsp+370h] [rbp+270h]
  __int64 v37; // [rsp+378h] [rbp+278h]
  __int64 v38; // [rsp+380h] [rbp+280h]
  __int64 v39; // [rsp+388h] [rbp+288h]
  __int64 v40; // [rsp+390h] [rbp+290h]
  __int64 v41; // [rsp+398h] [rbp+298h]
  __int64 v42; // [rsp+3A0h] [rbp+2A0h]
  __int64 v43; // [rsp+3A8h] [rbp+2A8h]
  __int64 v44; // [rsp+3B0h] [rbp+2B0h]
  __int64 v45; // [rsp+3B8h] [rbp+2B8h]
  __int16 v46; // [rsp+3C0h] [rbp+2C0h]
  int v47; // [rsp+3D8h] [rbp+2D8h]
  __int64 v48[50]; // [rsp+790h] [rbp+690h] BYREF

  memset_0(v19, 0, 0x218uLL);
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
  inserted = ObpReferenceObjectByHandleWithTag(
               *(_QWORD *)a1,
               2,
               (__int64)PsProcessType,
               0,
               0x72437350u,
               &Object,
               0LL,
               0LL);
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
