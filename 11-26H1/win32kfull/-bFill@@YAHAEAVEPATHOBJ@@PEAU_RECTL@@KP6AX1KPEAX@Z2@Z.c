/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x14011A618
 * Callers:
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140118D68 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x140119398 (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x140119674 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        char a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void *a5)
{
  __int64 v9; // r8
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  char *v13; // rsi
  int v14; // eax
  unsigned int v15; // r15d
  __int128 *v16; // r9
  unsigned int v17; // ebx
  unsigned int v18; // r14d
  _QWORD *v19; // r8
  _QWORD *v20; // rbx
  int v21; // ecx
  int v22; // eax
  int left; // edx
  int right; // ecx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // ebx
  unsigned int i; // esi
  unsigned int v30; // ecx
  __int64 v31; // r15
  unsigned int j; // esi
  __int64 v33; // r15
  unsigned int v34; // [rsp+20h] [rbp-788h]
  int *v35; // [rsp+28h] [rbp-780h]
  int v37; // [rsp+58h] [rbp-750h]
  struct _RECTL v38; // [rsp+68h] [rbp-740h]
  _QWORD v39[8]; // [rsp+80h] [rbp-728h] BYREF
  _QWORD v40[8]; // [rsp+C0h] [rbp-6E8h] BYREF
  _QWORD *v41; // [rsp+100h] [rbp-6A8h] BYREF
  int v42; // [rsp+108h] [rbp-6A0h]
  int v43; // [rsp+10Ch] [rbp-69Ch]
  __int128 v44; // [rsp+110h] [rbp-698h] BYREF
  _BYTE v45[320]; // [rsp+120h] [rbp-688h] BYREF
  char v46; // [rsp+260h] [rbp-548h] BYREF

  memset_0(v39, 0, sizeof(v39));
  memset_0(v40, 0, sizeof(v40));
  if ( (a3 & 1) != 0 )
  {
    v10 = (char *)a1 + 48;
    v27 = *((_QWORD *)a1 + 6);
    if ( v27 )
    {
      if ( !a2 )
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v27, *((unsigned int *)a1 + 14), a5);
        return 1LL;
      }
      v28 = 0;
      for ( i = 0; ; ++i )
      {
        v30 = *((_DWORD *)a1 + 14);
        if ( i >= v30 )
          break;
        v31 = *(_QWORD *)v10;
        v41 = *(_QWORD **)(*(_QWORD *)v10 + 16LL * i);
        v42 = *(_DWORD *)(v31 + 16LL * i + 8);
        v43 = *(_DWORD *)(v31 + 16LL * i + 12);
        if ( a2->left >= *(_DWORD *)(v31 + 16LL * i)
          || a2->top >= *(_DWORD *)(v31 + 16LL * i + 4)
          || a2->right <= *(_DWORD *)(v31 + 16LL * i + 8)
          || a2->bottom <= *(_DWORD *)(v31 + 16LL * i + 12) )
        {
          ERECTL::operator*=(&v41, a2);
          if ( v28 )
          {
            ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v31 + 16LL * (i - v28), v28, a5);
            v28 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)&v41) )
            ((void (__fastcall *)(_QWORD **, __int64, void *))a4)(&v41, 1LL, a5);
        }
        else
        {
          ++v28;
        }
        v10 = (char *)a1 + 48;
      }
      if ( !v28 )
        return 1LL;
