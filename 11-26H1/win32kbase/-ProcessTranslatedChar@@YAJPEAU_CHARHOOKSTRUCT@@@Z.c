/*
 * XREFs of ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x1400BE710
 * Callers:
 *     <none>
 * Callees:
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x1400BE794 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     ImInspectChar @ 0x1400BE808 (ImInspectChar.c)
 */

__int64 __fastcall ProcessTranslatedChar(struct _CHARHOOKSTRUCT *a1)
{
  __int16 v2; // r10
  __int16 v3; // r8
  __int16 v4; // cx
  __int64 v5; // r8
  __int16 v6; // dx
  __int64 v7; // rcx
  __int16 v8; // r9
  __int64 v9; // rdx

  Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck();
  v2 = *((_WORD *)a1 + 9);
  v3 = v2 & 2 | 4;
  if ( (v2 & 4) == 0 )
    v3 = v2 & 2;
  v4 = v3 | 0x10;
  if ( (v2 & 0x10) == 0 )
    v4 = v3;
  v5 = *((unsigned int *)a1 + 5);
  v6 = v4 | 8;
  if ( (v2 & 8) == 0 )
    v6 = v4;
  v7 = *(_QWORD *)a1;
  v8 = v6 | 0x20;
  if ( (v2 & 0x20) == 0 )
    v8 = v6;
  v9 = *((_QWORD *)a1 + 3);
  *((_WORD *)a1 + 9) = v8;
  return ImInspectChar(v7, v9, v5);
}
