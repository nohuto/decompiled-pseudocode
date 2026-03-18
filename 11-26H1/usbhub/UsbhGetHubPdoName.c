/*
 * XREFs of UsbhGetHubPdoName @ 0x140025048
 * Callers:
 *     UsbhIoctlGetNodeConnectionName @ 0x140025250 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhFdoReturnHubName @ 0x140040E44 (UsbhFdoReturnHubName.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     memmove @ 0x140061CC0 (memmove.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhGetHubPdoName(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, unsigned int *a5)
{
  size_t v5; // r12
  _DWORD *v9; // r15
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _WORD *v15; // rax
  unsigned int v16; // edi
  _WORD *v17; // rdi
  __int16 v18; // ax
  unsigned int v19; // r13d
  unsigned __int64 v20; // rbx
  unsigned int v21; // r12d
  _WORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  signed __int32 v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdx

  v5 = a4;
  FdoExt(a1);
  v9 = PdoExt(a2);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
        v12 = *(_DWORD *)(v10 + 884);
        v13 = *(_QWORD *)(v10 + 888);
        v14 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(v14 + v13) = 1047424615;
        *(_QWORD *)(v14 + v13 + 8) = 0LL;
        *(_QWORD *)(v14 + v13 + 16) = a3;
        *(_QWORD *)(v14 + v13 + 24) = v5;
      }
    }
  }
  *a5 = 0;
  if ( !a3 )
    return 3221225485LL;
  if ( (unsigned int)v5 < 6 )
    return 3221225507LL;
  if ( (v9[355] & 0xC) == 0xC )
  {
    v15 = (_WORD *)*((_QWORD *)v9 + 151);
    v16 = 0;
    if ( *v15 == 92 )
    {
      v17 = v15 + 1;
      v18 = v15[1];
      if ( v18 == 92 )
        goto LABEL_13;
      do
      {
        if ( !v18 )
          break;
        v18 = *++v17;
      }
      while ( *v17 != 92 );
      if ( *v17 == 92 )
LABEL_13:
        LODWORD(v17) = (_DWORD)v17 + 2;
      v16 = (_DWORD)v17 - v9[302];
    }
    v19 = *((unsigned __int16 *)v9 + 600) - v16;
    v20 = v5;
    memset(a3, 0, v5);
    v21 = v19 + 6;
    v22 = a3 + 2;
    if ( v20 >= (unsigned __int64)v19 + 6 )
    {
      memmove(v22, (const void *)(*((_QWORD *)v9 + 151) + 2 * ((unsigned __int64)v16 >> 1)), v19);
      *a5 = v21;
      *(_DWORD *)a3 = v21;
    }
    else
    {
      *(_DWORD *)a3 = v21;
      *v22 = 0;
      *a5 = 6;
    }
  }
  else
  {
    *(_DWORD *)a3 = 6;
    a3[2] = 0;
    *a5 = 6;
  }
  v23 = *a5;
  if ( (UsbhLogMask & 8) != 0 && a1 )
  {
    v24 = *(_QWORD *)(a1 + 64);
    if ( v24 )
    {
      v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 880), 0xFFFFFFFF);
      v26 = *(_DWORD *)(v24 + 884);
      v27 = *(_QWORD *)(v24 + 888);
      v28 = 32LL * ((v25 - 1) & v26);
      *(_DWORD *)(v28 + v27) = 1013870183;
      *(_QWORD *)(v28 + v27 + 8) = 0LL;
      *(_QWORD *)(v28 + v27 + 16) = v23;
      *(_QWORD *)(v28 + v27 + 24) = 0LL;
    }
  }
  return 0LL;
}
