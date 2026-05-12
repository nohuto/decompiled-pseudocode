/*
 * XREFs of sub_140123DD0 @ 0x140123DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140088878 @ 0x140088878 (sub_140088878.c)
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400BD6D8 @ 0x1400BD6D8 (sub_1400BD6D8.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     sub_140122D58 @ 0x140122D58 (sub_140122D58.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

void __fastcall sub_140123DD0(void *a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rdx
  char v6; // si
  PIRP v7; // r15
  __int64 v8; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v10; // edi
  ULONG_PTR *p_Information; // rdx
  union _SLIST_HEADER *v12; // rsi
  void *v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *Information; // rax
  int v17; // eax
  _DWORD *v18; // r14
  _DWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r10
  unsigned int v23; // edx
  unsigned int v24; // edx
  int v25; // ecx
  unsigned int v26; // edx
  bool v27; // zf
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  char v31; // al
  bool v32; // zf
  int v33; // ecx
  unsigned int v34; // edx
  bool v35; // zf
  unsigned int v36; // ecx
  const void *v37; // rdx
  const void *v38; // r9
  size_t v39; // rcx
  __int64 v40; // r10
  unsigned __int64 v41; // r8
  int v42; // ecx
  unsigned int v43; // esi
  unsigned int v44; // eax
  PVOID v45; // rdi
  unsigned int v46; // esi
  PVOID v47; // rcx
  unsigned int v48; // r8d
  int v49; // edx
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // edx
  _DWORD *v53; // rdx
  int v54; // esi
  int v55; // eax
  struct _IRP *MasterIrp; // rcx
  unsigned __int64 v57; // rax
  __int16 v58; // ax
  unsigned __int64 v59; // rcx
  const EVENT_DESCRIPTOR *v60; // rdx
  __int64 v61; // rdx
  char v62; // r14
  _BYTE *v63; // r9
  unsigned __int8 v64; // r10
  char v65; // r11
  char v66; // r13
  char v67; // r12
  char *v68; // rdi
  unsigned int v69; // r15d
  unsigned __int64 v70; // rsi
  __int64 v71; // r8
  int v72; // ecx
  char v73; // cl
  char v74; // r8
  _BYTE *v75; // rax
  unsigned int v76; // eax
  unsigned __int64 v77; // r8
  char v78; // al
  __int64 v79; // [rsp+20h] [rbp-69h]
  __int64 v80; // [rsp+28h] [rbp-61h]
  __int64 v81; // [rsp+30h] [rbp-59h]
  __int64 v82; // [rsp+38h] [rbp-51h]
  __int64 v83; // [rsp+40h] [rbp-49h]
  __int64 v84; // [rsp+48h] [rbp-41h]
  char v85; // [rsp+60h] [rbp-29h]
  char v86[3]; // [rsp+61h] [rbp-28h] BYREF
  ULONG Length; // [rsp+64h] [rbp-25h]
  _DWORD *v88; // [rsp+68h] [rbp-21h] BYREF
  _DWORD *v89; // [rsp+70h] [rbp-19h]
  PVOID SystemArgument2; // [rsp+78h] [rbp-11h]
  PIRP Irp; // [rsp+80h] [rbp-9h]
  __int64 v92; // [rsp+88h] [rbp-1h]
  __int64 v93; // [rsp+90h] [rbp+7h]
  GUID v94; // [rsp+98h] [rbp+Fh] BYREF

  v3 = 0;
  v92 = a3;
  SystemArgument2 = a1;
  v5 = *a2;
  v6 = 0;
  v88 = 0LL;
  v89 = 0LL;
  v86[0] = 0;
  v7 = *(PIRP *)(v5 + 4184);
  v8 = *(_QWORD *)(v5 + 4208);
  v93 = *(_QWORD *)(v5 + 4224);
  *(_QWORD *)&v94.Data1 = *(_QWORD *)(v5 + 4216);
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  Irp = v7;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( a3 )
  {
    v17 = sub_140088878((__int64)v7, (*(_DWORD *)(v5 + 4256) & 0x400) != 0, &v88, v86);
    v18 = v88;
    v10 = v17;
    if ( v17 < 0 )
      goto LABEL_170;
    v19 = 0LL;
    v20 = *a2;
    a3 = 3221225861LL;
    v21 = v92;
    if ( v86[0] )
      v19 = v88;
    v89 = v19;
    *(_WORD *)(v20 + 4260) = *(_WORD *)(v92 + 14);
    v22 = *a2;
    v23 = *(unsigned __int16 *)(*a2 + 4260);
    if ( ((v23 >> 9) & 7) != 0 )
    {
      if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 1 )
      {
        if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 2 )
          goto LABEL_120;
        v24 = v23 >> 1;
        switch ( (unsigned __int8)v24 )
        {
          case 0x80u:
            goto LABEL_120;
          case 0x81u:
            goto LABEL_120;
          case 0x82u:
            goto LABEL_120;
          case 0x83u:
            goto LABEL_120;
          case 0x84u:
            goto LABEL_120;
        }
        v25 = (unsigned __int8)v24 - 133;
        if ( (unsigned __int8)v24 == 133 )
          goto LABEL_120;
        goto LABEL_111;
      }
      v26 = v23 >> 1;
      if ( (unsigned __int8)v26 <= 0x80u )
      {
        if ( (unsigned __int8)v26 == 128 )
          goto LABEL_48;
        if ( (unsigned __int8)v26 <= 0x11u )
        {
          if ( (unsigned __int8)v26 == 17 )
            goto LABEL_61;
          if ( (unsigned __int8)v26 <= 9u )
          {
            if ( (unsigned __int8)v26 == 9
              || !(_BYTE)v26
              || (unsigned __int8)v26 == 1
              || (unsigned __int8)v26 == 2
              || (unsigned __int8)v26 == 3 )
            {
              goto LABEL_48;
            }
            v28 = (unsigned __int8)v26 - 5;
            v27 = (unsigned __int8)v26 == 5;
LABEL_45:
            if ( v27 )
              goto LABEL_48;
            v29 = v28 - 1;
            if ( !v29 )
              goto LABEL_48;
            v30 = v29 - 1;
            if ( !v30 )
              goto LABEL_48;
            goto LABEL_100;
          }
          if ( (unsigned __int8)v26 != 10 )
          {
            if ( (unsigned __int8)v26 != 11 )
            {
              if ( (unsigned __int8)v26 == 12
                || (unsigned __int8)v26 == 13
                || (unsigned __int8)v26 == 14
                || (unsigned __int8)v26 == 15 )
              {
                goto LABEL_48;
              }
              if ( (unsigned __int8)v26 != 16 )
                goto LABEL_120;
            }
LABEL_61:
            v10 = -2147483210;
            goto LABEL_49;
          }
LABEL_48:
          v10 = -1073741808;
LABEL_49:
          switch ( v18[1] )
          {
            case 2:
              goto LABEL_125;
            case 3:
LABEL_53:
              v31 = 1;
              goto LABEL_127;
            case 4:
LABEL_125:
              v6 = 1;
              break;
            case 5:
              goto LABEL_53;
          }
          v31 = 0;
LABEL_127:
          if ( v10 < 0 )
          {
            if ( !v6
              || !v8
              || (*(_DWORD *)(v8 + 4) & 1) != 0
              || (v58 = *(_WORD *)(v21 + 14), (v58 & 0xE00) != 0)
              || (v58 & 0x1FE) != 4 )
            {
              v18[5] = 0;
              goto LABEL_3;
            }
            v10 = 0;
            goto LABEL_141;
          }
          if ( v8 )
          {
            if ( v6 )
            {
              v38 = *(const void **)(v22 + 4160);
              if ( !v38
                || (v39 = *(unsigned int *)(v22 + 4248), !(_DWORD)v39)
                || (v40 = *(unsigned int *)(v8 + 44), *(_DWORD *)(v8 + 40) < (unsigned int)(v40 + v39))
                || (v41 = *(_QWORD *)(v8 + 48)) != 0 && v41 < *(_QWORD *)(v8 + 32) + (unsigned __int64)(unsigned int)v39 )
              {
                v18[5] = 0;
                goto LABEL_141;
              }
              memmove((char *)v18 + (unsigned int)v18[4] + v40, v38, v39);
              v42 = *(_DWORD *)(*a2 + 4248);
              if ( *(_DWORD *)(v8 + 44) )
                v18[5] += v42;
              else
                v18[5] = v42;
              v43 = *(_DWORD *)(v8 + 40);
              v44 = v18[5];
              if ( v43 != v44 )
              {
                if ( v43 <= v44 )
                {
                  v18[5] = v43;
                  goto LABEL_141;
                }
                v45 = SystemArgument2;
                v46 = v43 - v44;
                v47 = SystemArgument2;
                _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
                sub_140122D58((__int64)v47, (__int64)a2);
                v49 = *(_DWORD *)(v8 + 44);
                if ( !v49 )
                  *(_DWORD *)(v8 + 4) &= ~1u;
                *(_QWORD *)(v8 + 32) += *(unsigned int *)(*a2 + 4248);
                v50 = *(_DWORD *)(v8 + 12);
                *(_DWORD *)(v8 + 44) = v49 + *(_DWORD *)(*a2 + 4248);
                if ( *(_QWORD *)(v8 + 48) )
                {
                  v51 = v50;
                  v52 = *(_DWORD *)(v8 + 48) - *(_DWORD *)(v8 + 32);
                  if ( v50 >= v52 )
                    v51 = *(_DWORD *)(v8 + 48) - *(_DWORD *)(v8 + 32);
                  if ( v46 >= v51 )
                  {
                    v46 = *(_DWORD *)(v8 + 48) - *(_DWORD *)(v8 + 32);
                    if ( v50 < v52 )
                      v46 = v50;
                  }
                }
                else
                {
                  if ( v46 < v50 )
                    v50 = v46;
                  v46 = v50;
                }
                v18 = v88;
                *(_DWORD *)(*a2 + 4248) = v46;
                LOBYTE(v48) = *(_BYTE *)v8;
                sub_1400BC8A4(
                  (__int64)v45,
                  *a2 + 4096,
                  v48,
                  v46,
                  *(_QWORD *)(v8 + 24),
                  *(_DWORD *)(v8 + 8),
                  *(_QWORD *)(v8 + 32),
                  v18[8],
                  *a2,
                  a2[1]);
                if ( v86[0] )
                {
                  v53 = v89;
                  v54 = (v46 >> 2) - 1;
                  *(_DWORD *)(*a2 + 4136) = v89[2];
                  *(_WORD *)(*a2 + 4138) = v54;
                  *(_DWORD *)(*a2 + 4140) = v53[3];
                  *(_WORD *)(*a2 + 4140) = HIWORD(v54);
                  *(_QWORD *)(*a2 + 4144) = *(_QWORD *)(v8 + 32);
                  *(_DWORD *)(*a2 + 4152) = v53[9];
                  *(_DWORD *)(*a2 + 4156) = 0;
                }
                else
                {
                  *(_DWORD *)(*a2 + 4136) ^= ((unsigned __int16)*(_DWORD *)(*a2 + 4136) ^ (unsigned __int16)((unsigned __int16)v18[9] << 15)) & 0x8000;
                  *(_DWORD *)(*a2 + 4136) ^= ((unsigned __int16)*(_DWORD *)(*a2 + 4136) ^ (unsigned __int16)((unsigned __int16)v18[9] << 7)) & 0xF00;
                  if ( sub_1400BD6D8((__int64)v45) && (v18[9] & 0x7F00) != 0 && *(_BYTE *)v8 >= 0xC0u )
                    *(_DWORD *)(*a2 + 4152) ^= ((unsigned __int8)BYTE1(v18[9]) ^ (unsigned __int8)*(_DWORD *)(*a2 + 4152)) & 0x7F;
                }
                v55 = *(_DWORD *)(*a2 + 4136);
                if ( (v55 & 0x7F00) != 0 && ((unsigned __int8)v55 == 7 || (unsigned __int8)v55 == 13) )
                  *(_DWORD *)(*a2 + 4136) = v55 & 0xFFFF80FF;
                v10 = sub_140122670((__int64)v45, a2);
                if ( v10 >= 0 )
                  return;
              }
            }
            else
            {
              v10 = -1073741435;
              v18[5] = 0;
            }
          }
          else
          {
            if ( v31 )
              v18[6] = *(_DWORD *)v21;
            v18[5] = *(_DWORD *)(*a2 + 4248);
            v36 = *(_DWORD *)(*a2 + 4248);
            if ( v36 )
            {
              v37 = *(const void **)(*a2 + 4160);
              if ( v37 )
              {
                memmove((char *)v18 + (unsigned int)v18[4], v37, v36);
LABEL_141:
                p_Information = &v7->IoStatus.Information;
                a3 = (__int64)&v7->IoStatus.Information;
                goto LABEL_171;
              }
            }
          }
LABEL_170:
          p_Information = &v7->IoStatus.Information;
          a3 = (__int64)&v7->IoStatus.Information;
          if ( v10 < 0 )
            goto LABEL_4;
LABEL_171:
          MasterIrp = v7->AssociatedIrp.MasterIrp;
          if ( v86[0] )
          {
            v57 = 72LL;
            *(_DWORD *)&MasterIrp->Type = 1;
            *(_DWORD *)(&MasterIrp->Size + 1) = 72;
            if ( HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) )
              v57 = (unsigned int)(v89[5] + v89[4] + 8);
          }
          else
          {
            v57 = 48LL;
            *(_DWORD *)&MasterIrp->Type = 48;
            *(_DWORD *)(&MasterIrp->Size + 1) = 48;
            if ( HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) )
              v57 = (unsigned int)(v18[5] + v18[4] + 8);
          }
          v59 = Length;
          *p_Information = v57;
          if ( v57 > v59 )
          {
            *(_QWORD *)a3 = v59;
            v10 = -2147483643;
          }
          goto LABEL_5;
        }
        if ( (unsigned __int8)v26 <= 0x1Au )
        {
          switch ( (unsigned __int8)v26 )
          {
            case 0x1Au:
            case 0x12u:
            case 0x13u:
              goto LABEL_72;
            case 0x14u:
              v10 = -1073741800;
              goto LABEL_49;
            case 0x15u:
              goto LABEL_120;
            case 0x16u:
              goto LABEL_72;
          }
          v33 = (unsigned __int8)v26 - 24;
          v32 = (unsigned __int8)v26 == 24;
          goto LABEL_70;
        }
        if ( (unsigned __int8)v26 == 27 )
        {
          v10 = -1073741637;
          goto LABEL_49;
        }
        if ( (unsigned __int8)v26 == 28 )
          goto LABEL_48;
        if ( (unsigned __int8)v26 != 30 )
        {
          v28 = (unsigned __int8)v26 - 31;
          v27 = (unsigned __int8)v26 == 31;
          goto LABEL_45;
        }
LABEL_112:
        v10 = -1073741790;
        goto LABEL_49;
      }
      if ( (unsigned __int8)v26 == 129 )
        goto LABEL_48;
      v30 = (unsigned __int8)v26 - 130;
      if ( (unsigned __int8)v26 == 130 )
        goto LABEL_112;
LABEL_100:
      v35 = v30 == 1;
LABEL_119:
      if ( !v35 )
        goto LABEL_120;
      goto LABEL_48;
    }
    v34 = v23 >> 1;
    if ( (unsigned __int8)v34 > 0x80u )
    {
      if ( (unsigned __int8)v34 == 129 )
        goto LABEL_48;
      v30 = (unsigned __int8)v34 - 130;
      if ( (unsigned __int8)v34 == 130 )
      {
        v10 = -1073741661;
        goto LABEL_49;
      }
      goto LABEL_100;
    }
    if ( (unsigned __int8)v34 == 128 )
      goto LABEL_48;
    if ( (unsigned __int8)v34 > 0xEu )
    {
      if ( (unsigned __int8)v34 <= 0x16u )
      {
        if ( (unsigned __int8)v34 == 22
          || (unsigned __int8)v34 == 15
          || (unsigned __int8)v34 == 16
          || (unsigned __int8)v34 == 17
          || (unsigned __int8)v34 == 18
          || (unsigned __int8)v34 == 19 )
        {
          goto LABEL_48;
        }
        v25 = (unsigned __int8)v34 - 20;
        if ( (unsigned __int8)v34 != 20 )
        {
LABEL_111:
          if ( v25 == 1 )
            goto LABEL_112;
LABEL_120:
          v10 = -1073741435;
          goto LABEL_49;
        }
LABEL_72:
        v10 = -1073741436;
        goto LABEL_49;
      }
      if ( (unsigned __int8)v34 == 24 )
        goto LABEL_48;
      if ( (unsigned __int8)v34 == 25 || (unsigned __int8)v34 == 26 )
      {
        v10 = -1073741643;
        goto LABEL_49;
      }
      if ( (unsigned __int8)v34 != 27 )
      {
        if ( (unsigned __int8)v34 == 28 )
          goto LABEL_120;
        v35 = (unsigned __int8)v34 == 30;
        goto LABEL_119;
      }
    }
    else
    {
      if ( (unsigned __int8)v34 == 14 )
        goto LABEL_48;
      if ( (unsigned __int8)v34 > 7u )
      {
        if ( (unsigned __int8)v34 != 8 && (unsigned __int8)v34 != 9 && (unsigned __int8)v34 != 10 )
        {
          if ( (unsigned __int8)v34 == 11 )
            goto LABEL_48;
          v30 = (unsigned __int8)v34 - 12;
          if ( (unsigned __int8)v34 == 12 )
          {
            v10 = -1073740758;
            goto LABEL_49;
          }
          goto LABEL_100;
        }
      }
      else if ( (unsigned __int8)v34 != 7 )
      {
        if ( !(_BYTE)v34 )
        {
          v10 = 0;
          goto LABEL_49;
        }
        if ( (unsigned __int8)v34 == 1 || (unsigned __int8)v34 == 2 )
          goto LABEL_48;
        if ( (unsigned __int8)v34 == 3 || (unsigned __int8)v34 == 4 )
          goto LABEL_120;
        v33 = (unsigned __int8)v34 - 5;
        v32 = (unsigned __int8)v34 == 5;
LABEL_70:
        if ( !v32 && v33 != 1 )
          goto LABEL_120;
        goto LABEL_72;
      }
    }
    v10 = -1073741248;
    goto LABEL_49;
  }
  v10 = -1073741435;
LABEL_3:
  p_Information = &v7->IoStatus.Information;
LABEL_4:
  *p_Information = 0LL;
LABEL_5:
  v12 = (union _SLIST_HEADER *)SystemArgument2;
  sub_1400F5FEC((__int64)SystemArgument2, *(_DWORD *)(*a2 + 4248), a3, *(_QWORD *)(*a2 + 4160), *(_QWORD *)(*a2 + 4168));
  v13 = *(void **)(*a2 + 4208);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x4C4E6152u);
    *(_QWORD *)(*a2 + 4208) = 0LL;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  sub_140122C20(v12, (__int64)a2);
  if ( v93 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v93 + 152));
  if ( *(_QWORD *)&v94.Data1 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)&v94.Data1 + 120LL));
  v27 = byte_140168DAA == 0;
  *((_BYTE *)&v7->Tail.CompletionKey + 21) = -84;
  v7->IoStatus.Status = v10;
  if ( v27 )
    goto LABEL_239;
  v94 = 0LL;
  IoGetActivityIdIrp(v7, &v94);
  v15 = (__int64)v7->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_239;
    v60 = &stru_140148B18;
    goto LABEL_238;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_239;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        Information = (int *)v7->IoStatus.Information;
        if ( Information )
          v3 = *Information;
        LODWORD(v80) = v7->IoStatus.Status;
        LODWORD(v79) = v3;
        sub_140056AB0(v14, v15, &v94, v7, v79, v80);
      }
      goto LABEL_239;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_239;
    v60 = &stru_140149FE8;
LABEL_238:
    LODWORD(v79) = v7->IoStatus.Status;
    sub_140052F3C(v14, v60, &v94, v7, v79);
    goto LABEL_239;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_239;
  v61 = *(_QWORD *)(v15 + 8);
  v62 = 0;
  v63 = 0LL;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  if ( *(_BYTE *)(v61 + 2) == 40 )
  {
    v68 = 0LL;
    v85 = 0;
    if ( *(_DWORD *)(v61 + 20) )
      goto LABEL_239;
    v69 = 0;
    Length = *(_DWORD *)(v61 + 56);
    if ( !Length )
      goto LABEL_214;
    while ( 1 )
    {
      v14 = *(unsigned int *)(v61 + 4LL * v69 + 120);
      if ( (unsigned int)v14 >= 0x80 )
      {
        v70 = *(unsigned int *)(v61 + 16);
        if ( (unsigned int)v14 < (unsigned int)v70 )
        {
          v71 = (unsigned int)v14;
          v72 = *(_DWORD *)(v14 + v61) - 64;
          if ( v72 )
          {
            v14 = (unsigned int)(v72 - 1);
            if ( (_DWORD)v14 )
            {
              if ( (_DWORD)v14 == 1 )
              {
                v14 = v71 + 40;
                if ( v71 + 40 <= v70 )
                {
                  if ( *(_DWORD *)(v71 + v61 + 12) )
                    v68 = (char *)(v71 + v61 + 32);
                  v63 = *(_BYTE **)(v71 + v61 + 24);
                  goto LABEL_213;
                }
              }
            }
            else
            {
              v14 = v71 + 56;
              if ( v71 + 56 <= v70 )
              {
                v85 = 1;
                if ( *(_BYTE *)(v71 + v61 + 10) )
                  v68 = (char *)(v71 + v61 + 24);
                v62 = *(_BYTE *)(v71 + v61 + 8);
                v63 = *(_BYTE **)(v71 + v61 + 16);
                v64 = *(_BYTE *)(v71 + v61 + 9);
              }
            }
          }
          else
          {
            v14 = v71 + 40;
            if ( v71 + 40 <= v70 )
            {
              if ( *(_BYTE *)(v71 + v61 + 10) )
                v68 = (char *)(v71 + v61 + 24);
              v63 = *(_BYTE **)(v71 + v61 + 16);
LABEL_213:
              v64 = *(_BYTE *)(v71 + v61 + 9);
              v62 = *(_BYTE *)(v71 + v61 + 8);
LABEL_214:
              if ( v68 )
              {
                v73 = *v68;
                v7 = Irp;
                goto LABEL_217;
              }
              goto LABEL_239;
            }
          }
          if ( v85 )
            goto LABEL_214;
        }
      }
      if ( ++v69 >= Length )
        goto LABEL_214;
    }
  }
  v73 = *(_BYTE *)(v61 + 72);
  v63 = *(_BYTE **)(v61 + 32);
  v64 = *(_BYTE *)(v61 + 11);
  v62 = *(_BYTE *)(v61 + 4);
  if ( *(_BYTE *)(v61 + 2) )
    goto LABEL_239;
LABEL_217:
  LOBYTE(v14) = v73 - 8;
  if ( (v14 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v61 + 3) == 1 || !v63 || !v64 )
      goto LABEL_234;
    v74 = 0;
    v14 = (unsigned __int64)&v63[v64];
    v75 = v63 + 8;
    if ( (unsigned __int8)((*v63 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v75 > v14 )
        goto LABEL_232;
      v66 = v63[2];
      v65 = v63[1] & 0xF;
      v67 = v63[3];
    }
    else
    {
      if ( (unsigned __int64)v75 > v14 )
        goto LABEL_232;
      v65 = v63[2] & 0xF;
      v76 = v64;
      if ( (unsigned int)(unsigned __int8)v63[7] + 8 <= v64 )
        v76 = (unsigned __int8)v63[7] + 8;
      v14 = (unsigned __int64)(v63 + 13);
      v77 = (unsigned __int64)&v63[v76];
      if ( (unsigned __int64)(v63 + 13) <= v77 )
        v66 = v63[12];
      if ( (unsigned __int64)(v63 + 14) <= v77 )
        v67 = *(_BYTE *)v14;
    }
    v74 = 1;
LABEL_232:
    if ( v74 )
    {
      LOBYTE(v3) = v66;
      v78 = v67;
LABEL_235:
      LOBYTE(v84) = v78;
      LOBYTE(v83) = v3;
      LOBYTE(v82) = v65;
      LOBYTE(v81) = v62;
      LOBYTE(v80) = *(_BYTE *)(v61 + 3);
      LODWORD(v79) = v7->IoStatus.Status;
      sub_140052E64(v14, v61, &v94, v7, v79, v80, v81, v82, v83, v84, v7);
      goto LABEL_239;
    }
LABEL_234:
    v65 = 0;
    v78 = 0;
    goto LABEL_235;
  }
LABEL_239:
  IofCompleteRequest(Irp, 1);
}
