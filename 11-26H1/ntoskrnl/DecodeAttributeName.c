/*
 * XREFs of DecodeAttributeName @ 0x140A714FC
 * Callers:
 *     GetAttributeName @ 0x140A7118C (GetAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x140B56E2C (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     GetDigitFromChar2 @ 0x14081EBFC (GetDigitFromChar2.c)
 *     IsEncodedAttributeChar @ 0x14081EEA4 (IsEncodedAttributeChar.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 */

__int64 __fastcall DecodeAttributeName(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // r15d
  PVOID v7; // r12
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned int v12; // edx
  int i; // r8d
  unsigned int v14; // r8d
  wint_t v15; // r13
  wint_t v16; // ax
  unsigned __int8 v18; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v19[3]; // [rsp+21h] [rbp-1Fh] BYREF
  unsigned int v20; // [rsp+24h] [rbp-1Ch]
  int v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+2Ch] [rbp-14h]
  __int64 v23; // [rsp+30h] [rbp-10h]
  unsigned __int8 v24; // [rsp+80h] [rbp+40h] BYREF
  _QWORD *v25; // [rsp+90h] [rbp+50h]
  unsigned __int8 v26; // [rsp+98h] [rbp+58h] BYREF

  v25 = a3;
  v3 = 0;
  v20 = 0;
  v24 = 0;
  v26 = 0;
  v18 = 0;
  v19[0] = 0;
  if ( !a1 || !a2 || !a3 )
    return 87LL;
  if ( (a2 & 1) != 0 )
  {
    return 1336;
  }
  else
  {
    v6 = 2;
    v7 = SddlpAlloc(a2 + 2LL);
    if ( v7 )
    {
      v8 = 0;
      v9 = a2 >> 1;
      v10 = 1LL;
      v11 = 4;
      v23 = v9;
      v12 = 0;
      for ( i = 3; ; ++i )
      {
        v21 = v10;
        v22 = i;
        if ( v8 >= (unsigned int)v9 )
          break;
        if ( *(_WORD *)(a1 + 2LL * v8) == 37 )
        {
          if ( v11 >= (unsigned int)v9
            || !GetDigitFromChar2(*(_WORD *)(a1 + 2 * v10), &v24)
            || !GetDigitFromChar2(*(_WORD *)(a1 + 2LL * v6), &v26)
            || !GetDigitFromChar2(*(_WORD *)(a1 + 2LL * v14), &v18)
            || !GetDigitFromChar2(*(_WORD *)(a1 + 2LL * v11), v19)
            || (v15 = v19[0] | (unsigned __int16)(16
                                                * (v18 | (unsigned __int16)(16 * (v26 | (unsigned __int16)(16 * v24))))),
                !IsEncodedAttributeChar(v15)) )
          {
            v3 = 1336;
            SddlpFree(v7);
            return v3;
          }
          v8 += 4;
          i = v22 + 4;
          v12 = v20;
          LODWORD(v10) = v21 + 4;
          v6 += 4;
          v9 = v20;
          v11 += 4;
          v16 = v15;
        }
        else
        {
          v9 = v12;
          v16 = *(_WORD *)(a1 + 2LL * v8);
        }
        ++v8;
        *((_WORD *)v7 + v9) = v16;
        LODWORD(v9) = v23;
        v10 = (unsigned int)(v10 + 1);
        ++v6;
        ++v11;
        v20 = ++v12;
      }
      *v25 = v7;
    }
    else
    {
      return 8;
    }
  }
  return v3;
}
