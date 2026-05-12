/*
 * XREFs of WppTraceCallback @ 0x140188500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     WppInitGlobalLogger @ 0x1401880B4 (WppInitGlobalLogger.c)
 */

__int64 __fastcall WppTraceCallback(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  bool v13; // zf
  __int64 v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rax
  const void **v17; // r14
  unsigned int v18; // ebp
  unsigned int v19; // r15d
  __int64 v20; // rcx
  _DWORD *v21; // rsi
  __int64 v22; // rdx
  __int128 v23; // xmm0
  __int64 v25; // [rsp+30h] [rbp-38h]
  int v26; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  *a6 = 0;
  if ( a1 > 5u )
  {
    if ( a1 == 6 || a1 == 7 )
      return 0;
    if ( a1 == 8 )
    {
      v14 = a5;
      v15 = 0;
      v16 = a5;
      v17 = *(const void ***)(a5 + 32);
      do
      {
        v16 = *(_QWORD *)(v16 + 16);
        ++v15;
      }
      while ( v16 );
      if ( v15 <= 0x3F )
      {
        v18 = 32 * v15 + 24;
        if ( v17 )
        {
          v19 = 32 * v15 + 24;
          v18 += *(unsigned __int16 *)v17 + 2;
        }
        else
        {
          v19 = 0;
        }
        if ( v18 > a3 )
        {
          v10 = -1073741789;
          if ( a3 >= 4 )
          {
            *a4 = v18;
            *v6 = 4;
          }
        }
        else
        {
          memset_0(a4, 0, a3);
          *a4 = v18;
          a4[2] = v19;
          a4[4] = v15;
          if ( v17 )
          {
            *(_WORD *)((char *)a4 + v19) = *(_WORD *)v17;
            memmove((char *)a4 + v19 + 2, v17[1], *(unsigned __int16 *)v17);
          }
          v20 = v14;
          if ( v15 )
          {
            v21 = a4 + 10;
            v22 = v15;
            do
            {
              v23 = *(_OWORD *)*(_QWORD *)(v20 + 8);
              *v21 = 528384;
              v21 += 8;
              *((_OWORD *)v21 - 3) = v23;
              *(_BYTE *)(v20 + 41) = 0;
              *(_DWORD *)(v20 + 44) = 0;
              v20 = *(_QWORD *)(v20 + 16);
              --v22;
            }
            while ( v22 );
          }
          v10 = 0;
          *v6 = v18;
        }
        do
        {
          WppInitGlobalLogger(*(const GUID **)(v14 + 8), (_QWORD *)(v14 + 24), (int *)(v14 + 44), (_BYTE *)(v14 + 41));
          v14 = *(_QWORD *)(v14 + 16);
        }
        while ( v14 );
        return v10;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741808;
  }
  if ( a1 != 5 && (!a1 || a1 != 4) )
    return (unsigned int)-1073741808;
  v9 = a5;
  v26 = 0;
  LODWORD(a6) = 0;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  v11 = a5;
  do
  {
    v12 = *(_DWORD **)(v9 + 8);
    if ( *v12 == a4[6] && v12[1] == a4[7] && v12[2] == a4[8] && v12[3] == a4[9] )
      break;
    v9 = *(_QWORD *)(v9 + 16);
    v11 = v9;
  }
  while ( v9 );
  if ( !v9 )
    return (unsigned int)-1073741163;
  v10 = 0;
  if ( a1 == 5 )
  {
    *(_DWORD *)(v9 + 44) = 0;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_BYTE *)(v9 + 41) = 0;
  }
  else
  {
    v13 = WPPTraceSuite == 2;
    v25 = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v11 + 24) = v25;
    if ( v13 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                            3LL,
                            &v26,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v9 + 41) = v26;
      return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                             2LL,
                             v9 + 44,
                             4LL,
                             &a6,
                             a4);
    }
    else
    {
      *(_DWORD *)(v9 + 44) = HIDWORD(v25);
      *(_BYTE *)(v9 + 41) = BYTE2(v25);
    }
  }
  return v10;
}
