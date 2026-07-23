/*
 * XREFs of MiValidateSectionCreate @ 0x14099C8D4
 * Callers:
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MiValidateSectionSigningPolicy @ 0x14099C76C (MiValidateSectionSigningPolicy.c)
 *     MiMapImageForEnclaveUse @ 0x140B61ED8 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiWriteSegmentSignatureFlags @ 0x1404CE234 (MiWriteSegmentSignatureFlags.c)
 *     MiValidateSectionRetry @ 0x1404E1FB4 (MiValidateSectionRetry.c)
 *     MiStrongCodeImage @ 0x140521118 (MiStrongCodeImage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiValidateSectionUnmap @ 0x1408817F8 (MiValidateSectionUnmap.c)
 *     MiValidateSectionMap @ 0x14099CAFC (MiValidateSectionMap.c)
 *     MiValidateImageHeader @ 0x14099CC04 (MiValidateImageHeader.c)
 *     MiValidateSectionRevertRelocations @ 0x14099E24C (MiValidateSectionRevertRelocations.c)
 *     MiValidateSectionNewSecurity @ 0x140AC9C64 (MiValidateSectionNewSecurity.c)
 *     MiValidateSectionUpdate @ 0x140AFE1A8 (MiValidateSectionUpdate.c)
 *     MiValidateSectionPrepare @ 0x140B05814 (MiValidateSectionPrepare.c)
 */

__int64 __fastcall MiValidateSectionCreate(__int64 a1, __int64 *a2, int a3, __int64 a4, int a5, char a6, char a7)
{
  __int64 result; // rax
  signed int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  void *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD v21[3]; // [rsp+28h] [rbp-31h] BYREF
  int v22; // [rsp+40h] [rbp-19h]
  int v23; // [rsp+44h] [rbp-15h]
  char v24; // [rsp+48h] [rbp-11h]
  char v25; // [rsp+49h] [rbp-10h]
  char v26; // [rsp+4Bh] [rbp-Eh]
  char v27; // [rsp+4Ch] [rbp-Dh]
  int v28; // [rsp+54h] [rbp-5h]
  char v29; // [rsp+58h] [rbp-1h]
  int v30; // [rsp+60h] [rbp+7h]
  void *v31; // [rsp+68h] [rbp+Fh]
  int v32; // [rsp+70h] [rbp+17h]
  __int64 v33; // [rsp+78h] [rbp+1Fh]
  __int64 v34; // [rsp+80h] [rbp+27h]
  __int64 v35; // [rsp+88h] [rbp+2Fh]
  int v36; // [rsp+90h] [rbp+37h]

  memset_0(v21, 0, 0x70uLL);
  v23 = a5;
  v24 = a6;
  v25 = a7;
  v21[0] = a1;
  v21[1] = a2;
  v22 = a3;
  v21[2] = a4;
  result = MiValidateSectionPrepare(v21);
  if ( (int)result >= 0 )
  {
    while ( 1 )
    {
      result = MiValidateSectionMap(v21);
      v12 = result;
      if ( (int)result < 0 )
        return result;
      v13 = *(_QWORD *)(v35 + 40);
      v34 = v13;
      if ( v13 )
      {
        v20 = v13 & 3;
        if ( (v13 & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL )
        {
          v14 = 1;
          v13 &= 3u;
        }
        else
        {
          if ( (v13 & 3) != 0 )
          {
            v13 &= 0xFFFFFFFFFFFFFFFCuLL;
            v14 = (v20 != 1) + 2;
          }
          else
          {
            v14 = 4;
          }
          v13 &= ~4uLL;
        }
      }
      else
      {
        v14 = 0;
      }
      v15 = v31;
      v30 = v14;
      v36 = v32;
      v33 = v13;
      v26 = 1;
      v16 = *(_QWORD *)(v35 + 32);
      if ( v16 )
      {
        if ( *(_QWORD *)(v16 + 40) != *(_QWORD *)(v16 + 48) )
          break;
      }
      v18 = v28;
      if ( v28 != 1 )
        goto LABEL_9;
      v28 = 2;
      v18 = 2;
LABEL_10:
      v12 = MiValidateImageHeader(v21, v15);
LABEL_11:
      MiValidateSectionUnmap((__int64)v21, v15);
      if ( v12 >= 0 )
      {
        if ( !v12 && !v26 )
          return 0LL;
        result = MiValidateSectionUpdate(v21);
        if ( (int)result >= 0 )
        {
          if ( (v33 & 3) == 0 || (v12 = MiValidateSectionNewSecurity(v21), v12 >= 0) )
          {
            LOBYTE(v19) = v26 & 0xF | *(_BYTE *)(*a2 + 15) & 0x80 | (16 * (v29 & 7));
            MiWriteSegmentSignatureFlags(*a2, v19);
            if ( (v27 & 1) != 0 )
              MiStrongCodeImage((__int64)a2, 2u);
          }
          return (unsigned int)v12;
        }
        return result;
      }
      result = MiValidateSectionRetry(v21, v12, v18);
      if ( (int)result < 0 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 117;
        return result;
      }
    }
    v17 = MiValidateSectionRevertRelocations(v21);
    v18 = v28;
    v15 = (void *)v17;
    if ( !v17 )
      v12 = -1073741670;
LABEL_9:
    if ( v12 < 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  return result;
}
