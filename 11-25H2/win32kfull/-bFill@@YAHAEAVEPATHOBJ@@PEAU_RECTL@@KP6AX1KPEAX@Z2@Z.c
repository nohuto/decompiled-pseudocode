/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1400FBDA4
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1400FBBE4 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DEA60 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        char a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void *a5)
{
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE *v12; // r14
  int v13; // eax
  unsigned int v14; // r15d
  __int128 *v15; // r9
  unsigned int v16; // edi
  unsigned int v17; // esi
  _QWORD *v18; // r8
  _QWORD *v19; // rdi
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  __int64 v25; // rcx
  unsigned int v26; // edi
  unsigned int i; // r14d
  unsigned int v28; // ecx
  __int64 v29; // r15
  unsigned int j; // r14d
  __int64 v31; // r15
  unsigned int v32; // [rsp+20h] [rbp-788h]
  int *v33; // [rsp+28h] [rbp-780h]
  int v34; // [rsp+50h] [rbp-758h]
  __int128 v35; // [rsp+60h] [rbp-748h]
  _QWORD *v36; // [rsp+70h] [rbp-738h] BYREF
  int v37; // [rsp+7Ch] [rbp-72Ch]
  int v38; // [rsp+80h] [rbp-728h]
  _QWORD v39[8]; // [rsp+B0h] [rbp-6F8h] BYREF
  _BYTE *v40; // [rsp+F0h] [rbp-6B8h] BYREF
  int v41; // [rsp+F8h] [rbp-6B0h]
  int v42; // [rsp+FCh] [rbp-6ACh]
  _QWORD *v43; // [rsp+100h] [rbp-6A8h] BYREF
  int v44; // [rsp+108h] [rbp-6A0h]
  int v45; // [rsp+10Ch] [rbp-69Ch]
  __int128 v46; // [rsp+110h] [rbp-698h] BYREF
  _BYTE v47[320]; // [rsp+120h] [rbp-688h] BYREF
  _BYTE v48[1280]; // [rsp+260h] [rbp-548h] BYREF

  memset_0(&v36, 0, 0x40uLL);
  memset_0(v39, 0, sizeof(v39));
  if ( (a3 & 1) != 0 )
  {
    v9 = (char *)a1 + 48;
    v25 = *((_QWORD *)a1 + 6);
    if ( v25 )
    {
      if ( !a2 )
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v25, *((unsigned int *)a1 + 14), a5);
        return 1LL;
      }
      v26 = 0;
      for ( i = 0; ; ++i )
      {
        v28 = *((_DWORD *)a1 + 14);
        if ( i >= v28 )
          break;
        v29 = *(_QWORD *)v9;
        v43 = *(_QWORD **)(*(_QWORD *)v9 + 16LL * i);
        v44 = *(_DWORD *)(v29 + 16LL * i + 8);
        v45 = *(_DWORD *)(v29 + 16LL * i + 12);
        if ( a2->left >= *(_DWORD *)(v29 + 16LL * i)
          || a2->top >= *(_DWORD *)(v29 + 16LL * i + 4)
          || a2->right <= *(_DWORD *)(v29 + 16LL * i + 8)
          || a2->bottom <= *(_DWORD *)(v29 + 16LL * i + 12) )
        {
          ERECTL::operator*=((int *)&v43, &a2->left);
          if ( v26 )
          {
            ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v29 + 16LL * (i - v26), v26, a5);
            v26 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)&v43) )
            ((void (__fastcall *)(_QWORD **, __int64, void *))a4)(&v43, 1LL, a5);
        }
        else
        {
          ++v26;
        }
        v9 = (char *)a1 + 48;
      }
      if ( !v26 )
        return 1LL;
