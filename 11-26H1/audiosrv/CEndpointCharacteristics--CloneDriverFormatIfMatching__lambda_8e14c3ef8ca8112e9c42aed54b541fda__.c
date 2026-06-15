/*
 * XREFs of CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x18013275C
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180035C60 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x1800333A0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
        __int64 a1,
        CConnectorProcessingModeCharacteristics ***a2,
        unsigned int *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  struct tWAVEFORMATEX *v11; // rdi
  int v12; // edx
  __int64 v13; // xmm0_8
  bool v15; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+28h] [rbp-28h] BYREF
  __int16 v17; // [rsp+38h] [rbp-18h]

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
          v11 = (struct tWAVEFORMATEX *)(a3 + 16);
          v17 = 0;
          v16 = 0LL;
          if ( v10 == 14 )
          {
            v12 = *((unsigned __int16 *)a3 + 38);
            v13 = *(_QWORD *)&v11->wFormatTag;
            v11 = (struct tWAVEFORMATEX *)&v16;
            DWORD2(v16) = a3[18];
            WORD6(v16) = v12;
            *(_QWORD *)&v16 = v13;
            v17 = 0;
            v10 = 18LL;
            HIWORD(v16) = 8 * v12 / (unsigned int)WORD1(v13);
          }
          if ( v10 >= (unsigned __int64)v11->cbSize + 18 )
          {
            v15 = 0;
            lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(a2, &v11->wFormatTag, &v15);
            if ( v15 )
              return (unsigned int)CloneWaveFormat(v11, a4);
          }
        }
      }
    }
  }
  return v5;
}
