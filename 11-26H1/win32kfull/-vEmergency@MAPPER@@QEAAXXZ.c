/*
 * XREFs of ?vEmergency@MAPPER@@QEAAXXZ @ 0x1400C85B0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400C8780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ulCharsetToCodePage @ 0x1401B4FA4 (ulCharsetToCodePage.c)
 */

void __fastcall MAPPER::vEmergency(MAPPER *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  int v5; // edi
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rdx
  _DWORD *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v18 = 1;
  LOBYTE(v4) = 1;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  v9 = *(_QWORD *)(v8 + 20392);
  **((_DWORD **)this + 29) = 0;
  v10 = (_DWORD *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = -1;
  *v10 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  *((_DWORD *)this + 61) &= ~0x80u;
  *((_DWORD *)this + 45) = -2;
  v11 = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
  if ( !v11 )
    goto LABEL_5;
  v6 = *(_QWORD **)(v11 + 8);
LABEL_3:
  if ( v6 )
    v7 = v6[1];
LABEL_5:
  while ( v7 )
  {
    v19 = v7;
    if ( (unsigned int)MAPPER::bNearMatch(this, (struct PFEOBJ *)&v19, &v18, 1) )
    {
      v13 = v18;
      **((_DWORD **)this + 27) = *((_DWORD *)this + 47);
      **((_QWORD **)this + 28) = *((_QWORD *)this + 24);
      **((_DWORD **)this + 29) = **((_DWORD **)this + 29) & 0xFFFFFF | (v13 << 24);
      v4 = v18;
      *((_QWORD *)this + 25) = v7;
      v14 = *(_DWORD *)(v7 + 80);
      *((_DWORD *)this + 61) &= ~0x1000000u;
      *((_DWORD *)this + 52) = v14;
      v15 = *((_DWORD *)this + 46);
      if ( !v15 )
      {
        v16 = v4;
        goto LABEL_14;
      }
      *((_DWORD *)this + 45) = v15;
    }
    v7 = 0LL;
    v6 = (_QWORD *)*v6;
    if ( v6 )
      goto LABEL_3;
    v12 = *(_QWORD *)(v11 + 48);
    v11 = v12;
    if ( v12 )
    {
      v6 = *(_QWORD **)(v12 + 8);
      goto LABEL_3;
    }
  }
  if ( !*((_QWORD *)this + 25) )
  {
    *((_QWORD *)this + 25) = *(_QWORD *)(v8 + 19688);
    v17 = *(_QWORD *)(v8 + 19688);
    if ( v17 )
      v5 = *(_DWORD *)(v17 + 80);
    *((_DWORD *)this + 52) = v5;
  }
  v16 = (unsigned __int8)v4;
LABEL_14:
  **((_DWORD **)this + 29) |= (unsigned int)ulCharsetToCodePage(v16) << 8;
}
