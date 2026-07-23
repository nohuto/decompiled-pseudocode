/*
 * XREFs of RtlpMuiRegValidateConfigNode @ 0x1800DDFF0
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x180058A90 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180051150 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DE1D8 (RtlpMuiRegConfigMatchesInstalled.c)
 */

__int64 __fastcall RtlpMuiRegValidateConfigNode(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v3; // edx
  __int64 v5; // r8
  int InstalledLanguageIndex; // ebx
  _WORD *v7; // rbp
  __int16 v8; // di
  char v9; // r12
  __int16 v10; // r13
  __int16 v11; // r15
  int v12; // edx
  int v13; // r9d
  int v14; // r8d
  __int16 v15; // r8
  int v17; // [rsp+90h] [rbp+8h]
  unsigned __int16 v18; // [rsp+98h] [rbp+10h] BYREF
  __int16 v19; // [rsp+A0h] [rbp+18h] BYREF
  _WORD *v20; // [rsp+A8h] [rbp+20h] BYREF

  v17 = a1;
  v3 = a2[1];
  v18 = 0;
  v5 = *a2;
  v19 = -1;
  InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a1, v3 >> 14, v5, &v18);
  if ( InstalledLanguageIndex >= 0 )
  {
    v7 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * (__int16)v18);
    if ( (*v7 & 0x1000) != 0 )
      return (unsigned int)-1073741772;
    v8 = 0;
LABEL_4:
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
          v18 = a2[v8 + 3];
          while ( v11 < 8 )
          {
            v20 = 0LL;
            v13 = (unsigned __int16)(v7[4] >> v11);
            LOBYTE(v13) = v13 & 3;
            v14 = (unsigned __int16)v12;
            LOBYTE(v12) = v9;
            if ( (unsigned __int8)RtlpMuiRegConfigMatchesInstalled(
                                    v17,
                                    v12,
                                    v14,
                                    v13,
                                    v7[v10 + 6],
                                    (__int64)&v20,
                                    (__int64)&v19)
              && (!v20 || (*v20 & 0x1000) == 0)
              && ((*(_BYTE *)v7 & 4) == 0 || v20) )
            {
              v15 = v19;
              v7 = v20;
              if ( v19 != -1 )
              {
                a2[1] = (2 << (2 * v8)) | a2[1] & ~(3 << (2 * v8));
                a2[v8 + 3] = v15;
              }
              ++v8;
              goto LABEL_4;
            }
            v12 = v18;
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
