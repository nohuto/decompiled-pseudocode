/*
 * XREFs of ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14019C85C
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1401329F0 (-CitpStart@@YAJXZ.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x140240788 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401A17C0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextTrackingDataStart(struct _CIT_IMPACT_CONTEXT *a1, __int64 a2)
{
  unsigned int v3; // ebx
  const char *v4; // rdx
  __int64 v5; // rsi
  char v6; // bp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // rdi
  unsigned int v12; // edx
  char *v13; // r8
  __int64 v14; // rcx
  char *v15; // rcx
  char **v16; // rax
  char i; // cl
  __int64 v18; // rax
  char *v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx

  v3 = 0;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  if ( *(_BYTE *)(v5 + 25) )
  {
    v6 = -1;
    v7 = 96LL * *(unsigned int *)(v5 + 4);
    if ( v7 > 0xFFFFFFFF )
    {
      v9 = -1073741675;
      v10 = 362;
      goto LABEL_27;
    }
    v8 = Win32AllocPoolZInitImpl(256LL, (unsigned int)v7, 0x49637355u);
    *(_QWORD *)a1 = v8;
    if ( !v8 )
    {
      v9 = -1073741670;
      v10 = 370;
LABEL_27:
      v3 = v9;
      CitpLogFailureWorker(v9, v4, v10);
      return v3;
    }
    v11 = *(unsigned int *)(v5 + 4);
    v12 = 0;
    if ( (_DWORD)v11 )
    {
      v13 = (char *)a1 + 8;
      do
      {
        v14 = *(_QWORD *)a1 + 96LL * v12;
        *(_WORD *)(v14 + 32) = 1;
        *(_QWORD *)v14 = 0LL;
        *(_OWORD *)(v14 + 40) = 0LL;
        *(_OWORD *)(v14 + 56) = 0LL;
        *(_QWORD *)(v14 + 72) = 0LL;
        v15 = (char *)(v14 + 16);
        v16 = (char **)*((_QWORD *)a1 + 2);
        if ( *v16 != v13 )
          __fastfail(3u);
        *(_QWORD *)v15 = v13;
        ++v12;
        *((_QWORD *)v15 + 1) = v16;
        *v16 = v15;
        *((_QWORD *)a1 + 2) = v15;
        v11 = *(unsigned int *)(v5 + 4);
      }
      while ( v12 < (unsigned int)v11 );
    }
    *((_DWORD *)a1 + 14) = v11;
    *((_DWORD *)a1 + 17) = v11 - ((unsigned int)v11 >> 2);
    if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
    {
      for ( i = -1; (_DWORD)v11; LODWORD(v11) = (unsigned int)v11 >> 1 )
        ++i;
      v11 = (unsigned int)(1 << i);
    }
    v18 = Win32AllocPoolZInitImpl(256LL, (unsigned int)(8 * v11), 0x49637355u);
    *((_QWORD *)a1 + 11) = v18;
    v19 = (char *)v18;
    if ( !v18 )
    {
      v9 = -1073741670;
      v10 = 414;
      goto LABEL_27;
    }
    v20 = (unsigned __int64)a1 + 72;
    if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
    {
      for ( ; (_DWORD)v11; LODWORD(v11) = (unsigned int)v11 >> 1 )
        ++v6;
      v11 = (unsigned int)(1 << v6);
    }
    *(_DWORD *)v20 = 0;
    *((_QWORD *)a1 + 10) = v19;
    if ( (unsigned int)v11 > 0x4000000 )
      v11 = 0x4000000LL;
    *((_DWORD *)a1 + 19) = 32 * v11;
    v21 = v20 | 1;
    v22 = (unsigned int)v11;
    if ( v19 > &v19[8 * v11] )
      v22 = 0LL;
    if ( v22 )
      memset64(v19, v21, v22);
  }
  return v3;
}
