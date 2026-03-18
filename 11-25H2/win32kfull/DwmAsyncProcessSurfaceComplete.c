/*
 * XREFs of DwmAsyncProcessSurfaceComplete @ 0x1401F3278
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x14005CDF0 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x14001D2A8 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall DwmAsyncProcessSurfaceComplete(PVOID Object, __int64 a2)
{
  unsigned int i; // r14d
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  unsigned int v9; // ecx
  __int64 v10; // rbp
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned int v23; // eax
  int v24; // edx
  unsigned int v25; // r10d
  __int64 v26; // rax
  __int64 v27; // rcx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  _OWORD *v30; // rcx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v42; // [rsp+20h] [rbp-128h] BYREF
  __int16 v43; // [rsp+24h] [rbp-124h]
  char v44[34]; // [rsp+26h] [rbp-122h] BYREF
  __int128 v45; // [rsp+48h] [rbp-100h]
  __int128 v46; // [rsp+58h] [rbp-F0h]
  __int128 v47; // [rsp+68h] [rbp-E0h]
  __int128 v48; // [rsp+78h] [rbp-D0h]
  __int128 v49; // [rsp+88h] [rbp-C0h]
  __int128 v50; // [rsp+98h] [rbp-B0h]
  __int128 v51; // [rsp+A8h] [rbp-A0h]
  __int128 v52; // [rsp+B8h] [rbp-90h]
  __int128 v53; // [rsp+C8h] [rbp-80h]
  __int128 v54; // [rsp+D8h] [rbp-70h]
  __int128 v55; // [rsp+E8h] [rbp-60h]
  __int128 v56; // [rsp+F8h] [rbp-50h]
  int v57; // [rsp+108h] [rbp-40h]

  i = -1073741823;
  IncrementDWMWindowUniqueness();
  v7 = 0;
  if ( Object )
  {
    v8 = *(_QWORD *)(W32GetSessionState(v6, v5) + 96);
    v9 = *(_DWORD *)(v8 + 716);
    if ( v9 )
    {
      do
      {
        v10 = 196LL * v7;
        if ( a2 == *(_QWORD *)(v8 + v10 + 888) )
        {
          memset_0(v44, 0, 0xE6uLL);
          v42 = 15466692;
          v43 = 0x8000;
          v11 = (_OWORD *)(v10 + v8 + 720);
          v12 = v11[1];
          v45 = *v11;
          v13 = v11[2];
          v46 = v12;
          v14 = v11[3];
          v47 = v13;
          v15 = v11[4];
          v48 = v14;
          v16 = v11[5];
          v49 = v15;
          v17 = v11[6];
          v50 = v16;
          v18 = v11[7];
          v11 += 8;
          v51 = v17;
          v19 = *v11;
          v52 = v18;
          v20 = v11[1];
          v53 = v19;
          v21 = v11[2];
          v54 = v20;
          v22 = v11[3];
          LODWORD(v11) = *((_DWORD *)v11 + 16);
          v55 = v21;
          v56 = v22;
          v57 = (int)v11;
          HIDWORD(v45) |= 0x100u;
          EtwUpdateEvent(*(_QWORD *)((char *)&v45 + 4), 1073741830LL);
          v23 = LpcRequestPort(Object, &v42);
          v24 = *(_DWORD *)(v8 + 716);
          v25 = v7;
          for ( i = v23; v25 < v24 - 1; v24 = *(_DWORD *)(v8 + 716) )
          {
            v26 = 196LL * (v25 + 1);
            v27 = v25++;
            v28 = (_OWORD *)(v8 + v26 + 720);
            v29 = v28[1];
            v30 = (_OWORD *)(v8 + 196 * v27 + 720);
            *v30 = *v28;
            v31 = v28[2];
            v30[1] = v29;
            v32 = v28[3];
            v30[2] = v31;
            v33 = v28[4];
            v30[3] = v32;
            v34 = v28[5];
            v30[4] = v33;
            v35 = v28[6];
            v30[5] = v34;
            v36 = v28[7];
            v28 += 8;
            v30[6] = v35;
            v30 += 8;
            v37 = *v28;
            *(v30 - 1) = v36;
            v38 = v28[1];
            *v30 = v37;
            v39 = v28[2];
            v30[1] = v38;
            v40 = v28[3];
            LODWORD(v28) = *((_DWORD *)v28 + 16);
            v30[2] = v39;
            v30[3] = v40;
            *((_DWORD *)v30 + 16) = (_DWORD)v28;
          }
          v9 = v24 - 1;
          *(_DWORD *)(v8 + 716) = v24 - 1;
        }
        else
        {
          ++v7;
        }
      }
      while ( v7 < v9 );
    }
    ObfDereferenceObject(Object);
  }
  return i;
}