LABEL_70:
      ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*(_QWORD *)v10 + 16LL * (v30 - v28), v28, a5);
      return 1LL;
    }
  }
  if ( (a3 & 1) == 0 && (a3 & 2) != 0 )
  {
    v10 = (char *)a1 + 64;
    v11 = *((_QWORD *)a1 + 8);
    if ( v11 )
    {
      if ( !a2 )
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v11, *((unsigned int *)a1 + 15), a5);
        return 1LL;
      }
      v28 = 0;
      for ( j = 0; ; ++j )
      {
        v30 = *((_DWORD *)a1 + 15);
        if ( j >= v30 )
          break;
        v33 = *(_QWORD *)v10;
        if ( a2->left >= *(_DWORD *)(*(_QWORD *)v10 + 16LL * j)
          || a2->top >= *(_DWORD *)(v33 + 16LL * j + 4)
          || a2->right <= *(_DWORD *)(v33 + 16LL * j + 8)
          || a2->bottom <= *(_DWORD *)(v33 + 16LL * j + 12) )
        {
          LODWORD(v41) = *(_DWORD *)(*(_QWORD *)v10 + 16LL * j);
          HIDWORD(v41) = *(_DWORD *)(v33 + 16LL * j + 4);
          v42 = *(_DWORD *)(v33 + 16LL * j + 8);
          v43 = *(_DWORD *)(v33 + 16LL * j + 12);
          ERECTL::operator*=(&v41, a2);
          if ( v28 )
          {
            ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v33 + 16LL * (j - v28), v28, a5);
            v28 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)&v41) )
            ((void (__fastcall *)(_QWORD **, __int64, void *))a4)(&v41, 1LL, a5);
        }
        else
        {
          ++v28;
        }
        v10 = (char *)a1 + 64;
      }
      if ( !v28 )
        return 1LL;
      goto LABEL_70;
    }
  }
  v12 = *((unsigned int *)a1 + 1);
  if ( (unsigned int)v12 > 0x14 )
  {
    v26 = v12 << 6;
    if ( v26 > 0xFFFFFFFF )
      return 0LL;
    v13 = (_DWORD)v26 ? (char *)Win32AllocPool((unsigned int)v26, 1734632775LL, v9) : 0LL;
    if ( !v13 )
      return 0LL;
    v14 = 1;
  }
  else
  {
    v13 = &v46;
    v14 = 0;
  }
  v37 = v14;
  v35 = (int *)v45;
  v15 = 0;
  v38 = 0LL;
  v44 = 0LL;
  if ( a2 )
  {
    v38 = *a2;
    DWORD1(v44) = 16 * a2->top;
    HIDWORD(v44) = 16 * a2->bottom;
    v16 = &v44;
  }
  else
  {
    v16 = 0LL;
  }
  v41 = v40;
  v17 = bConstructGET(a1, v40, v13, v16);
  v34 = v17;
  if ( v17 )
  {
    v18 = 0x80000000;
    v19 = v39;
    v39[0] = v39;
    *(_QWORD *)((char *)&v39[1] + 4) = 0x7FFFFFFFLL;
LABEL_11:
    if ( v19 != v39 )
    {
      vAdvanceAETEdges(v39);
      v19 = (_QWORD *)v39[0];
      if ( (_QWORD *)v39[0] != v39 )
      {
        if ( *(_QWORD **)v39[0] != v39 )
        {
          vXSortAETEdges(v39);
          v19 = (_QWORD *)v39[0];
        }
        goto LABEL_15;
      }
    }
    if ( (_QWORD *)v40[0] != v41 )
    {
      v18 = *(_DWORD *)(v40[0] + 16LL);
LABEL_15:
      if ( *(_DWORD *)(v40[0] + 16LL) == v18 )
      {
        vMoveNewEdges(v40, v39, v18);
        v19 = (_QWORD *)v39[0];
      }
      v20 = v19;
      while ( 1 )
      {
        v21 = *((_DWORD *)v20 + 3);
        if ( (a3 & 2) != 0 )
        {
          v22 = *((_DWORD *)v20 + 14);
          do
          {
            v20 = (_QWORD *)*v20;
            v22 += *((_DWORD *)v20 + 14);
          }
          while ( v22 );
        }
        else
        {
          v20 = (_QWORD *)*v20;
        }
        if ( v21 >= *((_DWORD *)v20 + 3) )
          goto LABEL_27;
        if ( a2 )
        {
          left = v38.left;
          if ( v21 >= v38.left )
            left = v21;
          *v35 = left;
          right = v38.right;
          if ( *((_DWORD *)v20 + 3) <= v38.right )
            right = *((_DWORD *)v20 + 3);
          v35[2] = right;
          v35[1] = v18;
          v35[3] = v18 + 1;
          if ( left >= right )
            goto LABEL_25;
        }
        else
        {
          *v35 = v21;
          v35[2] = *((_DWORD *)v20 + 3);
          v35[1] = v18;
          v35[3] = v18 + 1;
        }
        ++v15;
        v35 += 4;
LABEL_25:
        if ( v15 == 20 )
        {
          ((void (__fastcall *)(_BYTE *, __int64, void *))a4)(v45, 20LL, a5);
          v35 = (int *)v45;
          v15 = 0;
          v19 = (_QWORD *)v39[0];
        }
LABEL_27:
        v20 = (_QWORD *)*v20;
        if ( v20 == v39 )
        {
          ++v18;
          goto LABEL_11;
        }
      }
    }
    if ( v15 )
      ((void (__fastcall *)(_BYTE *, _QWORD, void *))a4)(v45, v15, a5);
    v17 = v34;
  }
  if ( v37 )
    Win32FreePool(v13);
  return v17;
}
