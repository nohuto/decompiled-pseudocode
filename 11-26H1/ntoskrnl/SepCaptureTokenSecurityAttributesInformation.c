/*
 * XREFs of SepCaptureTokenSecurityAttributesInformation @ 0x140AF2E38
 * Callers:
 *     NtCreateTokenEx @ 0x1409E2210 (NtCreateTokenEx.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140AF2C7C (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     SepCaptureFqbnArray @ 0x1408195A0 (SepCaptureFqbnArray.c)
 *     SepCaptureInt64Array @ 0x140819768 (SepCaptureInt64Array.c)
 *     SepCaptureOctetStringArray @ 0x140819830 (SepCaptureOctetStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SepCaptureUnicodeStringArray @ 0x140925834 (SepCaptureUnicodeStringArray.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesInformation(
        __int64 a1,
        unsigned int *a2,
        int a3,
        char a4,
        char a5,
        _QWORD *a6)
{
  PVOID *v7; // rsi
  signed int v8; // edi
  void *v9; // r12
  __int64 v10; // r13
  _OWORD *Pool2; // rax
  _OWORD *v13; // r14
  int ULongFromUser; // eax
  int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax
  size_t v18; // r15
  PVOID *v19; // rax
  void *v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // r15d
  void *v23; // rax
  PVOID v24; // rdx
  unsigned int v25; // r13d
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // r13d
  unsigned __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  PVOID *v32; // r15
  __int64 v33; // r13
  PVOID *v34; // r15
  char v35; // [rsp+30h] [rbp-88h]
  unsigned int v36; // [rsp+38h] [rbp-80h]
  PVOID P; // [rsp+40h] [rbp-78h] BYREF
  int i; // [rsp+48h] [rbp-70h]
  unsigned int v39; // [rsp+4Ch] [rbp-6Ch]
  void *v40; // [rsp+50h] [rbp-68h]
  unsigned __int64 v41; // [rsp+58h] [rbp-60h]
  int v42; // [rsp+60h] [rbp-58h]
  PVOID *v43; // [rsp+68h] [rbp-50h]
  __int64 v44; // [rsp+70h] [rbp-48h]
  __int64 v45; // [rsp+78h] [rbp-40h]
  int v49; // [rsp+D8h] [rbp+20h]

  v7 = 0LL;
  v43 = 0LL;
  v39 = 0;
  v42 = 0;
  v35 = 0;
  v8 = 0;
  v9 = 0LL;
  v40 = 0LL;
  v10 = 0LL;
  v36 = 0;
  P = 0LL;
  if ( !a4 )
    return 3221225659LL;
  Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
  v13 = Pool2;
  v41 = (unsigned __int64)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 0LL;
  if ( a4 != 1 )
    goto LABEL_75;
  if ( !a2 || (ULongFromUser = RtlReadULongFromUser(a2), v42 = ULongFromUser, !a3) || ULongFromUser == 1 )
    v35 = 1;
  *(_WORD *)v13 = RtlReadUShortFromUser((unsigned __int16 *)a1);
  *((_WORD *)v13 + 1) = RtlReadUShortFromUser((unsigned __int16 *)(a1 + 2));
  v15 = RtlReadULongFromUser((unsigned int *)(a1 + 4));
  *((_DWORD *)v13 + 1) = v15;
  if ( !v15 )
  {
    *a6 = v13;
    return 0LL;
  }
  *((_QWORD *)v13 + 1) = RtlReadULong64FromUser((volatile void *)(a1 + 8));
  v16 = 40LL * *((unsigned int *)v13 + 1);
  v44 = v16;
  v17 = -1;
  if ( v16 <= 0xFFFFFFFF )
    v17 = v16;
  v8 = v16 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v16 > 0xFFFFFFFF )
  {
    ExFreePoolWithTag(v13, 0);
    return (unsigned int)v8;
  }
  v18 = v17;
  v19 = (PVOID *)ExAllocatePool2(0x100uLL);
  v7 = v19;
  v43 = v19;
  if ( !v19 )
  {
    ExFreePoolWithTag(v13, 0);
    return 3221225626LL;
  }
  v20 = (void *)*((_QWORD *)v13 + 1);
  if ( v18 && ((unsigned __int8)v20 & 3) != 0 )
LABEL_28:
    ExRaiseDatatypeMisalignment();
  RtlCopyFromUser(v19, v20, v18);
  v22 = 0;
  for ( i = 0; ; i = v22 )
  {
    v9 = 0LL;
    v40 = 0LL;
    if ( v22 >= *((_DWORD *)v13 + 1) )
      break;
    if ( !LOWORD(v7[5 * v22]) )
    {
      v8 = -1073741811;
      v40 = 0LL;
      goto LABEL_58;
    }
    v23 = (void *)ExAllocatePool2(0x100uLL);
    v9 = v23;
    v40 = v23;
    if ( !v23 )
    {
      v8 = -1073741670;
      goto LABEL_58;
    }
    v24 = v7[5 * v22 + 1];
    if ( LOWORD(v7[5 * v22]) && ((unsigned __int8)v24 & 1) != 0 )
      goto LABEL_28;
    RtlCopyFromUser(v23, v24, LOWORD(v7[5 * v22]));
    v7[5 * v22 + 1] = v9;
    ++v39;
    v40 = 0LL;
    ++v22;
  }
  v25 = 0;
  i = 0;
  while ( v25 < *((_DWORD *)v13 + 1) )
  {
    v26 = (unsigned int)v7[5 * v25 + 3];
    if ( v26 )
    {
      switch ( LOWORD(v7[5 * v25 + 2]) )
      {
        case 1:
        case 2:
          goto LABEL_48;
        case 3:
          LOBYTE(v21) = 1;
          v27 = SepCaptureUnicodeStringArray((__int64)v7[5 * v25 + 4], v26, v21, &P);
          break;
        case 4:
          v27 = SepCaptureFqbnArray(v7[5 * v25 + 4], v26, v21, &P);
          break;
        case 5:
          goto LABEL_44;
        case 6:
LABEL_48:
          v27 = SepCaptureInt64Array(v7[5 * v25 + 4], v26, v21, &P);
          break;
        case 0x10:
LABEL_44:
          v8 = SepCaptureOctetStringArray(v7[5 * v25 + 4], v26, v21, &P);
          if ( v8 >= 0 )
            v7[5 * v25 + 4] = P;
          goto LABEL_51;
        default:
          v8 = -1073741637;
LABEL_51:
          if ( v8 < 0 )
            goto LABEL_58;
          ++v36;
          P = 0LL;
          goto LABEL_53;
      }
      v8 = v27;
      if ( v27 >= 0 )
        v7[5 * v25 + 4] = P;
      goto LABEL_51;
    }
    if ( !a5 )
    {
      v8 = -1073741811;
      goto LABEL_58;
    }
    v7[5 * v25 + 4] = 0LL;
    ++v36;
LABEL_53:
    i = ++v25;
  }
  if ( v8 >= 0 )
  {
    *((_QWORD *)v13 + 1) = v7;
    if ( !v35 && a3 != *((_DWORD *)v13 + 1) )
      v8 = -1073741811;
  }
LABEL_58:
  if ( v8 >= 0 )
  {
    v28 = 0;
    if ( *((_DWORD *)v13 + 1) )
    {
      do
      {
        v29 = v28;
        v41 = v28;
        if ( v35 )
        {
          v30 = 2;
        }
        else
        {
          v30 = RtlReadULongFromUser(&a2[v28]);
          v29 = v41;
        }
        v42 = v30;
        if ( ((v30 - 2) & 0xFFFFFFFD) == 0 )
        {
          v31 = 0LL;
          while ( 1 )
          {
            v49 = v31;
            if ( (unsigned int)v31 >= 4 )
              break;
            v44 = 3 * v31;
            v45 = 5 * v29;
            if ( !RtlCompareUnicodeStrings(
                    (PCWCH)v7[5 * v29 + 1],
                    (unsigned __int64)LOWORD(v7[5 * v29]) >> 1,
                    (PCWCH)SepValidAttributesTypes[3 * v31 + 1],
                    (unsigned __int64)LOWORD(SepValidAttributesTypes[3 * v31]) >> 1,
                    1u) )
            {
              if ( LOWORD(v7[v45 + 2]) != LODWORD(SepValidAttributesTypes[v44 + 2]) )
                v8 = -1073741811;
              if ( LODWORD(v7[v45 + 3]) < HIDWORD(SepValidAttributesTypes[v44 + 2]) )
                v8 = -1073741811;
              break;
            }
            v31 = (unsigned int)(v49 + 1);
            v29 = v41;
          }
        }
        ++v28;
      }
      while ( v28 < *((_DWORD *)v13 + 1) );
      v9 = v40;
    }
  }
  v10 = v36;
LABEL_75:
  if ( v8 >= 0 )
  {
    *a6 = v13;
  }
  else
  {
    if ( v7 )
    {
      if ( v39 )
      {
        v32 = v7 + 1;
        v33 = v39;
        do
        {
          ExFreePoolWithTag(*v32, 0);
          v32 += 5;
          --v33;
        }
        while ( v33 );
        v10 = v36;
      }
      if ( (_DWORD)v10 )
      {
        v34 = v7 + 4;
        do
        {
          if ( *v34 )
            ExFreePoolWithTag(*v34, 0);
          v34 += 5;
          --v10;
        }
        while ( v10 );
      }
      ExFreePoolWithTag(v7, 0);
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)v8;
}
