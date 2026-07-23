/*
 * XREFs of WmipQueryAllData @ 0x140A0DCD8
 * Callers:
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 *     WmipQueryAllDataMultiple @ 0x140A0C1A8 (WmipQueryAllDataMultiple.c)
 *     IoWMIQueryAllData @ 0x140B15420 (IoWMIQueryAllData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     WmipSendWmiIrp @ 0x140A0D8E4 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x140A0E218 (WmipForwardWmiIrp.c)
 *     WmipInsertStaticNames @ 0x140A0E4A4 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x140A0E768 (WmipStaticInstanceNameSize.c)
 *     WmipPrepareForWnodeAD @ 0x140A0EB90 (WmipPrepareForWnodeAD.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQueryAllData(PVOID Object, IRP *a2, KPROCESSOR_MODE a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  PVOID v7; // r13
  char v9; // r14
  void *v10; // rcx
  NTSTATUS v11; // eax
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  __int64 *v16; // rdi
  _BYTE *v17; // r12
  __int128 v18; // xmm6
  int v19; // esi
  __int64 *v20; // rcx
  __int64 *v21; // r12
  char v22; // r13
  __int64 v23; // rax
  char *v24; // rax
  __int64 v25; // rdx
  IRP *v26; // rax
  int v27; // eax
  int v28; // ecx
  bool v29; // zf
  _DWORD *v30; // rsi
  unsigned int v32; // eax
  unsigned int v33; // edi
  int v34; // eax
  unsigned int v35; // ecx
  _DWORD *v36; // rax
  __int128 v37; // xmm0
  __int64 *v38; // rcx
  unsigned int v39; // ecx
  unsigned int v40; // edx
  char v41; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 *v43; // [rsp+40h] [rbp-C8h]
  __int64 v44; // [rsp+48h] [rbp-C0h]
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  char *v46; // [rsp+58h] [rbp-B0h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  PVOID v48; // [rsp+68h] [rbp-A0h]
  _QWORD v49[4]; // [rsp+70h] [rbp-98h] BYREF
  PIRP Irp; // [rsp+90h] [rbp-78h]
  _DWORD *v51; // [rsp+98h] [rbp-70h]
  __int64 v52[10]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v53[128]; // [rsp+F8h] [rbp-10h] BYREF

  Irp = a2;
  v7 = Object;
  v48 = Object;
  v49[0] = a6;
  v51 = (_DWORD *)a4;
  memset_0(v53, 0, sizeof(v53));
  memset_0(v52, 0, 0x48uLL);
  v9 = 0;
  v41 = 0;
  *(_OWORD *)&v49[1] = 0LL;
  if ( v7 )
  {
    v11 = ObReferenceObjectByPointer(v7, 1u, WmipGuidObjectType, a3);
  }
  else
  {
    v10 = *(void **)(a4 + 16);
    P = 0LL;
    v11 = ObReferenceObjectByHandle(v10, 1u, WmipGuidObjectType, a3, &P, 0LL);
    v7 = P;
    v48 = P;
  }
  v12 = v11;
  if ( v11 < 0 )
    return (unsigned int)v12;
  v42 = 16;
  P = v53;
  v12 = WmipPrepareForWnodeAD((_DWORD)v7, (unsigned int)&v49[1], (unsigned int)&v42, (unsigned int)&P, (__int64)&v41);
  if ( v12 < 0 )
    goto LABEL_22;
  v13 = *(_DWORD *)(a4 + 44);
  LODWORD(v44) = v13;
  if ( v41 )
  {
    v37 = *(_OWORD *)&v49[1];
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 44) = v13 | 0x100;
    v12 = 0;
    *(_OWORD *)(a4 + 24) = v37;
    *a6 = 48;
    goto LABEL_22;
  }
  v14 = 0;
  v15 = a5;
  v16 = (__int64 *)a4;
  v17 = P;
  v43 = (__int64 *)a4;
  v49[3] = 0LL;
  if ( !v42 )
  {
LABEL_40:
    v12 = -1073741163;
    goto LABEL_21;
  }
  v18 = *(_OWORD *)&v49[1];
  v19 = v44;
  v20 = (__int64 *)P;
  v46 = (char *)P;
  v21 = 0LL;
  v47 = v42;
  v22 = 0;
  do
  {
    v23 = *v20;
    v44 = *v20;
    if ( v9 || v22 || v15 < 0x48 )
    {
      v15 = 72;
      v16 = v52;
      memset_0(v52, 0, 0x48uLL);
      v23 = v44;
      v22 = 1;
    }
    *(_DWORD *)v16 = 48;
    v42 = *(_DWORD *)(v23 + 16) & 3;
    v24 = v46;
    *((_DWORD *)v16 + 11) = v19 | (v42 != 0 ? 0x80 : 0);
    *(_OWORD *)(v16 + 3) = v18;
    v25 = *(unsigned int *)(*(_QWORD *)v24 + 80LL);
    v26 = Irp;
    *((_DWORD *)v16 + 1) = v25;
    *((_DWORD *)v16 + 3) = 0;
    if ( v26 )
      v27 = WmipForwardWmiIrp(v26, v15, (__int64)v16);
    else
      v27 = WmipSendWmiIrp(0LL, v25, (__int64)(v16 + 3), v15, (__int64)v16, &v49[1]);
    v28 = v27;
    *((_DWORD *)v16 + 1) = 0;
    if ( v27 < 0 )
      goto LABEL_15;
    if ( (*((_DWORD *)v16 + 11) & 0x20) != 0 )
    {
      if ( *((_DWORD *)v16 + 12) <= v15 )
        v28 = -1073741823;
      if ( v28 < 0 )
        goto LABEL_15;
      v32 = *((_DWORD *)v16 + 12);
LABEL_31:
      if ( v32 < 0x48 )
        v32 = 72;
      v33 = v14 + v32;
      if ( v42 )
      {
        v34 = WmipStaticInstanceNameSize(v44);
        v35 = (v33 + 3) & 0xFFFFFFFC;
        if ( v33 + 3 < v33 )
          v35 = v33;
        v33 = v35 + v34;
      }
      v14 = (v33 + 7) & 0xFFFFFFF8;
      if ( v33 + 7 < v33 )
        v14 = v33;
LABEL_39:
      v9 = 1;
LABEL_15:
      v16 = v43;
      goto LABEL_16;
    }
    if ( !*((_DWORD *)v16 + 13) )
      goto LABEL_15;
    if ( v22 )
    {
      v32 = *(_DWORD *)v16;
      goto LABEL_31;
    }
    if ( v21 )
      *((_DWORD *)v21 + 3) = (_DWORD)v16 - (_DWORD)v21;
    v21 = v16;
    v38 = v16;
    if ( v42 )
    {
      WmipInsertStaticNames(v16, v15, v44);
      if ( (*((_DWORD *)v16 + 11) & 0x20) != 0 )
      {
        v9 = 1;
        v38 = v16 + 6;
      }
      else
      {
        v38 = v16;
      }
    }
    v39 = *(_DWORD *)v38;
    v40 = (v39 + 7) & 0xFFFFFFF8;
    if ( v39 + 7 < v39 )
      v40 = v39;
    v14 += v40;
    if ( v9 || v15 < v40 )
      goto LABEL_39;
    v15 -= v40;
    v16 = (__int64 *)((char *)v43 + v40);
    v43 = v16;
LABEL_16:
    WmipUnreferenceEntry(&WmipISChunkInfo, v44);
    v20 = (__int64 *)(v46 + 8);
    v29 = v47-- == 1;
    v46 += 8;
  }
  while ( !v29 );
  v30 = v51;
  v17 = P;
  v7 = v48;
  if ( !v14 )
    goto LABEL_40;
  if ( v9 )
  {
    if ( v14 <= a5 )
      v14 = a5 + 64;
    v36 = (_DWORD *)v49[0];
    *v51 = 56;
    v30[11] = 32;
    v30[12] = v14;
    *v36 = 56;
  }
  else
  {
    *(_DWORD *)v49[0] = v14;
  }
  v12 = 0;
LABEL_21:
  if ( v17 != v53 && v17 )
    ExFreePoolWithTag(v17, 0);
LABEL_22:
  ObfDereferenceObject(v7);
  return (unsigned int)v12;
}
