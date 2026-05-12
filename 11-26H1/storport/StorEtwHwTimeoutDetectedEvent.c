/*
 * XREFs of StorEtwHwTimeoutDetectedEvent @ 0x14004F8BC
 * Callers:
 *     StorTickEventQueue @ 0x1400341D0 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0zqjuuujssstqqbr12qtpdiqtdqbr22_EtwWriteTransfer @ 0x1400B055C (McTemplateK0zqjuuujssstqqbr12qtpdiqtdqbr22_EtwWriteTransfer.c)
 */

void __fastcall StorEtwHwTimeoutDetectedEvent(__int64 a1, char a2)
{
  __int64 v2; // rbp
  int v3; // r15d
  unsigned int v4; // esi
  __int64 v5; // r12
  __int64 v6; // r13
  char v7; // r10
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  char v13; // bl
  unsigned int v14; // edi
  unsigned int v15; // r11d
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // r8
  int v19; // edx
  int v20; // edx
  unsigned __int8 v21; // r9
  char v22; // bl
  unsigned int v23; // edi
  unsigned int i; // r11d
  __int64 v25; // rdx
  unsigned __int64 v26; // r10
  __int64 v27; // r8
  int v28; // edx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // r12
  int v34; // ecx
  int v35; // [rsp+C8h] [rbp-90h]
  int v36; // [rsp+E8h] [rbp-70h]
  __int64 v37; // [rsp+F0h] [rbp-68h]
  __int64 v38; // [rsp+F8h] [rbp-60h]
  int v39; // [rsp+160h] [rbp+8h]
  int v41; // [rsp+170h] [rbp+18h]
  int v42; // [rsp+178h] [rbp+20h]

  v39 = a1;
  v2 = *(_QWORD *)(a1 + 224);
  LOBYTE(v3) = 0;
  v37 = 0LL;
  v4 = 0;
  v41 = 0;
  v5 = 0LL;
  v38 = 0LL;
  if ( v2 )
  {
    v6 = *(_QWORD *)(a1 + 168);
    v7 = *(_BYTE *)(v6 + 2);
    if ( v7 == 40 )
      v8 = *(_DWORD *)(v6 + 20);
    else
      v8 = *(unsigned __int8 *)(v6 + 2);
    v9 = *(_DWORD *)(v2 + 104);
    v10 = 40LL;
    v42 = v8;
    if ( v7 != 40 )
      v10 = 20LL;
    v11 = 64LL;
    v36 = *(_DWORD *)(v10 + v6);
    if ( v8 )
    {
      if ( v7 != 40 )
        v11 = 24LL;
      v30 = 60LL;
      v31 = *(_QWORD *)(v11 + v6);
      if ( v7 != 40 )
        v30 = 16LL;
      v38 = *(_QWORD *)(v11 + v6);
      v4 = *(_DWORD *)(v30 + v6);
      if ( !v31 && v4 )
        v4 = 0;
      if ( v8 == 2 && v31 && v4 >= 0x1C )
        v5 = *(_QWORD *)(v11 + v6);
    }
    else
    {
      if ( v7 != 40 )
      {
        v12 = v6 + 72;
        goto LABEL_31;
      }
      v12 = 0LL;
      v13 = 0;
      v37 = 0LL;
      if ( !*(_DWORD *)(v6 + 20) )
      {
        v14 = *(_DWORD *)(v6 + 56);
        v15 = 0;
        if ( v14 )
        {
          while ( 1 )
          {
            v16 = *(unsigned int *)(v6 + 4LL * v15 + 120);
            if ( (unsigned int)v16 >= 0x80 )
            {
              v17 = *(unsigned int *)(v6 + 16);
              if ( (unsigned int)v16 < (unsigned int)v17 )
                break;
            }
LABEL_26:
            if ( ++v15 >= v14 )
              goto LABEL_27;
          }
          v18 = (unsigned int)v16;
          v19 = *(_DWORD *)(v16 + v6) - 64;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              if ( v20 == 1 && v18 + 40 <= v17 )
              {
                v12 = v18 + v6 + 32;
                if ( !*(_DWORD *)(v18 + v6 + 12) )
                  v12 = v37;
                goto LABEL_31;
              }
            }
            else if ( v18 + 56 <= v17 )
            {
              v13 = 1;
              if ( !*(_BYTE *)(v18 + v6 + 10) )
                goto LABEL_27;
              v12 = v18 + v6 + 24;
              v37 = v12;
              goto LABEL_25;
            }
          }
          else if ( v18 + 40 <= v17 )
          {
            if ( !*(_BYTE *)(v18 + v6 + 10) )
            {
LABEL_27:
              v12 = v37;
              goto LABEL_32;
            }
            v12 = v18 + v6 + 24;
LABEL_31:
            v37 = v12;
            goto LABEL_32;
          }
          v12 = v37;
LABEL_25:
          if ( v13 )
            goto LABEL_32;
          goto LABEL_26;
        }
      }
LABEL_32:
      if ( v12 )
      {
        v21 = 0;
        if ( v7 == 40 )
        {
          v22 = 0;
          if ( !*(_DWORD *)(v6 + 20) )
          {
            v23 = *(_DWORD *)(v6 + 56);
            for ( i = 0; i < v23; ++i )
            {
              v25 = *(unsigned int *)(v6 + 4LL * i + 120);
              if ( (unsigned int)v25 >= 0x80 )
              {
                v26 = *(unsigned int *)(v6 + 16);
                if ( (unsigned int)v25 < (unsigned int)v26 )
                {
                  v27 = (unsigned int)v25;
                  v28 = *(_DWORD *)(v25 + v6) - 64;
                  if ( v28 )
                  {
                    v29 = v28 - 1;
                    if ( v29 )
                    {
                      if ( v29 == 1 && v27 + 40 <= v26 )
                        break;
                    }
                    else if ( v27 + 56 <= v26 )
                    {
                      v21 = *(_BYTE *)(v27 + v6 + 10);
                      v22 = 1;
                    }
                  }
                  else if ( v27 + 40 <= v26 )
                  {
                    v21 = *(_BYTE *)(v27 + v6 + 10);
                    break;
                  }
                  if ( v22 )
                    break;
                }
              }
            }
          }
        }
        else
        {
          v21 = *(_BYTE *)(v6 + 10);
        }
        v41 = v21;
      }
    }
    if ( byte_140173443 < 0 )
    {
      v32 = 1024;
      if ( v4 < 0x400 )
        v32 = v4;
      if ( v5 )
      {
        v3 = *(_DWORD *)(v5 + 16);
        v33 = *(_QWORD *)(v5 + 4);
      }
      else
      {
        LOBYTE(v33) = 0;
      }
      v35 = v32;
      v34 = v42;
      LOBYTE(v34) = BYTE1(v9);
      McTemplateK0zqjuuujssstqqbr12qtpdiqtdqbr22_EtwWriteTransfer(
        v34,
        *(unsigned __int8 *)(v2 + 3368),
        v39 + 728,
        *(_QWORD *)(*(_QWORD *)(v2 + 24) + 4784LL),
        *(_DWORD *)(*(_QWORD *)(v2 + 24) + 56LL),
        *(_QWORD *)(v2 + 24) + 5128LL,
        v9,
        SBYTE1(v9),
        SBYTE2(v9),
        v2 + 2104,
        v2 + 168,
        v2 + 177,
        v2 + 242,
        *(_BYTE *)(v2 + 506) & 1,
        v42,
        v41,
        v37,
        v36,
        a2,
        v6,
        v3,
        v33,
        *(_DWORD *)(v2 + 2264),
        *(_BYTE *)(v2 + 3368),
        *(_DWORD *)(v2 + 504),
        v35,
        v38);
    }
  }
}
