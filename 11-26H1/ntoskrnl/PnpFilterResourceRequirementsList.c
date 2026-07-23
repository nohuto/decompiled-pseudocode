/*
 * XREFs of PnpFilterResourceRequirementsList @ 0x140A9FCB4
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA0544 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopQueryDeviceResources @ 0x140AA0860 (IopQueryDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1404CE0F0 (RtlCmDecodeMemIoResource.c)
 *     RtlIoDecodeMemIoResource @ 0x1404F41D0 (RtlIoDecodeMemIoResource.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpCmResourcesToIoResources @ 0x140AA0FBC (PnpCmResourcesToIoResources.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpFilterResourceRequirementsList(_DWORD *Src, unsigned int *a2, int **a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // r12
  int v8; // r13d
  _DWORD *Pool2; // rax
  _DWORD *v10; // r15
  unsigned int *v11; // rdi
  __int64 v12; // r11
  unsigned __int8 *v13; // rcx
  unsigned int v14; // eax
  __int64 i; // r10
  unsigned int v16; // r9d
  _DWORD *v17; // r14
  int v18; // r9d
  int v19; // r10d
  _DWORD *v20; // rdx
  _DWORD *v21; // r8
  int v22; // edx
  __int64 v23; // r11
  struct _IO_RESOURCE_DESCRIPTOR *v24; // r9
  unsigned __int64 v25; // r8
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v26; // rax
  int v27; // r10d
  unsigned int v28; // ecx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // r13
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v30; // r15
  unsigned __int64 j; // rdi
  int Type; // edx
  UCHAR ShareDisposition; // r10
  ULONGLONG Vector; // r12
  UCHAR v35; // al
  ULONGLONG v36; // r9
  ULONGLONG v37; // r8
  UCHAR v38; // r11
  ULONGLONG v39; // rax
  ULONGLONG v40; // r13
  ULONGLONG v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  bool v44; // zf
  UCHAR v45; // cl
  struct _IO_RESOURCE_DESCRIPTOR *m; // rdi
  __int64 LowPart; // rax
  int v48; // ecx
  int v49; // eax
  int v50; // edi
  int *v51; // rax
  int *v52; // rdx
  int v54; // ecx
  __int64 v55; // rax
  struct _IO_RESOURCE_DESCRIPTOR *n; // rax
  struct _IO_RESOURCE_DESCRIPTOR *k; // rax
  unsigned int v58; // eax
  _DWORD *v59; // r10
  int v60; // edi
  _DWORD *ii; // r11
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // r9
  _DWORD *v64; // rcx
  _DWORD *v65; // r10
  int v66; // [rsp+2Ch] [rbp-75h]
  int v67; // [rsp+30h] [rbp-71h]
  int v68; // [rsp+34h] [rbp-6Dh]
  int v69; // [rsp+38h] [rbp-69h]
  __int16 v70; // [rsp+3Ch] [rbp-65h]
  ULONG v71; // [rsp+40h] [rbp-61h]
  unsigned int v72; // [rsp+44h] [rbp-5Dh]
  int v73; // [rsp+48h] [rbp-59h]
  int v74; // [rsp+4Ch] [rbp-55h]
  __int64 v75; // [rsp+50h] [rbp-51h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v76; // [rsp+58h] [rbp-49h]
  UCHAR v77; // [rsp+60h] [rbp-41h]
  int v78; // [rsp+64h] [rbp-3Dh]
  unsigned __int64 v79; // [rsp+70h] [rbp-31h]
  ULONGLONG Start; // [rsp+78h] [rbp-29h] BYREF
  ULONGLONG MinimumAddress; // [rsp+80h] [rbp-21h] BYREF
  ULONGLONG MaximumAddress; // [rsp+88h] [rbp-19h] BYREF
  ULONGLONG Alignment; // [rsp+90h] [rbp-11h] BYREF
  _DWORD *v84; // [rsp+98h] [rbp-9h]
  _DWORD *v85; // [rsp+A0h] [rbp-1h]
  __int64 v86; // [rsp+A8h] [rbp+7h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v87; // [rsp+108h] [rbp+67h]
  UCHAR v88; // [rsp+108h] [rbp+67h]

  v4 = 0;
  v84 = 0LL;
  v6 = a2;
  v66 = 0;
  *a3 = 0LL;
  v8 = 0;
  *a4 = 0;
  if ( !Src || !Src[7] )
  {
    if ( a2 && *a2 )
      *a3 = (int *)PnpCmResourcesToIoResources(Src, a2, 1LL);
    return 0LL;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v85 = Pool2;
  v10 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Src, (unsigned int)*Src);
    if ( !v6 || !*v6 )
      goto LABEL_132;
    v11 = v6 + 1;
    v12 = *v6;
    v13 = (unsigned __int8 *)(v6 + 1);
    do
    {
      v14 = *((_DWORD *)v13 + 3);
      v13 += 16;
      v8 += v14;
      if ( v14 )
      {
        for ( i = v14; i; --i )
        {
          v16 = 0;
          if ( *v13 == 5 )
          {
            v16 = *((_DWORD *)v13 + 1);
          }
          else if ( (unsigned int)*v13 - 128 >= 2 && (unsigned __int8)(*v13 - 1) <= 6u )
          {
            goto LABEL_12;
          }
          --v8;
LABEL_12:
          v13 += v16 + 20;
        }
      }
      --v12;
    }
    while ( v12 );
    v68 = v8;
    if ( v8 )
    {
      v17 = v10 + 8;
      v18 = v10[7] - 1;
      v74 = 0;
      v19 = 0;
      v20 = v10 + 8;
      if ( v18 >= 0 )
      {
        do
        {
          v21 = v20 + 2;
          v20 += 8 * (unsigned int)v20[1] + 2;
          while ( v21 < v20 )
          {
            v44 = *((_BYTE *)v21 + 1) == 0;
            v54 = v19 + 1;
            *((_BYTE *)v21 + 3) = 0;
            if ( !v44 )
              v54 = v19;
            v21 += 8;
            v19 = v54;
          }
          --v18;
        }
        while ( v18 >= 0 );
        v74 = v19;
      }
      v78 = v10[7];
      v22 = v78 - 1;
      v73 = v78 - 1;
      if ( v78 - 1 >= 0 )
      {
        while ( 1 )
        {
          v70 = *(_WORD *)v17;
          if ( *(_WORD *)v17 == 0xFFFF )
            v70 = 1;
          v23 = (unsigned int)v17[1];
          v24 = (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
          *(_WORD *)v17 = 0;
          v25 = (unsigned __int64)&v17[8 * v23 + 2];
          v86 = v23;
          v79 = v25;
          if ( v17 + 2 == (_DWORD *)v25 )
          {
            *(_WORD *)v17 = -1;
            --v10[7];
            goto LABEL_70;
          }
          v26 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v11;
          v27 = 1;
          v28 = 0;
          v87 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v11;
          v67 = 1;
          v72 = 0;
          if ( !*v6 )
            goto LABEL_64;
          do
          {
            v29 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v26->u.Memory48 + 1);
            v71 = 0;
            v76 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v26->u.Memory48 + 1);
            if ( !v26->u.Generic.Length )
              goto LABEL_62;
            v30 = v87;
            do
            {
              if ( v29->Type == 5 )
              {
                LowPart = v29->u.Generic.Start.LowPart;
                goto LABEL_60;
              }
              if ( v29->Type == 129 || (unsigned __int8)(v29->Type - 1) > 6u )
                goto LABEL_59;
              v69 = 0;
              while ( 2 )
              {
                for ( j = (unsigned __int64)v24; ; j += v55 )
                {
                  if ( j >= v25 )
                  {
                    v24 = (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
                    goto LABEL_101;
                  }
                  Type = v29->Type;
                  if ( *(_BYTE *)(j + 1) != (_BYTE)Type || *(_BYTE *)(j + 3) )
                  {
                    v55 = j;
                    j = 32LL;
                    continue;
                  }
                  ShareDisposition = v29->ShareDisposition;
                  Vector = 0LL;
                  v35 = *(_BYTE *)(j + 2);
                  v36 = 0LL;
                  Start = 0LL;
                  v37 = 0LL;
                  MinimumAddress = 0LL;
                  MaximumAddress = 0LL;
                  v75 = 1LL;
                  v88 = ShareDisposition;
                  if ( !ShareDisposition || ShareDisposition > 3u )
                  {
                    ShareDisposition = v35;
                    v88 = v35;
                  }
                  Alignment = 1LL;
                  v38 = v35;
                  if ( (unsigned __int8)(v35 - 1) > 2u )
                    v38 = ShareDisposition;
                  v77 = v38;
                  switch ( Type )
                  {
                    case 1:
                      goto LABEL_45;
                    case 2:
                      Vector = v29->u.Interrupt.Vector;
LABEL_110:
                      v36 = *(unsigned int *)(j + 8);
                      v40 = Vector;
                      v37 = *(unsigned int *)(j + 12);
                      goto LABEL_111;
                    case 3:
                      goto LABEL_45;
                    case 4:
                      Vector = v29->u.Generic.Start.LowPart;
                      goto LABEL_110;
                  }
                  if ( Type != 6 )
                  {
                    if ( Type == 7 )
                    {
LABEL_45:
                      v39 = RtlCmDecodeMemIoResource(v29, &Start);
                      Vector = Start;
                      v75 = v39;
                      v40 = v39 + Start - 1;
                      v41 = RtlIoDecodeMemIoResource(
                              (PIO_RESOURCE_DESCRIPTOR)j,
                              &Alignment,
                              &MinimumAddress,
                              &MaximumAddress);
                      v36 = MinimumAddress;
                      v42 = v41;
                      v37 = MaximumAddress;
                      ShareDisposition = v88;
                      v38 = v77;
LABEL_46:
                      v43 = v75;
                      goto LABEL_47;
                    }
                    v40 = 0LL;
LABEL_111:
                    v42 = 1LL;
                    goto LABEL_46;
                  }
                  Vector = v29->u.Generic.Start.LowPart;
                  v43 = v29->u.Interrupt.Vector;
                  v36 = *(unsigned int *)(j + 12);
                  v37 = *(unsigned int *)(j + 16);
                  v42 = *(unsigned int *)(j + 8);
                  v40 = (unsigned int)(v43 + Vector - 1);
LABEL_47:
                  if ( !v69 )
                  {
                    if ( ShareDisposition == v38 && v36 == Vector && v37 >= v40 && v42 >= v43 )
                    {
                      v27 = v67;
                      if ( v37 != v40 )
                        v27 = 0;
                      ++*(_WORD *)v17;
                      v44 = (*(_BYTE *)j & 8) == 0;
                      v67 = v27;
                      *(_BYTE *)(j + 3) = 0x80;
                      if ( !v44 )
                      {
                        for ( k = (struct _IO_RESOURCE_DESCRIPTOR *)(j - 32);
                              k >= (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
                              --k )
                        {
                          k->Type = 0;
                          --v17[1];
                          if ( k->Option != 8 )
                            break;
                        }
                      }
                      v29 = v76;
                      v45 = *(_BYTE *)(j + 1);
                      *(_BYTE *)j = 1;
                      *(_WORD *)(j + 4) = v76->Flags;
                      if ( v45 == 1 || ((v45 - 3) & 0xFB) == 0 )
                      {
                        *(_QWORD *)(j + 16) = Vector;
                        *(_DWORD *)(j + 12) = 1;
                        *(_QWORD *)(j + 24) = v42 + Vector - 1;
                      }
                      else if ( v45 == 6 )
                      {
                        *(_DWORD *)(j + 12) = Vector;
                        *(_DWORD *)(j + 16) = v42 + Vector - 1;
                      }
                      v25 = v79;
                      for ( m = (struct _IO_RESOURCE_DESCRIPTOR *)(j + 32);
                            (unsigned __int64)m < v79 && (m->Option & 8) != 0;
                            ++m )
                      {
                        m->Type = 0;
                        --v17[1];
                      }
                      goto LABEL_59;
                    }
                    goto LABEL_82;
                  }
                  v67 = 0;
                  if ( ShareDisposition == v38
                    && v36 <= Vector
                    && v37 >= v40
                    && v42 >= v43
                    && ((Alignment - 1) & Vector) == 0 )
                  {
                    break;
                  }
LABEL_82:
                  v29 = v76;
                  v55 = 32LL;
                  v25 = v79;
                }
                switch ( v76->Type )
                {
                  case 1u:
                    goto LABEL_116;
                  case 2u:
                    goto LABEL_115;
                  case 3u:
                    goto LABEL_116;
                  case 4u:
LABEL_115:
                    *(_DWORD *)(j + 8) = Vector;
                    *(_DWORD *)(j + 12) = v40;
                    break;
                  case 6u:
                    *(_DWORD *)(j + 12) = Vector;
                    *(_DWORD *)(j + 16) = v42 + Vector - 1;
                    break;
                  case 7u:
LABEL_116:
                    *(_QWORD *)(j + 16) = Vector;
                    *(_QWORD *)(j + 24) = v42 + Vector - 1;
                    break;
                }
                ++*(_WORD *)v17;
                v24 = (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
                v44 = (*(_BYTE *)j & 8) == 0;
                v29 = v76;
                *(_BYTE *)(j + 3) = 0x80;
                *(_WORD *)(j + 4) = v76->Flags;
                if ( !v44 )
                {
                  for ( n = (struct _IO_RESOURCE_DESCRIPTOR *)(j - 32); n >= v24; --n )
                  {
                    n->Type = 0;
                    --v17[1];
                    if ( n->Option != 8 )
                      break;
                  }
                }
                v25 = v79;
                *(_BYTE *)j = 1;
                while ( 1 )
                {
                  j += 32LL;
                  if ( j >= v79 || (*(_BYTE *)j & 8) == 0 )
                    break;
                  *(_BYTE *)(j + 1) = 0;
                  --v17[1];
                }
LABEL_101:
                if ( (unsigned int)++v69 < 2 )
                  continue;
                break;
              }
              v27 = v67;
LABEL_59:
              LowPart = 0LL;
LABEL_60:
              v24 = (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
              v29 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v29 + LowPart + 20);
              v76 = v29;
              ++v71;
            }
            while ( v71 < v30->u.Generic.Length );
            v6 = a2;
            v24 = (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
            v28 = v72;
LABEL_62:
            ++v28;
            v26 = v29;
            v87 = v29;
            v72 = v28;
          }
          while ( v28 < *v6 );
          v10 = v85;
          v11 = v6 + 1;
          v8 = v68;
          v22 = v73;
          LODWORD(v23) = v86;
LABEL_64:
          if ( *(_WORD *)v17 != (_WORD)v8 )
            goto LABEL_129;
          v48 = v17[1];
          if ( v48 != v8 && (v48 != v8 + 1 || *((_BYTE *)v17 + 9) != 0x80) )
          {
            v66 += v48;
            *(_WORD *)v17 = v70;
            goto LABEL_69;
          }
          if ( v84 )
          {
LABEL_129:
            *(_WORD *)v17 = -1;
            --v10[7];
            goto LABEL_69;
          }
          v66 += v48;
          v84 = v17;
          *(_WORD *)v17 = v70;
          if ( v27 )
            *a4 = 1;
LABEL_69:
          v17[1] = v23;
          v17 = (_DWORD *)v25;
LABEL_70:
          v73 = --v22;
          if ( v22 < 0 )
          {
            v19 = v74;
            break;
          }
        }
      }
      v49 = v10[7];
      if ( !v49 )
      {
        *a3 = (int *)PnpCmResourcesToIoResources(0xFFFFLL, v6, 1LL);
        goto LABEL_75;
      }
      v50 = 32 * (v66 - v19) + 8 * (v49 - 1 + 4 * (v49 - 1) + 9);
      v51 = (int *)ExAllocatePool2(0x100uLL);
      v52 = v51;
      if ( !v51 )
      {
        v4 = -1073741670;
LABEL_75:
        ExFreePoolWithTag(v10, 0);
        return v4;
      }
      *v51 = v50;
      v51[1] = v6[1];
      v51[2] = v6[2];
      v51[3] = v10[3];
      v58 = v10[7];
      if ( v58 > 1 )
        *a4 = 0;
      v59 = v10 + 8;
      v60 = v78 - 1;
      v52[7] = v58;
      for ( ii = v52 + 8; v60 >= 0; v59 = (_DWORD *)v63 )
      {
        v62 = (unsigned __int64)(v59 + 2);
        v63 = (unsigned __int64)&v59[8 * v59[1] + 2];
        if ( *(_WORD *)v59 != 0xFFFF )
        {
          *(_WORD *)ii = *(_WORD *)v59;
          v64 = ii + 2;
          *((_WORD *)ii + 1) = *((_WORD *)v59 + 1);
          v44 = *((_BYTE *)v59 + 9) == 0x80;
          v65 = ii + 2;
          if ( v44 )
          {
            *v52 -= 32;
          }
          else
          {
            *(_WORD *)v64 = -32767;
            *(_DWORD *)((char *)ii + 10) = 3;
            *((_WORD *)ii + 7) = 0;
            ii[4] = 1;
            v64 = ii + 10;
          }
          while ( v62 < v63 )
          {
            if ( *(_BYTE *)(v62 + 1) )
            {
              *(_OWORD *)v64 = *(_OWORD *)v62;
              *((_OWORD *)v64 + 1) = *(_OWORD *)(v62 + 16);
              v64 += 8;
            }
            v62 += 32LL;
          }
          ii[1] = ((char *)v64 - (char *)ii - 8) >> 5;
          ii = v64;
          v65[2] = 1;
        }
        --v60;
      }
      *a3 = v52;
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
LABEL_132:
      *a3 = v10;
    }
    return 0LL;
  }
  return 3221225626LL;
}
