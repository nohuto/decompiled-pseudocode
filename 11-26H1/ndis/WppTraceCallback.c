/*
 * XREFs of WppTraceCallback @ 0x140144B90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400C839C (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
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
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int *v14; // r14
  bool v15; // zf
  __int64 v16; // r14
  unsigned int v17; // ebp
  __int64 v18; // rax
  const void **v19; // r15
  unsigned int v20; // edi
  unsigned int v21; // r12d
  _DWORD *v22; // rsi
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int64 v26; // [rsp+30h] [rbp-38h]
  int v27; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a1 > 5u )
  {
    if ( a1 == 6 || a1 == 7 )
      return v7;
    if ( a1 == 8 )
    {
      v16 = a5;
      v17 = 0;
      v18 = a5;
      v19 = *(const void ***)(a5 + 32);
      do
      {
        v18 = *(_QWORD *)(v18 + 16);
        ++v17;
      }
      while ( v18 );
      if ( v17 <= 0x3F )
      {
        v20 = 32 * v17 + 24;
        if ( v19 )
        {
          v21 = 32 * v17 + 24;
          v20 += *(unsigned __int16 *)v19 + 2;
        }
        else
        {
          v21 = 0;
        }
        if ( v20 > a3 )
        {
          v7 = -1073741789;
          if ( a3 >= 4 )
          {
            *a4 = v20;
            *v6 = 4;
          }
        }
        else
        {
          memset(a4, 0, a3);
          *a4 = v20;
          a4[2] = v21;
          a4[4] = v17;
          if ( v19 )
          {
            *(_WORD *)((char *)a4 + v21) = *(_WORD *)v19;
            memmove((char *)a4 + v21 + 2, v19[1], *(unsigned __int16 *)v19);
          }
          if ( v17 )
          {
            v22 = a4 + 10;
            v23 = v17;
            do
            {
              v24 = *(_OWORD *)*(_QWORD *)(v16 + 8);
              *v22 = 528384;
              v22 += 8;
              *((_OWORD *)v22 - 3) = v24;
              *(_BYTE *)(v16 + 41) = 0;
              *(_DWORD *)(v16 + 44) = 0;
              v16 = *(_QWORD *)(v16 + 16);
              --v23;
            }
            while ( v23 );
          }
          *v6 = v20;
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
  v27 = 0;
  LODWORD(a6) = 0;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  v11 = a4[6];
  v12 = a5;
  do
  {
    v13 = *(_QWORD *)(v10 + 8);
    if ( *(_QWORD *)v13 == *((_QWORD *)a4 + 3) && *(_DWORD *)(v13 + 8) == a4[8] && *(_DWORD *)(v13 + 12) == a4[9] )
      break;
    v10 = *(_QWORD *)(v10 + 16);
    v12 = v10;
  }
  while ( v10 );
  if ( !v10 )
    return (unsigned int)-1073741163;
  if ( a1 == 5 )
  {
    v14 = (unsigned int *)(v10 + 44);
    *(_BYTE *)(v10 + 41) = 0;
    *(_DWORD *)(v10 + 44) = 0;
    *(_QWORD *)(v12 + 24) = 0LL;
  }
  else
  {
    v15 = WPPTraceSuite == 2;
    v26 = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v12 + 24) = v26;
    if ( v15 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                            3LL,
                            &v27,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v10 + 41) = v27;
      v14 = (unsigned int *)(v10 + 44);
      v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
             2LL,
             v10 + 44,
             4LL,
             &a6,
             a4);
    }
    else
    {
      v14 = (unsigned int *)(v10 + 44);
      *(_DWORD *)(v10 + 44) = HIDWORD(v26);
      *(_BYTE *)(v10 + 41) = BYTE2(v26);
    }
  }
  LOBYTE(v11) = a1 != 5;
  ndisEnableWppTracingCallback((const struct _GUID *)v13, v12, v11, *v14, *(_BYTE *)(v10 + 41));
  return v7;
}
