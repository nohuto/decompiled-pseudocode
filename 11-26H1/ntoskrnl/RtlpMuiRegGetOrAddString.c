/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x1408AF03C
 * Callers:
 *     RtlpLoadPolicyLanguageSpec @ 0x1408ADFF8 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1408AED58 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1408AEF70 (RtlpMuiRegGetLanguageSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x1408AFB18 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408B0A68 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x140B2FD94 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1408AF17C (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegResizeStringPool @ 0x1408AF658 (RtlpMuiRegResizeStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4)
{
  __int16 v4; // bp
  char v6; // r14
  int v9; // esi
  unsigned __int16 *v10; // r10
  int v11; // edx
  unsigned int v12; // r11d
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  __int64 v16; // r8
  __int64 result; // rax
  int v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  v18 = 0;
  v6 = a3;
  if ( a1 && a2 && *a2 )
  {
    v9 = *(_DWORD *)a1 & 2;
    if ( !(_BYTE)a3 || (LOBYTE(a3) = 1, !v9) )
      LOBYTE(a3) = 0;
    v4 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a2, a3, &v18);
    if ( v4 >= 0 )
    {
LABEL_22:
      result = 0LL;
      goto LABEL_24;
    }
    if ( v6 )
    {
      v10 = *(unsigned __int16 **)(a1 + 32);
      v11 = v18;
      if ( !v10 )
        goto LABEL_21;
      v12 = v10[2];
      if ( v18 < 0 )
        v11 = 16;
      v13 = v11 + v10[5];
      v14 = v10[2];
      if ( (unsigned int)v10[3] + 1 >= v12 )
        v14 = v10[3] + 1;
      v15 = v10[4];
      v16 = v10[4];
      if ( v13 >= v15 )
        v16 = (unsigned int)v13;
      if ( (!v9 || v14 != v12 || (_DWORD)v16 != v15)
        && (v10 = (unsigned __int16 *)RtlpMuiRegResizeStringPool(*(PVOID *)(a1 + 32))) == 0LL
        || (*(_DWORD *)a1 |= 2u,
            LOBYTE(v16) = 1,
            *(_QWORD *)(a1 + 32) = v10,
            v4 = RtlpMuiRegGetOrAddStringToPool(v10, a2, v16, 0LL),
            v4 < 0) )
      {
LABEL_21:
        result = 3221225495LL;
        goto LABEL_24;
      }
      goto LABEL_22;
    }
  }
  result = 3221225485LL;
LABEL_24:
  if ( a4 )
    *a4 = v4;
  return result;
}
