/*
 * XREFs of sub_140004CF8 @ 0x140004CF8
 * Callers:
 *     sub_140004140 @ 0x140004140 (sub_140004140.c)
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140004CF8(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  _QWORD *v18; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-128h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  if ( !a2 )
    return 0;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 16);
      v6 = *(_QWORD *)(v6 + 8);
      if ( *(_DWORD *)(v7 + 40) == 2
        && (*(_DWORD *)(a1 + 112) == 2 || *(_DWORD *)(a1 + 112) == 3 || !**(_DWORD **)(v7 + 32)) )
      {
        v4 = (unsigned int)(v4 + 1);
      }
    }
    while ( v6 );
    if ( (_DWORD)v4 )
    {
      v8 = 8LL * (unsigned int)v4;
      if ( !is_mul_ok((unsigned int)v4, 8uLL) )
        v8 = -1LL;
      v9 = (_QWORD *)sub_1400499B8(v8, &unk_1400C75FC);
      v5 = v9;
      if ( !v9 )
      {
        v16 = -2147024882;
LABEL_40:
        if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
          && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
          && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
        {
          sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 55LL, &unk_1400C9A58);
        }
        sub_14005A470("CPipeInstance::ConfigureAPOInterfaces", 4457LL, (unsigned int)v16);
        return (unsigned int)v16;
      }
      memset(v9, 0, 8 * v4);
      v10 = 0LL;
      v11 = *(_QWORD *)(a1 + 24);
      while ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 16);
        v11 = *(_QWORD *)(v11 + 8);
        if ( *(_DWORD *)(v12 + 40) == 2 )
        {
          v13 = *(_QWORD *)(v12 + 32);
          if ( (*(_DWORD *)(a1 + 112) == 2 || *(_DWORD *)(a1 + 112) == 3 || !*(_DWORD *)v13)
            && (unsigned int)v10 < (unsigned int)v4 )
          {
            v14 = &v5[v10];
            if ( v14 )
            {
              *v14 = *(_QWORD *)(v13 + 40);
              v15 = *(_QWORD *)(v13 + 40);
              if ( v15 )
                sub_1400B6010(v15);
              v16 = 0;
            }
            else
            {
              v16 = -2147467261;
            }
            if ( v16 < 0 )
              goto LABEL_28;
            v10 = (unsigned int)(v10 + 1);
          }
        }
      }
    }
  }
  sub_140006470();
  sub_140006980(&PerformanceCount);
  v16 = sub_1400B6010(a2);
  sub_1400066EC(&PerformanceCount);
  if ( v5 )
  {
LABEL_28:
    if ( (_DWORD)v4 )
    {
      v18 = v5;
      do
      {
        if ( *v18 )
        {
          sub_1400B6010(*v18);
          *v18 = 0LL;
        }
        ++v18;
        --v4;
      }
      while ( v4 );
    }
    j_j__o_free(v5, v14);
  }
  if ( v16 < 0 )
    goto LABEL_40;
  return (unsigned int)v16;
}
