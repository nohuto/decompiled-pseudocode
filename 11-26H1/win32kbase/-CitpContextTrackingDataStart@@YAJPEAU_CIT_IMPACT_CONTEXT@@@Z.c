/*
 * XREFs of ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1401B7AF8
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x14016B80C (-CitpStart@@YAJXZ.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14024A3B8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401C54E0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextTrackingDataStart(struct _CIT_IMPACT_CONTEXT *a1, int a2, int a3)
{
  unsigned int v4; // ebx
  const char *v5; // rdx
  __int64 v6; // r14
  char v7; // bp
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ecx
  unsigned int v11; // r8d
  __int64 v12; // rdi
  unsigned int v13; // edx
  char *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  char *v17; // rax
  char **v18; // rcx
  char i; // cl
  __int64 v20; // rax
  char *v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx

  v4 = 0;
  v6 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 18952);
  if ( *(_BYTE *)(v6 + 25) )
  {
    v7 = -1;
    v8 = 96LL * *(unsigned int *)(v6 + 4);
    if ( v8 > 0xFFFFFFFF )
    {
      v10 = -1073741675;
      v11 = 362;
      goto LABEL_27;
    }
    v9 = Win32AllocPoolZInitImpl(256LL, (unsigned int)v8, 0x49637355u);
    *(_QWORD *)a1 = v9;
    if ( !v9 )
    {
      v10 = -1073741670;
      v11 = 370;
LABEL_27:
      v4 = v10;
      CitpLogFailureWorker(v10, v5, v11);
      return v4;
    }
    v12 = *(unsigned int *)(v6 + 4);
    v13 = 0;
    if ( (_DWORD)v12 )
    {
      v14 = (char *)a1 + 8;
      do
      {
        v15 = *(_QWORD *)a1;
        v16 = 96LL * v13;
        *(_WORD *)(v16 + v15 + 32) = 1;
        *(_QWORD *)(v16 + v15) = 0LL;
        *(_OWORD *)(v16 + v15 + 40) = 0LL;
        *(_OWORD *)(v16 + v15 + 56) = 0LL;
        *(_QWORD *)(v16 + v15 + 72) = 0LL;
        v17 = (char *)(v16 + v15 + 16);
        v18 = (char **)*((_QWORD *)a1 + 2);
        if ( *v18 != v14 )
          __fastfail(3u);
        *(_QWORD *)v17 = v14;
        ++v13;
        *((_QWORD *)v17 + 1) = v18;
        *v18 = v17;
        *((_QWORD *)a1 + 2) = v17;
        v12 = *(unsigned int *)(v6 + 4);
      }
      while ( v13 < (unsigned int)v12 );
    }
    *((_DWORD *)a1 + 14) = v12;
    *((_DWORD *)a1 + 17) = v12 - ((unsigned int)v12 >> 2);
    if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
    {
      for ( i = -1; (_DWORD)v12; LODWORD(v12) = (unsigned int)v12 >> 1 )
        ++i;
      v12 = (unsigned int)(1 << i);
    }
    v20 = Win32AllocPoolZInitImpl(256LL, (unsigned int)(8 * v12), 0x49637355u);
    *((_QWORD *)a1 + 11) = v20;
    v21 = (char *)v20;
    if ( !v20 )
    {
      v10 = -1073741670;
      v11 = 414;
      goto LABEL_27;
    }
    v22 = (unsigned __int64)a1 + 72;
    if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
    {
      for ( ; (_DWORD)v12; LODWORD(v12) = (unsigned int)v12 >> 1 )
        ++v7;
      v12 = (unsigned int)(1 << v7);
    }
    *(_DWORD *)v22 = 0;
    *((_QWORD *)a1 + 10) = v21;
    if ( (unsigned int)v12 > 0x4000000 )
      v12 = 0x4000000LL;
    *((_DWORD *)a1 + 19) = 32 * v12;
    v23 = v22 | 1;
    v24 = (unsigned int)v12;
    if ( v21 > &v21[8 * v12] )
      v24 = 0LL;
    if ( v24 )
      memset64(v21, v23, v24);
  }
  return v4;
}
