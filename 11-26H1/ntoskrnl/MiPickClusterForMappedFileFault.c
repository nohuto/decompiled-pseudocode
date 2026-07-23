/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x140371948
 * Callers:
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 */

unsigned __int64 __fastcall MiPickClusterForMappedFileFault(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 *v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  char v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // r14
  unsigned int v16; // edx
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdi
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 result; // rax
  struct _KTHREAD *v25; // [rsp+78h] [rbp+10h]
  unsigned __int64 v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
  v7 = *(__int64 **)(a2 + 192);
  v8 = 0LL;
  v9 = *(_QWORD *)(a2 + 168);
  v10 = 1;
  CurrentThread = KeGetCurrentThread();
  v13 = *(_QWORD *)(a2 + 240);
  v14 = 1LL;
  v15 = *v7;
  v25 = CurrentThread;
  if ( (v9 & 0x400) == 0
    || BYTE5(CurrentThread[1].Queue)
    || (*(_DWORD *)(v15 + 56) & 0x20) == 0 && (*(_DWORD *)(v15 + 56) & 8) != 0 && (!a3 || *a3 != 2)
    || *(__int64 *)(a1 + 22528) < 50 )
  {
    goto LABEL_45;
  }
  if ( dword_140E360D8 )
  {
    --dword_140E360D8;
LABEL_45:
    v18 = v13;
LABEL_46:
    v20 = v13;
    goto LABEL_32;
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, 0x64uLL) )
    goto LABEL_45;
  v16 = *(_DWORD *)(a2 + 184);
  if ( v16 == 1 )
    goto LABEL_45;
  a4 = v27;
  if ( !a3 )
  {
    if ( (*(_DWORD *)(v15 + 56) & 0x20) != 0 )
    {
      v16 = 4;
      if ( (v7[4] & 4) != 0 )
        v16 = 8;
    }
    else if ( !v16 )
    {
      v16 = LODWORD(v25[1].WaitListEntry.Flink) + 1;
    }
  }
  v17 = 8LL * v16;
  v18 = v17 + v13 - 8;
  if ( v27 + 8 * ((unsigned int)(*((_DWORD *)v7 + 11) - *((_DWORD *)v7 + 13)) - 1LL) <= v18 )
    v18 = v27 + 8 * ((unsigned int)(*((_DWORD *)v7 + 11) - *((_DWORD *)v7 + 13)) - 1LL);
  if ( v18 > (v13 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v18 = v13 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v19 = (_QWORD *)v18;
  if ( v18 > v13 )
  {
    do
    {
      if ( *v19 == v9 )
      {
        ++v14;
      }
      else if ( v19 == (_QWORD *)v18 )
      {
        v18 -= 8LL;
      }
      --v19;
    }
    while ( (unsigned __int64)v19 > v13 );
  }
  v20 = v18 - v17 + 8;
  if ( v20 < v27 )
    v20 = v27;
  if ( v20 < (v13 & 0xFFFFFFFFFFFFF000uLL) )
    v20 = v13 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 || (*(_DWORD *)(a2 + 188) & 0x100) != 0 )
    goto LABEL_46;
  if ( v20 < v13 )
  {
    v21 = (_QWORD *)v20;
    do
    {
      if ( *v21 == v9 )
      {
        ++v14;
      }
      else if ( v21 == (_QWORD *)v20 )
      {
        v20 += 8LL;
      }
      ++v21;
    }
    while ( (unsigned __int64)v21 < v13 );
  }
LABEL_32:
  v22 = v14 - 1;
  if ( a5 == -1 )
    v22 = v14;
  if ( v22 )
  {
    if ( a5 == -1 )
      v10 = 3;
    v8 = MiObtainFaultCharges((ULONG *)a1, v22, v10, a4);
  }
  result = v8 + 1;
  if ( a5 == -1 )
    result = v8;
  *a6 = v20;
  *a7 = v18;
  return result;
}
