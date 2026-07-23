/*
 * XREFs of PsspCaptureVaSpaceInformation2 @ 0x1800B3E84
 * Callers:
 *     PsspCaptureVaSpaceInformation @ 0x1800B3D74 (PsspCaptureVaSpaceInformation.c)
 * Callees:
 *     PsspCaptureImageInformation @ 0x1800B443C (PsspCaptureImageInformation.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspCaptureVaSpaceInformation2(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        __int64 a4,
        __int16 a5)
{
  int (__fastcall *v5)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned __int64 v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned __int64 v9; // rbx
  char v10; // r13
  int v11; // esi
  unsigned __int64 v13; // rcx
  int v14; // edx
  unsigned __int64 v15; // rcx
  NTSTATUS result; // eax
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // edx
  NTSTATUS v20; // edi
  unsigned int v21; // r12d
  __int64 v22; // r14
  _OWORD *v23; // rdi
  int v24; // esi
  unsigned int v25; // r15d
  unsigned int v26; // ecx
  _WORD *v27; // r12
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned __int16 *v31; // rsi
  __int16 v32; // ax
  int v33; // eax
  size_t v34; // r8
  unsigned __int16 v35; // r14
  __int64 v36; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v37; // [rsp+60h] [rbp-69h]
  int v38; // [rsp+64h] [rbp-65h]
  int v39; // [rsp+68h] [rbp-61h]
  HANDLE SectionHandle; // [rsp+70h] [rbp-59h] BYREF
  __int128 v41; // [rsp+78h] [rbp-51h] BYREF
  __int128 v42; // [rsp+88h] [rbp-41h]
  __int128 v43; // [rsp+98h] [rbp-31h]
  PVOID BaseAddress; // [rsp+A8h] [rbp-21h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+B0h] [rbp-19h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp-11h] BYREF
  _OWORD v47[5]; // [rsp+C0h] [rbp-9h] BYREF

  v5 = (int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a3;
  v36 = 0LL;
  v6 = 0LL;
  SectionHandle = 0LL;
  v7 = 0;
  MaximumSize.QuadPart = 0LL;
  v8 = 0;
  BaseAddress = 0LL;
  LODWORD(v9) = 0;
  ViewSize = 0LL;
  v10 = 0;
  v11 = a5 & 0x1000;
  v47[0] = 0LL;
  while ( 1 )
  {
    v39 = v11;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    if ( v5(a4, v6, 0LL, &v41, 48LL, 0LL) < 0 )
      break;
    v13 = v41;
    if ( (_QWORD)v41 != v6 )
      return -1073741503;
    if ( DWORD2(v43) == 0x1000000 || (v14 = 0, DWORD2(v43) == 0x40000) )
      v14 = 1;
    v8 += v14;
    v11 = a5 & 0x1000;
    if ( (a5 & 0x1000) != 0 && !v10 && (DWORD2(v43) == 0x1000000 || DWORD2(v43) == 0x40000) )
    {
      v36 = 0LL;
      v47[0] = 0LL;
      v17 = a3(a4, v6, 2LL, v47, 16LL, &v36);
      if ( v17 >= 0 || v17 == -2147483643 || v17 == -1073741820 || v17 == -1073741789 )
      {
        v18 = v36;
        if ( HIDWORD(v36) )
        {
          v18 = 0;
          v36 = 0LL;
        }
      }
      else
      {
        v18 = v36;
      }
      if ( v18 > 0x10 && (v17 >= 0 || v17 == -2147483643 || v17 == -1073741820 || v17 == -1073741789) )
        v19 = (v18 - 5) & 0xFFFFFFF8;
      else
        v19 = 8;
      v13 = v41;
      if ( v19 + (unsigned int)v9 < (unsigned int)v9 )
      {
        LODWORD(v9) = -1;
        v10 = 1;
      }
      else
      {
        LODWORD(v9) = v19 + v9;
      }
    }
    ++v7;
    v6 = v13 + *((_QWORD *)&v42 + 1);
    if ( v13 + *((_QWORD *)&v42 + 1) < v13 )
    {
      v11 = v39;
      break;
    }
    v5 = (int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a3;
  }
  v15 = 72LL * v7;
  if ( v15 > 0xFFFFFFFF )
    return -1073741675;
  if ( v10 )
  {
    v9 = 8LL * v8;
    if ( v9 > 0xFFFFFFFF )
      return -1073741675;
  }
  else if ( v11 )
  {
    if ( (int)v9 + 16 < (unsigned int)v9 )
      return -1073741675;
    LODWORD(v9) = v9 + 16;
  }
  if ( (_DWORD)v9 )
  {
    if ( (int)v9 + (int)v15 < (unsigned int)v15 )
      return -1073741675;
    LODWORD(v15) = v9 + v15;
  }
  MaximumSize.QuadPart = (unsigned int)v15;
  result = NtCreateSection(
             &SectionHandle,
             0xF0007u,
             (POBJECT_ATTRIBUTES)&stru_18017A400,
             &MaximumSize,
             4u,
             0x8000000u,
             0LL);
  if ( result >= 0 )
  {
    v20 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            0LL,
            0LL,
            &ViewSize,
            ViewShare,
            0,
            4u);
    if ( v20 < 0 )
    {
      NtClose(SectionHandle);
      return v20;
    }
    v21 = ViewSize;
    v22 = 0LL;
    v23 = BaseAddress;
    v24 = 0;
    v37 = ViewSize;
    v25 = 0;
    v38 = 0;
    while ( 1 )
    {
      if ( v25 + 72 < v25
        || v25 + 72 > v21
        || (v41 = 0LL, v42 = 0LL, v43 = 0LL, (int)a3(a4, v22, 0LL, &v41, 48LL, 0LL) < 0) )
      {
LABEL_26:
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        *(_QWORD *)(a1 + 920) = SectionHandle;
        *(_DWORD *)(a1 + 912) = v24;
        *(_DWORD *)(a1 + 916) = v25;
        *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
        return 0;
      }
      if ( (_QWORD)v41 != v22 )
        return -1073741503;
      memset_thunk_772440563353939046(v23, 0, 0x48uLL);
      v26 = 72;
      *v23 = v41;
      *((_DWORD *)v23 + 4) = v42;
      *((_QWORD *)v23 + 3) = *((_QWORD *)&v42 + 1);
      *((_QWORD *)v23 + 4) = v43;
      *((_DWORD *)v23 + 10) = DWORD2(v43);
      if ( v39 )
        break;
LABEL_58:
      ++v24;
      v22 = v41 + *((_QWORD *)&v42 + 1);
      v25 += v26;
      v23 = (_OWORD *)((char *)v23 + v26);
      v38 = v24;
      if ( (_QWORD)v41 + *((_QWORD *)&v42 + 1) < (unsigned __int64)v41 )
        goto LABEL_26;
    }
    if ( DWORD2(v43) == 0x1000000 )
    {
      PsspCaptureImageInformation(v23 + 3, a2, *((_QWORD *)&v41 + 1));
    }
    else if ( DWORD2(v43) != 0x40000 )
    {
      goto LABEL_58;
    }
    if ( v25 + 76 < v25 || v25 + 76 > v21 )
      goto LABEL_26;
    if ( !v10 )
    {
      v28 = v25 + 92;
      if ( v25 + 92 >= v25 + 76 && v28 <= v21 )
      {
        v27 = (_WORD *)v23 + 36;
        v29 = v37 - v28;
        *((_WORD *)v23 + 36) = 0;
        v30 = v9;
        if ( v29 < (unsigned int)v9 )
          v30 = v29;
        v31 = (unsigned __int16 *)v23 + 36;
        v32 = -1;
        if ( v30 < 0xFFFF )
          v32 = v30;
        *((_WORD *)v23 + 37) = v32;
        *((_QWORD *)v23 + 10) = (char *)v23 + 88;
        v36 = 0LL;
        v33 = a3(a4, v22, 2LL, (char *)v23 + 72, v30, &v36);
        if ( (v33 >= 0 || v33 == -1073741820 || v33 == -1073741789 || v33 == -2147483643) && HIDWORD(v36) )
        {
          v31 = 0LL;
          v33 = -1073741675;
        }
        v10 = 0;
        if ( v33 >= 0 )
        {
          v34 = *v31;
          if ( v34 + 2 > 0xFFFF )
          {
            v35 = 0;
          }
          else
          {
            v35 = v34 + 2;
            memmove(v31 + 1, *((const void **)v31 + 1), v34);
            *(unsigned __int16 *)((char *)v31 + *v31 + 2) = 0;
          }
          *v31 = v35;
          v10 = 0;
          v24 = v38;
          LODWORD(v9) = v9 - ((v35 + 9) & 0xFFFFFFF8);
          v26 = (v35 + 81) & 0xFFFFFFF8;
          goto LABEL_57;
        }
        v24 = v38;
LABEL_56:
        *v27 = 0;
        LODWORD(v9) = v9 - 2;
        v26 = 80;
LABEL_57:
        v21 = v37;
        goto LABEL_58;
      }
      v10 = 1;
    }
    v27 = (_WORD *)v23 + 36;
    goto LABEL_56;
  }
  return result;
}
