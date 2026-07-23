/*
 * XREFs of WmipTranslatePDOInstanceNames @ 0x140AF0DF4
 * Callers:
 *     WmipForwardWmiIrp @ 0x140A0E218 (WmipForwardWmiIrp.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     IoGetDeviceInstanceName @ 0x1404D9C4C (IoGetDeviceInstanceName.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall WmipTranslatePDOInstanceNames(__int64 a1, char a2, int a3, __int64 a4)
{
  unsigned int *v4; // r11
  unsigned int v5; // r13d
  int v6; // r12d
  void *v7; // rbp
  _WORD *v8; // rdi
  void *v9; // r14
  unsigned int v10; // r12d
  unsigned int *v11; // rsi
  __int128 v12; // kr00_16
  __int128 v13; // kr10_16
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // r15
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 result; // rax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  void *v25; // r15
  unsigned int v26; // eax
  __int64 v27; // rbx
  unsigned int *v28; // rdx
  unsigned int *v29; // rcx
  __int64 v30; // rax
  _DWORD *v31; // r14
  unsigned int v32; // ecx
  __int64 v33; // rdi
  unsigned int v34; // ebx
  void *v35; // r12
  char *v36; // rbx
  __int16 v37; // ax
  char v38; // [rsp+20h] [rbp-88h]
  char v39; // [rsp+21h] [rbp-87h]
  unsigned int v40; // [rsp+24h] [rbp-84h]
  unsigned int v41; // [rsp+28h] [rbp-80h]
  unsigned int v42; // [rsp+28h] [rbp-80h]
  unsigned int v43; // [rsp+2Ch] [rbp-7Ch]
  int v44; // [rsp+30h] [rbp-78h]
  unsigned int *v45; // [rsp+38h] [rbp-70h]
  void *Src[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v47; // [rsp+50h] [rbp-58h]

  v4 = *(unsigned int **)(a1 + 24);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 56);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  *(_OWORD *)Src = 0LL;
  v38 = 0;
  v10 = (v6 + 1) & 0xFFFFFFFE;
  v45 = v4;
  v44 = 0;
  v11 = v4;
  v39 = 1;
  v40 = 0;
  v12 = WmipDataProviderPnPIdInstanceNamesGuid;
  v13 = WmipDataProviderPnpidGuid;
  do
  {
    v14 = 0;
    v41 = 0;
    if ( v11[4] )
    {
      v47 = 0LL;
      do
      {
        v15 = 8LL * v14;
        v16 = *(_QWORD *)&v11[v15 + 6] - v13;
        if ( !v16 )
          v16 = *(_QWORD *)&v11[v15 + 8] - *((_QWORD *)&v13 + 1);
        if ( !v16 )
          goto LABEL_51;
        v17 = *(_QWORD *)&v11[v15 + 6] - v12;
        if ( !v17 )
          v17 = *(_QWORD *)&v11[v15 + 8] - *((_QWORD *)&v12 + 1);
        if ( v17 )
        {
          v18 = v39;
        }
        else
        {
LABEL_51:
          v18 = 0;
          v39 = 0;
          if ( v7 )
          {
            ObfDereferenceObject(v7);
            v7 = 0LL;
            v4 = v45;
            v12 = WmipDataProviderPnPIdInstanceNamesGuid;
            v13 = WmipDataProviderPnpidGuid;
          }
        }
        v19 = v11[v15 + 10];
        if ( (v19 & 0x20) == 0 )
          goto LABEL_12;
        if ( !v8 )
        {
          v28 = v4;
          v29 = v4 + 1;
          while ( 1 )
          {
            v30 = *v29;
            if ( !(_DWORD)v30 )
              break;
            v29 = (unsigned int *)((char *)v29 + v30);
            v28 = (unsigned int *)((char *)v28 + v30);
          }
          v8 = (_WORD *)((char *)v28 + ((*v28 + 1) & 0xFFFFFFFE));
          v5 = a3 + (_DWORD)v4 - (_DWORD)v8;
        }
        v23 = v11[v15 + 11];
        v9 = *(void **)&v11[v15 + 12];
        if ( v40 >= v23 )
          v23 = v40;
        v40 = v23;
        if ( v9 == v47 )
        {
          v11[v15 + 10] = v19 | 8;
          v11[v15 + 12] = v44;
        }
        else if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v9, (UNICODE_STRING *)Src) >= 0 )
        {
          if ( v18 )
          {
            if ( !v7 )
            {
              v7 = v9;
              PsReferenceSiloContext(v9);
LABEL_26:
              v24 = LOWORD(Src[0]);
              v25 = Src[1];
              v26 = LOWORD(Src[0]) + 4;
              v10 += v26;
              v43 = v26;
              if ( v38 || v26 > v5 )
              {
                v38 = 1;
              }
              else
              {
                v11[v15 + 10] |= 8u;
                v47 = v9;
                v11[v15 + 12] = (_DWORD)v8 - (_DWORD)v11;
                v44 = (_DWORD)v8 - (_DWORD)v11;
                v27 = v24;
                *v8 = v24 + 2;
                memmove(v8 + 1, v25, v24);
                *(_WORD *)((char *)v8 + v27 + 2) = 95;
                v8 = (_WORD *)((char *)v8 + v27 + 4);
                v5 -= v43;
              }
              if ( v25 )
              {
                ExFreePool(v25);
                *(_OWORD *)Src = 0LL;
              }
              goto LABEL_31;
            }
            if ( v7 == v9 )
              goto LABEL_26;
          }
          v39 = 0;
          if ( v7 )
          {
            ObfDereferenceObject(v7);
            v7 = 0LL;
          }
          goto LABEL_26;
        }
LABEL_31:
        if ( a2 == 11 )
          ObfDereferenceObject(v9);
        v12 = WmipDataProviderPnPIdInstanceNamesGuid;
        v13 = WmipDataProviderPnpidGuid;
LABEL_12:
        v4 = v45;
        v14 = v41 + 1;
        v41 = v14;
      }
      while ( v14 < v11[4] );
    }
    v20 = v11[1];
    v11 = (unsigned int *)((char *)v11 + v20);
  }
  while ( (_DWORD)v20 );
  v21 = 4LL;
  if ( v39 && v7 )
  {
    if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v9, (UNICODE_STRING *)Src) >= 0 )
    {
      v31 = (_DWORD *)(((unsigned __int64)v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v32 = (((_DWORD)v8 + 7) & 0xFFFFFFF8) - (_DWORD)v8;
      v33 = LOWORD(Src[0]);
      v34 = 2 * LOWORD(Src[0]) + 96;
      v42 = v32 + v34 + v10;
      v35 = Src[1];
      if ( v38 || v34 > v5 - v32 )
      {
        v38 = 1;
      }
      else if ( !*(_QWORD *)(a4 + 24) )
      {
        PsReferenceSiloContext(v7);
        *(_QWORD *)(a4 + 24) = v7;
        *(_DWORD *)(a4 + 52) = v40;
        v11[1] = (_DWORD)v31 - (_DWORD)v11;
        memset_0(v31, 0, 0x58uLL);
        *v31 = v34;
        v31[4] = 2;
        v31[10] = 40;
        v36 = (char *)v31 + 90;
        v31[11] = v40;
        v31[12] = 88;
        *(_OWORD *)(v31 + 6) = WmipDataProviderPnpidGuid;
        *((_WORD *)v31 + 44) = v33 + 2;
        memmove((char *)v31 + 90, v35, (unsigned int)v33);
        *(_WORD *)&v36[v33] = 95;
        v31[18] = 4;
        v31[19] = 1;
        v31[20] = v33 + 92;
        v37 = (__int16)Src[0];
        *(_OWORD *)(v31 + 14) = WmipDataProviderPnPIdInstanceNamesGuid;
        *(_WORD *)&v36[v33 + 2] = v37;
        memmove((char *)v31 + v33 + 94, v35, (unsigned int)v33);
      }
      if ( v35 )
        ExFreePool(v35);
      v10 = v42;
    }
    ObfDereferenceObject(v7);
  }
  if ( !v38 )
    v21 = v10;
  *v45 = v10;
  result = a1;
  *(_QWORD *)(a1 + 56) = v21;
  return result;
}
