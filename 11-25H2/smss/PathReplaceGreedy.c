/*
 * XREFs of PathReplaceGreedy @ 0x14001A040
 * Callers:
 *     CreateRegistryLinksForMachine @ 0x14000CCA8 (CreateRegistryLinksForMachine.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall PathReplaceGreedy(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v3; // edi
  unsigned __int16 v5; // r8
  unsigned __int16 *v6; // r11
  unsigned __int16 v8; // r9
  unsigned __int16 *v9; // r15
  unsigned __int16 v10; // r12
  unsigned __int16 v11; // r14
  unsigned int v12; // ecx
  WCHAR v13; // bx
  __int64 v14; // rdx
  int v15; // eax
  int v17; // r9d
  int i; // r8d
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // ax
  _WORD v29[4]; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int16 *v30; // [rsp+18h] [rbp-8h]
  unsigned __int16 v31; // [rsp+20h] [rbp+0h]
  unsigned __int16 *v32; // [rsp+28h] [rbp+8h]

  v3 = 0;
  v32 = a2;
  v31 = 0;
  v5 = *a3;
  v6 = a2;
  v8 = 0;
  v9 = 0LL;
  if ( v5 >= *a1 )
  {
    v10 = 0;
    if ( (v5 & 0xFFFE) != 0 )
    {
      do
      {
        v11 = 0;
        if ( (*a1 & 0xFFFE) != 0 )
        {
          do
          {
            v12 = v10 + v11;
            if ( v12 >= *a3 >> 1 )
              break;
            v13 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * v12));
            if ( v13 != RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v11)) )
              break;
            ++v11;
          }
          while ( v11 < (unsigned __int16)(*a1 >> 1) );
          v8 = v31;
          v3 = 0;
        }
        if ( v11 == *a1 >> 1 )
        {
          v14 = v10 + (unsigned int)v11;
          if ( (_DWORD)v14 == *a3 >> 1 || *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v14) == 92 )
          {
            v30 = v9;
            ++v8;
            v29[0] = v10;
            v31 = v8;
            v9 = v29;
            v29[1] = v10 + v11;
          }
        }
        v5 = *a3;
        ++v10;
      }
      while ( v10 < (unsigned __int16)(*a3 >> 1) );
      v6 = v32;
    }
    if ( v9 )
    {
      v15 = *a1;
      if ( *v6 > (unsigned __int16)v15 && v5 + v8 * ((unsigned int)*v6 - v15) > a3[1] )
        return 2147483653LL;
      v17 = (a3[1] >> 1) - 1;
      for ( i = (v5 >> 1) - 1; i >= 0; --i )
      {
        if ( v9 && i < v9[1] )
        {
          v19 = *v6;
          v20 = 0;
          if ( (*v6 & 0xFFFE) != 0 )
          {
            do
            {
              v21 = v20++;
              v22 = v17--;
              *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v22) = *(_WORD *)(*((_QWORD *)v6 + 1)
                                                                   + 2 * (((unsigned __int64)v19 >> 1) - v21)
                                                                   - 2);
              v19 = *v6;
            }
            while ( v20 < (unsigned __int16)(*v6 >> 1) );
          }
          i = *v9;
          v9 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
        }
        else
        {
          v23 = v17--;
          *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v23) = *(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * i);
        }
      }
      v24 = v17 + 1;
      if ( v24 < a3[1] >> 1 )
      {
        v25 = 2LL * v24;
        do
        {
          v26 = *((_QWORD *)a3 + 1);
          ++v24;
          v27 = v3++;
          v28 = *(_WORD *)(v25 + v26);
          v25 += 2LL;
          *(_WORD *)(v26 + 2 * v27) = v28;
        }
        while ( v24 < a3[1] >> 1 );
      }
      *a3 = 2 * v3;
    }
  }
  return 0LL;
}
