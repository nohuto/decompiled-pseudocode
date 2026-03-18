/*
 * XREFs of ACPIAmliEvaluatePcch @ 0x1400ACDE4
 * Callers:
 *     ACPIPccLegacyInitialize @ 0x1400B2490 (ACPIPccLegacyInitialize.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     AcpiTranslateAccessSize @ 0x1400ACF78 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall ACPIAmliEvaluatePcch(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v8; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  __int64 v18; // rcx
  __int64 v19; // r10
  _OWORD v21[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-18h]

  v8 = AMLIGetNamedChild(a1, 1212367696);
  if ( v8 )
  {
    v22 = 0LL;
    memset(v21, 0, sizeof(v21));
    v9 = AMLIEvalNameSpaceObject(v8, (__int64)v21, 0, 0LL);
    if ( v9 >= 0 )
    {
      if ( WORD1(v21[0]) != 4 )
        goto LABEL_16;
      v12 = v22;
      if ( *(_DWORD *)v22 != 4 )
        goto LABEL_16;
      if ( *(_WORD *)(v22 + 10) != 3 )
        goto LABEL_16;
      if ( *(_DWORD *)(v22 + 32) < 0x2Eu )
        goto LABEL_16;
      v13 = *(_QWORD *)(v22 + 40);
      if ( *(_BYTE *)v13 != 0x8A )
        goto LABEL_16;
      v14 = *(_WORD *)(v22 + 50) == 3;
      v15 = *(_DWORD *)(v13 + 40);
      v16 = *(_OWORD *)(v13 + 16);
      *(_OWORD *)a2 = *(_OWORD *)v13;
      v17 = *(_QWORD *)(v13 + 32);
      *(_OWORD *)(a2 + 16) = v16;
      *(_QWORD *)(a2 + 32) = v17;
      *(_DWORD *)(a2 + 40) = v15;
      *(_WORD *)(a2 + 44) = *(_WORD *)(v13 + 44);
      if ( !v14 )
        goto LABEL_16;
      if ( *(_DWORD *)(v12 + 72) < 0xCu )
        goto LABEL_16;
      v18 = *(_QWORD *)(v12 + 80);
      if ( *(_BYTE *)v18 != 0x82 )
        goto LABEL_16;
      if ( *(_WORD *)(v18 + 1) != 12 )
        goto LABEL_16;
      *(_BYTE *)a3 = *(_BYTE *)(v18 + 3);
      *(_BYTE *)(a3 + 1) = *(_BYTE *)(v18 + 4);
      *(_BYTE *)(a3 + 2) = *(_BYTE *)(v18 + 5);
      *(_QWORD *)(a3 + 4) = *(_QWORD *)(v18 + 7);
      LOBYTE(v11) = *(_BYTE *)(v18 + 5);
      LOBYTE(v10) = *(_BYTE *)(v18 + 4);
      LOBYTE(v18) = *(_BYTE *)(v18 + 6);
      v9 = 0;
      *(_BYTE *)(a3 + 3) = AcpiTranslateAccessSize(v18, v10, v11);
      if ( *(_WORD *)(v19 + 90) != 1 )
        goto LABEL_16;
      *a4 = *(_QWORD *)(v19 + 104);
      if ( *(_WORD *)(v19 + 130) == 1 )
        *a5 = *(_QWORD *)(v19 + 144);
      else
LABEL_16:
        v9 = -1072431096;
      AMLIFreeDataBuffs((__int64)v21);
    }
    AMLIDereferenceHandleEx((__int64)v8);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
