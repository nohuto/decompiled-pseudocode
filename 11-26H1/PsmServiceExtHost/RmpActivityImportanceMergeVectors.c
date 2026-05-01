/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x18000B490
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  __int16 v2; // ax
  __int16 v3; // bx
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // r8
  __int16 v7; // ax
  __int16 v8; // bx
  __int16 v9; // r8
  __int16 v10; // ax
  __int16 v11; // r11
  __int16 v12; // r11
  __int16 v13; // ax
  __int16 v14; // r11
  __int16 v15; // r10
  char v17; // al
  unsigned int v18; // [rsp+10h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return a1;
  v2 = (unsigned __int16)a1 >> 4;
  v3 = (unsigned __int16)a1 >> 1;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 4) & 3) <= (unsigned __int8)(((unsigned __int16)a2 >> 4) & 3) )
    v2 = (unsigned __int16)a2 >> 4;
  v4 = 8 * (v2 & 3);
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 1) & 7) <= (unsigned __int8)(((unsigned __int16)a2 >> 1) & 7) )
    v3 = (unsigned __int16)a2 >> 1;
  v5 = 2 * (v3 & 7 | v4);
  if ( (a1 & 0x40) != 0 || (v6 = 1, (a2 & 0x40) != 0) )
    v6 = 65;
  v7 = v6 | v5;
  v8 = 0;
  if ( (a1 & 0x80u) != 0 || (a2 & 0x80u) != 0 )
    v9 = 128;
  else
    v9 = 0;
  v10 = v9 | v7;
  v11 = 256;
  if ( (a1 & 0x100) == 0 && (a2 & 0x100) == 0 )
    v11 = 0;
  v12 = v10 | v11;
  v13 = 512;
  if ( (a1 & 0x200) == 0 && (a2 & 0x200) == 0 )
    v13 = 0;
  v14 = v13 | v12;
  if ( (a1 & 0x400) != 0 || (a2 & 0x400) != 0 )
    v8 = 1024;
  v15 = (unsigned __int16)a1 >> 11;
  if ( (unsigned __int8)((a1 & 0x800) != 0) >= (unsigned __int8)((a2 & 0x800) != 0) )
    v15 = (unsigned __int16)a2 >> 11;
  LOWORD(v18) = v8 | v14 | ((v15 & 1) << 11);
  if ( HIBYTE(a1) > HIBYTE(a2) )
  {
    BYTE2(v18) = BYTE2(a1);
    HIBYTE(v18) = HIBYTE(a1);
    return v18;
  }
  if ( HIBYTE(a1) >= HIBYTE(a2) )
  {
    HIBYTE(v18) = HIBYTE(a1);
    v17 = BYTE2(a2);
    if ( BYTE2(a1) > BYTE2(a2) )
      v17 = BYTE2(a1);
    BYTE2(v18) = v17;
    return v18;
  }
  BYTE2(v18) = BYTE2(a2);
  HIBYTE(v18) = HIBYTE(a2);
  return v18;
}
