/*
 * XREFs of WppTraceCallback @ 0x1400AC8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall WppTraceCallback(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r13
  unsigned int v7; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  bool v13; // zf
  __int64 v14; // r14
  unsigned int v15; // ebp
  __int64 v16; // rax
  const void **v17; // r15
  unsigned int v18; // edi
  unsigned int v19; // r12d
  _DWORD *v20; // rsi
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int64 v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a1 > 5u )
  {
    if ( a1 == 6 || a1 == 7 )
      return v7;
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
          v7 = -1073741789;
          if ( a3 >= 4 )
          {
            *a4 = v18;
            *v6 = 4;
          }
        }
        else
        {
          memset(a4, 0, a3);
          *a4 = v18;
          a4[2] = v19;
          a4[4] = v15;
          if ( v17 )
          {
            *(_WORD *)((char *)a4 + v19) = *(_WORD *)v17;
            memmove((char *)a4 + v19 + 2, v17[1], *(unsigned __int16 *)v17);
          }
          if ( v15 )
          {
            v20 = a4 + 10;
            v21 = v15;
            do
            {
              v22 = *(_OWORD *)*(_QWORD *)(v14 + 8);
              *v20 = 528384;
              v20 += 8;
              *((_OWORD *)v20 - 3) = v22;
              *(_BYTE *)(v14 + 41) = 0;
              *(_DWORD *)(v14 + 44) = 0;
              v14 = *(_QWORD *)(v14 + 16);
              --v21;
            }
            while ( v21 );
          }
          *v6 = v18;
        }
        return v7;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741808;
  }
  if ( a1 != 5 && (!a1 || a1 != 4) )
    return (unsigned int)-1073741808;
  v10 = a5;
  v25 = 0;
  LODWORD(a6) = 0;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  v11 = a5;
  do
  {
    v12 = *(_DWORD **)(v10 + 8);
    if ( *v12 == a4[6] && v12[1] == a4[7] && v12[2] == a4[8] && v12[3] == a4[9] )
      break;
    v10 = *(_QWORD *)(v10 + 16);
    v11 = v10;
  }
  while ( v10 );
  if ( !v10 )
    return (unsigned int)-1073741163;
  if ( a1 == 5 )
  {
    *(_DWORD *)(v10 + 44) = 0;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_BYTE *)(v10 + 41) = 0;
  }
  else
  {
    v13 = WPPTraceSuite == 2;
    v24 = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v11 + 24) = v24;
    if ( v13 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                            3LL,
                            &v25,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v10 + 41) = v25;
      return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                             2LL,
                             v10 + 44,
                             4LL,
                             &a6,
                             a4);
    }
    else
    {
      *(_DWORD *)(v10 + 44) = HIDWORD(v24);
      *(_BYTE *)(v10 + 41) = BYTE2(v24);
    }
  }
  return v7;
}