LABEL_66:
      ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*(_QWORD *)v9 + 16LL * (v28 - v26), v26, a5);
      return 1LL;
    }
  }
  if ( (a3 & 3) == 2 )
  {
    v9 = (char *)a1 + 64;
    v10 = *((_QWORD *)a1 + 8);
    if ( v10 )
    {
      if ( !a2 )
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v10, *((unsigned int *)a1 + 15), a5);
        return 1LL;
      }
      v26 = 0;
      for ( j = 0; ; ++j )
      {
        v28 = *((_DWORD *)a1 + 15);
        if ( j >= v28 )
          break;
        v31 = *(_QWORD *)v9;
        if ( a2->left >= *(_DWORD *)(*(_QWORD *)v9 + 16LL * j)
          || a2->top >= *(_DWORD *)(v31 + 16LL * j + 4)
          || a2->right <= *(_DWORD *)(v31 + 16LL * j + 8)
          || a2->bottom <= *(_DWORD *)(v31 + 16LL * j + 12) )
        {
          LODWORD(v40) = *(_DWORD *)(*(_QWORD *)v9 + 16LL * j);
          HIDWORD(v40) = *(_DWORD *)(v31 + 16LL * j + 4);
          v41 = *(_DWORD *)(v31 + 16LL * j + 8);
          v42 = *(_DWORD *)(v31 + 16LL * j + 12);
          ERECTL::operator*=((int *)&v40, &a2->left);
          if ( v26 )
          {
            ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v31 + 16LL * (j - v26), v26, a5);
            v26 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)&v40) )
            ((void (__fastcall *)(_BYTE **, __int64, void *))a4)(&v40, 1LL, a5);
        }
        else
        {
          ++v26;
        }
        v9 = (char *)a1 + 64;
      }
      if ( !v26 )
        return 1LL;
      goto LABEL_66;
    }
  }
  v11 = *((unsigned int *)a1 + 1);
  if ( (unsigned int)v11 > 0x14 )
  {
    if ( (unsigned __int64)(v11 << 6) > 0xFFFFFFFF )
      return 0LL;
    v12 = (_BYTE *)PALLOCNOZ(v11 << 6, 1734632775LL);
    v40 = v12;
    if ( !v12 )
      return 0LL;
    v13 = 1;
  }
  else
  {
    v12 = v48;
    v40 = v48;
    v13 = 0;
  }
  v34 = v13;
  v33 = (int *)v47;
  v14 = 0;
  v35 = 0LL;
  v46 = 0LL;
  if ( a2 )
  {
    v35 = (__int128)*a2;
    DWORD1(v46) = 16 * a2->top;
    HIDWORD(v46) = 16 * a2->bottom;
    v15 = &v46;
  }
  else
  {
    v15 = 0LL;
  }
  v43 = v39;
  v16 = bConstructGET(a1, v39, v12, v15);
  v32 = v16;
  if ( v16 )
  {
    v17 = 0x80000000;
    v18 = &v36;
    v36 = &v36;
    v38 = 0;
    v37 = 0x7FFFFFFF;
LABEL_10:
    if ( v18 != &v36 )
    {
      vAdvanceAETEdges(&v36);
      v18 = v36;
      if ( v36 != &v36 )
      {
        if ( (_QWORD **)*v36 != &v36 )
        {
          vXSortAETEdges(&v36);
          v18 = v36;
        }
        goto LABEL_14;
      }
    }
    if ( (_QWORD *)v39[0] != v43 )
    {
      v17 = *(_DWORD *)(v39[0] + 16LL);
LABEL_14:
      if ( *(_DWORD *)(v39[0] + 16LL) == v17 )
      {
        vMoveNewEdges(v39, &v36, v17);
        v18 = v36;
      }
      v19 = v18;
      while ( 1 )
      {
        v20 = *((_DWORD *)v19 + 3);
        if ( (a3 & 2) != 0 )
        {
          v21 = *((_DWORD *)v19 + 14);
          do
          {
            v19 = (_QWORD *)*v19;
            v21 += *((_DWORD *)v19 + 14);
          }
          while ( v21 );
        }
        else
        {
          v19 = (_QWORD *)*v19;
        }
        if ( v20 >= *((_DWORD *)v19 + 3) )
          goto LABEL_26;
        if ( a2 )
        {
          v22 = v35;
          if ( v20 >= (int)v35 )
            v22 = v20;
          *v33 = v22;
          v23 = DWORD2(v35);
          if ( *((_DWORD *)v19 + 3) <= SDWORD2(v35) )
            v23 = *((_DWORD *)v19 + 3);
          v33[2] = v23;
          v33[1] = v17;
          v33[3] = v17 + 1;
          if ( v22 >= v23 )
            goto LABEL_24;
        }
        else
        {
          *v33 = v20;
          v33[2] = *((_DWORD *)v19 + 3);
          v33[1] = v17;
          v33[3] = v17 + 1;
        }
        ++v14;
        v33 += 4;
LABEL_24:
        if ( v14 == 20 )
        {
          ((void (__fastcall *)(_BYTE *, __int64, void *))a4)(v47, 20LL, a5);
          v33 = (int *)v47;
          v14 = 0;
          v18 = v36;
        }
LABEL_26:
        v19 = (_QWORD *)*v19;
        if ( v19 == &v36 )
        {
          ++v17;
          goto LABEL_10;
        }
      }
    }
    if ( v14 )
      ((void (__fastcall *)(_BYTE *, _QWORD, void *))a4)(v47, v14, a5);
    v16 = v32;
  }
  if ( v34 )
    Win32FreePool(v12);
  return v16;
}
