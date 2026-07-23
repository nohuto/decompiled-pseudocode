/*
 * XREFs of RtlpMuiRegValidateConfigNode @ 0x140724CEC
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x1408AF744 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1408AE2F4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1408AEAB8 (RtlpMuiRegGetInstalledLanguageIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateConfigNode(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v3; // edx
  __int64 v5; // r8
  int InstalledLanguageIndex; // ebx
  const signed __int16 *v7; // r14
  __int16 v8; // di
  char v9; // r12
  __int16 v10; // r13
  __int16 v11; // r15
  int v12; // edx
  int v13; // r9d
  int v14; // r8d
  __int16 v15; // r8
  const signed __int16 *v17; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+A0h] [rbp+8h]
  __int16 v19; // [rsp+A8h] [rbp+10h] BYREF
  __int16 v20; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int16 v21; // [rsp+B8h] [rbp+20h]

  v18 = a1;
  v3 = a2[1];
  v19 = 0;
  v5 = *a2;
  v20 = -1;
  InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a1, v3 >> 14, v5, &v19);
  if ( InstalledLanguageIndex >= 0 )
  {
    v7 = (const signed __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v19);
    if ( _bittest16(v7, 0xCu) )
      return (unsigned int)-1073741772;
    v8 = 0;
LABEL_5:
    if ( v8 < 3 )
    {
      v9 = (a2[1] >> (2 * v8)) & 3;
      if ( v9 )
      {
        if ( v7 )
        {
          v10 = 0;
          v11 = 0;
          v12 = a2[v8 + 3];
          v21 = a2[v8 + 3];
          while ( v11 < 8 )
          {
            v17 = 0LL;
            v13 = (unsigned __int16)((unsigned __int16)v7[4] >> v11);
            LOBYTE(v13) = v13 & 3;
            v14 = (unsigned __int16)v12;
            LOBYTE(v12) = v9;
            if ( (unsigned __int8)RtlpMuiRegConfigMatchesInstalled(
                                    v18,
                                    v12,
                                    v14,
                                    v13,
                                    v7[v10 + 6],
                                    (__int64)&v17,
                                    (__int64)&v20)
              && (!v17 || !_bittest16(v17, 0xCu))
              && ((*(_BYTE *)v7 & 4) == 0 || v17) )
            {
              v15 = v20;
              v7 = v17;
              if ( v20 != -1 )
              {
                a2[1] = (2 << (2 * v8)) | a2[1] & ~(3 << (2 * v8));
                a2[v8 + 3] = v15;
              }
              ++v8;
              goto LABEL_5;
            }
            v12 = v21;
            ++v10;
            v11 += 2;
          }
        }
        return (unsigned int)-1073741772;
      }
      if ( !v8 )
        return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)InstalledLanguageIndex;
}
