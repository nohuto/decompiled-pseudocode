/*
 * XREFs of CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18013261C
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18008F3B8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 * Callees:
 *     _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x18000CEE8 (_lambda_53e50f4d36d820af02fa3fa8c2905d02_--operator().c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  const struct tWAVEFORMATEX *v11; // rdi
  int v12; // edx
  __int64 v13; // xmm0_8
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int16 v16; // [rsp+30h] [rbp-28h]

  v5 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a3 )
  {
    v7 = *((_QWORD *)a3 + 4) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v7 )
      v7 = *((_QWORD *)a3 + 5) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v7 )
      goto LABEL_10;
    v8 = *((_QWORD *)a3 + 4) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v8 )
      v8 = *((_QWORD *)a3 + 5) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v8 )
    {
LABEL_10:
      v9 = *((_QWORD *)a3 + 6) - *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
      if ( !v9 )
        v9 = *((_QWORD *)a3 + 7) - *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
      if ( !v9 && *a3 > 0x40 )
      {
        v10 = *a3 - 64LL;
        if ( *a3 == 78LL || *a3 == 82LL || *a3 == 104LL )
        {
          v11 = (const struct tWAVEFORMATEX *)(a3 + 16);
          v16 = 0;
          v15 = 0LL;
          if ( v10 == 14 )
          {
            v12 = *((unsigned __int16 *)a3 + 38);
            v13 = *(_QWORD *)&v11->wFormatTag;
            v11 = (const struct tWAVEFORMATEX *)&v15;
            DWORD2(v15) = a3[18];
            WORD6(v15) = v12;
            *(_QWORD *)&v15 = v13;
            v16 = 0;
            v10 = 18LL;
            HIWORD(v15) = 8 * v12 / (unsigned int)WORD1(v13);
          }
          if ( v10 >= (unsigned __int64)v11->cbSize + 18
            && lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()(a2, v11) )
          {
            return (unsigned int)CloneWaveFormat(v11, a4);
          }
        }
      }
    }
  }
  return v5;
}
