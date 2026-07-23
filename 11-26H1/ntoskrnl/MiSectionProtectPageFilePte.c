/*
 * XREFs of MiSectionProtectPageFilePte @ 0x1402B16A8
 * Callers:
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 * Callees:
 *     MiSectionProtectZeroPte @ 0x1402B1808 (MiSectionProtectZeroPte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiSanitizePfnProtection @ 0x14033EED0 (MiSanitizePfnProtection.c)
 *     MiDecreaseUsedPtes @ 0x1403410A0 (MiDecreaseUsedPtes.c)
 */

unsigned __int64 __fastcall MiSectionProtectPageFilePte(__int64 *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  char v3; // di
  unsigned __int64 v4; // rbx
  __int64 *v6; // rsi
  unsigned __int64 result; // rax
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // [rsp+30h] [rbp+8h]

  v3 = 0;
  v4 = a3;
  v6 = a1;
  if ( !*((_DWORD *)a1 + 17) )
    goto LABEL_2;
  if ( !a3 )
    goto LABEL_3;
  v9 = *a1;
  v3 = 1;
  v14 = a3;
  if ( (a3 & 0x400) == 0 )
  {
    v10 = a3;
    v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    LOBYTE(a1) = (unsigned __int8)a3 >> 3;
    if ( (a3 & 8) == 0 )
    {
      v12 = (a3 & 4) == 0;
      v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( !v12 )
        v13 = v14;
      v10 = v13;
    }
    if ( !v10 )
      goto LABEL_12;
    MiReleasePageFileInfo(v9, v10, 1LL);
  }
  v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
LABEL_12:
  if ( (v4 & 1) != 0 )
    goto LABEL_22;
  if ( qword_140E2D8C0 && (v4 & 0x10) == 0 )
    LOWORD(v4) = qword_140E2D8C8 & v4;
  if ( (v4 & 0x400) != 0 || (v4 & 0x800) != 0 || (v4 & 8) != 0 )
  {
LABEL_22:
    _InterlockedDecrement64((volatile signed __int64 *)(v6[1] + 648));
    v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  *a2 = v11;
  MiDecreaseUsedPtes(a1, (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, v9);
  v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
LABEL_2:
  if ( !v4 )
  {
LABEL_3:
    LOBYTE(a3) = v3;
    return MiSectionProtectZeroPte(v6, a2, a3);
  }
  v8 = MiSanitizePfnProtection(v6[4], (v4 >> 5) & 0x1F, *((unsigned int *)v6 + 15));
  result = (32LL * v8) ^ (v4 ^ (32LL * v8)) & 0xFFFFFFFFFFFFFC1FuLL;
  *a2 = result;
  return result;
}
