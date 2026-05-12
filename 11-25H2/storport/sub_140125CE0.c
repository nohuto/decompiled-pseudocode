/*
 * XREFs of sub_140125CE0 @ 0x140125CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140088878 @ 0x140088878 (sub_140088878.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

void __fastcall sub_140125CE0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rdx
  __int64 v6; // rsi
  PIRP v7; // r13
  __int64 v8; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int64 Length; // r14
  int v11; // ebx
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v15; // edx
  bool v16; // zf
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  ULONG_PTR *p_Information; // rsi
  union _SLIST_HEADER *v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  bool v24; // zf
  int v25; // ecx
  unsigned int v26; // edx
  __int64 v27; // rbp
  unsigned int v28; // eax
  const void *v29; // rdx
  struct _IRP *MasterIrp; // rax
  unsigned __int64 v31; // rcx
  bool v32; // zf
  const EVENT_DESCRIPTOR *v33; // rdx
  unsigned __int64 v34; // rdx
  char v35; // r14
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // r11
  char v39; // r12
  char v40; // r15
  char *v41; // rbx
  char v42; // r13
  unsigned int v43; // ebp
  unsigned __int64 v44; // rsi
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // r8
  _BYTE *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  __int64 v52; // [rsp+20h] [rbp-B8h]
  char v53[8]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v54; // [rsp+68h] [rbp-70h] BYREF
  PIRP Irp; // [rsp+70h] [rbp-68h]
  union _SLIST_HEADER *v56; // [rsp+78h] [rbp-60h]
  GUID v57; // [rsp+80h] [rbp-58h] BYREF

  v3 = 0;
  v56 = (union _SLIST_HEADER *)a1;
  v54 = 0LL;
  v5 = *(_QWORD *)a2;
  v6 = a3;
  v7 = *(PIRP *)(v5 + 4184);
  v8 = *(_QWORD *)(v5 + 4216);
  *(_QWORD *)&v57.Data1 = *(_QWORD *)(v5 + 4224);
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  Irp = v7;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !a3 )
  {
    v11 = -1073741435;
LABEL_30:
    p_Information = &v7->IoStatus.Information;
    v7->IoStatus.Information = 0LL;
    goto LABEL_31;
  }
  v11 = sub_140088878((__int64)v7, (*(_DWORD *)(v5 + 4256) & 0x400) != 0, &v54, v53);
  if ( v11 < 0 )
    goto LABEL_30;
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(v6 + 14);
  a3 = *(_QWORD *)a2;
  v12 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v12 >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 2 )
        goto LABEL_117;
      v13 = v12 >> 1;
      switch ( (unsigned __int8)v13 )
      {
        case 0x80u:
          goto LABEL_117;
        case 0x81u:
          goto LABEL_117;
        case 0x82u:
          goto LABEL_117;
        case 0x83u:
          goto LABEL_117;
        case 0x84u:
          goto LABEL_117;
      }
      v14 = (unsigned __int8)v13 - 133;
      if ( (unsigned __int8)v13 == 133 )
        goto LABEL_117;
      goto LABEL_108;
    }
    v15 = v12 >> 1;
    if ( (unsigned __int8)v15 <= 0x80u )
    {
      if ( (unsigned __int8)v15 == 128 )
        goto LABEL_28;
      if ( (unsigned __int8)v15 <= 0x11u )
      {
        if ( (unsigned __int8)v15 == 17 )
          goto LABEL_52;
        if ( (unsigned __int8)v15 <= 9u )
        {
          if ( (unsigned __int8)v15 == 9
            || !(_BYTE)v15
            || (unsigned __int8)v15 == 1
            || (unsigned __int8)v15 == 2
            || (unsigned __int8)v15 == 3 )
          {
            goto LABEL_28;
          }
          v17 = (unsigned __int8)v15 - 5;
          v16 = (unsigned __int8)v15 == 5;
LABEL_25:
          if ( v16 )
            goto LABEL_28;
          v18 = v17 - 1;
          if ( !v18 )
            goto LABEL_28;
          v19 = v18 - 1;
          if ( !v19 )
            goto LABEL_28;
          goto LABEL_97;
        }
        if ( (unsigned __int8)v15 != 10 )
        {
          if ( (unsigned __int8)v15 != 11 )
          {
            if ( (unsigned __int8)v15 == 12
              || (unsigned __int8)v15 == 13
              || (unsigned __int8)v15 == 14
              || (unsigned __int8)v15 == 15 )
            {
              goto LABEL_28;
            }
            if ( (unsigned __int8)v15 != 16 )
              goto LABEL_117;
          }
LABEL_52:
          v11 = -2147483210;
          goto LABEL_29;
        }
LABEL_28:
        v11 = -1073741808;
LABEL_29:
        *(_DWORD *)(v54 + 20) = 0;
        goto LABEL_30;
      }
      if ( (unsigned __int8)v15 <= 0x1Au )
      {
        switch ( (unsigned __int8)v15 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_63;
          case 0x14u:
            v11 = -1073741800;
            goto LABEL_29;
          case 0x15u:
            goto LABEL_117;
          case 0x16u:
            goto LABEL_63;
        }
        v25 = (unsigned __int8)v15 - 24;
        v24 = (unsigned __int8)v15 == 24;
        goto LABEL_61;
      }
      if ( (unsigned __int8)v15 == 27 )
      {
        v11 = -1073741637;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v15 == 28 )
        goto LABEL_28;
      if ( (unsigned __int8)v15 != 30 )
      {
        v17 = (unsigned __int8)v15 - 31;
        v16 = (unsigned __int8)v15 == 31;
        goto LABEL_25;
      }
LABEL_109:
      v11 = -1073741790;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v15 == 129 )
      goto LABEL_28;
    v19 = (unsigned __int8)v15 - 130;
    if ( (unsigned __int8)v15 == 130 )
      goto LABEL_109;
LABEL_97:
    v32 = v19 == 1;
LABEL_116:
    if ( !v32 )
      goto LABEL_117;
    goto LABEL_28;
  }
  v26 = v12 >> 1;
  if ( (unsigned __int8)v26 > 0x80u )
  {
    if ( (unsigned __int8)v26 == 129 )
      goto LABEL_28;
    v19 = (unsigned __int8)v26 - 130;
    if ( (unsigned __int8)v26 == 130 )
    {
      v11 = -1073741661;
      goto LABEL_29;
    }
    goto LABEL_97;
  }
  if ( (unsigned __int8)v26 == 128 )
    goto LABEL_28;
  if ( (unsigned __int8)v26 > 0xEu )
  {
    if ( (unsigned __int8)v26 <= 0x16u )
    {
      if ( (unsigned __int8)v26 == 22
        || (unsigned __int8)v26 == 15
        || (unsigned __int8)v26 == 16
        || (unsigned __int8)v26 == 17
        || (unsigned __int8)v26 == 18
        || (unsigned __int8)v26 == 19 )
      {
        goto LABEL_28;
      }
      v14 = (unsigned __int8)v26 - 20;
      if ( (unsigned __int8)v26 != 20 )
      {
LABEL_108:
        if ( v14 == 1 )
          goto LABEL_109;
LABEL_117:
        v11 = -1073741435;
        goto LABEL_29;
      }
LABEL_63:
      v11 = -1073741436;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v26 == 24 )
      goto LABEL_28;
    if ( (unsigned __int8)v26 == 25 || (unsigned __int8)v26 == 26 )
    {
      v11 = -1073741643;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v26 != 27 )
    {
      if ( (unsigned __int8)v26 == 28 )
        goto LABEL_117;
      v32 = (unsigned __int8)v26 == 30;
      goto LABEL_116;
    }
    goto LABEL_99;
  }
  if ( (unsigned __int8)v26 == 14 )
    goto LABEL_28;
  if ( (unsigned __int8)v26 > 7u )
  {
    if ( (unsigned __int8)v26 != 8 && (unsigned __int8)v26 != 9 && (unsigned __int8)v26 != 10 )
    {
      if ( (unsigned __int8)v26 == 11 )
        goto LABEL_28;
      v19 = (unsigned __int8)v26 - 12;
      if ( (unsigned __int8)v26 == 12 )
      {
        v11 = -1073740758;
        goto LABEL_29;
      }
      goto LABEL_97;
    }
LABEL_99:
    v11 = -1073741248;
    goto LABEL_29;
  }
  if ( (unsigned __int8)v26 == 7 )
    goto LABEL_99;
  if ( (_BYTE)v26 )
  {
    if ( (unsigned __int8)v26 == 1 || (unsigned __int8)v26 == 2 )
      goto LABEL_28;
    if ( (unsigned __int8)v26 == 3 || (unsigned __int8)v26 == 4 )
      goto LABEL_117;
    v25 = (unsigned __int8)v26 - 5;
    v24 = (unsigned __int8)v26 == 5;
LABEL_61:
    if ( !v24 && v25 != 1 )
      goto LABEL_117;
    goto LABEL_63;
  }
  v11 = 0;
  v27 = v54;
  *(_DWORD *)(v54 + 20) = *(_DWORD *)(a3 + 4248);
  v28 = *(_DWORD *)(*(_QWORD *)a2 + 4248LL);
  if ( v28 )
  {
    v29 = *(const void **)(*(_QWORD *)a2 + 4160LL);
    if ( v29 )
      memmove((void *)(v27 + *(unsigned int *)(v27 + 16)), v29, v28);
  }
  MasterIrp = v7->AssociatedIrp.MasterIrp;
  p_Information = &v7->IoStatus.Information;
  v31 = 72LL;
  *(_DWORD *)&MasterIrp->Type = 1;
  *(_DWORD *)(&MasterIrp->Size + 1) = 72;
  if ( HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) )
    v31 = (unsigned int)(*(_DWORD *)(v27 + 16) + *(_DWORD *)(v27 + 20) + 8);
  *p_Information = v31;
  if ( v31 > Length )
  {
    *p_Information = Length;
    v11 = -2147483643;
  }
LABEL_31:
  sub_1400F5FEC(
    (__int64)v56,
    *(_DWORD *)(*(_QWORD *)a2 + 4248LL),
    a3,
    *(_QWORD *)(*(_QWORD *)a2 + 4160LL),
    *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  v21 = v56;
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  sub_140122C20(v21, a2);
  if ( *(_QWORD *)&v57.Data1 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)&v57.Data1 + 152LL));
  if ( v8 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 120));
  v16 = byte_140168DAA == 0;
  *((_BYTE *)&v7->Tail.CompletionKey + 21) = -84;
  v7->IoStatus.Status = v11;
  if ( v16 )
    goto LABEL_174;
  v57 = 0LL;
  IoGetActivityIdIrp(v7, &v57);
  v23 = (__int64)v7->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_174;
    v33 = &stru_140148B18;
    goto LABEL_173;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_174;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        if ( *p_Information )
          v3 = *(_DWORD *)*p_Information;
        LODWORD(v52) = v3;
        sub_140056AB0(v22, v23, &v57, v7, v52, v7->IoStatus.Status);
      }
      goto LABEL_174;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_174;
    v33 = &stru_140149FE8;
LABEL_173:
    LODWORD(v52) = v7->IoStatus.Status;
    sub_140052F3C(v22, v33, &v57, v7, v52);
    goto LABEL_174;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_174;
  v34 = *(_QWORD *)(v23 + 8);
  v35 = 0;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( *(_BYTE *)(v34 + 2) != 40 )
  {
    v47 = *(_BYTE *)(v34 + 72);
    v36 = *(_BYTE **)(v34 + 32);
    v37 = *(_BYTE *)(v34 + 11);
    v35 = *(_BYTE *)(v34 + 4);
    if ( *(_BYTE *)(v34 + 2) )
      goto LABEL_174;
LABEL_152:
    LOBYTE(v22) = v47 - 8;
    if ( (v22 & 0x5D) != 0 )
      goto LABEL_174;
    v48 = *(_BYTE *)(v34 + 3);
    if ( v48 == 1 || !v36 || !v37 )
      goto LABEL_169;
    LOBYTE(v34) = 0;
    v22 = (unsigned __int64)&v36[v37];
    v49 = v36 + 8;
    if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v49 > v22 )
        goto LABEL_167;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      if ( (unsigned __int64)v49 > v22 )
        goto LABEL_167;
      v38 = v36[2] & 0xF;
      v50 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v50 = (unsigned __int8)v36[7] + 8;
      v22 = (unsigned __int64)(v36 + 13);
      v34 = (unsigned __int64)&v36[v50];
      if ( (unsigned __int64)(v36 + 13) <= v34 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) <= v34 )
        v40 = *(_BYTE *)v22;
    }
    LOBYTE(v34) = 1;
LABEL_167:
    if ( (_BYTE)v34 )
    {
      LOBYTE(v3) = v39;
      v51 = v40;
LABEL_170:
      LODWORD(v52) = v7->IoStatus.Status;
      sub_140052E64(v22, v34, &v57, v7, v52, v48, v35, v38, v3, v51, v7);
      goto LABEL_174;
    }
LABEL_169:
    v38 = 0;
    v51 = 0;
    goto LABEL_170;
  }
  v41 = 0LL;
  v42 = 0;
  if ( *(_DWORD *)(v34 + 20) )
    goto LABEL_174;
  v43 = 0;
  LODWORD(v54) = *(_DWORD *)(v34 + 56);
  if ( !(_DWORD)v54 )
    goto LABEL_149;
  while ( 1 )
  {
    v22 = *(unsigned int *)(v34 + 4LL * v43 + 120);
    if ( (unsigned int)v22 >= 0x80 )
    {
      v44 = *(unsigned int *)(v34 + 16);
      if ( (unsigned int)v22 < (unsigned int)v44 )
        break;
    }
LABEL_143:
    if ( ++v43 >= (unsigned int)v54 )
      goto LABEL_149;
  }
  v45 = (unsigned int)v22;
  v46 = *(_DWORD *)(v22 + v34) - 64;
  if ( v46 )
  {
    v22 = (unsigned int)(v46 - 1);
    if ( (_DWORD)v22 )
    {
      if ( (_DWORD)v22 == 1 )
      {
        v22 = v45 + 40;
        if ( v45 + 40 <= v44 )
        {
          if ( *(_DWORD *)(v45 + v34 + 12) )
            v41 = (char *)(v45 + v34 + 32);
          v36 = *(_BYTE **)(v45 + v34 + 24);
          goto LABEL_148;
        }
      }
    }
    else
    {
      v22 = v45 + 56;
      if ( v45 + 56 <= v44 )
      {
        v42 = 1;
        if ( *(_BYTE *)(v45 + v34 + 10) )
          v41 = (char *)(v45 + v34 + 24);
        v35 = *(_BYTE *)(v45 + v34 + 8);
        v36 = *(_BYTE **)(v45 + v34 + 16);
        v37 = *(_BYTE *)(v45 + v34 + 9);
      }
    }
    goto LABEL_142;
  }
  v22 = v45 + 40;
  if ( v45 + 40 > v44 )
  {
LABEL_142:
    if ( v42 )
      goto LABEL_149;
    goto LABEL_143;
  }
  if ( *(_BYTE *)(v45 + v34 + 10) )
    v41 = (char *)(v45 + v34 + 24);
  v36 = *(_BYTE **)(v45 + v34 + 16);
LABEL_148:
  v37 = *(_BYTE *)(v45 + v34 + 9);
  v35 = *(_BYTE *)(v45 + v34 + 8);
LABEL_149:
  if ( v41 )
  {
    v47 = *v41;
    v7 = Irp;
    goto LABEL_152;
  }
LABEL_174:
  IofCompleteRequest(Irp, 1);
}
