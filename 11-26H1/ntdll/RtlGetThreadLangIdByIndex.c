/*
 * XREFs of RtlGetThreadLangIdByIndex @ 0x18010DE90
 * Callers:
 *     <none>
 * Callees:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0 (GetLCIDFromLangListNodeWithLICCheck.c)
 */

__int64 __fastcall RtlGetThreadLangIdByIndex(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v6; // r15
  unsigned int LCIDFromLangListNodeWithLICCheck; // r10d
  unsigned __int16 v8; // r11
  unsigned int v9; // edi
  _QWORD *PreferredLanguages; // rdx
  __int64 v11; // r8
  unsigned __int16 v13[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-34h]
  unsigned int v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+3Ch] [rbp-2Ch]
  __int16 v17; // [rsp+40h] [rbp-28h]
  bool v18; // [rsp+70h] [rbp+8h] BYREF

  v6 = a2;
  LCIDFromLangListNodeWithLICCheck = 0;
  v18 = 0;
  v8 = 0;
  v13[0] = 0;
  v9 = 0;
  if ( a1 || !a3 )
    return 3221225485LL;
  PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
  if ( PreferredLanguages )
  {
    v11 = PreferredLanguages[3];
    if ( v11 )
    {
      v9 = *((unsigned __int16 *)PreferredLanguages + 2);
      v15 = v9;
      if ( (unsigned int)v6 < v9 )
      {
        v16 = *(_DWORD *)(v11 + 6 * v6);
        v17 = *(_WORD *)(v11 + 6 * v6 + 4);
        LCIDFromLangListNodeWithLICCheck = GetLCIDFromLangListNodeWithLICCheck(
                                             3 * v6,
                                             (__int64)PreferredLanguages,
                                             v6,
                                             v13,
                                             &v18);
        v14 = LCIDFromLangListNodeWithLICCheck;
        v8 = v13[0];
      }
    }
  }
  *a3 = v8;
  if ( a4 )
    *a4 = v9;
  if ( !LCIDFromLangListNodeWithLICCheck && !v8 )
    return (unsigned int)-1073741275;
  return LCIDFromLangListNodeWithLICCheck;
}
