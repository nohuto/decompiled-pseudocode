/*
 * XREFs of RtlpFilterSacl @ 0x1408F4650
 * Callers:
 *     SeQuerySecurityDescriptorInfo @ 0x1408F4190 (SeQuerySecurityDescriptorInfo.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall RtlpFilterSacl(__int64 *a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  unsigned __int16 *v4; // rbx
  unsigned int v6; // esi
  int v7; // r10d
  unsigned __int8 *v10; // r11
  __int64 i; // rdx
  int v12; // eax
  bool v13; // zf
  __int64 result; // rax
  char *v15; // rbp
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // eax

  v4 = (unsigned __int16 *)(a1 + 1);
  v6 = 0;
  v7 = 8;
  v10 = (unsigned __int8 *)(a1 + 1);
  if ( *((_WORD *)a1 + 2) )
  {
    for ( i = *((unsigned __int16 *)a1 + 2); i; --i )
    {
      v12 = *v10;
      if ( v12 == 17 )
      {
        v13 = (a4 & 0x10) == 0;
      }
      else
      {
        if ( v12 != 16 )
        {
          switch ( *v10 )
          {
            case 2u:
            case 3u:
            case 7u:
            case 8u:
            case 0xDu:
            case 0xEu:
            case 0xFu:
              goto LABEL_15;
            case 0x12u:
              v13 = (a4 & 0x20) == 0;
              goto LABEL_5;
            case 0x13u:
              if ( (a4 & 0x40) != 0 )
                goto LABEL_6;
              break;
            case 0x14u:
              if ( (a4 & 0x80u) != 0 )
                goto LABEL_6;
              break;
            case 0x15u:
              if ( (a4 & 0x100) != 0 )
                goto LABEL_6;
              break;
            default:
              if ( (a4 & 8) != 0 )
                goto LABEL_6;
              break;
          }
          goto LABEL_7;
        }
LABEL_15:
        v13 = (a4 & 8) == 0;
      }
LABEL_5:
      if ( !v13 )
LABEL_6:
        v7 += *((unsigned __int16 *)v10 + 1);
LABEL_7:
      v10 += *((unsigned __int16 *)v10 + 1);
    }
  }
  result = (v7 + 3) & 0xFFFFFFFC;
  if ( *a3 >= (unsigned int)result )
  {
    result = *a1;
    *(_QWORD *)a2 = *a1;
    *(_DWORD *)(a2 + 2) = 8;
    v15 = (char *)(a2 + 8);
    if ( *((_WORD *)a1 + 2) )
    {
      do
      {
        v16 = *(unsigned __int8 *)v4;
        if ( v16 == 17 )
        {
          v17 = (a4 & 0x10) == 0;
        }
        else
        {
          if ( v16 != 16 )
          {
            switch ( *(_BYTE *)v4 )
            {
              case 2:
              case 3:
              case 7:
              case 8:
              case 0xD:
              case 0xE:
              case 0xF:
                break;
              case 0x12:
                v17 = (a4 & 0x20) == 0;
                goto LABEL_17;
              case 0x13:
                v18 = a4 >> 6;
                goto LABEL_26;
              case 0x14:
                v18 = a4 >> 7;
                goto LABEL_26;
              case 0x15:
                v18 = a4 >> 8;
LABEL_26:
                v17 = (v18 & 1) == 0;
                goto LABEL_17;
              default:
                if ( (a4 & 8) != 0 )
                  goto LABEL_18;
                goto LABEL_19;
            }
          }
          v17 = (a4 & 8) == 0;
        }
LABEL_17:
        if ( !v17 )
        {
LABEL_18:
          memmove(v15, v4, v4[1]);
          ++*(_WORD *)(a2 + 4);
          *(_WORD *)(a2 + 2) += v4[1];
          v15 += v4[1];
        }
LABEL_19:
        ++v6;
        v4 = (unsigned __int16 *)((char *)v4 + v4[1]);
        result = *((unsigned __int16 *)a1 + 2);
      }
      while ( v6 < (unsigned int)result );
    }
  }
  else
  {
    *a3 = result;
  }
  return result;
}
