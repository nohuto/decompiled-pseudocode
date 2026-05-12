/*
 * XREFs of sub_1400313E4 @ 0x1400313E4
 * Callers:
 *     sub_140030CD0 @ 0x140030CD0 (sub_140030CD0.c)
 * Callees:
 *     sub_1400A70A4 @ 0x1400A70A4 (sub_1400A70A4.c)
 */

__int64 __fastcall sub_1400313E4(__int64 a1, char a2)
{
  int v2; // r15d
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // r11d
  __int64 v6; // rdi
  __int64 v7; // r13
  char v8; // r10
  int v9; // edx
  int v10; // r8d
  char v11; // bp
  unsigned int v12; // r14d
  unsigned int v13; // esi
  unsigned int *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int8 v18; // r9
  char v19; // si
  unsigned int v20; // ebp
  unsigned int v21; // edi
  unsigned int *v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // r10
  int v25; // ecx
  __int64 v26; // r12
  __int64 v27; // rcx
  int v28; // ecx
  int v29; // [rsp+C8h] [rbp-90h]
  int v30; // [rsp+E4h] [rbp-74h]
  int v31; // [rsp+E8h] [rbp-70h]
  __int64 v32; // [rsp+F0h] [rbp-68h]
  __int64 v33; // [rsp+F8h] [rbp-60h]
  __int64 v34; // [rsp+108h] [rbp-50h]
  int v35; // [rsp+160h] [rbp+8h]
  int v37; // [rsp+178h] [rbp+20h]

  v35 = a1;
  LOBYTE(v2) = 0;
  result = a1;
  v4 = *(_QWORD *)(a1 + 224);
  v5 = 0;
  v32 = 0LL;
  v6 = 0LL;
  v37 = 0;
  v33 = 0LL;
  v34 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)(result + 168);
    v8 = *(_BYTE *)(v7 + 2);
    if ( v8 == 40 )
      v9 = *(_DWORD *)(v7 + 20);
    else
      v9 = *(unsigned __int8 *)(v7 + 2);
    result = *(unsigned int *)(v4 + 104);
    v30 = *(_DWORD *)(v4 + 104);
    if ( v8 == 40 )
      v10 = *(_DWORD *)(v7 + 40);
    else
      v10 = *(_DWORD *)(v7 + 20);
    v31 = *(_DWORD *)(v4 + 2264);
    if ( v9 )
    {
      if ( v8 == 40 )
      {
        v5 = *(_DWORD *)(v7 + 60);
        v27 = *(_QWORD *)(v7 + 64);
      }
      else
      {
        v27 = *(_QWORD *)(v7 + 24);
        v5 = *(_DWORD *)(v7 + 16);
      }
      v33 = v27;
      if ( !v27 && v5 )
        v5 = 0;
      if ( v9 == 2 && v27 && v5 >= 0x1C )
        v6 = v27;
    }
    else
    {
      if ( v8 != 40 )
      {
        v6 = v7 + 72;
        goto LABEL_32;
      }
      v11 = 0;
      v32 = 0LL;
      if ( !*(_DWORD *)(v7 + 20) )
      {
        v12 = *(_DWORD *)(v7 + 56);
        v13 = 0;
        if ( v12 )
        {
          v14 = (unsigned int *)(v7 + 120);
          v15 = 0LL;
          while ( 1 )
          {
            v16 = *v14;
            if ( (unsigned int)v16 >= 0x80 )
            {
              v17 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v16 < (unsigned int)v17 )
              {
                if ( *(_DWORD *)(v16 + v7) == 64 )
                {
                  if ( v16 + 40 <= v17 )
                  {
                    if ( !*(_BYTE *)(v16 + v7 + 10) )
                    {
LABEL_28:
                      v6 = v32;
                      break;
                    }
                    v6 = v16 + v7 + 24;
LABEL_32:
                    v32 = v6;
                    break;
                  }
                }
                else if ( *(_DWORD *)(v16 + v7) == 65 )
                {
                  if ( v16 + 56 <= v17 )
                  {
                    v11 = 1;
                    if ( !*(_BYTE *)(v16 + v7 + 10) )
                      goto LABEL_28;
                    v15 = v16 + v7 + 24;
                    v32 = v15;
                  }
                }
                else if ( *(_DWORD *)(v16 + v7) == 66 && v16 + 40 <= v17 )
                {
                  v6 = v16 + v7 + 32;
                  if ( !*(_DWORD *)(v16 + v7 + 12) )
                    v6 = v15;
                  goto LABEL_32;
                }
                if ( v11 )
                  goto LABEL_28;
              }
            }
            ++v13;
            ++v14;
            if ( v13 >= v12 )
              goto LABEL_28;
          }
        }
      }
      if ( v6 )
      {
        v18 = 0;
        if ( v8 == 40 )
        {
          v19 = 0;
          if ( !*(_DWORD *)(v7 + 20) )
          {
            v20 = *(_DWORD *)(v7 + 56);
            v21 = 0;
            if ( v20 )
            {
              v22 = (unsigned int *)(v7 + 120);
              do
              {
                v23 = *v22;
                if ( (unsigned int)v23 >= 0x80 )
                {
                  v24 = *(unsigned int *)(v7 + 16);
                  if ( (unsigned int)v23 < (unsigned int)v24 )
                  {
                    if ( *(_DWORD *)(v23 + v7) == 64 )
                    {
                      if ( v23 + 40 <= v24 )
                      {
                        v18 = *(_BYTE *)(v23 + v7 + 10);
                        break;
                      }
                    }
                    else if ( *(_DWORD *)(v23 + v7) == 65 )
                    {
                      if ( v23 + 56 <= v24 )
                      {
                        v18 = *(_BYTE *)(v23 + v7 + 10);
                        v19 = 1;
                      }
                    }
                    else if ( *(_DWORD *)(v23 + v7) == 66 && v23 + 40 <= v24 )
                    {
                      break;
                    }
                    if ( v19 )
                      break;
                  }
                }
                ++v21;
                ++v22;
              }
              while ( v21 < v20 );
            }
          }
        }
        else
        {
          v18 = *(_BYTE *)(v7 + 10);
        }
        v37 = v18;
      }
      v6 = 0LL;
    }
    if ( byte_1401694F3 < 0 )
    {
      v25 = 1024;
      if ( v5 < 0x400 )
        v25 = v5;
      if ( v6 )
      {
        v2 = *(_DWORD *)(v6 + 16);
        v26 = *(_QWORD *)(v6 + 4);
      }
      else
      {
        LOBYTE(v26) = 0;
      }
      v29 = v25;
      v28 = v9;
      LOBYTE(v28) = BYTE1(v30);
      return sub_1400A70A4(
               v28,
               *(unsigned __int8 *)(v34 + 3368),
               v35 + 728,
               *(_QWORD *)(*(_QWORD *)(v34 + 24) + 4720LL),
               *(_DWORD *)(*(_QWORD *)(v34 + 24) + 56LL),
               *(_QWORD *)(v34 + 24) + 5064LL,
               result,
               SBYTE1(v30),
               SBYTE2(v30),
               v34 + 2104,
               v34 + 168,
               v34 + 177,
               v34 + 242,
               *(_BYTE *)(v34 + 506) & 1,
               v9,
               v37,
               v32,
               v10,
               a2,
               v7,
               v2,
               v26,
               v31,
               *(_BYTE *)(v34 + 3368),
               *(_DWORD *)(v34 + 504),
               v29,
               v33);
    }
  }
  return result;
}
